// FUN_013c235c @ 013c235c size=920 calls_out=4 calls_in=4
// strings: Error | pattern | pattern

undefined4 FUN_013c235c(int param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int *local_48;
  char local_44;
  char local_43;
  int local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  int local_30;
  code *local_2c;
  int *local_28;
  code *local_24;
  
  local_44 = (**(code **)(param_2[1] + 0xc))(*param_2,"Error",5);
  local_43 = '\0';
  local_48 = param_2;
  FUN_00fb2258(&local_48,&DAT_005691b4,4,param_1,&LAB_01000840);
  piVar1 = local_48;
  if (local_44 != '\0') {
    return 1;
  }
  if ((*(byte *)((int)local_48 + 10) & 0x80) == 0) {
    puVar3 = &DAT_0041950f;
    if (local_43 == '\0') {
      puVar3 = &DAT_00414a79;
    }
    uVar4 = 3;
    if (local_43 != '\0') {
      uVar4 = 2;
    }
    iVar2 = (**(code **)(local_48[1] + 0xc))(*local_48,puVar3,uVar4);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(piVar1[1] + 0xc))(*piVar1,"pattern",7);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00faa4e8(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),*piVar1,
                         piVar1[1]);
    if (iVar2 != 0) {
      return 1;
    }
  }
  else {
    if ((local_43 == '\0') &&
       (iVar2 = (**(code **)(local_48[1] + 0xc))(*local_48,&DAT_00414a7e,3), iVar2 != 0)) {
      return 1;
    }
    local_28 = &local_40;
    local_30 = *piVar1;
    local_2c = (code *)piVar1[1];
    local_40 = CONCAT31(local_40._1_3_,1);
    iVar2 = FUN_00fb1f64(&local_30,"pattern",7);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00faa4e8(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24),&local_30,
                         &DAT_01880dc4);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
    if (iVar2 != 0) {
      return 1;
    }
  }
  if ((*(byte *)((int)piVar1 + 10) & 0x80) == 0) {
    iVar2 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_0041950f,2);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00568734,4);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    local_28 = (int *)(param_1 + 0x34);
    local_24 = FUN_013f6c08;
    local_2c = FUN_013f6c08;
    local_30 = param_1 + 0x28;
    iVar2 = FUN_00fa948c(*piVar1,piVar1[1],&DAT_00570932,&local_30);
  }
  else {
    local_40 = *piVar1;
    local_3c = piVar1[1];
    local_38 = &local_31;
    local_31 = 1;
    iVar2 = FUN_00fb1f64(&local_40,&DAT_00568734,4);
    if ((iVar2 != 0) || (iVar2 = FUN_00fb1f64(&local_40,&DAT_00414a7c,2), iVar2 != 0)) {
      return 1;
    }
    local_28 = (int *)(param_1 + 0x34);
    local_24 = FUN_013f6c08;
    local_2c = FUN_013f6c08;
    local_30 = param_1 + 0x28;
    iVar2 = FUN_00fa948c(&local_40,&DAT_01880dc4,&DAT_00570932,&local_30);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_40,&DAT_00414a81,2);
  }
  if (iVar2 != 0) {
    return 1;
  }
  if ((*(byte *)((int)piVar1 + 10) & 0x80) == 0) {
    uVar4 = (**(code **)(piVar1[1] + 0xc))(*piVar1," }",2);
    return uVar4;
  }
  uVar4 = (**(code **)(piVar1[1] + 0xc))(*piVar1,"}",1);
  return uVar4;
}

