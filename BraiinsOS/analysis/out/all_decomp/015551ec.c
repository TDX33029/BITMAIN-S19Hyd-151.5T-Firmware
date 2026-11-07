// FUN_015551ec @ 015551ec size=600 calls_out=2 calls_in=0
// strings: public_key_alg_id

undefined4 FUN_015551ec(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
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
  
  local_44 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00565330,0x10);
  local_43 = '\0';
  local_48 = param_2;
  uVar2 = FUN_00fb2258(&local_48,"public_key_alg_id",0x11,param_1,FUN_015767e8);
  FUN_00fb2258(uVar2,&DAT_005656a0,0x10,param_1 + 8,FUN_015767e8);
  puVar1 = local_48;
  if (local_44 != '\0') {
    return 1;
  }
  if ((*(byte *)((int)local_48 + 10) & 0x80) == 0) {
    puVar4 = &DAT_0041950f;
    if (local_43 == '\0') {
      puVar4 = &DAT_00414a79;
    }
    uVar2 = 3;
    if (local_43 != '\0') {
      uVar2 = 2;
    }
    iVar3 = (**(code **)(local_48[1] + 0xc))(*local_48,puVar4,uVar2);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00565740,0x10);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(*(int *)(param_1 + 0x14) + 0xc))(*(undefined4 *)(param_1 + 0x10),puVar1);
  }
  else {
    if ((local_43 == '\0') &&
       (iVar3 = (**(code **)(local_48[1] + 0xc))(*local_48,&DAT_00414a7e,3), iVar3 != 0)) {
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
    iVar3 = FUN_00fb1f64(local_30,&DAT_00565740,0x10);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00fb1f64(&local_40,&DAT_00414a7c,2);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(*(int *)(param_1 + 0x14) + 0xc))(*(undefined4 *)(param_1 + 0x10),&local_30)
    ;
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
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

