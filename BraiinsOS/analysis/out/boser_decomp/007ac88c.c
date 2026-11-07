// FUN_007ac88c @ 007ac88c size=744 calls_out=5 calls_in=1
// strings: seek is not supportedstruct CheckUpgradeRequeststruct StartUpgradeRequest | seek is not supportedstruct CheckUpgradeRequeststruct StartUpgradeRequest

void FUN_007ac88c(undefined4 *param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined8 uVar5;
  uint local_70;
  uint local_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_40;
  undefined2 local_3e;
  undefined1 local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  
  uVar3 = *(uint *)(param_2 + 0x60);
  iVar4 = *(int *)(param_2 + 100);
  if (uVar3 + 0xe != *(int *)(param_3 + 8) ||
      iVar4 + (uint)(0xfffffff1 < uVar3) != *(int *)(param_3 + 0xc)) {
    FUN_019a18a8((uint)&local_70 | 4,0x24,
                 "seek is not supportedstruct CheckUpgradeRequeststruct StartUpgradeRequest",0x15);
    local_70 = local_6c;
    local_6c = local_68;
LAB_007acb0c:
    *param_1 = 0x80000001;
    param_1[1] = local_70;
    param_1[2] = local_6c;
    return;
  }
  local_38 = *(uint *)(param_2 + 0x98);
  FUN_007b01f0(&local_70,param_3,&local_38,4);
  if (((char)local_70 != '\x04') && ((local_70 & 0xff) != 4)) goto LAB_007acb0c;
  if (*(char *)(param_2 + 0xab) == '\0') {
    if (*(int *)(param_2 + 0x44) != 0) {
      FUN_01af9864(param_1 + 1,&DAT_003e14ef,0x28);
      uVar2 = 0x80000001;
      goto LAB_007acb00;
    }
    local_38 = *(uint *)(param_2 + 0x40);
    FUN_007b01f0(&local_70,param_3,&local_38,4);
    if (((char)local_70 != '\x04') && ((local_70 & 0xff) != 4)) goto LAB_007acb0c;
    local_38 = *(uint *)(param_2 + 0x48);
    FUN_007b01f0(&local_70,param_3,&local_38,4);
    if (((char)local_70 != '\x04') && ((local_70 & 0xff) != 4)) goto LAB_007acb0c;
  }
  else {
    local_38 = 0xffffffff;
    FUN_007b01f0(&local_70,param_3,&local_38,4);
    if (((char)local_70 != '\x04') && ((local_70 & 0xff) != 4)) goto LAB_007acb0c;
    local_38 = 0xffffffff;
    FUN_007b01f0(&local_70,param_3,&local_38,4);
    if (((char)local_70 != '\x04') && ((local_70 & 0xff) != 4)) goto LAB_007acb0c;
    local_58 = *(uint *)(param_2 + 0x40);
    uStack_54 = *(undefined4 *)(param_2 + 0x44);
    local_50 = 0;
    local_4c = 0;
    local_64 = *(undefined4 *)(param_2 + 0x4c);
    local_6c = 0;
    local_5c = 0;
    local_70 = 1;
    local_3c = 1;
    local_40 = 1;
    local_60 = 1;
    uVar1 = uVar3 + *(uint *)(param_2 + 0x34);
    local_3e = 0x10;
    local_68 = *(undefined4 *)(param_2 + 0x48);
    if (uVar1 + 0x1e != *(int *)(param_3 + 8) ||
        iVar4 + (uint)CARRY4(uVar3,*(uint *)(param_2 + 0x34)) + (uint)(0xffffffe1 < uVar1) !=
        *(int *)(param_3 + 0xc)) {
      FUN_019a18a8((uint)&local_38 | 4,0x24,
                   "seek is not supportedstruct CheckUpgradeRequeststruct StartUpgradeRequest",0x15)
      ;
      uVar3 = local_34;
LAB_007acb48:
      param_1[2] = local_30;
      *param_1 = 0x80000001;
      param_1[1] = uVar3;
      return;
    }
    uVar5 = FUN_01afa214(&local_70);
    iVar4 = (int)((ulonglong)uVar5 >> 0x20);
    uVar2 = (undefined4)uVar5;
    FUN_007b01f0(&local_38,param_3,uVar2,iVar4);
    uVar3 = local_38;
    if ((local_38 & 0xff) != 4) {
      local_30 = local_34;
      if (iVar4 != 0) {
        thunk_FUN_01be4678(uVar2);
      }
      goto LAB_007acb48;
    }
    if (iVar4 != 0) {
      thunk_FUN_01be4678(uVar2);
    }
  }
  uVar2 = 0x80000007;
LAB_007acb00:
  *param_1 = uVar2;
  return;
}

