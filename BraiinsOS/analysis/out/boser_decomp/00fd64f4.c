// FUN_00fd64f4 @ 00fd64f4 size=180 calls_out=5 calls_in=0
// strings: 

void FUN_00fd64f4(undefined4 *param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x1cd) == '\0') {
    piVar2 = (int *)param_1[0x1cb];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01182b58(param_1[0x1cb]);
    }
    FUN_00ecb43c(param_1 + 0x1bc);
    FUN_019bb7e0(*param_1,param_1[1]);
    FUN_00f86328(param_1 + 4);
    return;
  }
  if (*(char *)(param_1 + 0x1cd) != '\x03') {
    return;
  }
  FUN_00fd5a04(param_1 + 0x34);
  piVar2 = (int *)param_1[0x1cc];
  *(undefined1 *)((int)param_1 + 0x739) = 0;
  *(undefined4 *)((int)param_1 + 0x735) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(param_1[0x1cc]);
    return;
  }
  return;
}

