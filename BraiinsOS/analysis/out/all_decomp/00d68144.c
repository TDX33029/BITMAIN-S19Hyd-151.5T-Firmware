// FUN_00d68144 @ 00d68144 size=2624 calls_out=34 calls_in=1
// strings: 

void FUN_00d68144(int param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  int *piVar4;
  code *pcVar5;
  int iVar6;
  int unaff_r6;
  undefined4 *puVar7;
  bool bVar8;
  
  switch(*(undefined1 *)(param_1 + 0xc12)) {
  case 0:
    goto switchD_00d68160_caseD_0;
  default:
    return;
  case 3:
    if (*(char *)(param_1 + 0xcfd) == '\x03') {
      if (*(int *)(param_1 + 0xcf0) != 0) {
        FUN_00e44660(*(int *)(param_1 + 0xcf0),*(undefined4 *)(param_1 + 0xcf4),1);
      }
      FUN_00d78e00(param_1 + 0xc98);
      *(undefined1 *)(param_1 + 0xcfc) = 0;
    }
    else if (*(char *)(param_1 + 0xcfd) == '\0') {
      FUN_00d78e00(param_1 + 0xc40);
    }
    goto LAB_00d688d4;
  case 4:
    FUN_00d79d28(param_1 + 0xc40);
    cVar1 = *(char *)(param_1 + 0xc27);
    goto joined_r0x00d68750;
  case 5:
    if (*(char *)(param_1 + 0xcec) == '\x03') {
      if (*(char *)(param_1 + 0xce9) == '\x03') {
        FUN_00d830f4(param_1 + 0xc44);
        *(undefined1 *)(param_1 + 0xce8) = 0;
      }
      else if (*(char *)(param_1 + 0xce9) == '\0') {
        FUN_00d82ff4(param_1 + 0xcb4);
      }
    }
    goto LAB_00d68740;
  case 6:
    FUN_00d8378c(param_1 + 0xc40);
    goto LAB_00d685c0;
  case 7:
    if (*(char *)(param_1 + 0xc7c) == '\x03') {
      cVar1 = *(char *)(param_1 + 0xc78);
      bVar8 = cVar1 != '\x03';
      if (!bVar8) {
        cVar1 = *(char *)(param_1 + 0xc74);
      }
      if (bVar8 || cVar1 != '\x03') goto LAB_00d68538;
      if (*(char *)(param_1 + 0xc70) == '\x03') {
        piVar4 = *(int **)(param_1 + 0xc6c);
        if (*piVar4 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar8 = (bool)hasExclusiveAccess(piVar4);
          if (bVar8) {
            *piVar4 = 0x84;
            goto LAB_00d68538;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar4[2] + 0x10))();
        goto LAB_00d68538;
      }
      if ((*(char *)(param_1 + 0xc70) != '\0') || (iVar2 = 0xc64, *(int *)(param_1 + 0xc60) == 0))
      goto LAB_00d68538;
      goto LAB_00d68530;
    }
    goto LAB_00d68538;
  case 8:
    if (*(char *)(param_1 + 0xd89) == '\x03') {
      FUN_00d84160(param_1 + 0xc50);
      *(undefined1 *)(param_1 + 0xd88) = 0;
    }
    if (*(int *)(param_1 + 0xc40) != -0x80000000 && *(int *)(param_1 + 0xc40) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc44));
    }
    *(undefined1 *)(param_1 + 0xc36) = 0;
    goto LAB_00d68508;
  case 9:
    cVar1 = *(char *)(param_1 + 0xc7c);
    bVar8 = cVar1 == '\x03';
    if (bVar8) {
      cVar1 = *(char *)(param_1 + 0xc78);
    }
    if (bVar8 && cVar1 == '\x03') {
      if (*(char *)(param_1 + 0xc74) == '\x03') {
        piVar4 = *(int **)(param_1 + 0xc70);
        if (*piVar4 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar8 = (bool)hasExclusiveAccess(piVar4);
          if (bVar8) {
            *piVar4 = 0x84;
            goto LAB_00d682b0;
          }
        }
        else {
          ClearExclusiveLocal();
        }
        (**(code **)(piVar4[2] + 0x10))();
      }
      else if ((*(char *)(param_1 + 0xc74) == '\0') && (*(int *)(param_1 + 0xc64) != 0)) {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc68));
      }
    }
