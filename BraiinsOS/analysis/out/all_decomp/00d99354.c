// FUN_00d99354 @ 00d99354 size=140 calls_out=1 calls_in=0
// strings: 

void FUN_00d99354(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x39) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x30) == '\x03') {
    piVar2 = *(int **)(param_1 + 0x2c);
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0x84;
        goto LAB_00d993c0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
  else if ((*(char *)(param_1 + 0x30) == '\0') && (*(int *)(param_1 + 0x10) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x14));
    *(undefined1 *)(param_1 + 0x38) = 0;
    return;
  }
LAB_00d993c0:
  *(undefined1 *)(param_1 + 0x38) = 0;
  return;
}

