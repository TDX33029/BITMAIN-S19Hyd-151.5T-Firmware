// FUN_0103f238 @ 0103f238 size=776 calls_out=2 calls_in=0
// strings: HINFO

undefined4 FUN_0103f238(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint *puVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar3)(uVar4,"HINFO",5);
  if (iVar1 != 0) {
    return 1;
  }
  puVar2 = param_2 + 2;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(uVar4,&DAT_00414a79,3);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar3)(uVar4,"cpu",3);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar3)(uVar4,&DAT_00414a7c,2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_01090d94(*param_1,param_1[1],param_2);
    if (iVar1 != 0) {
      return 1;
    }
    uVar6 = *puVar2;
  }
  else {
    iVar1 = (*pcVar3)(uVar4,&DAT_00414a7e,3);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    uVar6 = *puVar2;
    local_28 = param_2[3];
    local_30 = &DAT_01880dc4;
    local_34 = &local_44;
    local_35 = 1;
    local_44 = uVar4;
    local_40 = iVar5;
    local_2c = uVar6;
    iVar1 = FUN_00fb1f64(local_34,"cpu",3);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_01090d94(*param_1,param_1[1],&local_34);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
    if (iVar1 != 0) {
      return 1;
    }
  }
  if ((uVar6 & 0x800000) == 0) {
    uVar4 = *param_2;
    pcVar3 = *(code **)(param_2[1] + 0xc);
    iVar1 = (*pcVar3)(uVar4,&DAT_0041950f,2);
    if (((iVar1 == 0) && (iVar1 = (*pcVar3)(uVar4,"os",2), iVar1 == 0)) &&
       (iVar1 = (*pcVar3)(uVar4,&DAT_00414a7c,2), iVar1 == 0)) {
      iVar1 = FUN_01090d94(param_1[2],param_1[3],param_2);
      if (iVar1 != 0) {
        return 1;
      }
      uVar6 = *puVar2;
LAB_0103f4f8:
      if ((uVar6 & 0x800000) == 0) {
        uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2," }",2);
        return uVar4;
      }
      uVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,"}",1);
      return uVar4;
    }
  }
  else {
    local_44 = *param_2;
    local_40 = param_2[1];
    local_35 = 1;
    uVar6 = *puVar2;
    local_28 = param_2[3];
    local_3c = &local_35;
    local_34 = &local_44;
    local_30 = &DAT_01880dc4;
    local_2c = uVar6;
    iVar1 = FUN_00fb1f64(local_34,"os",2);
    if (((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar1 == 0)) &&
       (iVar1 = FUN_01090d94(param_1[2],param_1[3],&local_34), iVar1 == 0)) {
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
      if (iVar1 != 0) {
        return 1;
      }
      goto LAB_0103f4f8;
    }
  }
  return 1;
}

