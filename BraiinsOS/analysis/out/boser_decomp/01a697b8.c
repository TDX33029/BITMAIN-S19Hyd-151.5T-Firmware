// FUN_01a697b8 @ 01a697b8 size=160 calls_out=4 calls_in=5
// strings: 

void FUN_01a697b8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  FUN_008e0f4c();
  piVar2 = *(int **)(param_1 + 0xc);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar3 = *(int *)(param_1 + 0xc);
  FUN_01a704d8(*(undefined4 *)(iVar3 + 0x14),*(undefined4 *)(iVar3 + 0x18),0,0,unaff_r4,unaff_r5,
               unaff_r11,unaff_lr);
  FUN_0132b958(*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14),8,0xc0);
  if (iVar3 == -1) {
    return;
  }
  piVar2 = (int *)(iVar3 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar3);
    return;
  }
  return;
}

