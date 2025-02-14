# Feel free to disable non-critical HA parts during devel by commenting lines out
# Generated in hadk by executing: rpm/dhd/helpers/add_new_device.sh

%package -n patterns-sailfish-device-configuration-a5y17lte
Summary: Jolla Configuration a5y17lte
Requires: patterns-sailfish-device-configuration-common-a5y17lte
Requires: patterns-sailfish-device-adaptation-a5y17lte

# For devices with cellular modem. Those without one, please comment out:
Requires: patterns-sailfish-cellular-apps

# Early stages of porting benefit from these:
Requires: patterns-sailfish-device-tools

Requires: sailfish-content-graphics-z%{icon_res}

# For multi-SIM devices
Requires: jolla-settings-networking-multisim

# For devices which support NFC
Requires: jolla-settings-system-nfc
Requires: nfcd-dbuslog-plugin
Requires: nfcd-mce-plugin

# Introduced starting Sailfish OS 2.0.4.x:
# 3rd party accounts like Twitter, VK, cloud services, etc
Requires: jolla-settings-accounts-extensions-3rd-party-all

# Introduced starting Sailfish OS 2.1.1.26
# Required for Jolla Store Access
Requires: patterns-sailfish-consumer-generic

# For Mozilla location services (online)
Requires: geoclue-provider-mlsdb

# Devices with 2G or more memory should also include this booster
# to improve camera startup times and the like
Requires: mapplauncherd-booster-silica-qt5-media

# Sailfish OS CSD tool for hardware testing
Requires: csd
Requires: jolla-settings-system-flashlight
Requires: gnu-bash

# Add pre-installed some jolla/sailfish apps
Requires: sailfish-office
Requires: jolla-calculator
Requires: jolla-email
Requires: jolla-notes
Requires: jolla-clock
Requires: jolla-mediaplayer
Requires: jolla-calendar
Requires: sailfish-weather
Requires: sailfish-utilities
Requires: sailfish-audiorecorder
Requires: jolla-settings-networking-plugin-vpn-openfortivpn

%description -n patterns-sailfish-device-configuration-a5y17lte
Pattern with packages for a5y17lte configurations

%files -n patterns-sailfish-device-configuration-a5y17lte
