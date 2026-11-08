// FUN_0109407c @ 0109407c size=600 calls_out=3 calls_in=0
// strings: SSHFP | fingerprintIssueIssueWildIodefLLQULDAUDHUN3U | fingerprintIssueIssueWildIodefLLQULDAUDHUN3U

undefined4 FUN_0109407c(int param_1,undefined4 *param_2)

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
  
  local_44 = (**(code **)(param_2[1] + 0xc))(*param_2,"SSHFP",5);
  local_43 = '\0';
  local_48 = param_2;
  uVar2 = FUN_00fb2258(&local_48,&DAT_0040c6f9,9,param_1 + 0xe,&LAB_00725b18);
  FUN_00fb2258(uVar2,&DAT_005651e0,0x10,param_1 + 0xc,&LAB_00725948);
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
    iVar3 = (**(code **)(puVar1[1] + 0xc))
                      (*puVar1,"fingerprintIssueIssueWildIodefLLQULDAUDHUN3U",0xb);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_01090d94(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),puVar1);
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
    iVar3 = FUN_00fb1f64(local_30,"fingerprintIssueIssueWildIodefLLQULDAUDHUN3U",0xb);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_00fb1f64(&local_40,&DAT_00414a7c,2);
    if (iVar3 != 0) {
      return 1;
    }
    iVar3 = FUN_01090d94(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_30);
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

