// FUN_00764c48 @ 00764c48 size=3088 calls_out=29 calls_in=0
// strings: 

void FUN_00764c48(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x970) != '\x03') {
    if (*(char *)(param_1 + 0x970) != '\0') {
      return;
    }
LAB_00657f38:
    FUN_006588d4();
    FUN_0064866c(param_1 + 0x208);
    piVar6 = (int *)(param_1 + 0x24c);
    FUN_006bf9f0(piVar6);
    piVar2 = (int *)*piVar6;
    if (piVar2 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar2;
        bVar7 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar7);
      *piVar2 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0113b314(*piVar6);
      }
    }
    piVar6 = (int *)(param_1 + 0x250);
    FUN_006c0a90(piVar6);
    piVar2 = (int *)*piVar6;
    if (piVar2 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0113b19c(*piVar6);
      return;
    }
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x7b0)) {
  case 0:
    param_1 = param_1 + 600;
    goto LAB_00657f38;
  default:
    goto switchD_00764c84_caseD_1;
  case 3:
    break;
  case 4:
    switch(*(undefined1 *)(param_1 + 0x864)) {
    case 0:
      if (*(int *)(param_1 + 0x7e0) == 0 && *(int *)(param_1 + 0x7e4) == 0) {
        FUN_006472c4(param_1 + 0x7f0);
      }
      else {
        if (*(char *)(param_1 + 0x7e8) != '\x06') {
          FUN_006472c4();
        }
        if (*(int *)(param_1 + 0x800) != -0x80000000) {
          FUN_0111a7bc();
        }
      }
    default:
      goto switchD_00764cc4_caseD_1;
    case 3:
      cVar1 = *(char *)(param_1 + 0x8b4);
      if (cVar1 == '\x04') {
        if (*(char *)(param_1 + 0x910) == '\x03') {
          iVar5 = 0x28;
        }
        else {
          iVar5 = 8;
          if (*(char *)(param_1 + 0x910) != '\0') goto LAB_00765664;
        }
        FUN_006472c4(param_1 + 0x8b8 + iVar5);
LAB_00765664:
        *(undefined1 *)(param_1 + 0x8b6) = 0;
        if (*(char *)(param_1 + 0x8b5) != '\0') {
          FUN_005c3320(param_1 + 0x890);
        }
        *(undefined1 *)(param_1 + 0x8b7) = 0;
        *(undefined1 *)(param_1 + 0x8b5) = 0;
      }
      else {
        if (cVar1 == '\x03') {
          FUN_007ab648(param_1 + 0x8b8);
          FUN_005c3320(param_1 + 0x8b8);
          goto LAB_00765664;
        }
        if (cVar1 == '\0') {
          FUN_006472c4(param_1 + 0x878);
        }
      }
      *(undefined1 *)(param_1 + 0x86a) = 0;
      break;
    case 4:
      cVar1 = *(char *)(param_1 + 0x8b8);
      if (cVar1 == '\x04') {
        if (*(char *)(param_1 + 0x920) == '\x03') {
          iVar5 = 0x30;
        }
        else {
          iVar5 = 8;
          if (*(char *)(param_1 + 0x920) != '\0') goto LAB_00765620;
        }
        FUN_0111a7bc(param_1 + 0x8c0 + iVar5);
LAB_00765620:
        *(undefined1 *)(param_1 + 0x8ba) = 0;
        if (*(char *)(param_1 + 0x8b9) != '\0') {
          FUN_005c3320(param_1 + 0x870);
        }
        *(undefined1 *)(param_1 + 0x8bb) = 0;
        *(undefined1 *)(param_1 + 0x8b9) = 0;
      }
      else {
        if (cVar1 == '\x03') {
          FUN_007aaae4(param_1 + 0x8c0);
          FUN_005c3320(param_1 + 0x8c0);
          goto LAB_00765620;
        }
        if (cVar1 == '\0') {
          FUN_0111a7bc(param_1 + 0x898);
        }
      }
      *(undefined1 *)(param_1 + 0x869) = 0;
      break;
    case 5:
      if (*(char *)(param_1 + 0x8a2) != '\x04') {
        if (*(char *)(param_1 + 0x8a2) != '\x03') break;
        FUN_007ab288(param_1 + 0x8a8);
        FUN_005c3320(param_1 + 0x8a8);
      }
      *(undefined1 *)(param_1 + 0x8a1) = 0;
      if (*(char *)(param_1 + 0x8a0) != '\0') {
        FUN_005c3320(param_1 + 0x870);
      }
      goto LAB_007650d4;
    case 6:
      cVar1 = *(char *)(param_1 + 0x8ac);
      if (cVar1 == '\x04') {
        if ((*(char *)(param_1 + 0x8cc) == '\0') && (*(int *)(param_1 + 0x8b8) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8bc));
        }
LAB_00765478:
        *(undefined1 *)(param_1 + 0x8ae) = 0;
        if (*(char *)(param_1 + 0x8ad) != '\0') {
          FUN_005c3320(param_1 + 0x888);
        }
        *(undefined1 *)(param_1 + 0x8af) = 0;
        *(undefined1 *)(param_1 + 0x8ad) = 0;
      }
      else {
        if (cVar1 == '\x03') {
          FUN_007aaa34(param_1 + 0x8b0);
          FUN_005c3320(param_1 + 0x8b0);
          goto LAB_00765478;
        }
        if ((cVar1 == '\0') && (*(int *)(param_1 + 0x878) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x87c));
        }
      }
      *(undefined1 *)(param_1 + 0x868) = 0;
      break;
    case 7:
      cVar1 = *(char *)(param_1 + 0x8e8);
      if (cVar1 == '\x04') {
        if (*(char *)(param_1 + 0x948) == '\0') {
          FUN_0111d680(param_1 + 0x8f8);
        }
LAB_00765348:
        *(undefined1 *)(param_1 + 0x8ea) = 0;
        if (*(char *)(param_1 + 0x8e9) != '\0') {
          FUN_005c3320(param_1 + 0x870);
        }
        *(undefined1 *)(param_1 + 0x8eb) = 0;
        *(undefined1 *)(param_1 + 0x8e9) = 0;
      }
      else {
        if (cVar1 == '\x03') {
          FUN_007aa730(param_1 + 0x8f0);
          FUN_005c3320(param_1 + 0x8f0);
          goto LAB_00765348;
        }
        if (cVar1 == '\0') {
          FUN_0111d680(param_1 + 0x898);
        }
      }
      *(undefined1 *)(param_1 + 0x867) = 0;
      break;
    case 8:
      if (*(char *)(param_1 + 0x8a2) != '\x04') {
        if (*(char *)(param_1 + 0x8a2) != '\x03') break;
        FUN_007ab288(param_1 + 0x8a8);
        FUN_005c3320(param_1 + 0x8a8);
      }
      *(undefined1 *)(param_1 + 0x8a1) = 0;
      if (*(char *)(param_1 + 0x8a0) != '\0') {
        FUN_005c3320(param_1 + 0x870);
      }
