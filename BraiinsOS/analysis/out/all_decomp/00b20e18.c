// FUN_00b20e18 @ 00b20e18 size=604 calls_out=3 calls_in=0
// strings: PowerTarget | HashrateTargetinit_delaymax_chip_frequency_changewait_per_mhz_of_frequency_after_changewait_after_rampdowntemperature_sensor_buildersOnControlBoardi2c_addressOnHashboardDirectViaPic

undefined4 FUN_00b20e18(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  iVar1 = 2;
  if ((uint)(*param_1 < 5) <= -param_1[1]) {
    iVar1 = *param_1 - 5;
  }
  if (iVar1 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00b20edc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_005699f0,8);
    return uVar3;
  }
  if (iVar1 == 1) {
    uVar3 = *param_2;
    iVar4 = param_2[1];
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,"PowerTarget",0xb);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01880dc4;
      local_28 = param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = uVar3;
      local_3c = iVar4;
      local_30 = (undefined1 *)&local_40;
      iVar1 = FUN_00d48fb8(param_1 + 2,&local_30);
joined_r0x00b21028:
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_00b21050;
    }
    iVar1 = (*pcVar2)(uVar3,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00d48fb8(param_1 + 2,param_2);
  }
  else {
    uVar3 = *param_2;
    iVar4 = param_2[1];
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,
                      "HashrateTargetinit_delaymax_chip_frequency_changewait_per_mhz_of_frequency_after_changewait_after_rampdowntemperature_sensor_buildersOnControlBoardi2c_addressOnHashboardDirectViaPic"
                      ,0xe);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar1 = (*pcVar2)(uVar3,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01880dc4;
      local_28 = param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = uVar3;
      local_3c = iVar4;
      local_30 = (undefined1 *)&local_40;
      iVar1 = FUN_00d48110(param_1,&local_30);
      goto joined_r0x00b21028;
    }
    iVar1 = (*pcVar2)(uVar3,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00d48110(param_1,param_2);
  }
  if (iVar1 != 0) {
    return 1;
  }
  uVar3 = *param_2;
  pcVar2 = *(code **)(param_2[1] + 0xc);
LAB_00b21050:
  uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
  return uVar3;
}

