// FUN_010e8dc0 @ 010e8dc0 size=120 calls_out=5 calls_in=1
// strings: 

void FUN_010e8dc0(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 0x4e8) == '\0') {
    FUN_010e8c70(param_1);
    piVar2 = *(int **)(param_1 + 0x4d0);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00711acc(*(undefined4 *)(param_1 + 0x4d0));
    }
    FUN_00b76614(param_1 + 200);
    FUN_005f3030(param_1 + 0x4d4);
    return;
  }
  if (*(char *)(param_1 + 0x4e8) == '\x03') {
    FUN_010e8e9c(param_1 + 0x108);
    return;
  }
  return;
}

