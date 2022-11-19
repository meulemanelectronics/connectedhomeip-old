#pragma once
void MatterAccessControlPluginServerInitCallback();
void MatterAccountLoginPluginServerInitCallback();
void MatterActionsPluginServerInitCallback();
void MatterAdministratorCommissioningPluginServerInitCallback();
void MatterApplicationBasicPluginServerInitCallback();
void MatterApplicationLauncherPluginServerInitCallback();
void MatterAudioOutputPluginServerInitCallback();
void MatterBarrierControlPluginServerInitCallback();
void MatterBasicPluginServerInitCallback();
void MatterBinaryInputBasicPluginServerInitCallback();
void MatterBindingPluginServerInitCallback();
void MatterBooleanStatePluginServerInitCallback();
void MatterChannelPluginServerInitCallback();
void MatterColorControlPluginServerInitCallback();
void MatterContentLauncherPluginServerInitCallback();
void MatterDescriptorPluginServerInitCallback();
void MatterDiagnosticLogsPluginServerInitCallback();
void MatterDoorLockPluginServerInitCallback();
void MatterElectricalMeasurementPluginServerInitCallback();
void MatterEthernetNetworkDiagnosticsPluginServerInitCallback();
void MatterFanControlPluginServerInitCallback();
void MatterFaultInjectionPluginServerInitCallback();
void MatterFixedLabelPluginServerInitCallback();
void MatterFlowMeasurementPluginServerInitCallback();
void MatterGeneralCommissioningPluginServerInitCallback();
void MatterGeneralDiagnosticsPluginServerInitCallback();
void MatterGroupKeyManagementPluginServerInitCallback();
void MatterGroupsPluginServerInitCallback();
void MatterIdentifyPluginServerInitCallback();
void MatterIlluminanceMeasurementPluginServerInitCallback();
void MatterKeypadInputPluginServerInitCallback();
void MatterLevelControlPluginServerInitCallback();
void MatterLocalizationConfigurationPluginServerInitCallback();
void MatterLowPowerPluginServerInitCallback();
void MatterMediaInputPluginServerInitCallback();
void MatterMediaPlaybackPluginServerInitCallback();
void MatterModeSelectPluginServerInitCallback();
void MatterNetworkCommissioningPluginServerInitCallback();
void MatterOccupancySensingPluginServerInitCallback();
void MatterOnOffPluginServerInitCallback();
void MatterOnOffSwitchConfigurationPluginServerInitCallback();
void MatterOperationalCredentialsPluginServerInitCallback();
void MatterOtaSoftwareUpdateRequestorPluginServerInitCallback();
void MatterPowerSourcePluginServerInitCallback();
void MatterPowerSourceConfigurationPluginServerInitCallback();
void MatterPressureMeasurementPluginServerInitCallback();
void MatterPumpConfigurationAndControlPluginServerInitCallback();
void MatterRelativeHumidityMeasurementPluginServerInitCallback();
void MatterScenesPluginServerInitCallback();
void MatterSoftwareDiagnosticsPluginServerInitCallback();
void MatterSwitchPluginServerInitCallback();
void MatterTargetNavigatorPluginServerInitCallback();
void MatterTemperatureMeasurementPluginServerInitCallback();
void MatterThermostatPluginServerInitCallback();
void MatterThermostatUserInterfaceConfigurationPluginServerInitCallback();
void MatterThreadNetworkDiagnosticsPluginServerInitCallback();
void MatterTimeFormatLocalizationPluginServerInitCallback();
void MatterUnitLocalizationPluginServerInitCallback();
void MatterUnitTestingPluginServerInitCallback();
void MatterUserLabelPluginServerInitCallback();
void MatterWakeOnLanPluginServerInitCallback();
void MatterWiFiNetworkDiagnosticsPluginServerInitCallback();
void MatterWindowCoveringPluginServerInitCallback();

