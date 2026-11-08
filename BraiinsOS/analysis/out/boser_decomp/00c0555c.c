// FUN_00c0555c @ 00c0555c size=68 calls_out=2 calls_in=5
// strings: 

void FUN_00c0555c(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[4];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0117fe74(param_1[4]);
  }
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

