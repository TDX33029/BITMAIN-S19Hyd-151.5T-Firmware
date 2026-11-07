// FUN_007094f0 @ 007094f0 size=1704 calls_out=17 calls_in=2
// strings: 

void FUN_007094f0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  switch(*(undefined1 *)(param_1 + 0x278)) {
  case 0:
    piVar2 = *(int **)(param_1 + 0x90);
    iVar3 = param_1 + 0x50;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fcec(*(undefined4 *)(param_1 + 0x90));
    }
    goto LAB_0070997c;
  default:
    goto switchD_0070950c_caseD_1;
  case 3:
    cVar1 = *(char *)(param_1 + 0x2ac);
    if (cVar1 == '\x04') {
      if (*(char *)(param_1 + 0x2d0) == '\x04') {
        if (*(char *)(param_1 + 0x338) == '\x03') {
          if (*(char *)(param_1 + 0x334) == '\x03') {
            FUN_005e6cdc(param_1 + 800);
            if (*(int *)(param_1 + 0x32c) != -1) {
              FUN_016dffb2();
            }
            FUN_00a414e8(param_1 + 800);
          }
          else if (*(char *)(param_1 + 0x334) == '\0') {
            FUN_016dffb2(*(undefined4 *)(param_1 + 0x31c));
          }
        }
        if (*(char *)(param_1 + 0x2d4) != '\x04') {
          FUN_009b8520();
        }
        *(undefined1 *)(param_1 + 0x2d1) = 0;
LAB_00709ac4:
        *(undefined1 *)(param_1 + 0x2d2) = 0;
      }
      else if (*(char *)(param_1 + 0x2d0) == '\x03') {
        if (*(short *)(param_1 + 0x2d4) == 3) {
          FUN_009b8520(param_1 + 0x2d8);
        }
        goto LAB_00709ac4;
      }
      if (*(int *)(param_1 + 0x34c) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x344));
      }
      if (*(char *)(param_1 + 0x33c) != '\x04') {
        FUN_009b8520();
      }
      *(undefined1 *)(param_1 + 0x2ad) = 0;
      goto switchD_007096c4_caseD_1;
    }
    if (cVar1 != '\x03') {
      if ((cVar1 == '\0') && (*(int *)(param_1 + 0x280) != 0)) {
        uVar6 = *(undefined4 *)(param_1 + 0x284);
        goto LAB_00709630;
      }
      goto LAB_00709938;
    }
    iVar3 = 0x2b0;
    switch(*(undefined1 *)(param_1 + 0x490)) {
    case 0:
      goto switchD_007096c4_caseD_0;
    default:
      goto switchD_007096c4_caseD_1;
    case 3:
      break;
    case 4:
      if (*(char *)(param_1 + 0x4c8) == '\x03') {
        if (*(short *)(param_1 + 0x4a8) == 3) {
          piVar2 = *(int **)(param_1 + 0x4ac);
          if (*piVar2 == 0xcc) {
            DataMemoryBarrier(0xb);
            bVar8 = (bool)hasExclusiveAccess(piVar2);
            if (bVar8) {
              *piVar2 = 0x84;
              goto LAB_00709b70;
            }
          }
          else {
            ClearExclusiveLocal();
          }
          (**(code **)(piVar2[2] + 0x10))();
        }
      }
      else if ((*(char *)(param_1 + 0x4c8) == '\0') && (*(int *)(param_1 + 0x498) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x49c));
      }
LAB_00709b70:
      if (*(int *)(param_1 + 0x4cc) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4d0));
      }
      break;
    case 5:
      if (*(char *)(param_1 + 0xd54) == '\x03') {
        FUN_00712d6c(param_1 + 0x660);
        *(undefined1 *)(param_1 + 0xd55) = 0;
      }
      else if ((*(char *)(param_1 + 0xd54) == '\0') && (*(int *)(param_1 + 0x4a8) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x4ac));
      }
      iVar5 = *(int *)(param_1 + 0x498);
      iVar3 = 0x49c;
      goto LAB_00709b38;
    case 6:
      if (*(char *)(param_1 + 0xb9c) == '\x03') {
        FUN_00712d6c(param_1 + 0x4a8);
        *(undefined1 *)(param_1 + 0xb9d) = 0;
      }
      else if ((*(char *)(param_1 + 0xb9c) == '\0') && (*(int *)(param_1 + 0x498) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x49c));
      }
      iVar5 = *(int *)(param_1 + 0xba0);
      iVar3 = 0xba4;
LAB_00709b38:
      if (iVar5 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + iVar3));
      }
      if (*(int *)(param_1 + 0x2e8) != 3) {
        FUN_00712fc4();
      }
    }
    uVar6 = *(undefined4 *)(param_1 + 0x2e0);
    FUN_00a07b4c(uVar6);
    thunk_FUN_016d3fb4(uVar6);
    iVar3 = 0x2c0;
switchD_007096c4_caseD_0:
    if (*(int *)(param_1 + iVar3) != 0) {
      thunk_FUN_016d3fb4(((int *)(param_1 + iVar3))[1]);
    }
