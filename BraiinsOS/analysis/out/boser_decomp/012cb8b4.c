// FUN_012cb8b4 @ 012cb8b4 size=136 calls_out=2 calls_in=1
// strings: 

void FUN_012cb8b4(int param_1,int param_2,char *param_3)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (param_1 != 3 || param_2 != 0) {
    return;
  }
  piVar3 = (int *)(param_3 + 0x10);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  DataMemoryBarrier(0xb);
  if (iVar2 == 1) {
    param_3[0x27] = '\x03';
  }
  FUN_01650a90(param_3);
  if (*param_3 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_3);
      if (bVar1) {
        *param_3 = '\0';
        return;
      }
    } while (*param_3 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(param_3);
  return;
}

