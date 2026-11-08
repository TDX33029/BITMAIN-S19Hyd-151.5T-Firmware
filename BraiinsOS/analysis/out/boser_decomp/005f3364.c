// FUN_005f3364 @ 005f3364 size=164 calls_out=1 calls_in=3
// strings: 

void FUN_005f3364(uint *param_1)

{
  char cVar1;
  uint uVar2;
  int *piVar3;
  bool bVar4;
  
  uVar2 = *param_1;
  bVar4 = uVar2 == 0;
  if (bVar4) {
    uVar2 = (uint)(byte)param_1[0x13];
  }
  if (!bVar4 || uVar2 != 3) {
    return;
  }
  if (*(char *)((int)param_1 + 0xd) == '\x04') {
    piVar3 = (int *)param_1[5];
    if (*piVar3 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar4 = (bool)hasExclusiveAccess(piVar3);
      if (bVar4) {
        *piVar3 = 0x84;
        goto LAB_005f33fc;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar3[2] + 0x10))();
  }
  else {
    if (*(char *)((int)param_1 + 0xd) != '\x03') {
      return;
    }
    if ((char)param_1[0x12] == '\x03') {
      cVar1 = (char)param_1[0x11];
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = (char)param_1[8];
      }
      if (bVar4 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 9);
      }
    }
  }
LAB_005f33fc:
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