LAB_007650d4:
      *(undefined1 *)(param_1 + 0x8a0) = 0;
      break;
    case 9:
      cVar1 = *(char *)(param_1 + 0x8ab);
      if (cVar1 == '\x04') {
        if ((*(char *)(param_1 + 0x8c8) == '\0') &&
           (FUN_007bb4fc(*(undefined4 *)(param_1 + 0x8bc),*(undefined4 *)(param_1 + 0x8c0)),
           *(int *)(param_1 + 0x8b8) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8bc));
        }
LAB_007653f4:
        *(undefined1 *)(param_1 + 0x8a9) = 0;
        if (*(char *)(param_1 + 0x8a8) != '\0') {
          FUN_005c3320(param_1 + 0x870);
        }
        *(undefined1 *)(param_1 + 0x8aa) = 0;
        *(undefined1 *)(param_1 + 0x8a8) = 0;
      }
      else {
        if (cVar1 == '\x03') {
          FUN_007aa828(param_1 + 0x8b0);
          FUN_005c3320(param_1 + 0x8b0);
          goto LAB_007653f4;
        }
        if ((cVar1 == '\0') &&
           (FUN_007bb4fc(*(undefined4 *)(param_1 + 0x8a0),*(undefined4 *)(param_1 + 0x8a4)),
           *(int *)(param_1 + 0x89c) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8a0));
        }
      }
      *(undefined1 *)(param_1 + 0x866) = 0;
      break;
    case 10:
      cVar1 = *(char *)(param_1 + 0x8ab);
      if (cVar1 == '\x04') {
        if ((*(char *)(param_1 + 0x8c8) == '\0') &&
           (FUN_007bb4fc(*(undefined4 *)(param_1 + 0x8bc),*(undefined4 *)(param_1 + 0x8c0)),
           *(int *)(param_1 + 0x8b8) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8bc));
        }
