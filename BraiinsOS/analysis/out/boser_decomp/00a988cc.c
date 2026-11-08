// FUN_00a988cc @ 00a988cc size=208 calls_out=3 calls_in=0
// strings: 

void FUN_00a988cc(int param_1)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  int *piVar4;
  undefined4 unaff_lr;
  
  if (*(int *)(param_1 + 4) == 2) {
    FUN_006676f8(param_1 + 8);
  }
  switch(*(undefined4 *)(param_1 + 0x1c)) {
  case 0:
    piVar4 = *(int **)(param_1 + 0x20);
    DataMemoryBarrier(0xb);
    break;
  default:
    FUN_0185401c(*(undefined1 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    return;
  }
  do {
    iVar3 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar3 + -1;
  if (iVar3 != 1) {
    return;
  }
  DataMemoryBarrier(0xb);
  iVar3 = *(int *)(param_1 + 0x20);
  FUN_0185401c(*(undefined1 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 0xc),1,0,unaff_r4,unaff_r5,
               unaff_r11,unaff_lr);
  if (iVar3 == -1) {
    return;
  }
  piVar4 = (int *)(iVar3 + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(iVar3);
    return;
  }
  return;
}

