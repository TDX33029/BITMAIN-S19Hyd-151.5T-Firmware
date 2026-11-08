// FUN_00a06a6c @ 00a06a6c size=716 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_00a06a6c(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  int *local_48;
  byte local_44;
  char local_43;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  code *local_34;
  undefined1 *local_30;
  undefined1 local_29;
  undefined4 *local_28;
  code *local_24;
  
  piVar7 = (int *)*param_1;
  iVar4 = *piVar7;
  iVar6 = piVar7[1];
  uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056a8b8,8);
  local_43 = '\0';
  local_44 = (byte)uVar1;
  local_48 = param_2;
  if (iVar6 != 0) {
    piVar5 = (int *)(iVar4 + 4);
    do {
      if (*piVar5 != 0) {
        (**(code **)(piVar5[1] + 0xc))(*piVar5,piVar5[-1],&local_48,&DAT_018ae298);
      }
      piVar5 = piVar5 + 3;
      iVar6 = iVar6 + -1;
    } while (iVar6 != 0);
    uVar1 = (uint)local_44;
  }
  piVar5 = local_48;
  local_3c = *(undefined4 *)(piVar7[2] + 0xc);
  local_40 = *(undefined4 *)(piVar7[2] + 8);
  if (uVar1 == 0) {
    if ((*(byte *)((int)local_48 + 10) & 0x80) == 0) {
      puVar2 = &DAT_0041950f;
      if (local_43 == '\0') {
        puVar2 = &DAT_00414a79;
      }
      uVar3 = 3;
      if (local_43 != '\0') {
        uVar3 = 2;
      }
      iVar4 = (**(code **)(local_48[1] + 0xc))(*local_48,puVar2,uVar3);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = (**(code **)(piVar5[1] + 0xc))(*piVar5,&DAT_0056a160,8);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = (**(code **)(piVar5[1] + 0xc))(*piVar5,&DAT_00414a7c,2);
      if (iVar4 != 0) {
        return 1;
      }
      local_38 = &local_40;
      local_34 = FUN_0169b238;
      iVar4 = FUN_00fa948c(*piVar5,piVar5[1],&DAT_00582e3a,&local_38);
    }
    else {
      if ((local_43 == '\0') &&
         (iVar4 = (**(code **)(local_48[1] + 0xc))(*local_48,&DAT_00414a7e,3), iVar4 != 0)) {
        return 1;
      }
      local_30 = &local_29;
      local_38 = (undefined4 *)*piVar5;
      local_34 = (code *)piVar5[1];
      local_29 = 1;
      iVar4 = FUN_00fb1f64(&local_38,&DAT_0056a160,8);
      if ((iVar4 != 0) || (iVar4 = FUN_00fb1f64(&local_38,&DAT_00414a7c,2), iVar4 != 0)) {
        return 1;
      }
      local_28 = &local_40;
      local_24 = FUN_0169b238;
      iVar4 = FUN_00fa948c(&local_38,&DAT_01880dc4,&DAT_00582e3a,&local_28);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = FUN_00fb1f64(&local_38,&DAT_00414a81,2);
    }
    local_43 = 1;
    local_44 = (byte)iVar4;
    if (iVar4 == 0) {
      if ((*(byte *)((int)local_48 + 10) & 0x80) == 0) {
        uVar3 = (**(code **)(local_48[1] + 0xc))(*local_48," }",2);
        return uVar3;
      }
      uVar3 = (**(code **)(local_48[1] + 0xc))(*local_48,"}",1);
      return uVar3;
    }
  }
  return 1;
}

