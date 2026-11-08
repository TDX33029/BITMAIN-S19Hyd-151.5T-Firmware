// FUN_00f841b0 @ 00f841b0 size=456 calls_out=6 calls_in=1
// strings: 

void FUN_00f841b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  uint uVar5;
  uint local_24;
  int local_20;
  uint local_1c;
  
  iVar3 = *(int *)(param_1 + 8);
  if (*(char *)(param_1 + 0x15) == '\0') {
    iVar1 = *(int *)(iVar3 + 0xa4);
    piVar2 = (int *)(iVar3 + 0xa4);
  }
  else {
    piVar4 = (int *)(iVar3 + 0xb0);
    iVar1 = *(int *)(iVar3 + 0xa4);
    piVar2 = (int *)0x0;
    if (iVar1 != -0x80000000) {
      piVar2 = (int *)(iVar3 + 0xa4);
    }
    if (*piVar4 != -0x80000000) goto LAB_00f8420c;
  }
  piVar4 = piVar2;
  if (iVar1 == -0x80000000) {
    return;
  }
LAB_00f8420c:
  if (param_2 != 0) {
    piVar2 = *(int **)(param_1 + 4);
    iVar3 = piVar2[2];
    if (*piVar2 == iVar3) {
      FUN_00f991dc(piVar2,iVar3,1,1,1);
      iVar3 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar3) = 10;
    piVar2[2] = iVar3 + 1;
  }
  iVar3 = piVar4[1];
  uVar5 = piVar4[2];
  if (uVar5 == 0) {
    iVar1 = 1;
  }
  else {
    iVar1 = thunk_FUN_016d4a50(uVar5);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar5);
    }
  }
  FUN_016dd1aa(iVar1,iVar3,uVar5);
  local_24 = uVar5;
  local_20 = iVar1;
  local_1c = uVar5;
  FUN_00f996fc(&local_24);
  uVar5 = local_1c;
  iVar3 = local_20;
  piVar2 = *(int **)(param_1 + 4);
  iVar1 = piVar2[2];
  if ((uint)(*piVar2 - iVar1) < local_1c) {
    FUN_00f991dc(piVar2,iVar1,local_1c,1,1);
    iVar1 = piVar2[2];
  }
  FUN_016dd1aa(piVar2[1] + iVar1,iVar3,uVar5);
  iVar1 = iVar1 + uVar5;
  piVar2[2] = iVar1;
  if (param_3 != 0) {
    if (*piVar2 == iVar1) {
      FUN_00f991dc(piVar2,iVar1,1,1,1);
      iVar1 = piVar2[2];
    }
    *(undefined1 *)(piVar2[1] + iVar1) = 10;
    piVar2[2] = iVar1 + 1;
  }
  if (local_24 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(iVar3);
  return;
}

