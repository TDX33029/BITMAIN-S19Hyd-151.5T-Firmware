// FUN_009c9b0c @ 009c9b0c size=144 calls_out=2 calls_in=2
// strings: 

void FUN_009c9b0c(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  if (*(char *)((int)param_1 + 0x4d) != '\x03') {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x11);
  bVar4 = cVar1 == '\x03';
  if (bVar4) {
    cVar1 = *(char *)((int)param_1 + 0x21);
  }
  if (bVar4 && cVar1 == '\x04') {
    FUN_0163bdc0(param_1 + 9);
    if (param_1[0xd] != 0) {
      (**(code **)(param_1[0xd] + 0xc))(param_1[0xe]);
    }
    *(undefined1 *)(param_1 + 8) = 0;
  }
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007846b4(*param_1,param_1[1]);
  }
  *(undefined1 *)(param_1 + 0x13) = 0;
  return;
}

