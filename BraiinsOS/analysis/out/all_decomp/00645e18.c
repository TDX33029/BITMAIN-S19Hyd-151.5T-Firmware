// FUN_00645e18 @ 00645e18 size=3256 calls_out=30 calls_in=2
// strings: 

void FUN_00645e18(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  bool bVar7;
  
  if (*(char *)(param_1 + 0x970) == '\0') {
LAB_00647160:
    FUN_006478e8();
    FUN_0064866c(param_1 + 0x208);
    piVar6 = (int *)(param_1 + 0x24c);
    FUN_006bf9f0(piVar6);
    piVar4 = (int *)*piVar6;
    if (piVar4 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar7 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar7);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0113b314(*piVar6);
      }
    }
    piVar6 = (int *)(param_1 + 0x250);
    FUN_006c0a90(piVar6);
    piVar4 = (int *)*piVar6;
    if (piVar4 == (int *)0x0) {
      return;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar7 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar7);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0113b19c(*piVar6);
      return;
    }
    return;
  }
  if (*(char *)(param_1 + 0x970) != '\x03') {
switchD_00645e48_caseD_1:
    return;
  }
  switch(*(undefined1 *)(param_1 + 0x7b0)) {
  case 0:
    param_1 = param_1 + 600;
    goto LAB_00647160;
  default:
    goto switchD_00645e48_caseD_1;
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
      goto switchD_00645e98_caseD_1;
    case 3:
      cVar1 = *(char *)(param_1 + 0x8b4);
      if (cVar1 == '\x04') {
        if (*(char *)(param_1 + 0x910) == '\x03') {
          iVar5 = 0x28;
        }
        else {
          iVar5 = 8;
          if (*(char *)(param_1 + 0x910) != '\0') goto LAB_00646838;
        }
        FUN_006472c4(param_1 + 0x8b8 + iVar5);
LAB_00646838:
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
          goto LAB_00646838;
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
          if (*(char *)(param_1 + 0x920) != '\0') goto LAB_006467f4;
        }
        FUN_0111a7bc(param_1 + 0x8c0 + iVar5);
LAB_006467f4:
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
          goto LAB_006467f4;
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
      goto LAB_006462a8;
    case 6:
      cVar1 = *(char *)(param_1 + 0x8ac);
      if (cVar1 == '\x04') {
        if ((*(char *)(param_1 + 0x8cc) == '\0') && (*(int *)(param_1 + 0x8b8) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8bc));
        }
LAB_0064664c:
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
          goto LAB_0064664c;
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
LAB_0064651c:
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
          goto LAB_0064651c;
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
LAB_006462a8:
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
LAB_006465c8:
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
          goto LAB_006465c8;
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
LAB_00646704:
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
          goto LAB_00646704;
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
          FUN_00647388(param_1 + 0x8d8);
        }
      }
      else {
        if (cVar1 != '\x03') {
          if (cVar1 == '\0') {
            FUN_00647388(param_1 + 0x870);
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
switchD_00645e98_caseD_1:
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
      piVar4 = (int *)(param_1 + 0x828);
      goto LAB_006467c0;
    default:
      goto switchD_00645e48_caseD_3;
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
      goto LAB_00646440;
    case 4:
      cVar1 = *(char *)(param_1 + 0x8a3);
      if (cVar1 == '\x04') {
        if ((*(char *)(param_1 + 0x8e0) == '\0') && (*(int *)(param_1 + 0x8ac) != 0)) {
          thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x8a8));
        }
      }
      else {
        if (cVar1 != '\x03') {
LAB_006460e4:
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
LAB_00646440:
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
        if (cVar1 != '\x03') goto LAB_006460e4;
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
              puVar2 = (undefined4 *)(param_1 + 0x8f8);
              goto LAB_00646768;
            }
          }
        }
        else if ((*(char *)(param_1 + 0x928) == '\0') && (*(int *)(param_1 + 0x894) != 0)) {
          puVar2 = (undefined4 *)(param_1 + 0x890);
LAB_00646768:
          thunk_FUN_016d3fb4(*puVar2);
        }
      }
      else {
        if (cVar1 != '\x03') goto LAB_006460e4;
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
    uVar3 = *(uint *)(param_1 + 2000);
    if ((0xd < uVar3) || ((1 << (uVar3 & 0xff) & 0x2051U) == 0)) {
      FUN_00643e58((uint *)(param_1 + 2000));
    }
    *(undefined1 *)(param_1 + 0x840) = 0;
    *(undefined4 *)(param_1 + 0x83c) = 0;
    piVar4 = (int *)(param_1 + 0x810);
LAB_006467c0:
    if (*piVar4 != 0) {
      thunk_FUN_016d3fb4(piVar4[1]);
    }
    break;
  case 6:
    if (*(int *)(param_1 + 0x820) != 0) {
      if (*(int *)(param_1 + 0x824) == 0) {
        piVar4 = *(int **)(param_1 + 0x828);
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar4;
          bVar7 = (bool)hasExclusiveAccess(piVar4);
        } while (!bVar7);
        *piVar4 = iVar5 + -1;
        if (iVar5 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015614d8(*(undefined4 *)(param_1 + 0x828),*(undefined4 *)(param_1 + 0x82c));
        }
      }
      else {
        piVar4 = *(int **)(param_1 + 0x830);
        if (((uint)piVar4 & 1) == 0) {
          piVar6 = piVar4 + 4;
          DataMemoryBarrier(0xb);
          do {
            iVar5 = *piVar6;
            bVar7 = (bool)hasExclusiveAccess(piVar6);
          } while (!bVar7);
          *piVar6 = iVar5 + -1;
          if (iVar5 == 1) {
            DataMemoryBarrier(0xb);
            if (*piVar4 != 0) {
              thunk_FUN_016d3fb4(piVar4[1]);
            }
            goto LAB_00646018;
          }
        }
        else if (*(int *)(param_1 + 0x82c) + ((uint)piVar4 >> 5) != 0) {
          piVar4 = (int *)(*(int *)(param_1 + 0x824) - ((uint)piVar4 >> 5));
LAB_00646018:
          thunk_FUN_016d3fb4(piVar4);
        }
      }
    }
    FUN_00a07b4c(param_1 + 2000);
  }
