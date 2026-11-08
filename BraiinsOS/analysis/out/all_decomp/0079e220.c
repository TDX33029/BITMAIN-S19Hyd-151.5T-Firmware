// FUN_0079e220 @ 0079e220 size=104 calls_out=1 calls_in=1
// strings: 

void FUN_0079e220(double *param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  double in_d0;
  
  piVar2 = *(int **)(param_1 + 1);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078e66c(*(undefined4 *)(param_1 + 1));
    }
  }
  *(undefined4 *)(param_1 + 1) = param_2;
  *param_1 = in_d0 + *param_1;
  return;
}

