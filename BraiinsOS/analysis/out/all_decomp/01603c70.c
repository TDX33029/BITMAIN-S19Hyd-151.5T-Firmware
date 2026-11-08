// FUN_01603c70 @ 01603c70 size=576 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_01603c70(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 *local_4c;
  char local_48;
  char local_47;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_48 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00410e3c,7);
  local_47 = '\0';
  local_4c = param_2;
  FUN_00fb2258(&local_4c,&DAT_00410e43,6,param_1,FUN_016034a8);
  puVar1 = local_4c;
  if (local_48 != '\0') {
    return 1;
  }
  if ((*(byte *)((int)local_4c + 10) & 0x80) == 0) {
    puVar3 = &DAT_0041950f;
    if (local_47 == '\0') {
      puVar3 = &DAT_00414a79;
    }
    uVar5 = 3;
    if (local_47 != '\0') {
      uVar5 = 2;
    }
    iVar2 = (**(code **)(local_4c[1] + 0xc))(*local_4c,puVar3,uVar5);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00410e49,7);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    local_34 = *(undefined4 **)(param_1 + 8);
    iVar2 = FUN_00fb9db0(&local_34,puVar1);
  }
  else {
    if ((local_47 == '\0') &&
       (iVar2 = (**(code **)(local_4c[1] + 0xc))(*local_4c,&DAT_00414a7e,3), iVar2 != 0)) {
      return 1;
    }
    local_2c = puVar1[2];
    local_28 = puVar1[3];
    local_3c = &local_35;
    local_44 = *puVar1;
    local_40 = puVar1[1];
    local_34 = &local_44;
    local_30 = &DAT_01880dc4;
    local_35 = 1;
    iVar2 = FUN_00fb1f64(local_34,&DAT_00410e49,7);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    local_24 = *(undefined4 *)(param_1 + 8);
    iVar2 = FUN_00fb9db0(&local_24,&local_34);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
  }
  if (iVar2 != 0) {
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

