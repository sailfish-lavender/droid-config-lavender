# Feel free to disable non-critical HA parts during devel by commenting lines out
# Generated in hadk by executing: rpm/dhd/helpers/add_new_device.sh

%package -n patterns-sailfish-device-adaptation-lavender
Summary: Jolla HW Adaptation lavender
Requires: droid-hal-lavender
Requires: droid-hal-lavender-detritus
Requires: droid-hal-lavender-img-boot
Requires: droid-hal-lavender-kernel-modules
Requires: droid-config-lavender-sailfish
Requires: droid-config-lavender-pulseaudio-settings
Requires: droid-config-lavender-policy-settings
Requires: droid-config-lavender-preinit-plugin
Requires: droid-config-lavender-flashing
Requires: droid-config-lavender-bluez5
Requires: droid-hal-version-lavender

# Hybris packages
Requires: libhybris-libEGL
Requires: libhybris-libGLESv2
Requires: libhybris-libwayland-egl

# Bluetooth
# Requires: bluebinder

# Sensors
Requires: hybris-libsensorfw-qt5

# Vibra
Requires: ngfd-plugin-native-vibrator
Requires: libngf-qt5-qtfeedback

# Needed for /dev/touchscreen symlink
Requires: qt5-plugin-generic-evdev

Requires: pulseaudio-modules-droid
Requires: pulseaudio-modules-droid-hidl

# The -dummy-af is needed for newer devices that run the main
# audiosystem-passthrough in qti mode (e.g. >=Android 9 Qualcomm),
# to fix non-responding Camera app and/or voice during a phone call:
Requires: audiosystem-passthrough-dummy-af

# for audio recording to work:
Requires: qt5-qtmultimedia-plugin-mediaservice-gstmediacapture

# These need to be per-device due to differing backends (fbdev, eglfs, hwc, ..?)
Requires: qt5-qtwayland-wayland_egl
Requires: qt5-qpa-hwcomposer-plugin
Requires: qtscenegraph-adaptation

# For hybris devices with droidmedia, see HADK pdf for more information
Requires: gstreamer1.0-droid
Requires: gmp-droid

# This is needed for notification LEDs
Requires: mce-plugin-libhybris

# USB mode controller
Requires: usb-moded

# hammerhead, grouper, and maguro use this in scripts, so include for all
Requires: rfkill

# enable device lock and allow to select untrusted software
#Requires: jolla-devicelock-daemon-encsfa

# Enable home encryption
#Requires: sailfish-device-encryption

# For GPS
Requires: geoclue-provider-hybris

# For Fingerprint
Requires: sailfish-fpd-community
Requires: droid-biometry-fp
Requires: droid-fake-crypt

# enable device lock and allow to select untrusted software
Requires: sailfish-devicelock-fpd

# For suspend to work with enabled Wi-Fi on newer Qualcomm devices
Requires: sailfish-connman-plugin-suspend

# Splash screen
Requires: yamuisplash

Provides: ofono-configs
Obsoletes: ofono-configs-mer

Requires: dummy_netd

%description -n patterns-sailfish-device-adaptation-lavender
Pattern with packages for lavender HW Adaptation

%files -n patterns-sailfish-device-adaptation-lavender
