// FUN_009d6a28 @ 009d6a28 size=36 calls_out=1 calls_in=1
// strings: 

void FUN_009d6a28(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  
  if (*param_1 != 5) {
    FUN_009d6a4c();
    return;
  }
  if ((char)param_1[0xf] == '\x03') {
    return;
  }
  if ((char)param_1[0xf] == '\x02') {
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      FUN_01443048(iVar2,param_1[2]);
    }
    if (*(char *)((int)param_1 + 0x19) == '\x02') {
      return;
    }
    FUN_014323b0(param_1 + 3);
    return;
  }
  FUN_00a85efc();
  if (*(char *)((int)param_1 + 0x35) != '\x02') {
    FUN_009d65c0(param_1 + 7);
  }
  FUN_0177266c(param_1 + 1);
  if (param_1[0xe] + 1U < 2) {
    return;
  }
  piVar3 = (int *)(param_1[0xe] + 4);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678();
    return;
  }
  return;
}

