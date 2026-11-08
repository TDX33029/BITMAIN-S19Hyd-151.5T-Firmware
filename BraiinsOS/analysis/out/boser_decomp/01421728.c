// FUN_01421728 @ 01421728 size=112 calls_out=3 calls_in=4
// strings: 

undefined4 FUN_01421728(int param_1)

{
  int iVar1;
  int *unaff_r6;
  bool bVar2;
  undefined8 uVar3;
  
  uVar3 = FUN_01429694();
  bVar2 = *(int *)(param_1 + 0x88) != 0;
  if (bVar2) {
    unaff_r6 = *(int **)(param_1 + 0x8c);
  }
  if (bVar2 && unaff_r6 != (int *)0x0) {
    FUN_014295d0(unaff_r6 + 2);
    DataMemoryBarrier(0xb);
    do {
      iVar1 = *unaff_r6;
      bVar2 = (bool)hasExclusiveAccess(unaff_r6);
    } while (!bVar2);
    *unaff_r6 = iVar1 + -1;
    if (iVar1 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01420f44(*(undefined4 *)(param_1 + 0x8c));
    }
  }
  *(undefined4 *)(param_1 + 0x88) = 1;
  *(int *)(param_1 + 0x8c) = (int)uVar3;
  return (int)((ulonglong)uVar3 >> 0x20);
}