LAB_00765530:
        *(undefined1 *)(param_1 + 0x8a9) = 0;
        if (*(char *)(param_1 + 0x8a8) != '\0') {
          FUN_005c3320(param_1 + 0x870);
        }
        *(undefined1 *)(param_1 + 0x8aa) = 0;
        *(undefined1 *)(param_1 + 0x8a8) = 0;
      }
      else {
        if (cVar1 == '\x03') {
          FUN_007aa828(param_1 + 0x8b0);
          FUN_005c3320(param_1 + 0x8b0);
          goto LAB_00765530;
        }
        if ((cVar1 == '\0') &&
           (FUN_007bb4fc(*(undefined4 *)(param_1 + 0x8a0),*(undefined4 *)(param_1 + 0x8a4)),
           *(int *)(param_1 + 0x89c) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8a0));
        }
      }
      *(undefined1 *)(param_1 + 0x865) = 0;
      break;
    case 0xb:
      cVar1 = *(char *)(param_1 + 0x8d4);
      if (cVar1 == '\x04') {
        if (*(char *)(param_1 + 0x918) == '\0') {
          FUN_00765f8c(param_1 + 0x8d8);
        }
      }
      else {
        if (cVar1 != '\x03') {
          if (cVar1 == '\0') {
            FUN_00765f8c(param_1 + 0x870);
          }
          break;
        }
        FUN_007aabe4(param_1 + 0x8d8);
        FUN_005c3320(param_1 + 0x8d8);
      }
      *(undefined1 *)(param_1 + 0x8d6) = 0;
      if (*(char *)(param_1 + 0x8d5) != '\0') {
        FUN_005c3320(param_1 + 0x8b0);
      }
      *(undefined1 *)(param_1 + 0x8d7) = 0;
      *(undefined1 *)(param_1 + 0x8d5) = 0;
    }
    *(undefined1 *)(param_1 + 0x86b) = 0;
switchD_00764cc4_caseD_1:
    *(undefined1 *)(param_1 + 0x7b3) = 0;
    if (*(int *)(param_1 + 0x7b8) != -0x7ffffff2) {
      *(undefined1 *)(param_1 + 0x7b2) = 0;
    }
    *(undefined1 *)(param_1 + 0x7b2) = 0;
    break;
  case 5:
    if (7 < *(byte *)(param_1 + 0x841)) break;
    switch(*(byte *)(param_1 + 0x841)) {
    case 0:
      piVar2 = (int *)(param_1 + 0x828);
      goto LAB_007655ec;
    default:
      goto switchD_00764c84_caseD_3;
    case 3:
      cVar1 = *(char *)(param_1 + 0x8a3);
      if (cVar1 == '\x04') {
        if (*(char *)(param_1 + 0x8e0) == '\0') {
          FUN_006435c0(param_1 + 0x8a8);
        }
      }
      else {
        if (cVar1 != '\x03') {
          if (cVar1 == '\0') {
            FUN_006435c0(param_1 + 0x868);
          }
          break;
        }
        FUN_007ab3c8(param_1 + 0x8a8);
        FUN_005c3320(param_1 + 0x8a8);
      }
      *(undefined1 *)(param_1 + 0x8a1) = 0;
      if (*(char *)(param_1 + 0x8a0) != '\0') {
        FUN_005c3320(param_1 + 0x848);
      }
      goto LAB_0076526c;
    case 4:
      cVar1 = *(char *)(param_1 + 0x8a3);
      if (cVar1 == '\x04') {
        if ((*(char *)(param_1 + 0x8e0) == '\0') && (*(int *)(param_1 + 0x8ac) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8a8));
        }
      }
      else {
        if (cVar1 != '\x03') {
LAB_00764f10:
          if ((cVar1 == '\0') && (*(int *)(param_1 + 0x86c) != 0)) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x868));
          }
          break;
        }
        FUN_007ab598(param_1 + 0x8a8);
        FUN_005c3320(param_1 + 0x8a8);
      }
      *(undefined1 *)(param_1 + 0x8a1) = 0;
      if (*(char *)(param_1 + 0x8a0) != '\0') {
        FUN_005c3320(param_1 + 0x848);
      }
