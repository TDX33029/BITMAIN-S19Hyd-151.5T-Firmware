// FUN_00728988 @ 00728988 size=496 calls_out=4 calls_in=1
// strings: 

void FUN_00728988(undefined2 *param_1,undefined4 *param_2,undefined4 param_3)

{
  short *psVar1;
  int iVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  short local_108 [2];
  int local_104;
  undefined4 local_100;
  short local_e4;
  int local_e0;
  undefined4 local_dc;
  ushort local_c4;
  short local_c2;
  ushort local_c0 [78];
  uint local_24;
  
  FUN_016dd1aa(local_108,param_3,0xe8);
  iVar5 = param_2[1];
  uVar4 = *(uint *)*param_2;
  if (local_24 < *(uint *)*param_2) {
    uVar4 = local_24;
  }
  if ((*(ushort *)(iVar5 + 0x44) == local_c4) &&
     ((*(ushort *)(iVar5 + 0x44) < 5 || (*(short *)(iVar5 + 0x46) == local_c2)))) {
    if (*(short *)(iVar5 + 0x48) != 3) {
      uVar3 = 0x10;
      if (1 < local_c0[0]) {
        uVar3 = local_c0[0] - 2;
      }
                    /* WARNING: Could not recover jumptable at 0x00728ad0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00728ad4 + *(int *)(&DAT_00728ad4 + (uint)uVar3 * 4)))();
      return;
    }
    psVar1 = (short *)param_2[2];
    if (*psVar1 == 2) {
      psVar1 = *(short **)(psVar1 + 2);
    }
    iVar2 = FUN_0103cf5c(psVar1,local_108);
    if ((iVar2 != 0) || (iVar2 = FUN_0103cf5c(iVar5,local_108), iVar2 != 0)) {
      *(undefined1 *)param_2[3] = 1;
      FUN_016dd1aa(param_1,local_108,0xe8);
      *(uint *)(param_1 + 0x74) = uVar4;
      return;
    }
    if (*(char *)param_2[4] != '\0') {
      uVar3 = 0x10;
      if (1 < local_c0[0]) {
        uVar3 = local_c0[0] - 2;
      }
                    /* WARNING: Could not recover jumptable at 0x00728c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00728c3c + *(int *)(&DAT_00728c3c + (uint)uVar3 * 4)))();
      return;
    }
    if (*(short *)(iVar5 + 0x48) == 0x1e) {
      uVar3 = 0x10;
      if (1 < local_c0[0]) {
        uVar3 = local_c0[0] - 2;
      }
      if (0x13 < uVar3 - 2) {
                    /* WARNING: Could not recover jumptable at 0x00728cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00728cdc + *(int *)(&DAT_00728cdc + (uint)uVar3 * 4)))();
        return;
      }
    }
    else if (*(short *)(iVar5 + 0x48) == 0x13) {
      uVar3 = 0x10;
      if (1 < local_c0[0]) {
        uVar3 = local_c0[0] - 2;
      }
      if (0x13 < uVar3 - 2) {
                    /* WARNING: Could not recover jumptable at 0x00728ddc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)(&DAT_00728de0 + *(int *)(&DAT_00728de0 + (uint)uVar3 * 4)))();
        return;
      }
    }
  }
  *param_1 = 2;
  if (local_108[0] != 0 && local_104 != 0) {
    thunk_FUN_016d3fb4(local_100);
  }
  iVar5 = 0;
  if (local_e4 != 0) {
    iVar5 = local_e0;
  }
  if (local_e4 != 0 && iVar5 != 0) {
    thunk_FUN_016d3fb4(local_dc);
    FUN_00728ed0(local_c0);
    return;
  }
  FUN_00728ed0(local_c0);
  return;
}

