%bcond_with dbus_patch_enabled

Name:       CommonAPI-DBus
Summary:    GENIVI IPC Common API C++ DBus
Version:    2.1.6
Release:    0
Group:      Automotive/GENIVI
License:    MPL-2.0
Source0:    %{name}-%{version}.tar.gz
BuildRequires: pkgconfig
BuildRequires: pkgconfig(CommonAPI)
BuildRequires: pkgconfig(dbus-1)
BuildRequires: pkgconfig(glib-2.0)
Requires(post):   /sbin/ldconfig
Requires(postun): /sbin/ldconfig

%description
GENIVI IPC Common API C++ DBus components

%package -n libCommonAPI-DBus
Summary:    CommonAPI C++ DBus libraries

%description -n libCommonAPI-DBus
GENIVI IPC CommonAPI C++ DBus libraries

%package devel
Summary:    CommonAPI C++ DBus devel package
Requires:   libCommonAPI-DBus = %{version}-%{release}

%description devel
Files needed to build against CommonAPI.

%prep
%setup -q

%build
autoreconf -i
%configure \
%if %{with dbus_patch_enabled}
    CXXFLAGS=-DDBUS_PATCH_ENABLED
%endif

%__make %{?_smp_mflags}

%install
%make_install

%post -n libCommonAPI-DBus -p /sbin/ldconfig

%postun -n libCommonAPI-DBus -p /sbin/ldconfig

%files -n libCommonAPI-DBus
%defattr(-,root,root,-)
%{_libdir}/*so.*
%license LICENSE
%license LICENSE_MurmurHash
%license LICENSE_pugixml

%files devel
%defattr(-,root,root,-)
%license LICENSE
%license LICENSE_pugixml
%{_includedir}/CommonAPI-2.1/CommonAPI/*
%{_includedir}/CommonAPI-2.1/pugixml/*
%{_libdir}/*.so
%{_libdir}/pkgconfig/*.pc
