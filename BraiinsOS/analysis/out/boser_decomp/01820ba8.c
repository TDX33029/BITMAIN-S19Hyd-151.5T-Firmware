// FUN_01820ba8 @ 01820ba8 size=212 calls_out=5 calls_in=2
// strings: 

void FUN_01820ba8(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int *piVar4;
  
  piVar4 = (int *)*param_1;
  FUN_01a64e38(piVar4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01381a18(*param_1);
  }
  piVar4 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar2 = param_1[1];
  FUN_0187baa8(*(undefined4 *)(iVar2 + 0x14),*(undefined4 *)(iVar2 + 0x18),0,0,unaff_r4,unaff_r5);
  FUN_01af7af8(*(undefined4 *)(iVar2 + 0x10),*(undefined4 *)(iVar2 + 0x14),8,0xc0);
  if (iVar2 == -1) {
    return;
  }
  piVar4 = (int *)(iVar2 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar2);
    return;
  }
  return;
}

