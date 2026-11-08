// FUN_00c87b78 @ 00c87b78 size=2996 calls_out=23 calls_in=1
// strings: 

void FUN_00c87b78(int *param_1)

{
  byte bVar1;
  int *piVar2;
  int *piVar3;
  char cVar4;
  int iVar5;
  code *pcVar6;
  int iVar7;
  int *piVar8;
  undefined4 *puVar9;
  bool bVar10;
  
  if (*param_1 != 0) {
    if (*param_1 != 1) {
      return;
    }
    iVar7 = param_1[2];
    if (iVar7 == 0) {
      bVar1 = *(byte *)(param_1 + 4);
      cVar4 = bVar1 - 4;
      if (bVar1 < 4) {
        cVar4 = '\x04';
      }
      iVar5 = 0xc;
      if (cVar4 != '\x05') {
        if (cVar4 != '\x04') {
          return;
        }
        if (bVar1 != 3) {
          return;
        }
      }
    }
    else {
      iVar5 = 4;
      if (iVar7 != 2) {
        return;
      }
    }
                    /* WARNING: Could not recover jumptable at 0x00c87c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)**(undefined4 **)((int)(param_1 + 2) + iVar5))();
    return;
  }
  cVar4 = (char)param_1[0x14];
  if (cVar4 == '\0') {
    piVar3 = param_1 + 2;
    if (*piVar3 != 0) {
      FUN_016af0b0(piVar3);
      piVar2 = (int *)*piVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar2;
        bVar10 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar10);
      *piVar2 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar3);
      }
    }
    param_1 = param_1 + 0xe;
    FUN_016af0b0(param_1);
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar3;
      bVar10 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar10);
    *piVar3 = iVar7 + -1;
    goto LAB_00c88428;
  }
  if (cVar4 != '\x03') {
    if (cVar4 != '\x04') {
      return;
    }
    if ((char)param_1[0x3d] == '\x03') {
      FUN_00b9e31c(param_1 + 0x24);
    }
    bVar1 = *(byte *)(param_1 + 0x16);
    cVar4 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar4 = '\x04';
    }
    if (cVar4 == '\x04') {
      if (bVar1 == 3) goto LAB_00c87d8c;
    }
    else if (cVar4 == '\x05') {
LAB_00c87d8c:
      (*(code *)**(undefined4 **)param_1[0x17])();
    }
    *(undefined1 *)((int)param_1 + 0x4e) = 0;
    goto switchD_00c87c60_caseD_1;
  }
  if (8 < *(byte *)((int)param_1 + 0x26f)) goto switchD_00c87c60_caseD_1;
  switch(*(byte *)((int)param_1 + 0x26f)) {
  case 0:
    piVar3 = param_1 + 0x8a;
    if (*piVar3 != 0) {
      FUN_016af0b0(piVar3);
      piVar2 = (int *)*piVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar2;
        bVar10 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar10);
      *piVar2 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar3);
      }
    }
    piVar2 = param_1 + 0x94;
    FUN_016af0b0(piVar2);
    piVar3 = (int *)*piVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar3;
      bVar10 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar10);
    *piVar3 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar2);
    }
  default:
    goto switchD_00c87c60_caseD_1;
  case 3:
    if (param_1[0xa0] != 0) {
      FUN_00c8204c(param_1[0xa0],param_1[0xa1],1);
    }
    goto LAB_00c8830c;
  case 4:
    if ((char)param_1[0x10a] == '\0') {
      FUN_00ac89dc(param_1 + 0x9e);
      if (param_1[0x101] != 0) {
        FUN_00d424fc();
        piVar3 = (int *)param_1[0x101];
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar3;
          bVar10 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar10);
        *piVar3 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f23b4(param_1[0x101]);
        }
      }
      piVar3 = (int *)param_1[0x104];
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar3;
        bVar10 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar10);
      *piVar3 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f1a50(param_1[0x104]);
      }
      piVar3 = (int *)param_1[0x105];
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar3;
        bVar10 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar10);
      *piVar3 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f2e10(param_1[0x105]);
      }
      piVar3 = param_1 + 0x102;
      if (*piVar3 != 0) {
        FUN_016af0b0(piVar3);
        piVar2 = (int *)*piVar3;
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar2;
          bVar10 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar10);
        *piVar2 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_008f4138(*piVar3);
        }
      }
      FUN_00ac8b80(param_1 + 0xf6);
      if (param_1[0x108] != 0) {
        FUN_00d424fc();
        piVar3 = (int *)param_1[0x108];
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar3;
          bVar10 = (bool)hasExclusiveAccess(piVar3);
        } while (!bVar10);
        *piVar3 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078459c(param_1[0x108]);
        }
      }
      piVar3 = (int *)param_1[0x106];
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar3;
        bVar10 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar10);
      *piVar3 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00784894(param_1[0x106]);
      }
    }
    goto LAB_00c882fc;
  case 5:
    switch(*(undefined1 *)((int)param_1 + 0x292)) {
    case 0:
      piVar2 = param_1 + 0x9e;
      FUN_016af0b0(piVar2);
      piVar3 = (int *)*piVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar3;
        bVar10 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar10);
      *piVar3 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar2);
      }
    default:
      goto switchD_00c87fd8_caseD_1;
    case 3:
      puVar9 = (undefined4 *)param_1[0xa8];
      iVar7 = param_1[0xa7];
      if ((code *)*puVar9 != (code *)0x0) {
        (*(code *)*puVar9)(iVar7);
      }
      goto LAB_00c881f0;
    case 4:
      if (0x11 < *(byte *)((int)param_1 + 0x2b7)) goto switchD_00c8813c_caseD_1;
      break;
    case 5:
      puVar9 = (undefined4 *)param_1[0xa6];
      iVar7 = param_1[0xa5];
      if ((code *)*puVar9 != (code *)0x0) {
        (*(code *)*puVar9)(iVar7);
      }
LAB_00c881f0:
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(iVar7);
      }
      goto switchD_00c8813c_caseD_1;
    case 6:
      if ((char)param_1[0xb8] == '\x03') {
        if (*(char *)((int)param_1 + 0x2a1) == '\x04') {
          puVar9 = (undefined4 *)param_1[0xaa];
          iVar7 = param_1[0xa9];
          pcVar6 = (code *)*puVar9;
          if (pcVar6 != (code *)0x0) {
            (*pcVar6)(iVar7);
          }
          if (puVar9[1] != 0) {
            thunk_FUN_016d3fb4(iVar7);
          }
          FUN_0163af08(param_1[0xa6],1);
        }
        else {
          if (*(char *)((int)param_1 + 0x2a1) != '\x03') goto switchD_00c8813c_caseD_1;
          if ((char)param_1[0xb7] == '\x03') {
            cVar4 = (char)param_1[0xb6];
            bVar10 = cVar4 == '\x03';
            if (bVar10) {
              cVar4 = (char)param_1[0xad];
            }
            if (bVar10 && cVar4 == '\x04') {
              FUN_0163c790(param_1 + 0xae);
              if (param_1[0xaf] != 0) {
                (**(code **)(param_1[0xaf] + 0xc))(param_1[0xb0]);
              }
            }
          }
        }
        *(undefined1 *)(param_1 + 0xa8) = 0;
      }
      goto switchD_00c8813c_caseD_1;
    }
    break;
  case 6:
    FUN_00ac92b8(param_1 + 0xa4);
    bVar1 = *(byte *)(param_1 + 0x9e);
    cVar4 = bVar1 - 4;
    if (bVar1 < 4) {
      cVar4 = '\x04';
    }
    if (cVar4 == '\x04') {
      if (bVar1 == 3) goto LAB_00c880ac;
    }
    else if (cVar4 == '\x05') {
LAB_00c880ac:
      (*(code *)**(undefined4 **)param_1[0x9f])();
    }
    *(undefined1 *)((int)param_1 + 0x26a) = 0;
    if ((char)param_1[0x9b] == '\0') goto LAB_00c882fc;
    goto LAB_00c882f4;
  case 7:
    cVar4 = (char)param_1[0xa0];
    if (cVar4 == '\0') {
      piVar3 = param_1 + 0x9e;
      piVar2 = (int *)*piVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar2;
        bVar10 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar10);
      *piVar2 = iVar7 + -1;
    }
    else {
      if (cVar4 == '\x03') {
        cVar4 = (char)param_1[0xb4];
        if (cVar4 == '\x03') {
          FUN_00c865f8(param_1 + 0xa5);
          goto LAB_00c88274;
        }
LAB_00c880e0:
        if ((cVar4 == '\0') && (param_1[0xa1] != 0)) {
          thunk_FUN_016d3fb4(param_1[0xa2]);
        }
      }
      else {
        if (cVar4 != '\x04') goto LAB_00c882b0;
        cVar4 = (char)param_1[0xb4];
        if (cVar4 != '\x03') goto LAB_00c880e0;
        FUN_00c865f8(param_1 + 0xa5);
LAB_00c88274:
        *(undefined1 *)((int)param_1 + 0x2d1) = 0;
      }
      piVar3 = param_1 + 0x9f;
      piVar2 = (int *)*piVar3;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar2;
        bVar10 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar10);
      *piVar2 = iVar7 + -1;
    }
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f3984(*piVar3);
    }
    goto LAB_00c882b0;
  case 8:
    if ((char)param_1[0xca] == '\0') {
      piVar2 = param_1 + 0x9e;
      FUN_016af0b0(piVar2);
      piVar3 = (int *)*piVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar3;
        bVar10 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar10);
      *piVar3 = iVar7 + -1;
    }
    else {
      if ((char)param_1[0xca] != '\x03') goto LAB_00c882b0;
      if ((char)param_1[199] == '\x03') {
        FUN_00b9e31c(param_1 + 0xae);
      }
      piVar2 = param_1 + 0xa0;
      FUN_016af0b0(piVar2);
      piVar3 = (int *)*piVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar3;
        bVar10 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar10);
      *piVar3 = iVar7 + -1;
    }
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar2);
    }
LAB_00c882b0:
    piVar3 = (int *)param_1[0x98];
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar3;
      bVar10 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar10);
    *piVar3 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f3984(param_1[0x98]);
    }
    *(undefined1 *)((int)param_1 + 0x26e) = 0;
switchD_00c87fd8_caseD_1:
    cVar4 = (char)param_1[0x9b];
    goto joined_r0x00c88780;
  }
  piVar3 = param_1 + 0xa6;
  switch(*(byte *)((int)param_1 + 0x2b7)) {
  case 0:
    piVar3 = param_1 + 0xa8;
    FUN_016af0b0(piVar3);
    piVar2 = (int *)*piVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar2;
      bVar10 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar10);
    *piVar2 = iVar7 + -1;
    goto LAB_00c88714;
  default:
    goto switchD_00c8813c_caseD_1;
  case 3:
    puVar9 = (undefined4 *)param_1[0xb0];
    iVar7 = param_1[0xaf];
    if ((code *)*puVar9 != (code *)0x0) {
      (*(code *)*puVar9)(iVar7);
    }
    goto LAB_00c886dc;
  case 4:
    if ((char)param_1[0xd1] == '\x03') {
      FUN_00b9e31c(param_1 + 0xb8);
    }
    break;
  case 5:
    cVar4 = *(char *)((int)param_1 + 0x2e1);
    bVar10 = cVar4 == '\x03';
    if (bVar10) {
      cVar4 = (char)param_1[0xb5];
    }
    if (bVar10 && cVar4 == '\x03') {
      piVar8 = param_1 + 0xb3;
      FUN_016af0b0(piVar8);
      piVar2 = (int *)*piVar8;
      DataMemoryBarrier(0xb);
      do {
        iVar7 = *piVar2;
        bVar10 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar10);
      *piVar2 = iVar7 + -1;
      if (iVar7 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f4138(*piVar8);
      }
    }
    break;
  case 6:
    cVar4 = (char)param_1[0xd7];
    bVar10 = cVar4 == '\x03';
    if (bVar10) {
      cVar4 = (char)param_1[0xd1];
    }
    if (bVar10 && cVar4 == '\x03') {
      FUN_00b9e31c(param_1 + 0xb8);
    }
    break;
  case 7:
    puVar9 = (undefined4 *)param_1[0xb0];
    iVar7 = param_1[0xaf];
    if ((code *)*puVar9 != (code *)0x0) {
      (*(code *)*puVar9)(iVar7);
    }
    goto LAB_00c886dc;
  case 8:
    if (param_1[0xaf] != 0) {
      FUN_00c8204c(param_1[0xaf],param_1[0xb0],1);
    }
    goto LAB_00c885f8;
  case 9:
    puVar9 = (undefined4 *)param_1[0xb0];
    iVar7 = param_1[0xaf];
    pcVar6 = (code *)*puVar9;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(iVar7);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_016d3fb4(iVar7);
    }
    FUN_00c822ec(param_1[0xab]);
LAB_00c885f8:
    *(undefined1 *)((int)param_1 + 0x2b6) = 0;
    break;
  case 10:
    if ((char)param_1[0x122] == '\x03') {
      if ((char)param_1[0x11d] == '\x03') {
        FUN_00b9e31c(param_1 + 0x104);
      }
      FUN_00ac8e24(param_1 + 0xc0);
    }
    break;
  case 0xb:
    puVar9 = (undefined4 *)param_1[0xb0];
    iVar7 = param_1[0xaf];
    if ((code *)*puVar9 != (code *)0x0) {
      (*(code *)*puVar9)(iVar7);
    }
LAB_00c886dc:
    if (puVar9[1] != 0) {
LAB_00c886ec:
      thunk_FUN_016d3fb4(iVar7);
    }
    break;
  case 0xc:
    if ((char)param_1[0xd1] == '\x03') {
      FUN_00b9e31c(param_1 + 0xb8);
    }
    break;
  case 0xd:
    puVar9 = (undefined4 *)param_1[0xc5];
    iVar7 = param_1[0xc4];
    pcVar6 = (code *)*puVar9;
    if (pcVar6 != (code *)0x0) {
      (*pcVar6)(iVar7);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_016d3fb4(iVar7);
    }
    FUN_00a07b4c(param_1 + 0xb0);
    break;
  case 0xe:
    cVar4 = (char)param_1[0xc2];
    bVar10 = cVar4 == '\x03';
    if (bVar10) {
      cVar4 = (char)param_1[0xc1];
    }
    if (bVar10 && cVar4 == '\x03') {
      cVar4 = (char)param_1[0xc0];
      bVar10 = cVar4 == '\x03';
      if (bVar10) {
        cVar4 = (char)param_1[0xb7];
      }
      if (bVar10 && cVar4 == '\x04') {
        FUN_0163c790(param_1 + 0xb8);
        if (param_1[0xb9] != 0) {
          (**(code **)(param_1[0xb9] + 0xc))(param_1[0xba]);
        }
      }
    }
    break;
  case 0xf:
    if (param_1[0xaf] != 0) {
      FUN_00c8204c(param_1[0xaf],param_1[0xb0],1);
    }
    break;
  case 0x10:
    FUN_00c837a8(param_1 + 0xb2);
    if (param_1[0xaf] == 0) break;
    iVar7 = param_1[0xb0];
    goto LAB_00c886ec;
  case 0x11:
    if ((char)param_1[0xb5] == '\x03') {
      puVar9 = (undefined4 *)param_1[0xb4];
      iVar7 = param_1[0xb3];
      if ((code *)*puVar9 != (code *)0x0) {
        (*(code *)*puVar9)(iVar7);
      }
      goto LAB_00c886dc;
    }
  }
  FUN_016af0b0(piVar3);
  piVar2 = (int *)*piVar3;
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar2;
    bVar10 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar10);
  *piVar2 = iVar7 + -1;
LAB_00c88714:
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*piVar3);
  }
switchD_00c8813c_caseD_1:
  if (*(char *)((int)param_1 + 0x291) != '\0') {
    piVar2 = param_1 + 0xa5;
    FUN_016af0b0(piVar2);
    piVar3 = (int *)*piVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar3;
      bVar10 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar10);
    *piVar3 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar2);
    }
  }
  *(undefined1 *)((int)param_1 + 0x291) = 0;
  cVar4 = (char)param_1[0x9b];
joined_r0x00c88780:
  if (cVar4 != '\0') {
LAB_00c882f4:
    FUN_00ac94f4(param_1 + 0x16);
  }
LAB_00c882fc:
  *(undefined1 *)(param_1 + 0x9b) = 0;
  FUN_00c822ec(param_1[0x97]);
LAB_00c8830c:
  if (*(char *)((int)param_1 + 0x26d) != '\0') {
    piVar2 = param_1 + 0x8c;
    FUN_016af0b0(piVar2);
    piVar3 = (int *)*piVar2;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar3;
      bVar10 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar10);
    *piVar3 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar2);
    }
  }
  *(undefined1 *)((int)param_1 + 0x26d) = 0;
  if ((*(char *)((int)param_1 + 0x26b) != '\0') && (piVar3 = param_1 + 0x9e, *piVar3 != 0)) {
    FUN_016af0b0(piVar3);
    piVar2 = (int *)*piVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar2;
      bVar10 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar10);
    *piVar2 = iVar7 + -1;
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*piVar3);
    }
  }
  *(undefined1 *)((int)param_1 + 0x26b) = 0;
switchD_00c87c60_caseD_1:
  piVar2 = param_1 + 6;
  *(undefined1 *)((int)param_1 + 0x4f) = 0;
  FUN_016af0b0(piVar2);
  piVar3 = (int *)*piVar2;
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar3;
    bVar10 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar10);
  *piVar3 = iVar7 + -1;
  if (iVar7 == 1) {
    DataMemoryBarrier(0xb);
    FUN_008f4138(*piVar2);
  }
  param_1 = param_1 + 4;
  if (*param_1 != 0) {
    FUN_016af0b0(param_1);
    piVar3 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar7 = *piVar3;
      bVar10 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar10);
    *piVar3 = iVar7 + -1;
LAB_00c88428:
    if (iVar7 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f4138(*param_1);
      return;
    }
  }
  return;
}

