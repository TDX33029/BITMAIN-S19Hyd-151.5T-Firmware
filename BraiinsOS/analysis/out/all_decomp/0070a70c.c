// FUN_0070a70c @ 0070a70c size=224 calls_out=5 calls_in=2
// strings: 

void FUN_0070a70c(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x1d4);
  if (cVar1 == '\0') {
    FUN_006ff914(param_1);
    return;
  }
  if (cVar1 == '\x03') {
    if (*(int *)(param_1 + 0x1f0) != 0) {
      FUN_006f5fbc(*(int *)(param_1 + 0x1f0),*(undefined4 *)(param_1 + 500),1);
    }
  }
  else {
    if (cVar1 != '\x04') {
      return;
    }
    FUN_0070a894(param_1 + 0x1f0);
  }
  if ((*(char *)(param_1 + 0x1d5) != '\0') && (*(undefined1 **)(param_1 + 0x1e0) != &DAT_3b9aca00))
  {
    if (*(char *)(param_1 + 0x1ec) == '\0') {
      FUN_012ba508(param_1 + 0x1d8);
    }
    piVar3 = *(int **)(param_1 + 0x1e8);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar2 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar2);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c1110(*(undefined4 *)(param_1 + 0x1e8));
    }
  }
  *(undefined1 *)(param_1 + 0x1d7) = 0;
  *(undefined1 *)(param_1 + 0x1d5) = 0;
  if (*(char *)(param_1 + 0x1d6) != '\0') {
    FUN_006ff914(param_1 + 0xd8);
  }
  *(undefined1 *)(param_1 + 0x1d6) = 0;
  return;
}

