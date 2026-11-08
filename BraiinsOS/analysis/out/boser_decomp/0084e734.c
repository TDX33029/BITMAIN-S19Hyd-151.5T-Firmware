// FUN_0084e734 @ 0084e734 size=236 calls_out=6 calls_in=2
// strings: 

void FUN_0084e734(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  cVar1 = *(char *)(param_1 + 8);
  if (cVar1 == '\x04') {
    FUN_0084e8d8(param_1 + 9);
    FUN_019f8c54(param_1[6],1);
  }
  else {
    if (cVar1 != '\x03') {
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_0084e814;
    }
    if (*(char *)(param_1 + 0x16) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x15);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x14);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0xc);
      }
    }
  }
  piVar2 = (int *)param_1[5];
  *(undefined1 *)((int)param_1 + 0x21) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a97c10(param_1[5]);
  }
  piVar2 = (int *)param_1[4];
  *(undefined1 *)((int)param_1 + 0x22) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00a969ac(param_1[4]);
  }
  *(undefined1 *)((int)param_1 + 0x23) = 0;
LAB_0084e814:
  FUN_019bb7e0(*param_1,param_1[1]);
  return;
}

