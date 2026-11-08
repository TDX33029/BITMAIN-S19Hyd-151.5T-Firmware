// FUN_011e8238 @ 011e8238 size=212 calls_out=4 calls_in=3
// strings: 

void FUN_011e8238(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar5;
  
  piVar5 = (int *)*param_1;
  piVar2 = piVar5 + 0x12;
  do {
    iVar4 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar4 + -1;
  if (iVar4 == 1) {
    FUN_009d3860(piVar5 + 2);
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar4 + -1;
  if (iVar4 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar4 = *param_1;
  if (*(int *)(iVar4 + 0x34) != -0x80000000) {
    FUN_009d459c();
  }
  FUN_0132b958(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14),1,0x11,unaff_r4,unaff_r5)
  ;
  FUN_009d459c(iVar4 + 0x20);
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

