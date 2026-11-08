// FUN_01877c20 @ 01877c20 size=64 calls_out=1 calls_in=3
// strings: 

void FUN_01877c20(int param_1)

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
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar4 = *(int *)(param_1 + 0xc);
  FUN_0187baa8(*(undefined4 *)(iVar4 + 0x14),*(undefined4 *)(iVar4 + 0x18),0,0,unaff_r4,unaff_r5,
               unaff_r11,unaff_lr);
  FUN_01af7af8(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14),8,0xc0);
  if (iVar4 == -1) {
    return;
  }
  piVar2 = (int *)(iVar4 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar4);
    return;
  }
  return;
}

