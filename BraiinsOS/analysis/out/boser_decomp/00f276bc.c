// FUN_00f276bc @ 00f276bc size=184 calls_out=3 calls_in=2
// strings: 

void FUN_00f276bc(int param_1)

{
  char cVar1;
  int *piVar2;
  bool bVar3;
  
  cVar1 = *(char *)(param_1 + 0x18);
  if (cVar1 == '\x03') {
    if (*(char *)(param_1 + 0x50) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x4c);
      bVar3 = cVar1 == '\x03';
      if (bVar3) {
        cVar1 = *(char *)(param_1 + 0x48);
      }
      if (bVar3 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x28);
        return;
      }
    }
    return;
  }
  if (cVar1 == '\x04') {
    if (*(char *)(param_1 + 0x24) == '\x03') {
      piVar2 = *(int **)(param_1 + 0x20);
      if (*piVar2 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar3 = (bool)hasExclusiveAccess(piVar2);
        if (bVar3) {
          *piVar2 = 0x84;
          goto LAB_00f27758;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(*(int *)(*(int *)(param_1 + 0x20) + 8) + 0x10))();
    }
  }
  else {
    if (cVar1 != '\x05') {
      return;
    }
    FUN_005f49bc(param_1 + 0x20);
  }
LAB_00f27758:
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x10),1);
  return;
}

