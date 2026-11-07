// FUN_01049080 @ 01049080 size=588 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01049080(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 *local_38;
  char local_34;
  char local_33;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 *local_28;
  undefined1 local_21;
  
  iVar8 = *param_1;
  local_34 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00383ace,0xd);
  local_33 = '\0';
  local_38 = param_2;
  FUN_00fb2258(&local_38,&DAT_00383adb,5,param_1 + 3,FUN_0106085c);
  puVar1 = local_38;
  puVar9 = (undefined4 *)&UNK_01883510;
  if (iVar8 != -0x80000000) {
    puVar9 = &DAT_01883508;
  }
  if (local_34 != '\0') {
    return 1;
  }
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
    iVar2 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00383ae0,0x11);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    uVar5 = 9;
    if (iVar8 == -0x80000000) {
      uVar5 = 4;
    }
    iVar8 = FUN_00faa4e8(*puVar9,uVar5,*puVar1,puVar1[1]);
  }
  else {
    if ((local_33 == '\0') &&
       (iVar2 = (**(code **)(local_38[1] + 0xc))(*local_38,&DAT_00414a7e,3), iVar2 != 0)) {
      return 1;
    }
    local_28 = &local_21;
    local_30 = *puVar1;
    local_2c = puVar1[1];
    local_21 = 1;
    iVar2 = FUN_00fb1f64(&local_30,&DAT_00383ae0,0x11);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_30,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    uVar5 = 9;
    if (iVar8 == -0x80000000) {
      uVar5 = 4;
    }
    iVar8 = FUN_00faa4e8(*puVar9,uVar5,&local_30,&DAT_01880dc4);
    if (iVar8 != 0) {
      return 1;
    }
    iVar8 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
  }
  if (iVar8 != 0) {
    return 1;
  }
  if ((*(byte *)((int)puVar1 + 10) & 0x80) == 0) {
    uVar5 = *puVar1;
    uVar6 = 2;
    pcVar7 = *(code **)(puVar1[1] + 0xc);
    pcVar4 = " }";
  }
  else {
    uVar5 = *puVar1;
    uVar6 = 1;
    pcVar7 = *(code **)(puVar1[1] + 0xc);
    pcVar4 = "}";
  }
  uVar5 = (*pcVar7)(uVar5,pcVar4,uVar6);
  return uVar5;
}

