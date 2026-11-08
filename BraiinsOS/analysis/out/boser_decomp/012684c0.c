// FUN_012684c0 @ 012684c0 size=264 calls_out=1 calls_in=2
// strings: 

int FUN_012684c0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  if (*(int *)(param_1 + 0x20) == 0) {
    return 0;
  }
  *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + -1;
  if (*(int *)(param_1 + 0x10) != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01c25334);
  }
  iVar1 = *(int *)(param_1 + 0x14);
  uVar5 = *(uint *)(param_1 + 0x1c);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x18);
    for (; uVar5 != 0; uVar5 = uVar5 - 1) {
      iVar1 = *(int *)(iVar1 + (uint)*(ushort *)(iVar1 + 0x5e) * 4 + 0x60);
    }
    uVar5 = (uint)*(ushort *)(iVar1 + 0x5e);
    *(undefined4 *)(param_1 + 0x10) = 1;
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x18);
  }
  iVar2 = iVar1;
  if (uVar5 == 0) {
    do {
      iVar1 = *(int *)(iVar2 + 0x58);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01c253d4);
      }
      uVar5 = (uint)*(ushort *)(iVar2 + 0x5c);
      iVar4 = iVar4 + 1;
      iVar2 = iVar1;
    } while (uVar5 == 0);
  }
  uVar5 = uVar5 - 1;
  uVar3 = uVar5;
  iVar2 = iVar1;
  if (iVar4 != 0) {
    iVar2 = iVar1 + uVar5 * 4;
    while( true ) {
      iVar2 = *(int *)(iVar2 + 0x60);
      iVar4 = iVar4 + -1;
      if (iVar4 == 0) break;
      iVar2 = iVar2 + (uint)*(ushort *)(iVar2 + 0x5e) * 4;
    }
    uVar3 = (uint)*(ushort *)(iVar2 + 0x5e);
  }
  *(int *)(param_1 + 0x14) = iVar2;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x1c) = uVar3;
  return iVar1 + uVar5 * 8;
}

