// FUN_00e886a0 @ 00e886a0 size=1668 calls_out=8 calls_in=1
// strings: 

void FUN_00e886a0(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  int *piVar8;
  bool bVar9;
  
  if (0xc < *(byte *)(param_1 + 0x2d3) - 3) {
    return;
  }
  switch(*(byte *)(param_1 + 0x2d3)) {
  case 3:
    if (*(char *)(param_1 + 0x3d0) != '\x04') {
      if (*(char *)(param_1 + 0x3d0) == '\x03') {
        FUN_00e83070(param_1 + 0x3d8);
      }
      goto LAB_00e88ba4;
    }
    if ((*(char *)(param_1 + 0x3e4) == '\x03') && (*(int *)(param_1 + 0x3dc) != 0)) {
      FUN_00e43e74(*(int *)(param_1 + 0x3dc),*(undefined4 *)(param_1 + 0x3e0),1);
    }
    if (*(int *)(param_1 + 0x340) == -0x80000000 || *(int *)(param_1 + 0x340) == 0) {
      if (*(int *)(param_1 + 0x368) != -0x80000000 && *(int *)(param_1 + 0x368) != 0)
      goto LAB_00e88d24;
LAB_00e88c90:
      if (*(int *)(param_1 + 0x390) != -0x80000000 && *(int *)(param_1 + 0x390) != 0)
      goto LAB_00e88d3c;
LAB_00e88ca0:
      uVar3 = *(uint *)(param_1 + 0x3b8);
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x344));
      if (*(int *)(param_1 + 0x368) == -0x80000000 || *(int *)(param_1 + 0x368) == 0)
      goto LAB_00e88c90;
LAB_00e88d24:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x36c));
      if (*(int *)(param_1 + 0x390) == -0x80000000 || *(int *)(param_1 + 0x390) == 0)
      goto LAB_00e88ca0;
LAB_00e88d3c:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x394));
      uVar3 = *(uint *)(param_1 + 0x3b8);
    }
    if ((uVar3 & 0x7fffffff) == 0) goto LAB_00e88ba4;
    iVar5 = 0x3bc;
    goto LAB_00e88bf4;
  case 4:
    if ((*(char *)(param_1 + 0x2e4) == '\x03') && (*(int *)(param_1 + 0x2dc) != 0)) {
      FUN_00e44660(*(int *)(param_1 + 0x2dc),*(undefined4 *)(param_1 + 0x2e0),1);
    }
    goto LAB_00e88a74;
  case 5:
    puVar6 = *(undefined4 **)(param_1 + 0x2e4);
    uVar2 = *(undefined4 *)(param_1 + 0x2e0);
    pcVar4 = (code *)*puVar6;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(uVar2);
    }
    if (puVar6[1] != 0) {
      thunk_FUN_016d3fb4(uVar2);
    }
    piVar8 = *(int **)(param_1 + 0x2dc);
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar8;
      bVar9 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar9);
    *piVar8 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078d444(*(undefined4 *)(param_1 + 0x2dc));
    }
    FUN_00ef99cc(param_1 + 0x2e8);
    goto LAB_00e88a74;
  case 6:
    if (*(char *)(param_1 + 0x2e4) != '\x03') goto LAB_00e88a74;
    puVar6 = *(undefined4 **)(param_1 + 0x2e0);
    uVar2 = *(undefined4 *)(param_1 + 0x2dc);
    if ((code *)*puVar6 != (code *)0x0) {
      (*(code *)*puVar6)(uVar2);
    }
LAB_00e8887c:
    if (puVar6[1] == 0) goto LAB_00e88a74;
    goto LAB_00e88b70;
  case 7:
    if (*(char *)(param_1 + 0x2e4) == '\x03') {
      puVar6 = *(undefined4 **)(param_1 + 0x2e0);
      uVar2 = *(undefined4 *)(param_1 + 0x2dc);
      if ((code *)*puVar6 != (code *)0x0) {
        (*(code *)*puVar6)(uVar2);
      }
      goto LAB_00e8887c;
    }
    goto LAB_00e88a74;
  case 8:
    if (*(char *)(param_1 + 0x2e4) == '\x03') {
      puVar6 = *(undefined4 **)(param_1 + 0x2e0);
      uVar2 = *(undefined4 *)(param_1 + 0x2dc);
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar2);
      }
      if (puVar6[1] == 0) goto LAB_00e88a30;
      goto LAB_00e88a2c;
    }
    goto LAB_00e88a30;
  case 9:
    if (*(char *)(param_1 + 0x2e4) != '\x03') goto LAB_00e88a18;
    puVar6 = *(undefined4 **)(param_1 + 0x2e0);
    uVar2 = *(undefined4 *)(param_1 + 0x2dc);
    if ((code *)*puVar6 != (code *)0x0) {
      (*(code *)*puVar6)(uVar2);
    }
