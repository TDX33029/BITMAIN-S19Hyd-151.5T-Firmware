// FUN_00a06d7c @ 00a06d7c size=596 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_00a06d7c(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  code *pcVar6;
  int iVar7;
  int *local_38;
  char local_34;
  char local_33;
  int local_30;
  code *local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  int local_20;
  code *local_1c;
  
  iVar7 = *param_1;
  local_34 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00569aa0,8);
  local_33 = '\0';
  local_38 = param_2;
  FUN_00fb2258(&local_38,&DAT_00414a6a,5,iVar7,FUN_00aaf12c);
  piVar1 = local_38;
  if (local_34 != '\0') {
    return 1;
  }
  iVar7 = iVar7 + 8;
  if ((*(byte *)((int)local_38 + 10) & 0x80) == 0) {
    puVar3 = &DAT_0041950f;
    if (local_33 == '\0') {
      puVar3 = &DAT_00414a79;
    }
    uVar5 = 3;
    if (local_33 != '\0') {
      uVar5 = 2;
    }
    iVar2 = (**(code **)(local_38[1] + 0xc))(*local_38,puVar3,uVar5);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_0056a160,8);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(piVar1[1] + 0xc))(*piVar1,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    local_2c = FUN_0169b238;
    local_30 = iVar7;
    iVar7 = FUN_00fa948c(*piVar1,piVar1[1],&DAT_00582e3a,&local_30);
  }
  else {
    if ((local_33 == '\0') &&
       (iVar2 = (**(code **)(local_38[1] + 0xc))(*local_38,&DAT_00414a7e,3), iVar2 != 0)) {
      return 1;
    }
    local_28 = &local_21;
    local_30 = *piVar1;
    local_2c = (code *)piVar1[1];
    local_21 = 1;
    iVar2 = FUN_00fb1f64(&local_30,&DAT_0056a160,8);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    local_1c = FUN_0169b238;
    local_20 = iVar7;
    iVar7 = FUN_00fa948c(&local_30,&DAT_01880dc4,&DAT_00582e3a,&local_20);
    if (iVar7 != 0) {
      return 1;
    }
    iVar7 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  if (iVar7 != 0) {
    return 1;
  }
  if ((*(byte *)((int)piVar1 + 10) & 0x80) == 0) {
    iVar7 = *piVar1;
    uVar5 = 2;
    pcVar6 = *(code **)(piVar1[1] + 0xc);
    pcVar4 = " }";
  }
  else {
    iVar7 = *piVar1;
    uVar5 = 1;
    pcVar6 = *(code **)(piVar1[1] + 0xc);
    pcVar4 = "}";
  }
  uVar5 = (*pcVar6)(iVar7,pcVar4,uVar5);
  return uVar5;
}

