// FUN_00e18a24 @ 00e18a24 size=608 calls_out=11 calls_in=1
// strings: 

void FUN_00e18a24(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;
  
  switch(*(undefined1 *)(param_1 + 0x85)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x74);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar4 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar4);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00b5ef20(*(undefined4 *)(param_1 + 0x74));
      return;
    }
    return;
  default:
    goto switchD_00e18a40_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xb8);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xb4);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x94);
      }
    }
    break;
  case 4:
    if (*(char *)(param_1 + 0xc0) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xbc);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xb8);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x98);
      }
    }
    goto LAB_00e18bb4;
  case 5:
    FUN_00e1cad8(param_1 + 0x88);
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x10),1);
LAB_00e18bb4:
    FUN_019f8c54(*(undefined4 *)(param_1 + 8),1);
    break;
  case 6:
    if (*(char *)(param_1 + 0xdc) == '\x03') {
      FUN_00e1003c(param_1 + 0x88);
    }
    break;
  case 7:
    cVar1 = *(char *)(param_1 + 0x150);
    bVar4 = cVar1 == '\x03';
    if (bVar4) {
      cVar1 = *(char *)(param_1 + 0x14c);
    }
    if (bVar4 && cVar1 == '\x03') {
      FUN_00df984c(param_1 + 0x90);
    }
    break;
  case 8:
    FUN_00a7389c(param_1 + 0x88);
    goto LAB_00e18c5c;
  case 9:
    FUN_00e1ce80(param_1 + 0x88);
    goto LAB_00e18c54;
  case 10:
    if (*(char *)(param_1 + 0xc0) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xbc);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xb8);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x98);
      }
    }
    goto LAB_00e18c54;
  case 0xb:
    if (*(char *)(param_1 + 0xc0) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xbc);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xb8);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x98);
      }
    }
    goto LAB_00e18c54;
  case 0xc:
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xb8);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xb4);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x94);
      }
    }
    goto LAB_00e18c54;
  case 0xd:
    if (*(char *)(param_1 + 0xbc) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xb8);
      bVar4 = cVar1 == '\x03';
      if (bVar4) {
        cVar1 = *(char *)(param_1 + 0xb4);
      }
      if (bVar4 && cVar1 == '\x03') {
        FUN_0193c3cc(param_1 + 0x94);
      }
    }
    goto LAB_00e18b6c;
  case 0xe:
    FUN_00e1d360(param_1 + 0x88);
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x20),1);
LAB_00e18b6c:
    FUN_019f8c54(*(undefined4 *)(param_1 + 0x28),1);
LAB_00e18c54:
    FUN_00a573e8(param_1 + 0x58);
LAB_00e18c5c:
    FUN_0084ec48(param_1 + 0x4c);
    break;
  case 0xf:
    if (*(char *)(param_1 + 0xdc) == '\x03') {
      FUN_00e1003c(param_1 + 0x88);
    }
  }
  piVar2 = *(int **)(param_1 + 0x3c);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar4 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar4);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00b5ef20(*(undefined4 *)(param_1 + 0x3c));
  }
  *(undefined1 *)(param_1 + 0x84) = 0;
switchD_00e18a40_caseD_1:
  return;
}