LAB_00e88944:
    if (puVar6[1] == 0) goto LAB_00e88a18;
    goto LAB_00e88a10;
  case 10:
    if (*(char *)(param_1 + 0x2e4) == '\x03') {
      puVar6 = *(undefined4 **)(param_1 + 0x2e0);
      uVar2 = *(undefined4 *)(param_1 + 0x2dc);
      if ((code *)*puVar6 != (code *)0x0) {
        (*(code *)*puVar6)(uVar2);
      }
      goto LAB_00e88944;
    }
    goto LAB_00e88a18;
  case 0xb:
    if (*(char *)(param_1 + 0x2e4) == '\x03') {
      puVar6 = *(undefined4 **)(param_1 + 0x2e0);
      uVar2 = *(undefined4 *)(param_1 + 0x2dc);
      if ((code *)*puVar6 != (code *)0x0) {
        (*(code *)*puVar6)(uVar2);
      }
LAB_00e889a8:
      if (puVar6[1] != 0) {
        thunk_FUN_016d3fb4(uVar2);
      }
    }
    break;
  case 0xc:
    if (*(char *)(param_1 + 0x2e4) == '\x03') {
      puVar6 = *(undefined4 **)(param_1 + 0x2e0);
      uVar2 = *(undefined4 *)(param_1 + 0x2dc);
      if ((code *)*puVar6 != (code *)0x0) {
        (*(code *)*puVar6)(uVar2);
      }
      goto LAB_00e889a8;
    }
    break;
  case 0xd:
    if (*(char *)(param_1 + 0x2e4) == '\x03') {
      puVar6 = *(undefined4 **)(param_1 + 0x2e0);
      uVar2 = *(undefined4 *)(param_1 + 0x2dc);
      if ((code *)*puVar6 != (code *)0x0) {
        (*(code *)*puVar6)(uVar2);
      }
      goto LAB_00e889a8;
    }
    break;
  case 0xe:
    if (*(char *)(param_1 + 0x2e4) == '\x03') {
      puVar6 = *(undefined4 **)(param_1 + 0x2e0);
      uVar2 = *(undefined4 *)(param_1 + 0x2dc);
      if ((code *)*puVar6 != (code *)0x0) {
        (*(code *)*puVar6)(uVar2);
      }
      goto LAB_00e889a8;
    }
    break;
  case 0xf:
    if ((*(char *)(param_1 + 0x3fc) == '\x03') && (*(int *)(param_1 + 0x3f4) != 0)) {
      FUN_00e44660(*(int *)(param_1 + 0x3f4),*(undefined4 *)(param_1 + 0x3f8),1);
    }
    iVar7 = *(int *)(param_1 + 0x2e0) + 1;
    iVar5 = *(int *)(param_1 + 0x2dc);
    while (iVar7 = iVar7 + -1, iVar7 != 0) {
      FUN_00f24560(iVar5);
      iVar5 = iVar5 + 0x2e0;
    }
    if (*(int *)(param_1 + 0x2d8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2dc));
    }
    if (*(int *)(param_1 + 0x2e8) != 2 || *(int *)(param_1 + 0x2ec) != 0) {
      if (*(int *)(param_1 + 0x348) == -0x80000000 || *(int *)(param_1 + 0x348) == 0) {
        if (*(int *)(param_1 + 0x370) != -0x80000000 && *(int *)(param_1 + 0x370) != 0)
        goto LAB_00e88cd0;
LAB_00e88b04:
        if (*(int *)(param_1 + 0x398) != -0x80000000 && *(int *)(param_1 + 0x398) != 0)
        goto LAB_00e88ce8;
LAB_00e88b14:
        if (*(int *)(param_1 + 0x3c0) == -0x80000000 || *(int *)(param_1 + 0x3c0) == 0)
        goto LAB_00e88b24;
      }
      else {
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x34c));
        if (*(int *)(param_1 + 0x370) == -0x80000000 || *(int *)(param_1 + 0x370) == 0)
        goto LAB_00e88b04;
LAB_00e88cd0:
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x374));
        if (*(int *)(param_1 + 0x398) == -0x80000000 || *(int *)(param_1 + 0x398) == 0)
        goto LAB_00e88b14;
LAB_00e88ce8:
        thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x39c));
        if (*(int *)(param_1 + 0x3c0) == -0x80000000 || *(int *)(param_1 + 0x3c0) == 0)
        goto LAB_00e88b24;
      }
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x3c4));
    }
