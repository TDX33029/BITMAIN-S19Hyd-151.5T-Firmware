// FUN_0188af90 @ 0188af90 size=88 calls_out=4 calls_in=3
// strings: 

void FUN_0188af90(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01886188();
  FUN_0178e1c4(param_1);
  piVar2 = *(int **)(param_1 + 0x18);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01852970(*(undefined4 *)(param_1 + 0x18));
    }
  }
  FUN_01823c8c(param_1 + 0x1c);
  return;
}

