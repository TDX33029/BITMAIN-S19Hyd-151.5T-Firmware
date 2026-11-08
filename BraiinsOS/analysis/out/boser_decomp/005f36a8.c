// FUN_005f36a8 @ 005f36a8 size=152 calls_out=2 calls_in=6
// strings: 

void FUN_005f36a8(int param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  
  if (*(char *)(param_1 + 0x14) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x50);
    bVar3 = cVar1 == '\x03';
    if (bVar3) {
      cVar1 = *(char *)(param_1 + 0x4c);
    }
    if (bVar3 && cVar1 == '\x03') {
      FUN_00b71be0(param_1 + 0x38);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x14) != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x39) != '\x03') goto LAB_005f3728;
  piVar2 = *(int **)(param_1 + 0x30);
  if (*piVar2 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar3 = (bool)hasExclusiveAccess(piVar2);
    if (!bVar3) goto LAB_005f3714;
    *piVar2 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_005f3714:
    (**(code **)(piVar2[2] + 0x10))();
  }
  *(undefined1 *)(param_1 + 0x38) = 0;
LAB_005f3728:
  FUN_019bb7e0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
  return;
}

