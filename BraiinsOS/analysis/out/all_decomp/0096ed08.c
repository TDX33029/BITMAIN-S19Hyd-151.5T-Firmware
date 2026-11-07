// FUN_0096ed08 @ 0096ed08 size=616 calls_out=3 calls_in=0
// strings: AtomicRange | max_index | step_size | curr_index | curr_index

undefined4 FUN_0096ed08(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int iVar3;
  undefined *puVar4;
  char *pcVar5;
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
  
  local_48 = (**(code **)(param_2[1] + 0xc))(*param_2,"AtomicRange",0xb);
  local_47 = '\0';
  local_4c = param_2;
  uVar2 = FUN_00fb2258(&local_4c,"max_index",9,param_1 + 1,FUN_007883b8);
  FUN_00fb2258(uVar2,"step_size",9,param_1 + 2,FUN_007883b8);
  puVar1 = local_4c;
  if (local_48 != '\0') {
    return 1;
  }
  if ((*(byte *)((int)local_4c + 10) & 0x80) == 0) {
    puVar4 = &DAT_0041950f;
    if (local_47 == '\0') {
      puVar4 = &DAT_00414a79;
    }
    uVar2 = 3;
    if (local_47 != '\0') {
      uVar2 = 2;
    }
    iVar3 = (**(code **)(local_4c[1] + 0xc))(*local_4c,puVar4,uVar2);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,"curr_index",10);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2);
    if (iVar3 != 0) {
      return 1;
    }
    local_34 = *(undefined4 **)(*param_1 + 8);
    iVar3 = FUN_00fb9db0(&local_34,puVar1);
  }
  else {
    if ((local_47 == '\0') &&
       (iVar3 = (**(code **)(local_4c[1] + 0xc))(*local_4c,&DAT_00414a7e,3), iVar3 != 0)) {
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
    iVar3 = FUN_00fb1f64(local_34,"curr_index",10);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2);
    if (iVar3 != 0) {
      return 1;
    }
    local_24 = *(undefined4 *)(*param_1 + 8);
    iVar3 = FUN_00fb9db0(&local_24,&local_34);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
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

