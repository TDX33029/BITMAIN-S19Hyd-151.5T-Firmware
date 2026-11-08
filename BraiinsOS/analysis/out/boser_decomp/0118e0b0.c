// FUN_0118e0b0 @ 0118e0b0 size=600 calls_out=11 calls_in=1
// strings: 

void FUN_0118e0b0(int param_1)

{
  char cVar1;
  undefined1 *puVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  bool bVar6;
  
  switch(*(undefined1 *)(param_1 + 0x31)) {
  case 0:
    puVar5 = (undefined4 *)(param_1 + 0x2c);
    piVar3 = (int *)*puVar5;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar6 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar6);
    *piVar3 = iVar4 + -1;
    goto LAB_0118e320;
  default:
    return;
  case 3:
    goto switchD_0118e0cc_caseD_3;
  case 4:
    if ((*(char *)(param_1 + 0x8e0) == '\x03') && (*(byte *)(param_1 + 0x60) - 3 < 5)) {
      switch(*(byte *)(param_1 + 0x60)) {
      case 3:
        FUN_0118e918(param_1 + 100);
        goto LAB_0118e2ec;
      case 4:
        if (*(char *)(param_1 + 0x5f8) == '\x03') {
          iVar4 = param_1 + 0x330;
LAB_0118e2d8:
          FUN_0118e9a0(iVar4);
        }
        else if (*(char *)(param_1 + 0x5f8) == '\0') {
          iVar4 = param_1 + 0x68;
          goto LAB_0118e2d8;
        }
        goto LAB_0118e2dc;
      case 5:
        if (*(char *)(param_1 + 0x5f8) == '\x03') {
          iVar4 = param_1 + 0x330;
LAB_0118e28c:
          FUN_0118e9a0(iVar4);
        }
        else if (*(char *)(param_1 + 0x5f8) == '\0') {
          iVar4 = param_1 + 0x68;
          goto LAB_0118e28c;
        }
        goto LAB_0118e2ac;
      case 6:
        if (*(char *)(param_1 + 0x5f8) == '\x03') {
          iVar4 = param_1 + 0x330;
        }
        else {
          if (*(char *)(param_1 + 0x5f8) != '\0') break;
          iVar4 = param_1 + 0x68;
        }
        FUN_0118e9a0(iVar4);
        break;
      case 7:
        if (*(char *)(param_1 + 0x5f8) == '\x03') {
          iVar4 = param_1 + 0x330;
LAB_0118e278:
          FUN_0118e9a0(iVar4);
        }
        else if (*(char *)(param_1 + 0x5f8) == '\0') {
          iVar4 = param_1 + 0x68;
          goto LAB_0118e278;
        }
        FUN_0118eb98(param_1 + 0x600);
      }
      *(undefined1 *)(param_1 + 0x5d) = 0;
      FUN_00a573e8(param_1 + 0x50);
LAB_0118e2ac:
      puVar2 = *(undefined1 **)(param_1 + 0x44);
      *(undefined1 *)(param_1 + 0x5e) = 0;
      if ((puVar2 != &DAT_80000008) && (-1 < (int)puVar2)) {
        FUN_019bb7e0(puVar2,*(undefined4 *)(param_1 + 0x48));
      }
LAB_0118e2dc:
      *(undefined1 *)(param_1 + 0x5c) = 0;
      FUN_010e7e10(param_1 + 0x38);
LAB_0118e2ec:
      *(undefined1 *)(param_1 + 0x5f) = 0;
    }
    goto LAB_0118e2f4;
  case 5:
    if (*(char *)(param_1 + 0x70) == '\x03') {
      cVar1 = *(char *)(param_1 + 0x6c);
      bVar6 = cVar1 == '\x03';
      if (bVar6) {
        cVar1 = *(char *)(param_1 + 0x48);
      }
      if (bVar6 && cVar1 == '\x04') {
        FUN_0193c3cc(param_1 + 0x4c);
      }
    }
    break;
  case 6:
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      FUN_00ba6dc4(param_1 + 0x58);
      if (-1 < *(int *)(param_1 + 0x4c)) {
        FUN_019bb7e0(*(int *)(param_1 + 0x4c),*(undefined4 *)(param_1 + 0x50));
      }
      *(undefined1 *)(param_1 + 0xbd) = 0;
    }
    else if ((*(char *)(param_1 + 0xbc) == '\0') && (-1 < *(int *)(param_1 + 0x38))) {
      FUN_019bb7e0(*(int *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x3c));
    }
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x28),1);
  }
  if ((*(char *)(param_1 + 0x30) != '\0') && (-1 < *(int *)(param_1 + 0x1c))) {
    FUN_019bb7e0(*(int *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  }
LAB_0118e2f4:
  *(undefined1 *)(param_1 + 0x30) = 0;
switchD_0118e0cc_caseD_3:
  FUN_00668c84(*(undefined4 *)(param_1 + 0x10));
  puVar5 = (undefined4 *)(param_1 + 0x18);
  piVar3 = (int *)*puVar5;
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *piVar3;
    bVar6 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar6);
  *piVar3 = iVar4 + -1;
LAB_0118e320:
  if (iVar4 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0121d018(*puVar5);
    return;
  }
  return;
}

