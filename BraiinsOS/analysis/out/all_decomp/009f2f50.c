// FUN_009f2f50 @ 009f2f50 size=288 calls_out=1 calls_in=1
// strings: 

int FUN_009f2f50(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  if (*(int *)(param_1 + 0x10) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_0186b428);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  uVar3 = *(uint *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    for (; uVar3 != 0; uVar3 = uVar3 - 1) {
      iVar1 = *(int *)(iVar1 + (uint)*(ushort *)(iVar1 + 0x5e) * 4 + 0x60);
    }
    uVar3 = (uint)*(ushort *)(iVar1 + 0x5e);
    iVar5 = 0;
    *(int *)(param_1 + 0x14) = iVar1;
    *(undefined4 *)(param_1 + 0x10) = 1;
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(uint *)(param_1 + 0x1c) = uVar3;
  }
  else {
    iVar5 = *(int *)(param_1 + 0x18);
  }
  iVar4 = iVar1;
  if (uVar3 == 0) {
    do {
      iVar1 = *(int *)(iVar4 + 0x58);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_0186b4e8);
      }
      uVar3 = (uint)*(ushort *)(iVar4 + 0x5c);
      iVar5 = iVar5 + 1;
      iVar4 = iVar1;
    } while (uVar3 == 0);
  }
  uVar3 = uVar3 - 1;
  uVar2 = uVar3;
  iVar4 = iVar1;
  if (iVar5 != 0) {
    iVar4 = *(int *)(iVar1 + uVar3 * 4 + 0x60);
    while (iVar5 = iVar5 + -1, iVar5 != 0) {
      iVar4 = *(int *)(iVar4 + (uint)*(ushort *)(iVar4 + 0x5e) * 4 + 0x60);
    }
    uVar2 = (uint)*(ushort *)(iVar4 + 0x5e);
  }
  *(int *)(param_1 + 0x14) = iVar4;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x1c) = uVar2;
  return iVar1 + uVar3 * 8;
}