LAB_00d682b0:
    iVar6 = *(int *)(param_1 + 0xc50) + 1;
    iVar2 = *(int *)(param_1 + 0xc4c);
    while (iVar6 = iVar6 + -1, iVar6 != 0) {
      FUN_00f1fd84(iVar2);
      iVar2 = iVar2 + 0x98;
    }
    if (*(int *)(param_1 + 0xc48) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xc4c));
    }
    *(undefined1 *)(param_1 + 0xc34) = 0;
    FUN_005c384c(param_1 + 0xc80);
    *(undefined1 *)(param_1 + 0xc35) = 0;
    goto LAB_00d684c4;
  case 10:
    FUN_00d85418(param_1 + 0xc40);
    *(undefined1 *)(param_1 + 0xc31) = 0;
    break;
  case 0xb:
    FUN_00d8e1c0(param_1 + 0xc40);
    break;
  case 0xc:
    FUN_00d903e8(param_1 + 0xc48);
  }
  *(undefined1 *)(param_1 + 0xc32) = 0;
  *(undefined2 *)(param_1 + 0xc2f) = 0;
  if (*(char *)(param_1 + 0xc1b) != '\0') {
    FUN_005c5160(param_1 + 0x9e0);
  }
  *(undefined1 *)(param_1 + 0xc1b) = 0;
  if (*(char *)(param_1 + 0xc1c) != '\0') {
    FUN_005c471c(param_1 + 0x9d0);
  }
  *(undefined1 *)(param_1 + 0xc1c) = 0;
  if (*(char *)(param_1 + 0xc1d) != '\0') {
    iVar2 = *(int *)(param_1 + 0x9c8);
    piVar4 = (int *)(iVar2 + 0xc4);
    do {
      iVar6 = *piVar4;
      bVar8 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar8);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      FUN_0163b708(iVar2 + 0x88);
    }
    piVar4 = *(int **)(param_1 + 0x9c8);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar8 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar8);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aac4f8(*(undefined4 *)(param_1 + 0x9c8));
    }
  }
  *(undefined1 *)(param_1 + 0xc1d) = 0;
  if (*(char *)(param_1 + 0xc1e) != '\0') {
    iVar2 = *(int *)(param_1 + 0x9c0);
    piVar4 = (int *)(iVar2 + 0x104);
    do {
      iVar6 = *piVar4;
      bVar8 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar8);
    *piVar4 = iVar6 + -1;
    if (iVar6 == 1) {
      FUN_0163b708(iVar2 + 0x88);
    }
    piVar4 = *(int **)(param_1 + 0x9c0);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar8 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar8);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aac2e8(*(undefined4 *)(param_1 + 0x9c0));
    }
  }
  *(undefined1 *)(param_1 + 0xc1e) = 0;
  if (*(char *)(param_1 + 0xc1f) != '\0') {
    FUN_005c4e2c(param_1 + 0xc00);
  }
  *(undefined2 *)(param_1 + 0xc1f) = 0;
  *(undefined1 *)(param_1 + 0xc33) = 0;
  if (*(char *)(param_1 + 0xc21) != '\0') {
    piVar4 = *(int **)(param_1 + 0xbfc);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar8 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar8);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aad0bc(*(undefined4 *)(param_1 + 0xbfc));
    }
  }
  *(undefined2 *)(param_1 + 0xc21) = 0;
  if (*(char *)(param_1 + 0xc23) != '\0') {
    FUN_00d67138(param_1 + 0x4f8);
  }
  *(undefined1 *)(param_1 + 0xc23) = 0;
LAB_00d684c4:
  bVar8 = *(char *)(param_1 + 0xc2d) != '\0';
  iVar2 = 0;
  if (bVar8) {
    iVar2 = *(int *)(param_1 + 0xd18);
  }
  if (bVar8 && iVar2 != -0x80000000) {
    FUN_00d67f2c(param_1 + 0xcc8);
  }
  *(undefined1 *)(param_1 + 0xc2d) = 0;
  if ((*(char *)(param_1 + 0xc2e) != '\0') &&
     (*(int *)(param_1 + 0xbf0) != -0x80000000 && *(int *)(param_1 + 0xbf0) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbf4));
  }
LAB_00d68508:
  *(undefined1 *)(param_1 + 0xc2e) = 0;
  if ((*(char *)(param_1 + 0xc15) != '\0') && ((*(uint *)(param_1 + 0xbdc) & 0x7fffffff) != 0)) {
    iVar2 = 0xbe0;
LAB_00d68530:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + iVar2));
  }