#define MATTER_PLUGINS_INIT \
    MatterAccessControlPluginServerInitCallback(); \
    MatterAccountLoginPluginServerInitCallback(); \
    MatterActionsPluginServerInitCallback(); \
    MatterAdministratorCommissioningPluginServerInitCallback(); \
    MatterApplicationBasicPluginServerInitCallback(); \
    MatterApplicationLauncherPluginServerInitCallback(); \
    MatterAudioOutputPluginServerInitCallback(); \
    MatterBarrierControlPluginServerInitCallback(); \
    MatterBasicPluginServerInitCallback(); \
    MatterBinaryInputBasicPluginServerInitCallback(); \
    MatterBindingPluginServerInitCallback(); \
    MatterBooleanStatePluginServerInitCallback(); \
    MatterChannelPluginServerInitCallback(); \
    MatterColorControlPluginServerInitCallback(); \
    MatterContentLauncherPluginServerInitCallback(); \
    MatterDescriptorPluginServerInitCallback(); \
    MatterDiagnosticLogsPluginServerInitCallback(); \
    MatterDoorLockPluginServerInitCallback(); \
    MatterElectricalMeasurementPluginServerInitCallback(); \
    MatterEthernetNetworkDiagnosticsPluginServerInitCallback(); \
    MatterFanControlPluginServerInitCallback(); \
    MatterFaultInjectionPluginServerInitCallback(); \
    MatterFixedLabelPluginServerInitCallback(); \
    MatterFlowMeasurementPluginServerInitCallback(); \
    MatterGeneralCommissioningPluginServerInitCallback(); \
    MatterGeneralDiagnosticsPluginServerInitCallback(); \
    MatterGroupKeyManagementPluginServerInitCallback(); \
    MatterGroupsPluginServerInitCallback(); \
    MatterIdentifyPluginServerInitCallback(); \
    MatterIlluminanceMeasurementPluginServerInitCallback(); \
    MatterKeypadInputPluginServerInitCallback(); \
    MatterLevelControlPluginServerInitCallback(); \
    MatterLocalizationConfigurationPluginServerInitCallback(); \
    MatterLowPowerPluginServerInitCallback(); \
    MatterMediaInputPluginServerInitCallback(); \
    MatterMediaPlaybackPluginServerInitCallback(); \
    MatterModeSelectPluginServerInitCallback(); \
    MatterNetworkCommissioningPluginServerInitCallback(); \
    MatterOccupancySensingPluginServerInitCallback(); \
    MatterOnOffPluginServerInitCallback(); \
    MatterOnOffSwitchConfigurationPluginServerInitCallback(); \
    MatterOperationalCredentialsPluginServerInitCallback(); \
    MatterOtaSoftwareUpdateRequestorPluginServerInitCallback(); \
    MatterPowerSourcePluginServerInitCallback(); \
    MatterPowerSourceConfigurationPluginServerInitCallback(); \
    MatterPressureMeasurementPluginServerInitCallback(); \
    MatterPumpConfigurationAndControlPluginServerInitCallback(); \
    MatterRelativeHumidityMeasurementPluginServerInitCallback(); \
    MatterScenesPluginServerInitCallback(); \
    MatterSoftwareDiagnosticsPluginServerInitCallback(); \
    MatterSwitchPluginServerInitCallback(); \
    MatterTargetNavigatorPluginServerInitCallback(); \
    MatterTemperatureMeasurementPluginServerInitCallback(); \
    MatterThermostatPluginServerInitCallback(); \
    MatterThermostatUserInterfaceConfigurationPluginServerInitCallback(); \
    MatterThreadNetworkDiagnosticsPluginServerInitCallback(); \
    MatterTimeFormatLocalizationPluginServerInitCallback(); \
    MatterUnitLocalizationPluginServerInitCallback(); \
    MatterUnitTestingPluginServerInitCallback(); \
    MatterUserLabelPluginServerInitCallback(); \
    MatterWakeOnLanPluginServerInitCallback(); \
    MatterWiFiNetworkDiagnosticsPluginServerInitCallback(); \
    MatterWindowCoveringPluginServerInitCallback();

