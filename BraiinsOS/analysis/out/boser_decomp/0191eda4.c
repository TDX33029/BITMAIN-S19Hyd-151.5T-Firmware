// FUN_0191eda4 @ 0191eda4 size=76 calls_out=3 calls_in=2
// strings: 

void FUN_0191eda4(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  FUN_0134bd64(*param_1,param_1[1]);
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa118(param_1[6]);
  }
  FUN_0161a99c(param_1 + 3);
  return;
}