LAB_00d68538:
  *(undefined1 *)(param_1 + 0xc15) = 0;
  if (*(char *)(param_1 + 0xc16) != '\0') {
    FUN_005c384c(param_1 + 0x4a0);
  }
  *(undefined1 *)(param_1 + 0xc16) = 0;
  if (*(char *)(param_1 + 0xc24) != '\0') {
    FUN_00d90cfc(param_1 + 0x348);
  }
  *(undefined1 *)(param_1 + 0xc24) = 0;
  FUN_00d83d44(param_1 + 0x2f8);
  if ((*(char *)(param_1 + 0xc25) == '\x01') &&
     (piVar4 = *(int **)(param_1 + 0x2f0), piVar4 != (int *)0x0)) {
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar8 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar8);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f1420(*(undefined4 *)(param_1 + 0x2f0));
    }
  }
LAB_00d685c0:
  *(undefined1 *)(param_1 + 0xc25) = 0;
  if (*(char *)(param_1 + 0xc17) != '\0') {
    if (*(int *)(param_1 + 0xbd8) != 0) {
      piVar4 = *(int **)(param_1 + 0xbd4);
      iVar2 = 1 - *(int *)(param_1 + 0xbd8);
      do {
        if (*piVar4 == 2 && piVar4[1] == 0) {
          (*(code *)**(undefined4 **)piVar4[2])();
        }
        else {
          FUN_00f247dc(piVar4);
        }
        iVar2 = iVar2 + 1;
        piVar4 = piVar4 + 0x44;
      } while (iVar2 != 1);
    }
    if (*(int *)(param_1 + 0xbd0) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbd4));
    }
  }
  *(undefined2 *)(param_1 + 0xc37) = 0;
  *(undefined1 *)(param_1 + 0xc17) = 0;
  if (*(char *)(param_1 + 0xc26) != '\0') {
    puVar7 = (undefined4 *)(*(int *)(param_1 + 0xbc8) + 4);
    for (iVar2 = *(int *)(param_1 + 0xbcc); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (puVar7[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar7);
      }
      puVar7 = puVar7 + 3;
    }
    if (*(int *)(param_1 + 0xbc4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbc8));
    }
  }
  *(undefined1 *)(param_1 + 0xc26) = 0;
  iVar2 = *(int *)(param_1 + 0xbc0) + 1;
  puVar7 = (undefined4 *)(*(int *)(param_1 + 0xbbc) + 8);
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    (**(code **)(puVar7[-2] + 0x10))(puVar7 + 1,puVar7[-1],*puVar7);
    puVar7 = puVar7 + 5;
  }
  if (*(int *)(param_1 + 3000) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbbc));
  }
  iVar2 = *(int *)(param_1 + 0xbb4) + 1;
  puVar7 = (undefined4 *)(*(int *)(param_1 + 0xbb0) + 8);
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    (**(code **)(puVar7[-2] + 0x10))(puVar7 + 1,puVar7[-1],*puVar7);
    puVar7 = puVar7 + 5;
  }
  unaff_r6 = 0;
  if (*(int *)(param_1 + 0xbac) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xbb0));
  }
LAB_00d68740:
  FUN_016dffb2(*(undefined4 *)(param_1 + 0xba8));
  cVar1 = *(char *)(param_1 + 0xc27);
