// FUN_00fd5c28 @ 00fd5c28 size=844 calls_out=9 calls_in=1
// strings: 

void FUN_00fd5c28(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  bool bVar7;
  
  cVar1 = *(char *)(param_1 + 0xec);
  if (cVar1 == '\0') {
    FUN_00fd5a90(param_1);
    FUN_00f86328(param_1 + 0x18);
    return;
  }
  if (cVar1 == '\x03') {
    switch(*(undefined1 *)(param_1 + 0x345)) {
    case 0:
      FUN_00fd5a90(param_1 + 0x108);
      FUN_00f86328(param_1 + 0x120);
      piVar2 = *(int **)(param_1 + 0x328);
      DataMemoryBarrier(0xb);
      do {
        iVar3 = *piVar2;
        bVar7 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar7);
      *piVar2 = iVar3 + -1;
      if (iVar3 == 1) {
        DataMemoryBarrier(0xb);
        FUN_006c8c18(*(undefined4 *)(param_1 + 0x328));
        return;
      }
    default:
      return;
    case 3:
      if (*(char *)(param_1 + 0x4f9) == '\x03') {
        if (*(char *)(param_1 + 0x425) == '\x03') {
          puVar6 = *(undefined4 **)(param_1 + 0x354);
          uVar5 = *(undefined4 *)(param_1 + 0x350);
          pcVar4 = (code *)*puVar6;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar5);
          }
          if (puVar6[1] != 0) {
            thunk_FUN_01be4678(uVar5);
          }
          *(undefined1 *)(param_1 + 0x424) = 0;
        }
        else if (*(char *)(param_1 + 0x425) == '\0') {
          FUN_00f86328(param_1 + 0x360);
        }
        *(undefined1 *)(param_1 + 0x4f8) = 0;
      }
      else if (*(char *)(param_1 + 0x4f9) == '\0') {
        FUN_00f86328(param_1 + 0x428);
      }
      goto LAB_00fd5dc8;
    case 4:
      cVar1 = *(char *)(param_1 + 0x3a4);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 0x398);
      }
      if (bVar7 && cVar1 == '\x03') {
        puVar6 = *(undefined4 **)(param_1 + 0x3a0);
        uVar5 = *(undefined4 *)(param_1 + 0x39c);
        pcVar4 = (code *)*puVar6;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar5);
        }
        if (puVar6[1] != 0) {
          thunk_FUN_01be4678(uVar5);
        }
      }
      if ((*(char *)(param_1 + 0x410) == '\0') && (*(int *)(param_1 + 0x3b8) != -0x7fffffff)) {
        FUN_00f863d4(param_1 + 0x3b0);
      }
      break;
    case 5:
      cVar1 = *(char *)(param_1 + 0x3a8);
      bVar7 = cVar1 == '\x03';
      if (bVar7) {
        cVar1 = *(char *)(param_1 + 0x39c);
      }
      if (bVar7 && cVar1 == '\x03') {
        puVar6 = *(undefined4 **)(param_1 + 0x3a4);
        uVar5 = *(undefined4 *)(param_1 + 0x3a0);
        pcVar4 = (code *)*puVar6;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar5);
        }
        if (puVar6[1] != 0) {
          thunk_FUN_01be4678(uVar5);
        }
      }
      FUN_00f863d4(param_1 + 0x2d0);
    }
    piVar2 = *(int **)(param_1 + 0x340);
    *(undefined1 *)(param_1 + 0x349) = 0;
    *(undefined2 *)(param_1 + 0x347) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_006c8c18(*(undefined4 *)(param_1 + 0x340));
    }
    *(undefined1 *)(param_1 + 0x34a) = 0;
    FUN_00f86328(param_1 + 0x210);
LAB_00fd5dc8:
    piVar2 = *(int **)(param_1 + 0x334);
    *(undefined2 *)(param_1 + 0x34b) = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_006c8c18(*(undefined4 *)(param_1 + 0x334));
    }
    *(undefined1 *)(param_1 + 0x34d) = 0;
    FUN_00fd5a90(param_1 + 0x1e0);
    *(undefined1 *)(param_1 + 0x34e) = 0;
    return;
  }
  if (cVar1 != '\x04') {
    return;
  }
  if (*(char *)(param_1 + 0x1b9) != '\x03') goto LAB_00fd5ea8;
  if (*(char *)(param_1 + 0x198) == '\x03') {
    cVar1 = *(char *)(param_1 + 0x18e);
    if (cVar1 == '\x04') {
      FUN_01139b38(*(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194));
    }
    else {
      if (cVar1 != '\x03') {
        if ((cVar1 == '\0') && (FUN_00fd6614(param_1 + 0x150), *(int *)(param_1 + 0x170) != 0)) {
          FUN_01aae24c();
        }
        goto LAB_00fd5ea0;
      }
      FUN_01139b38(*(undefined4 *)(param_1 + 400),*(undefined4 *)(param_1 + 0x194));
    }
    *(undefined2 *)(param_1 + 0x18c) = 0;
  }
  else if (*(char *)(param_1 + 0x198) == '\0') {
    FUN_00fd6614(param_1 + 0x104);
  }
LAB_00fd5ea0:
  *(undefined1 *)(param_1 + 0x1b8) = 0;
LAB_00fd5ea8:
  piVar2 = *(int **)(param_1 + 0xf0);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar7 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar7);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_011827d4(*(undefined4 *)(param_1 + 0xf0));
    return;
  }
  return;
}

