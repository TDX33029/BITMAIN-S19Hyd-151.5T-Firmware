// FUN_0077e0c4 @ 0077e0c4 size=24 calls_out=1 calls_in=1
// strings: 

void FUN_0077e0c4(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  FUN_0077e418();
  piVar2 = *(int **)(param_1 + 0xa0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00795ca8(*(undefined4 *)(param_1 + 0xa0),*(undefined4 *)(param_1 + 0xa4),0,0,unaff_r4,
                 unaff_r5,unaff_r11,unaff_lr);
  }
  piVar2 = *(int **)(param_1 + 0xa8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00795ca8(*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),0,0,unaff_r4,
                 unaff_r5,unaff_r11,unaff_lr);
  }
  FUN_0074b190(param_1 + 0x20);
  piVar2 = *(int **)(param_1 + 0xb0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0xb0));
  }
  piVar2 = *(int **)(param_1 + 0xb4);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01a38efc(*(undefined4 *)(param_1 + 0xb4));
    return;
  }
  return;
}

