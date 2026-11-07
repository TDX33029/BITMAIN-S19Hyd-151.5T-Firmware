// FUN_00d35cfc @ 00d35cfc size=132 calls_out=1 calls_in=3
// strings: 

void FUN_00d35cfc(int param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 0x3c);
  bVar3 = cVar1 == '\x03';
  if (bVar3) {
    cVar1 = *(char *)(param_1 + 0x39);
  }
  if (!bVar3 || cVar1 != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x2c) == '\x03') {
    piVar2 = *(int **)(param_1 + 0x28);
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar3 = (bool)hasExclusiveAccess(piVar2);
      if (bVar3) {
        *piVar2 = 0x84;
        goto LAB_00d35d74;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
  else if (*(char *)(param_1 + 0x2c) == '\0') {
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10));
  }
LAB_00d35d74:
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}

