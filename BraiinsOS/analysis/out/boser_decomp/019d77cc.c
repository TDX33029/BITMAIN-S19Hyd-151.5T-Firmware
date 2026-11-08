// FUN_019d77cc @ 019d77cc size=116 calls_out=3 calls_in=1
// strings: 

void FUN_019d77cc(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*param_1 == 1) {
    FUN_019d7680(param_1 + 2);
    return;
  }
  if ((*param_1 != 0) || (param_1[2] == -0x80000000)) {
    return;
  }
  FUN_005f37c4();
  piVar2 = (int *)param_1[6];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_019ad05c(param_1[6]);
    return;
  }
  return;
}

