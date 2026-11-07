// FUN_01799830 @ 01799830 size=88 calls_out=3 calls_in=6
// strings: 

void FUN_01799830(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_01784e10(param_1 + 3);
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018bcb30(param_1[6]);
  }
  if (*param_1 == -0x80000000) {
    return;
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

