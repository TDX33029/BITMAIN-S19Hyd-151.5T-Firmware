// FUN_0066c2cc @ 0066c2cc size=140 calls_out=1 calls_in=0
// strings: 

void FUN_0066c2cc(int param_1)

{
  bool bVar1;
  int *piVar2;
  
  if (*(char *)(param_1 + 0x31) != '\x03') {
    return;
  }
  if (*(char *)(param_1 + 0x24) == '\x03') {
    piVar2 = *(int **)(param_1 + 0x20);
    if (*piVar2 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar1 = (bool)hasExclusiveAccess(piVar2);
      if (bVar1) {
        *piVar2 = 0x84;
        goto LAB_0066c338;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar2[2] + 0x10))();
  }
  else if ((*(char *)(param_1 + 0x24) == '\0') && (*(int *)(param_1 + 4) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 8));
    *(undefined1 *)(param_1 + 0x30) = 0;
    return;
  }
LAB_0066c338:
  *(undefined1 *)(param_1 + 0x30) = 0;
  return;
}

