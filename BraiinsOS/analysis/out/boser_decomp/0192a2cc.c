// FUN_0192a2cc @ 0192a2cc size=140 calls_out=5 calls_in=3
// strings: 

void FUN_0192a2cc(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  piVar2 = (int *)param_1[0x39];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_018fa168(param_1[0x39]);
  }
  if (*param_1 != 2 || param_1[1] != 0) {
    FUN_0192a03c(param_1);
  }
  FUN_01925dc4(param_1 + 0x24);
  if (((char)param_1[0x34] == '\0') && (param_1[0x35] != -0x80000000)) {
    FUN_0134bd64(param_1[0x35],param_1[0x36]);
  }
  if ((undefined1 *)param_1[0x2b] == &DAT_80000018) {
    return;
  }
  FUN_0192a054(param_1 + 0x2b);
  return;
}

