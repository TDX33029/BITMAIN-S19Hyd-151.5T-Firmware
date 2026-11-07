// FUN_0072b788 @ 0072b788 size=316 calls_out=5 calls_in=1
// strings: 

void FUN_0072b788(int param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  
  cVar1 = *(char *)(param_1 + 0x15b);
  if (cVar1 == '\x03') {
    if ((*(uint *)(param_1 + 0x178) & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x17c));
    }
  }
  else {
    if (cVar1 != '\x04') {
      if (cVar1 != '\x05') {
        return;
      }
      FUN_0072ba94(param_1 + 0x160);
    }
    *(undefined1 *)(param_1 + 0x15a) = 0;
    if ((*(char *)(param_1 + 0x159) != '\0') && (*(undefined1 **)(param_1 + 0x170) != &DAT_3b9aca00)
       ) {
      if (*(char *)(param_1 + 0x17c) == '\0') {
        FUN_012ba508(param_1 + 0x168);
      }
      piVar3 = *(int **)(param_1 + 0x178);
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar2 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar2);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_012c1110(*(undefined4 *)(param_1 + 0x178));
      }
    }
    *(undefined1 *)(param_1 + 0x159) = 0;
  }
  if (*(int *)(param_1 + 0x11c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x118));
  }
  if (*(int *)(param_1 + 0x124) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x120));
  }
  if (*(int *)(param_1 + 300) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x128));
  }
  if (*(int *)(param_1 + 0x134) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x130));
  }
  if (*(int *)(param_1 + 0x13c) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x138));
  }
  if (*(char *)(param_1 + 0x158) != '\0') {
    FUN_00b50e5c(param_1);
  }
  *(undefined1 *)(param_1 + 0x158) = 0;
  return;
}

