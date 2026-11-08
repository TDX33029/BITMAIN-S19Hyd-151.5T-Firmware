// FUN_0141475c @ 0141475c size=152 calls_out=4 calls_in=0
// strings: 

void FUN_0141475c(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*(char *)(param_1 + 0x1d0) == '\0') {
    FUN_0140ed24(param_1);
    FUN_0145d5e0(param_1 + 0x68);
    return;
  }
  if (*(char *)(param_1 + 0x1d0) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x1cc) == '\x03') {
    iVar2 = param_1 + 0x130;
  }
  else {
    if (*(char *)(param_1 + 0x1cc) != '\0') goto LAB_014147b0;
    iVar2 = param_1 + 0x94;
  }
  FUN_01414854(iVar2);
LAB_014147b0:
  piVar3 = *(int **)(param_1 + 0x60);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0143daec(*(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 100));
  }
  *(undefined1 *)(param_1 + 0x1d2) = 0;
  FUN_0140ed24(param_1 + 0x30);
  return;
}