switchD_007096c4_caseD_1:
    *(undefined1 *)(param_1 + 0x2ae) = 0;
    if (*(int *)(param_1 + 0x2a0) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2a4));
    }
    *(undefined1 *)(param_1 + 0x2af) = 0;
    goto LAB_00709938;
  case 4:
    puVar7 = *(undefined4 **)(param_1 + 0x284);
    uVar6 = *(undefined4 *)(param_1 + 0x280);
    pcVar4 = (code *)*puVar7;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar6);
    }
    if (puVar7[1] != 0) {
LAB_00709630:
      thunk_FUN_016d3fb4(uVar6);
    }
    goto LAB_00709938;
  case 5:
    cVar1 = *(char *)(param_1 + 0x3db);
    if (cVar1 == '\x05') {
      FUN_007131d8(param_1 + 0x3e0);
LAB_00709744:
      *(undefined1 *)(param_1 + 0x3da) = 0;
      if ((*(char *)(param_1 + 0x3d9) != '\0') &&
         (*(undefined1 **)(param_1 + 0x3f0) != &DAT_3b9aca00)) {
        if (*(char *)(param_1 + 0x3fc) == '\0') {
          FUN_012ba508(param_1 + 1000);
        }
        piVar2 = *(int **)(param_1 + 0x3f8);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar8 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar8);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_012c1110(*(undefined4 *)(param_1 + 0x3f8));
        }
      }
      *(undefined1 *)(param_1 + 0x3d9) = 0;
    }
    else {
      if (cVar1 == '\x04') goto LAB_00709744;
      if (cVar1 != '\x03') break;
      if ((*(uint *)(param_1 + 0x3f8) & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3fc));
      }
    }
    if (*(int *)(param_1 + 0x39c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x398));
    }
    if (*(int *)(param_1 + 0x3a4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3a0));
    }
    if (*(int *)(param_1 + 0x3ac) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3a8));
    }
    if (*(int *)(param_1 + 0x3b4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3b0));
    }
    if (*(int *)(param_1 + 0x3bc) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3b8));
    }
    if (*(char *)(param_1 + 0x3d8) != '\0') {
      FUN_00b50e5c(param_1 + 0x280);
    }
    *(undefined1 *)(param_1 + 0x3d8) = 0;
    break;
  case 6:
    cVar1 = *(char *)(param_1 + 0x2e7);
    if (cVar1 == '\x05') {
      FUN_007131d8(param_1 + 0x2f0);
LAB_00709840:
      *(undefined1 *)(param_1 + 0x2e5) = 0;
      if ((*(char *)(param_1 + 0x2e4) != '\0') &&
         (*(undefined1 **)(param_1 + 0x2f8) != &DAT_3b9aca00)) {
        if (*(char *)(param_1 + 0x304) == '\0') {
          FUN_012ba508(param_1 + 0x2f0);
        }
        piVar2 = *(int **)(param_1 + 0x300);
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar8 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar8);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_012c1110(*(undefined4 *)(param_1 + 0x300));
        }
      }
      *(undefined1 *)(param_1 + 0x2e6) = 0;
      *(undefined1 *)(param_1 + 0x2e4) = 0;
    }
    else {
      if (cVar1 == '\x04') goto LAB_00709840;
      if (cVar1 != '\x03') break;
      if ((*(uint *)(param_1 + 0x300) & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x304));
      }
    }
    if (*(int *)(param_1 + 0x2a4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2a0));
    }
    break;
  case 7:
    if (*(int *)(param_1 + 0x280) != 0) {
      FUN_006f5fbc(*(int *)(param_1 + 0x280),*(undefined4 *)(param_1 + 0x284),1);
    }
    goto LAB_007095d0;
  case 8:
    cVar1 = *(char *)(param_1 + 0x328);
    bVar8 = cVar1 == '\x03';
    if (bVar8) {
      cVar1 = *(char *)(param_1 + 0x324);
    }
    if (bVar8 && cVar1 == '\x03') {
      cVar1 = *(char *)(param_1 + 0x2f0);
      bVar8 = cVar1 == '\x03';
      if (bVar8) {
        cVar1 = *(char *)(param_1 + 0x2ec);
      }
      if (bVar8 && cVar1 == '\x03') {
        FUN_0163c790(param_1 + 0x2cc);
        if (*(int *)(param_1 + 0x2d0) != 0) {
          (**(code **)(*(int *)(param_1 + 0x2d0) + 0xc))(*(undefined4 *)(param_1 + 0x2d4));
        }
      }
    }
LAB_007095d0:
    piVar2 = *(int **)(param_1 + 0x274);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fb60(*(undefined4 *)(param_1 + 0x274));
    }
  }
  puVar7 = *(undefined4 **)(param_1 + 0x22c);
  uVar6 = *(undefined4 *)(param_1 + 0x228);
  pcVar4 = (code *)*puVar7;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar6);
  }
  if (puVar7[1] != 0) {
    thunk_FUN_016d3fb4(uVar6);
  }
  puVar7 = *(undefined4 **)(param_1 + 0x224);
  uVar6 = *(undefined4 *)(param_1 + 0x220);
  pcVar4 = (code *)*puVar7;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar6);
  }
  if (puVar7[1] != 0) {
    thunk_FUN_016d3fb4(uVar6);
  }
  *(undefined2 *)(param_1 + 0x279) = 0;
  *(undefined1 *)(param_1 + 0x27b) = 0;
LAB_00709938:
  *(undefined1 *)(param_1 + 0x27c) = 0;
  FUN_00b50e5c(param_1 + 0xe0);
  piVar2 = *(int **)(param_1 + 0xd8);
  iVar3 = param_1 + 0x98;
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar2;
    bVar8 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar8);
  *piVar2 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078fcec(*(undefined4 *)(param_1 + 0xd8));
  }
LAB_0070997c:
  FUN_005c3320(iVar3);
switchD_0070950c_caseD_1:
  FUN_00a07b4c(param_1);
  return;
}

