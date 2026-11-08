// FUN_01080e04 @ 01080e04 size=308 calls_out=4 calls_in=1
// strings: 

void FUN_01080e04(undefined2 *param_1,short *param_2,ushort *param_3)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ushort local_40;
  ushort local_3e;
  int local_3c;
  uint local_38;
  uint local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar1 = *param_3;
  iVar5 = *(int *)(param_3 + 2);
  if (uVar1 == 2) {
    *(int *)(param_1 + 2) = iVar5;
    *param_1 = 2;
  }
  else {
    local_3e = param_3[1];
    uVar4 = (uint)local_3e;
    local_38 = *(uint *)(param_3 + 4);
    local_34 = *(uint *)(param_3 + 6);
    uStack_30 = *(undefined4 *)(param_3 + 8);
    uStack_2c = *(undefined4 *)(param_3 + 10);
    uStack_28 = *(undefined4 *)(param_3 + 0xc);
    local_40 = uVar1;
    local_3c = iVar5;
    if ((uVar1 & 1) == 0) {
      if (0x18 < uVar4) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar4,0x18,&DAT_01883538);
      }
      uVar3 = (uint)&local_40 | 4;
    }
    else {
      uVar3 = local_38;
      uVar4 = local_34;
    }
    iVar2 = FUN_010398ac(param_2,uVar3,uVar4);
    if (iVar2 == 0) {
      if (uVar1 != 0 && iVar5 != 0) {
        thunk_FUN_016d3fb4(local_38);
      }
      FUN_016dd1aa(param_1,param_2,0x44);
      return;
    }
    *param_1 = 2;
    *(int *)(param_1 + 2) = iVar2;
    if (uVar1 != 0 && iVar5 != 0) {
      thunk_FUN_016d3fb4(local_38);
    }
  }
  iVar5 = 0;
  if (*param_2 != 0) {
    iVar5 = *(int *)(param_2 + 2);
  }
  if (*param_2 != 0 && iVar5 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 4));
  }
  iVar5 = 0;
  if (param_2[0x12] != 0) {
    iVar5 = *(int *)(param_2 + 0x14);
  }
  if (param_2[0x12] != 0 && iVar5 != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x16));
    return;
  }
  return;
}

