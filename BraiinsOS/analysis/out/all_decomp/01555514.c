// FUN_01555514 @ 01555514 size=632 calls_out=2 calls_in=0
// strings: EcdsaVerificationAlgorithm | digest | sig_format | Fixed | sig_format | Fixed

undefined4 FUN_01555514(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 *local_30;
  char local_2c;
  char local_2b;
  undefined4 local_28;
  undefined4 local_24;
  undefined1 *local_20;
  undefined1 local_19;
  
  local_2c = (**(code **)(param_2[1] + 0xc))(*param_2,"EcdsaVerificationAlgorithm",0x1a);
  local_2b = '\0';
  local_30 = param_2;
  uVar2 = FUN_00fb2258(&local_30,"id",2,param_1,FUN_0154df98);
  FUN_00fb2258(uVar2,"digest",6,param_1 + 4,FUN_0156a7b8);
  puVar1 = local_30;
  if (local_2c != '\0') {
    return 1;
  }
  if ((*(byte *)((int)local_30 + 10) & 0x80) == 0) {
    puVar4 = &DAT_0041950f;
    if (local_2b == '\0') {
      puVar4 = &DAT_00414a79;
    }
    uVar2 = 3;
    if (local_2b != '\0') {
      uVar2 = 2;
    }
    iVar3 = (**(code **)(local_30[1] + 0xc))(*local_30,puVar4,uVar2);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,"sig_format",10);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2);
    if (iVar3 != 0) {
      return 1;
    }
    uVar2 = 4;
    pcVar5 = &DAT_00568878;
    if (*(char *)(param_1 + 8) != '\0') {
      uVar2 = 5;
      pcVar5 = "Fixed";
    }
    iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,pcVar5,uVar2);
  }
  else {
    if ((local_2b == '\0') &&
       (iVar3 = (**(code **)(local_30[1] + 0xc))(*local_30,&DAT_00414a7e,3), iVar3 != 0)) {
      return 1;
    }
    local_20 = &local_19;
    local_28 = *puVar1;
    local_24 = puVar1[1];
    local_19 = 1;
    iVar3 = FUN_00fb1f64(&local_28,"sig_format",10);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00fb1f64(&local_28,&DAT_00414a7c,2);
    if (iVar3 != 0) {
      return 1;
    }
    pcVar5 = &DAT_00568878;
    uVar2 = 4;
    if (*(char *)(param_1 + 8) != '\0') {
      uVar2 = 5;
      pcVar5 = "Fixed";
    }
    iVar3 = FUN_00fb1f64(&local_28,pcVar5,uVar2);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00fb1f64(&local_28,&DAT_00414a81,2);
  }
  if (iVar3 != 0) {
    return 1;
  }
  if ((*(byte *)((int)puVar1 + 10) & 0x80) == 0) {
    uVar2 = *puVar1;
    uVar6 = 2;
    pcVar7 = *(code **)(puVar1[1] + 0xc);
    pcVar5 = " }";
  }
  else {
    uVar2 = *puVar1;
    uVar6 = 1;
    pcVar7 = *(code **)(puVar1[1] + 0xc);
    pcVar5 = "}";
  }
  uVar2 = (*pcVar7)(uVar2,pcVar5,uVar6);
  return uVar2;
}