LAB_00e88b24:
    FUN_005c7b40(param_1 + 0x250);
    if (*(int *)(param_1 + 0x2c0) == -0x80000000) goto LAB_00e88a18;
    goto LAB_00e889c8;
  }
  if (*(int *)(param_1 + 0x2c0) != -0x80000000) {
LAB_00e889c8:
    piVar8 = (int *)(*(int *)(param_1 + 0x2c4) + 0x10);
    for (iVar5 = *(int *)(param_1 + 0x2c8); iVar5 != 0; iVar5 = iVar5 + -1) {
      if (*piVar8 != 0) {
        thunk_FUN_016d3fb4(piVar8[1]);
      }
      piVar8 = piVar8 + 8;
    }
    if (*(int *)(param_1 + 0x2c0) != 0) {
      uVar2 = *(undefined4 *)(param_1 + 0x2c4);
LAB_00e88a10:
      thunk_FUN_016d3fb4(uVar2);
    }
  }
LAB_00e88a18:
  if ((*(uint *)(param_1 + 0x2b4) & 0x7fffffff) != 0) {
    uVar2 = *(undefined4 *)(param_1 + 0x2b8);
LAB_00e88a2c:
    thunk_FUN_016d3fb4(uVar2);
  }
LAB_00e88a30:
  if (*(int *)(param_1 + 0x1b8) == 2 && *(int *)(param_1 + 0x1bc) == 0) {
LAB_00e88a74:
    cVar1 = *(char *)(param_1 + 0x2d1);
  }
  else {
    if (*(int *)(param_1 + 0x1d0) == -0x80000000 || *(int *)(param_1 + 0x1d0) == 0) {
      if (*(int *)(param_1 + 0x1dc) != -0x80000000 && *(int *)(param_1 + 0x1dc) != 0)
      goto LAB_00e88b54;
LAB_00e88a64:
      uVar3 = *(uint *)(param_1 + 0x1e8);
    }
    else {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1d4));
      if (*(int *)(param_1 + 0x1dc) == -0x80000000 || *(int *)(param_1 + 0x1dc) == 0)
      goto LAB_00e88a64;
LAB_00e88b54:
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x1e0));
      uVar3 = *(uint *)(param_1 + 0x1e8);
    }
    if ((uVar3 & 0x7fffffff) == 0) goto LAB_00e88a74;
    uVar2 = *(undefined4 *)(param_1 + 0x1ec);
LAB_00e88b70:
    thunk_FUN_016d3fb4(uVar2);
    cVar1 = *(char *)(param_1 + 0x2d1);
  }
  if (cVar1 != '\0') {
    iVar7 = *(int *)(param_1 + 0x2b0) + 1;
    iVar5 = *(int *)(param_1 + 0x2ac);
    while (iVar7 = iVar7 + -1, iVar7 != 0) {
      FUN_00f24560(iVar5);
      iVar5 = iVar5 + 0x2e0;
    }
    if (*(int *)(param_1 + 0x2a8) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2ac));
    }
  }
  iVar5 = 0;
  *(undefined1 *)(param_1 + 0x2d1) = 0;
  bVar9 = *(char *)(param_1 + 0x2d2) != '\0';
  uVar3 = 0;
  if (bVar9) {
    iVar5 = *(int *)(param_1 + 0x94);
    uVar3 = *(uint *)(param_1 + 0x90) ^ 2;
  }
  if (!bVar9 || uVar3 == 0 && iVar5 == 0) goto LAB_00e88ba4;
  if (*(int *)(param_1 + 0xf0) == -0x80000000 || *(int *)(param_1 + 0xf0) == 0) {
    if (*(int *)(param_1 + 0x118) != -0x80000000 && *(int *)(param_1 + 0x118) != 0)
    goto LAB_00e88c18;
LAB_00e88bd0:
    if (*(int *)(param_1 + 0x140) != -0x80000000 && *(int *)(param_1 + 0x140) != 0)
    goto LAB_00e88c30;
LAB_00e88be0:
    uVar3 = *(uint *)(param_1 + 0x168);
  }
  else {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xf4));
    if (*(int *)(param_1 + 0x118) == -0x80000000 || *(int *)(param_1 + 0x118) == 0)
    goto LAB_00e88bd0;
LAB_00e88c18:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x11c));
    if (*(int *)(param_1 + 0x140) == -0x80000000 || *(int *)(param_1 + 0x140) == 0)
    goto LAB_00e88be0;
LAB_00e88c30:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x144));
    uVar3 = *(uint *)(param_1 + 0x168);
  }
  if ((uVar3 & 0x7fffffff) != 0) {
    iVar5 = 0x16c;
LAB_00e88bf4:
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + iVar5));
  }
LAB_00e88ba4:
  *(undefined1 *)(param_1 + 0x2d2) = 0;
  return;
}

