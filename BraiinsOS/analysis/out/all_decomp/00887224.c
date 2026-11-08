// FUN_00887224 @ 00887224 size=1028 calls_out=8 calls_in=1
// strings: 

void FUN_00887224(undefined4 *param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  bool bVar8;
  
  if (*(char *)(param_1 + 0x51) != '\0') {
    if (*(char *)(param_1 + 0x51) == '\x03') {
      FUN_00887914(param_1 + 0x4a);
      return;
    }
    return;
  }
  switch(*(undefined1 *)(param_1 + 2)) {
  case 0:
    piVar2 = (int *)*param_1;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089e240(*param_1);
    }
    piVar2 = (int *)param_1[1];
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar8 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar8);
    *piVar2 = iVar3 + -1;
    goto LAB_008873ec;
  default:
    goto switchD_00887260_caseD_1;
  case 3:
    if (*(char *)(param_1 + 0x49) != '\x03') break;
    if (*(char *)(param_1 + 0x46) == '\0') {
      piVar2 = param_1 + 4;
LAB_00887480:
      if (*piVar2 != 0) {
        thunk_FUN_016d3fb4(piVar2[1]);
      }
      break;
    }
    if (*(char *)(param_1 + 0x46) != '\x03') break;
    switch(*(undefined1 *)(param_1 + 0x1c)) {
    case 0:
      piVar2 = param_1 + 0xe;
      goto LAB_00887480;
    default:
      goto switchD_00887368_caseD_1;
    case 3:
      if (*(char *)(param_1 + 0x2c) == '\x03') {
        cVar1 = *(char *)(param_1 + 0x2b);
        bVar8 = cVar1 == '\x03';
        if (bVar8) {
          cVar1 = *(char *)(param_1 + 0x22);
        }
        if (bVar8 && cVar1 == '\x04') {
          FUN_0163c790(param_1 + 0x23);
          if (param_1[0x24] != 0) {
            (**(code **)(param_1[0x24] + 0xc))(param_1[0x25]);
          }
        }
      }
      goto LAB_00887638;
    case 4:
      if (*(char *)((int)param_1 + 0xa9) == '\x04') {
        if (*(char *)(param_1 + 0x2e) == '\x04') {
          if (*(char *)((int)param_1 + 0xe1) == '\x03') {
            uVar6 = param_1[0x31];
            puVar7 = (undefined4 *)param_1[0x32];
            pcVar4 = (code *)*puVar7;
            if (pcVar4 != (code *)0x0) {
              (*pcVar4)(uVar6);
            }
            if (puVar7[1] != 0) {
              thunk_FUN_016d3fb4(uVar6);
            }
            *(undefined1 *)(param_1 + 0x38) = 0;
          }
        }
        else if (*(char *)(param_1 + 0x2e) == '\x03') {
          FUN_00a07b4c(param_1 + 0x30);
        }
        if ((undefined4 *)param_1[0x28] != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)param_1[0x28])();
        }
      }
      else {
        if (*(char *)((int)param_1 + 0xa9) != '\x03') break;
        if (*(char *)((int)param_1 + 0xd1) == '\x03') {
          uVar6 = param_1[0x2d];
          puVar7 = (undefined4 *)param_1[0x2e];
          pcVar4 = (code *)*puVar7;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar6);
          }
          if (puVar7[1] != 0) {
            thunk_FUN_016d3fb4(uVar6);
          }
          *(undefined1 *)(param_1 + 0x34) = 0;
        }
      }
      *(undefined1 *)(param_1 + 0x2a) = 0;
      break;
    case 5:
      FUN_00a07b4c(param_1 + 0x1e);
      goto LAB_00887630;
    case 6:
      cVar1 = *(char *)(param_1 + 0x2e);
      bVar8 = cVar1 != '\x03';
      if (!bVar8) {
        cVar1 = *(char *)(param_1 + 0x2d);
      }
      if (bVar8 || cVar1 != '\x03') goto LAB_00887630;
      uVar6 = param_1[0x2b];
      puVar7 = (undefined4 *)param_1[0x2c];
      pcVar4 = (code *)*puVar7;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar6);
      }
      if (puVar7[1] != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
      iVar5 = param_1[0x26];
      iVar3 = 0x9c;
      goto LAB_00887620;
    case 7:
      FUN_00a07b4c(param_1 + 0x22);
    }
    iVar5 = param_1[0x1e];
    iVar3 = 0x7c;
LAB_00887620:
    if (iVar5 != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)((int)param_1 + iVar3));
    }
LAB_00887630:
    FUN_008672e4(param_1[0x1b]);
LAB_00887638:
    bVar8 = *(char *)((int)param_1 + 0x71) != '\0';
    iVar3 = 0;
    if (bVar8) {
      iVar3 = param_1[0x2d];
    }
    if (bVar8 && iVar3 != 0) {
      thunk_FUN_016d3fb4(param_1[0x2e]);
    }
    *(undefined1 *)((int)param_1 + 0x71) = 0;
    break;
  case 4:
    if (*(char *)((int)param_1 + 0x6d) == '\x03') {
      cVar1 = *(char *)(param_1 + 10);
      if (cVar1 == '\x04') {
        uVar6 = param_1[0xe];
        puVar7 = (undefined4 *)param_1[0xf];
        pcVar4 = (code *)*puVar7;
        if (pcVar4 != (code *)0x0) {
          (*pcVar4)(uVar6);
        }
        if (puVar7[1] != 0) {
          thunk_FUN_016d3fb4(uVar6);
        }
        piVar2 = (int *)param_1[0xc];
        DataMemoryBarrier(0xb);
        do {
          iVar3 = *piVar2;
          bVar8 = (bool)hasExclusiveAccess(piVar2);
        } while (!bVar8);
        *piVar2 = iVar3 + -1;
        if (iVar3 == 1) {
          DataMemoryBarrier(0xb);
          FUN_015614d8(param_1[0xc],param_1[0xd]);
        }
        thunk_FUN_016d3fb4(param_1[0xb]);
        FUN_008672e4(param_1[9]);
      }
      else {
        bVar8 = cVar1 == '\x03';
        if (bVar8) {
          cVar1 = *(char *)(param_1 + 0x19);
        }
        if (bVar8 && cVar1 == '\x03') {
          cVar1 = *(char *)(param_1 + 0x18);
          bVar8 = cVar1 == '\x03';
          if (bVar8) {
            cVar1 = *(char *)(param_1 + 0xf);
          }
          if (bVar8 && cVar1 == '\x04') {
            FUN_0163c790(param_1 + 0x10);
            if (param_1[0x11] != 0) {
              (**(code **)(param_1[0x11] + 0xc))(param_1[0x12]);
            }
          }
        }
      }
    }
    break;
  case 5:
    FUN_00a07b4c(param_1 + 4);
  }
switchD_00887368_caseD_1:
  piVar2 = (int *)*param_1;
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar8 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar8);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089e240(*param_1);
  }
  piVar2 = (int *)param_1[1];
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar8 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar8);
  *piVar2 = iVar3 + -1;
LAB_008873ec:
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0089e240(param_1[1]);
  }
switchD_00887260_caseD_1:
  FUN_00b336f8(param_1 + 0x4e);
  return;
}

