// FUN_00a44f88 @ 00a44f88 size=488 calls_out=11 calls_in=2
// strings: netmask | gateway | dns_servers

void FUN_00a44f88(char *param_1,undefined4 *param_2,int param_3)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_98 [2];
  undefined4 local_90;
  char local_88 [28];
  undefined4 local_6c;
  undefined4 *local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_90 = 0;
  local_98[0] = 0;
  puVar2 = (undefined4 *)thunk_FUN_01be5118(6);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,6);
  }
  uVar1 = *(undefined2 *)(param_2 + 1);
  *puVar2 = *param_2;
  *(undefined2 *)(puVar2 + 1) = uVar1;
  local_64 = 6;
  local_6c = 6;
  local_50 = 0x80000000;
  local_54 = 0;
  local_5c = 0;
  local_60 = 0;
  local_68 = puVar2;
  iVar3 = FUN_01271f48(&local_60,&DAT_004cfb47,7,*(undefined4 *)(param_3 + 4),
                       *(undefined4 *)(param_3 + 8));
  if ((((iVar3 == 0) &&
       (iVar3 = FUN_01271f48(&local_60,"netmask",7,*(undefined4 *)(param_3 + 0x10),
                             *(undefined4 *)(param_3 + 0x14)), iVar3 == 0)) &&
      (iVar3 = FUN_01271f48(&local_60,"gateway",7,*(undefined4 *)(param_3 + 0x1c),
                            *(undefined4 *)(param_3 + 0x20)), iVar3 == 0)) &&
     (iVar3 = FUN_0127217c(&local_60,"dns_servers",0xb,*(undefined4 *)(param_3 + 0x28),
                           *(undefined4 *)(param_3 + 0x2c)), iVar3 == 0)) {
    local_40 = local_60;
    uStack_3c = local_5c;
    uStack_38 = uStack_58;
    uStack_34 = local_54;
    uStack_30 = local_50;
    uStack_2c = uStack_4c;
    uStack_28 = uStack_48;
    uStack_24 = uStack_44;
    FUN_0196ac88(param_1,&local_40);
    if (*param_1 != '\x06') {
      FUN_0196b484(local_88,local_98,&local_6c,param_1);
      if (local_88[0] != '\x06') {
        FUN_00db4764(local_88);
      }
      FUN_01bed4e2((uint)&local_40 | 3,local_98,0xc);
      *param_1 = '\x05';
      FUN_01bed4e2(param_1 + 1,&local_40,0xf);
      return;
    }
  }
  else {
    *(int *)(param_1 + 4) = iVar3;
    *param_1 = '\x06';
    FUN_0127464c(&local_60);
  }
  FUN_019bb7e0(6,puVar2);
  FUN_0196afa8(local_98);
  return;
}

