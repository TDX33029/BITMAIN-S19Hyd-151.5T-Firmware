// FUN_01811820 @ 01811820 size=184 calls_out=4 calls_in=1
// strings: 

void FUN_01811820(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar5;
  
  FUN_017721f4();
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
  iVar3 = *(int *)(param_1 + 0xc);
  iVar5 = *(int *)(iVar3 + 0x18) + 1;
  iVar4 = *(int *)(iVar3 + 0x14);
  while (iVar5 = iVar5 + -1, iVar5 != 0) {
    FUN_0177a388(iVar4);
    iVar4 = iVar4 + 0xc0;
  }
  FUN_0132b958(*(undefined4 *)(iVar3 + 0x10),*(undefined4 *)(iVar3 + 0x14),8,0xc0,unaff_r4,unaff_r5)
  ;
  if (iVar3 != -1) {
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
  }
  return;
}

