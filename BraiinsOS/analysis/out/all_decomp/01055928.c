// FUN_01055928 @ 01055928 size=320 calls_out=6 calls_in=1
// strings: 

longlong FUN_01055928(int *param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  uint uVar9;
  undefined2 local_68 [2];
  uint local_64;
  
  iVar8 = param_1[1];
  if (*param_1 == iVar8) {
    return 0;
  }
  uVar9 = 0;
  iVar1 = *param_1;
  while( true ) {
    iVar4 = iVar1 + 0xe8;
    uVar6 = *(uint *)(param_2 + 8);
    uVar5 = *(undefined4 *)(param_2 + 0x14);
    *param_1 = iVar4;
    psVar2 = (short *)FUN_0104c840(iVar1,param_2);
    if (psVar2 != (short *)0x0) break;
    uVar9 = uVar9 + 1;
    iVar1 = iVar4;
    if (iVar4 == iVar8) {
      return (ulonglong)uVar9 << 0x20;
    }
  }
  if (*psVar2 != 0xe) {
    return CONCAT44(psVar2,1);
  }
  uVar3 = *(uint *)(param_2 + 8);
  *(undefined4 *)(param_2 + 0x14) = uVar5;
  if (uVar6 <= uVar3) {
    *(uint *)(param_2 + 8) = uVar6;
    piVar7 = (int *)(*(int *)(param_2 + 4) + uVar6 * 0x10 + 4);
    for (iVar8 = uVar3 - uVar6; iVar8 != 0; iVar8 = iVar8 + -1) {
      if (*piVar7 != 0) {
        thunk_FUN_016d3fb4(piVar7[1]);
      }
      piVar7 = piVar7 + 4;
    }
  }
  local_68[0] = 0x14;
  local_64 = uVar9;
  iVar8 = thunk_FUN_016d4a50(0x44);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x44);
  }
  FUN_016dd1aa(iVar8,local_68,0x44);
  FUN_01036ca0(psVar2);
  thunk_FUN_016d3fb4(psVar2);
  return CONCAT44(iVar8,1);
}

