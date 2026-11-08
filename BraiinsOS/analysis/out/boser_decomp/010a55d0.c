// FUN_010a55d0 @ 010a55d0 size=84 calls_out=3 calls_in=0
// strings: 

void FUN_010a55d0(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[0xc];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fe74(param_1[0xc]);
  }
  if (*param_1 != -0x80000000) {
    FUN_019bb7e0(*param_1,param_1[1]);
  }
  FUN_00d34d28(param_1 + 3);
  return;
}