LAB_0076526c:
      *(undefined1 *)(param_1 + 0x8a2) = 0;
      *(undefined1 *)(param_1 + 0x8a0) = 0;
      break;
    case 5:
      cVar1 = *(char *)(param_1 + 0x89f);
      if (cVar1 == '\x04') {
        if ((*(char *)(param_1 + 0x8d4) == '\0') && (*(int *)(param_1 + 0x8a4) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8a0));
        }
      }
      else {
        if (cVar1 != '\x03') goto LAB_00764f10;
        FUN_007ab318(param_1 + 0x8a0);
        FUN_005c3320(param_1 + 0x8a0);
      }
      *(undefined1 *)(param_1 + 0x89d) = 0;
      if (*(char *)(param_1 + 0x89c) != '\0') {
        FUN_005c3320(param_1 + 0x848);
      }
      *(undefined1 *)(param_1 + 0x89e) = 0;
      *(undefined1 *)(param_1 + 0x89c) = 0;
      break;
    case 6:
      if (*(char *)(param_1 + 0x886) == '\x04') {
        cVar1 = *(char *)(param_1 + 0x918);
        bVar7 = cVar1 == '\x03';
        if (bVar7) {
          cVar1 = *(char *)(param_1 + 0x914);
        }
        if (bVar7 && cVar1 == '\0') {
          if (*(int *)(param_1 + 0x8f8) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8f4));
          }
          if (*(int *)(param_1 + 0x8e4) != 0) {
            thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8e8));
          }
        }
      }
      else {
        if (*(char *)(param_1 + 0x886) != '\x03') break;
        FUN_007ab4c8(param_1 + 0x888);
        FUN_005c3320(param_1 + 0x888);
      }
      *(undefined1 *)(param_1 + 0x885) = 0;
      if (*(char *)(param_1 + 0x884) != '\0') {
        FUN_005c3320(param_1 + 0x848);
      }
      *(undefined1 *)(param_1 + 0x884) = 0;
      break;
    case 7:
      cVar1 = *(char *)(param_1 + 0x88f);
      if (cVar1 == '\x04') {
        if (*(char *)(param_1 + 0x928) == '\x03') {
          if (*(char *)(param_1 + 0x924) == '\0') {
            if (*(int *)(param_1 + 0x908) != 0) {
              thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x904));
            }
            if (*(int *)(param_1 + 0x8f4) != 0) {
              puVar3 = (undefined4 *)(param_1 + 0x8f8);
              goto LAB_00765594;
            }
          }
        }
        else if ((*(char *)(param_1 + 0x928) == '\0') && (*(int *)(param_1 + 0x894) != 0)) {
          puVar3 = (undefined4 *)(param_1 + 0x890);
LAB_00765594:
          thunk_FUN_016d3fb4(*puVar3);
        }
      }
      else {
        if (cVar1 != '\x03') goto LAB_00764f10;
        FUN_007aa944(param_1 + 0x890);
        FUN_005c3320(param_1 + 0x890);
      }
      *(undefined1 *)(param_1 + 0x88d) = 0;
      if (*(char *)(param_1 + 0x88c) != '\0') {
        FUN_005c3320(param_1 + 0x848);
      }
      *(undefined1 *)(param_1 + 0x88e) = 0;
      *(undefined1 *)(param_1 + 0x88c) = 0;
    }
    uVar4 = *(uint *)(param_1 + 2000);
    if ((0xd < uVar4) || ((1 << (uVar4 & 0xff) & 0x2051U) == 0)) {
      FUN_00643e58((uint *)(param_1 + 2000));
    }
    *(undefined1 *)(param_1 + 0x840) = 0;
    *(undefined4 *)(param_1 + 0x83c) = 0;
    piVar2 = (int *)(param_1 + 0x810);
