// FUN_00d31fd8 @ 00d31fd8 size=212 calls_out=4 calls_in=4
// strings: 

void FUN_00d31fd8(int *param_1)

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
    FUN_01203574(piVar5 + 2);
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
    FUN_009d4488();
  }
  FUN_0132b958(*(undefined4 *)(iVar4 + 0x10),*(undefined4 *)(iVar4 + 0x14),4,0x28,unaff_r4,unaff_r5)
  ;
  FUN_009d4488(iVar4 + 0x20);
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