switchD_00645e48_caseD_3:
  piVar4 = *(int **)(param_1 + 0x780);
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar7 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar7);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078da6c();
    }
  }
  FUN_00a07b4c(param_1 + 0x720);
  piVar4 = *(int **)(param_1 + 0x71c);
  *(undefined1 *)(param_1 + 0x7b4) = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar7 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar7);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078da6c();
  }
  if (*(int *)(param_1 + 0x708) != 0) {
    if (*(int *)(param_1 + 0x70c) == 0) {
      piVar4 = *(int **)(param_1 + 0x710);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar7 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar7);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_015614d8(*(undefined4 *)(param_1 + 0x710),*(undefined4 *)(param_1 + 0x714));
      }
    }
    else {
      piVar4 = *(int **)(param_1 + 0x718);
      if (((uint)piVar4 & 1) == 0) {
        piVar6 = piVar4 + 4;
        DataMemoryBarrier(0xb);
        do {
          iVar5 = *piVar6;
          bVar7 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar7);
        *piVar6 = iVar5 + -1;
        if (iVar5 != 1) goto LAB_006469cc;
        DataMemoryBarrier(0xb);
        if (*piVar4 != 0) {
          thunk_FUN_016d3fb4(piVar4[1]);
        }
      }
      else {
        if (*(int *)(param_1 + 0x714) + ((uint)piVar4 >> 5) == 0) goto LAB_006469cc;
        piVar4 = (int *)(*(int *)(param_1 + 0x70c) - ((uint)piVar4 >> 5));
      }
      thunk_FUN_016d3fb4(piVar4);
    }
  }
LAB_006469cc:
  FUN_006478e8(param_1 + 0x4b0);
  piVar6 = (int *)(param_1 + 0x6fc);
  FUN_006bf9f0(piVar6);
  piVar4 = (int *)*piVar6;
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar7 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar7);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0113b314(*piVar6);
    }
  }
  piVar6 = (int *)(param_1 + 0x700);
  FUN_006c0a90(piVar6);
  piVar4 = (int *)*piVar6;
  if (piVar4 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar7 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar7);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0113b19c(*piVar6);
    }
  }
  *(undefined1 *)(param_1 + 0x7b5) = 0;
  return;
}