LAB_007655ec:
    if (*piVar2 != 0) {
      thunk_FUN_016d3fb4(piVar2[1]);
    }
    break;
  case 6:
    if (*(int *)(param_1 + 0x820) != 0) {
      if (*(int *)(param_1 + 0x824) == 0) {
        piVar2 = *(int **)(param_1 + 0x828);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar2;
          bVar7 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar7);
        *piVar2 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015614d8(*(undefined4 *)(param_1 + 0x828),*(undefined4 *)(param_1 + 0x82c));
        }
      }
      else {
        piVar2 = *(int **)(param_1 + 0x830);
        if (((uint)piVar2 & 1) == 0) {
          piVar6 = piVar2 + 4;
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar6;
            bVar7 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar7);
          *piVar6 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            if (*piVar2 != 0) {
              thunk_FUN_016d3fb4(piVar2[1]);
            }
            goto LAB_00764e44;
          }
        }
        else if (*(int *)(param_1 + 0x82c) + ((uint)piVar2 >> 5) != 0) {
          piVar2 = (int *)(*(int *)(param_1 + 0x824) - ((uint)piVar2 >> 5));
LAB_00764e44:
          thunk_FUN_016d3fb4(piVar2);
        }
      }
    }
    FUN_00a07b4c(param_1 + 2000);
  }
switchD_00764c84_caseD_3:
  piVar2 = *(int **)(param_1 + 0x780);
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078da6c();
    }
  }
  FUN_00a07b4c(param_1 + 0x720);
  piVar2 = *(int **)(param_1 + 0x71c);
  *(undefined1 *)(param_1 + 0x7b4) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar7 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar7);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078da6c();
  }
  if (*(int *)(param_1 + 0x708) != 0) {
    if (*(int *)(param_1 + 0x70c) == 0) {
      piVar2 = *(int **)(param_1 + 0x710);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar2;
        bVar7 = (bool)hasExclusiveAccess(piVar2);
      } while (!bVar7);
      *piVar2 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*(undefined4 *)(param_1 + 0x710),*(undefined4 *)(param_1 + 0x714));
      }
    }
    else {
      piVar2 = *(int **)(param_1 + 0x718);
      if (((uint)piVar2 & 1) == 0) {
        piVar6 = piVar2 + 4;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar6;
          bVar7 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar7);
        *piVar6 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          if (*piVar2 != 0) {
            thunk_FUN_016d3fb4(piVar2[1]);
          }
          goto LAB_007657f4;
        }
      }
      else if (*(int *)(param_1 + 0x714) + ((uint)piVar2 >> 5) != 0) {
        piVar2 = (int *)(*(int *)(param_1 + 0x70c) - ((uint)piVar2 >> 5));
LAB_007657f4:
        thunk_FUN_016d3fb4(piVar2);
      }
    }
  }
  FUN_006588d4(param_1 + 0x4b0);
  piVar6 = (int *)(param_1 + 0x6fc);
  FUN_006bf9f0(piVar6);
  piVar2 = (int *)*piVar6;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0113b314(*piVar6);
    }
  }
  piVar6 = (int *)(param_1 + 0x700);
  FUN_006c0a90(piVar6);
  piVar2 = (int *)*piVar6;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0113b19c(*piVar6);
    }
  }
  *(undefined1 *)(param_1 + 0x7b5) = 0;
switchD_00764c84_caseD_1:
  return;
}

