// FUN_01748cc8 @ 01748cc8 size=164 calls_out=5 calls_in=1
// strings: 

void FUN_01748cc8(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  
  FUN_017318a4(param_1 + 0xf0);
  FUN_01744d2c(param_1 + 0x70);
  piVar2 = *(int **)(param_1 + 0xb8);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018531c0(*(undefined4 *)(param_1 + 0xb8),*(undefined4 *)(param_1 + 0xbc),0,0,unaff_r4,
                 unaff_r5,unaff_r11,unaff_lr);
  }
  FUN_017044f0(param_1);
  piVar2 = *(int **)(param_1 + 0xe4);
  if (piVar2 == (int *)0x0) {
    return;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_017045b0(*(undefined4 *)(param_1 + 0xe4));
    return;
  }
  return;
}

