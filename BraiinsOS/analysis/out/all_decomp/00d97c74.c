// FUN_00d97c74 @ 00d97c74 size=64 calls_out=0 calls_in=0
// strings: 

void FUN_00d97c74(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  
  pcVar2 = "PowerTarget";
  if (*param_1 != '\0') {
    pcVar2 = 
    "HashrateTargetinit_delaymax_chip_frequency_changewait_per_mhz_of_frequency_after_changewait_after_rampdowntemperature_sensor_buildersOnControlBoardi2c_addressOnHashboardDirectViaPic"
    ;
  }
  uVar1 = 0xb;
  if (*param_1 != '\0') {
    uVar1 = 0xe;
  }
                    /* WARNING: Could not recover jumptable at 0x00d97cb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,pcVar2,uVar1);
  return;
}

