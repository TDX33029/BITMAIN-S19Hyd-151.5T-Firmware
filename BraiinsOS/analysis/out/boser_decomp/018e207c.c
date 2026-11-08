// FUN_018e207c @ 018e207c size=76 calls_out=1 calls_in=1
// strings: 

void FUN_018e207c(int param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = *(int **)(param_1 + 0x40);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x44));
  }
  *(undefined4 *)(param_1 + 0x40) = param_2;
  *(undefined **)(param_1 + 0x44) = &DAT_01d1b5cc;
  return;
}

