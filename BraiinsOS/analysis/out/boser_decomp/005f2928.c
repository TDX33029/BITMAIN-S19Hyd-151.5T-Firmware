// FUN_005f2928 @ 005f2928 size=640 calls_out=9 calls_in=9
// strings: 

void FUN_005f2928(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x214)) {
  case 3:
    if (*(char *)(param_1 + 0x24c) != '\x03') {
      return;
    }
    cVar1 = *(char *)(param_1 + 0x248);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x244);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_0193c3cc(param_1 + 0x224);
      return;
    }
    return;
  case 4:
    if (*(char *)(param_1 + 0x220) == '\x03') {
      piVar2 = *(int **)(param_1 + 0x21c);
      if (*piVar2 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar4 = (bool)hasExclusiveAccess(piVar2);
        if (bVar4) {
          *piVar2 = 0x84;
          goto LAB_005f2b64;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(*(int *)(*(int *)(param_1 + 0x21c) + 8) + 0x10))();
    }
    goto LAB_005f2b64;
  case 5:
    cVar1 = *(char *)(param_1 + 0x230);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x22c);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x224),*(undefined4 *)(param_1 + 0x228));
    }
    break;
  case 6:
    FUN_005f3e58(param_1 + 0x218);
    break;
  case 7:
    if (*(char *)(param_1 + 0x24c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x248);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x244);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x224);
      }
    }
    break;
  case 8:
    if (*(char *)(param_1 + 0x24c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x248);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x244);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x224);
      }
    }
    goto LAB_005f2ad8;
  case 9:
    if (*(char *)(param_1 + 0x24c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x248);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x244);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x224);
      }
    }
    goto LAB_005f2acc;
  case 10:
    if (*(char *)(param_1 + 0x260) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x25c);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 600);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x238);
      }
    }
    FUN_019bb7e0(*(undefined4 *)(param_1 + 0x218),*(undefined4 *)(param_1 + 0x21c));
    *(undefined1 *)(param_1 + 0x212) = 0;
    FUN_019f8c54(*(undefined4 *)(param_1 + 400),1);
LAB_005f2acc:
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x1fc),*(undefined4 *)(param_1 + 0x200));
LAB_005f2ad8:
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x180),1);
    break;
  case 0xb:
    if (*(char *)(param_1 + 0x224) == '\x03') {
      FUN_01139b38(*(undefined4 *)(param_1 + 0x21c),*(undefined4 *)(param_1 + 0x220));
    }
    break;
  case 0xc:
    if (*(char *)(param_1 + 0x280) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x27c);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0x278);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 600);
      }
    }
  case 0xe:
switchD_005f2948_caseD_e:
    piVar2 = *(int **)(param_1 + 0x208);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00a967c0(*(undefined4 *)(param_1 + 0x208));
    }
    break;
  case 0xd:
    FUN_005f3dfc(param_1 + 0x218);
    goto switchD_005f2948_caseD_e;
  default:
    return;
  }
  FUN_005f87f4(param_1 + 0x1a8);
  *(undefined1 *)(param_1 + 0x213) = 0;
LAB_005f2b64:
  if (*(char *)(param_1 + 0x211) != '\0') {
    FUN_005f0d40(param_1);
  }
  *(undefined1 *)(param_1 + 0x211) = 0;
  FUN_019f8c54(*(undefined4 *)(param_1 + 0x19c),*(undefined4 *)(param_1 + 0x1a0));
  return;
}