joined_r0x00d68750:
  if (cVar1 != '\0') {
    FUN_00d824a4(param_1 + 0x290);
  }
  *(undefined1 *)(param_1 + 0xc27) = 0;
  if (*(char *)(param_1 + 0xc28) != '\0') {
    piVar4 = *(int **)(param_1 + 0x288);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar8 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar8);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007846b4(*(undefined4 *)(param_1 + 0x288),*(undefined4 *)(param_1 + 0x28c));
    }
  }
  *(undefined1 *)(param_1 + 0xc28) = 0;
  bVar8 = *(char *)(param_1 + 0xc29) != '\0';
  if (bVar8) {
    unaff_r6 = *(int *)(param_1 + 0x280);
  }
  if (bVar8 && unaff_r6 != 0) {
    puVar7 = *(undefined4 **)(param_1 + 0x284);
    pcVar5 = (code *)*puVar7;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(unaff_r6);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(unaff_r6);
    }
  }
  *(undefined1 *)(param_1 + 0xc29) = 0;
  if ((*(char *)(param_1 + 0xc18) != '\0') && (-0x7fffffff < *(int *)(param_1 + 0xb9c))) {
    puVar7 = (undefined4 *)(*(int *)(param_1 + 0xba0) + 0x10);
    for (iVar2 = *(int *)(param_1 + 0xba4); iVar2 != 0; iVar2 = iVar2 + -1) {
      if (puVar7[-4] != 0) {
        thunk_FUN_016d3fb4(puVar7[-3]);
      }
      if (puVar7[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar7);
      }
      puVar7 = puVar7 + 6;
    }
    if (*(int *)(param_1 + 0xb9c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xba0));
    }
  }
  *(undefined1 *)(param_1 + 0xc18) = 0;
  if (*(char *)(param_1 + 0xc2a) != '\0') {
    if (*(int *)(param_1 + 600) == -0x80000000 || *(int *)(param_1 + 600) == 0) {
      if (*(int *)(param_1 + 0x264) != -0x80000000 && *(int *)(param_1 + 0x264) != 0) {
LAB_00d68968:
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x268));
      }
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x25c));
      if (*(int *)(param_1 + 0x264) != -0x80000000 && *(int *)(param_1 + 0x264) != 0)
      goto LAB_00d68968;
    }
    if (*(int *)(param_1 + 0x270) != -0x80000000 && *(int *)(param_1 + 0x270) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x274));
    }
    FUN_00d81034(param_1 + 0x100);
  }
  *(undefined1 *)(param_1 + 0xc2a) = 0;
  if (*(char *)(param_1 + 0xc2b) != '\0') {
    FUN_00d8256c(param_1 + 0xb88);
  }
  *(undefined1 *)(param_1 + 0xc2b) = 0;
LAB_00d688d4:
  *(undefined1 *)(param_1 + 0xc39) = 0;
  if (*(char *)(param_1 + 0xc2c) != '\0') {
    iVar2 = *(int *)(param_1 + 0xb84);
    DataMemoryBarrier(0xb);
    pcVar3 = (char *)(iVar2 + 0x10);
    *(undefined1 *)(iVar2 + 0x22) = 1;
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar8 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar8);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar6 = *(int *)(iVar2 + 8);
      *(undefined4 *)(iVar2 + 8) = 0;
      if (iVar6 == 0) {
        DataMemoryBarrier(0xb);
        *(undefined1 *)(iVar2 + 0x10) = 0;
        DataMemoryBarrier(0xb);
      }
      else {
        DataMemoryBarrier(0xb);
        *pcVar3 = '\0';
        DataMemoryBarrier(0xb);
        (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar2 + 0xc));
      }
    }
    pcVar3 = (char *)(iVar2 + 0x1c);
    DataMemoryBarrier(0xb);
    do {
      cVar1 = *pcVar3;
      bVar8 = (bool)hasExclusiveAccess(pcVar3);
    } while (!bVar8);
    *pcVar3 = '\x01';
    DataMemoryBarrier(0xb);
    if (cVar1 == '\0') {
      iVar6 = *(int *)(iVar2 + 0x14);
      *(undefined4 *)(iVar2 + 0x14) = 0;
      if (iVar6 != 0) {
        (**(code **)(iVar6 + 0xc))(*(undefined4 *)(iVar2 + 0x18));
      }
      DataMemoryBarrier(0xb);
      *(undefined1 *)(iVar2 + 0x1c) = 0;
      DataMemoryBarrier(0xb);
    }
    piVar4 = *(int **)(param_1 + 0xb84);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar8 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar8);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089dea4(*(undefined4 *)(param_1 + 0xb84));
    }
  }
  *(undefined1 *)(param_1 + 0xc2c) = 0;
  if (*(char *)(param_1 + 0xc19) != '\0') {
    piVar4 = *(int **)(param_1 + 0xb80);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar8 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar8);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xb80));
    }
  }
  *(undefined1 *)(param_1 + 0xc19) = 0;
  if (*(char *)(param_1 + 0xc1a) != '\0') {
    piVar4 = *(int **)(param_1 + 0xb7c);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar4;
      bVar8 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar8);
    *piVar4 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00790cd0(*(undefined4 *)(param_1 + 0xb7c));
    }
  }
  *(undefined1 *)(param_1 + 0xc1a) = 0;
  param_1 = param_1 + 0x80;
switchD_00d68160_caseD_0:
  FUN_00d78c4c(param_1);
  return;
}

