// FUN_005fc084 @ 005fc084 size=568 calls_out=3 calls_in=1
// strings: Finder | needle

undefined4 FUN_005fc084(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  undefined *puVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  code *pcVar7;
  undefined4 *local_48;
  char local_44;
  char local_43;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined4 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  local_44 = (**(code **)(param_2[1] + 0xc))(*param_2,"Finder",6);
  local_43 = '\0';
  local_48 = param_2;
  FUN_00fb2258(&local_48,"needle",6,param_1 + 0x38,FUN_005fc2f4);
  puVar1 = local_48;
  if (local_44 != '\0') {
    return 1;
  }
  if ((*(byte *)((int)local_48 + 10) & 0x80) == 0) {
    puVar3 = &DAT_0041950f;
    if (local_43 == '\0') {
      puVar3 = &DAT_00414a79;
    }
    uVar5 = 3;
    if (local_43 != '\0') {
      uVar5 = 2;
    }
    iVar2 = (**(code **)(local_48[1] + 0xc))(*local_48,puVar3,uVar5);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00569d78,8);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_01267d54(param_1,puVar1);
  }
  else {
    if ((local_43 == '\0') &&
       (iVar2 = (**(code **)(local_48[1] + 0xc))(*local_48,&DAT_00414a7e,3), iVar2 != 0)) {
      return 1;
    }
    local_28 = puVar1[2];
    local_24 = puVar1[3];
    local_38 = &local_31;
    local_40 = *puVar1;
    local_3c = puVar1[1];
    local_30 = &local_40;
    local_2c = &DAT_01880dc4;
    local_31 = 1;
    iVar2 = FUN_00fb1f64(local_30,&DAT_00569d78,8);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_00fb1f64(&local_40,&DAT_00414a7c,2);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = FUN_01267d54(param_1,&local_30);
    if (iVar2 != 0) {
      return 1;
    }
    iVar2 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
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

