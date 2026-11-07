// FUN_014b07cc @ 014b07cc size=528 calls_out=9 calls_in=1
// strings: 

void FUN_014b07cc(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x1a0)) {
  case 0:
    FUN_014a8834(param_1 + 0x154);
    piVar2 = *(int **)(param_1 + 0x144);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014afd70(*(undefined4 *)(param_1 + 0x144));
    }
    FUN_010a7080(param_1 + 0x98);
    FUN_006763fc(param_1 + 0x11c);
    if (*(int *)(param_1 + 0x148) == -0x80000000) {
      return;
    }
    FUN_019bb7e0(*(int *)(param_1 + 0x148),*(undefined4 *)(param_1 + 0x14c));
    return;
  default:
    return;
  case 3:
    goto switchD_014b07e8_caseD_3;
  case 4:
    cVar1 = *(char *)(param_1 + 0x1f9);
    if (cVar1 == '\0') {
      iVar3 = param_1 + 0x1c8;
LAB_014b0914:
      FUN_00e0febc(iVar3);
    }
    else {
      iVar3 = param_1 + 0x1a8;
      if (cVar1 == '\x03') {
        if (*(byte *)(param_1 + 0x230) - 3 < 2) {
          FUN_01139b38(*(undefined4 *)(param_1 + 0x234),*(undefined4 *)(param_1 + 0x238));
        }
LAB_014b08f8:
        FUN_0134aee0(*(undefined4 *)(param_1 + 0x1e4),*(undefined4 *)(param_1 + 0x1e8),4,8);
        goto LAB_014b0914;
      }
      if (cVar1 == '\x04') {
        if (*(byte *)(param_1 + 0x264) - 3 < 2) {
          FUN_01139b38(*(undefined4 *)(param_1 + 0x268),*(undefined4 *)(param_1 + 0x26c));
        }
        FUN_014ae850(param_1 + 0x208);
        *(undefined1 *)(param_1 + 0x1f8) = 0;
        goto LAB_014b08f8;
      }
    }
    *(undefined1 *)(param_1 + 0x19f) = 0;
    if (*(char *)(param_1 + 0x80) != '\a') {
      *(undefined1 *)(param_1 + 0x198) = 0;
    }
switchD_014b07e8_caseD_3:
    iVar3 = 0x199;
    *(undefined1 *)(param_1 + 0x198) = 0;
LAB_014b093c:
    *(undefined1 *)(param_1 + iVar3) = 0;
    *(undefined2 *)(param_1 + 0x19c) = 0;
    bVar4 = *(char *)(param_1 + 0x19a) != '\0';
    *(undefined1 *)(param_1 + 0x19e) = 0;
    iVar3 = 0;
    if (bVar4) {
      iVar3 = *(int *)(param_1 + 0x110);
    }
    if (bVar4 && iVar3 != -0x80000000) {
      FUN_019bb7e0(iVar3,*(undefined4 *)(param_1 + 0x114));
    }
    *(undefined1 *)(param_1 + 0x19a) = 0;
    FUN_006763fc(param_1 + 0xe8);
    FUN_010a7080(param_1);
    piVar2 = *(int **)(param_1 + 0xe4);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_014afd70(*(undefined4 *)(param_1 + 0xe4));
    }
    FUN_014a8834(param_1 + 0xa0);
    return;
  case 5:
    iVar3 = 0x19b;
    if (*(int *)(param_1 + 0x1a8) != 3) {
      if (*(int *)(param_1 + 0x1a8) == 2) {
        FUN_014ae850(param_1 + 0x1b0);
      }
      else {
        FUN_019bb7e0(*(undefined4 *)(param_1 + 0x1b8),*(undefined4 *)(param_1 + 0x1bc));
        FUN_019bb7e0(*(undefined4 *)(param_1 + 0x1c4),*(undefined4 *)(param_1 + 0x1c8));
        if (*(int *)(param_1 + 0x1d8) != -0x80000000) {
          FUN_019bb7e0(*(int *)(param_1 + 0x1d8),*(undefined4 *)(param_1 + 0x1dc));
          FUN_00e0febc(param_1 + 0x1e8);
        }
      }
    }
    goto LAB_014b093c;
  }
}

