// FUN_014dd298 @ 014dd298 size=392 calls_out=2 calls_in=1
// strings: 

void FUN_014dd298(int *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  code *pcVar6;
  uint uVar7;
  uint uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar3 = *param_1 + -1;
  if (*param_1 == 0) {
    iVar3 = 0;
  }
  if (iVar3 == 0) {
    FUN_014dd22c(param_1 + 0xb4);
    if (param_1[0x9c] == -0x7fffffd7) {
      puVar9 = (undefined4 *)param_1[0x9e];
      iVar3 = param_1[0x9d];
      pcVar6 = (code *)*puVar9;
      if (pcVar6 != (code *)0x0) {
        (*pcVar6)(iVar3);
      }
      if (puVar9[1] != 0) {
        thunk_FUN_016d3fb4(iVar3);
      }
    }
    else {
      FUN_01465b84();
    }
    FUN_014c37dc(param_1);
    if (param_1[0x98] != 0) {
      thunk_FUN_016d3fb4(param_1[0x99]);
    }
    if (param_1[0xa8] != 0) {
      thunk_FUN_016d3fb4(param_1[0xa9]);
    }
    uVar7 = param_1[0xb1];
    iVar3 = 0;
    if (uVar7 == 0) {
      uVar5 = 0;
      uVar4 = 0;
    }
    else {
      uVar5 = param_1[0xae];
      uVar8 = param_1[0xb0];
      uVar4 = uVar8 - uVar5;
      if (uVar8 < uVar5) {
        uVar4 = uVar8;
      }
      if (uVar5 - uVar4 < uVar7) {
        iVar3 = uVar7 - (uVar5 - uVar4);
      }
      else {
        uVar5 = uVar4 + uVar7;
      }
    }
    iVar12 = param_1[0xaf];
    puVar9 = (undefined4 *)(iVar12 + uVar4 * 0xc + 4);
    for (iVar14 = uVar5 - uVar4; iVar14 != 0; iVar14 = iVar14 + -1) {
      if (puVar9[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar9);
      }
      puVar9 = puVar9 + 3;
    }
    puVar9 = (undefined4 *)(iVar12 + 4);
    for (; iVar3 != 0; iVar3 = iVar3 + -1) {
      if (puVar9[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar9);
      }
      puVar9 = puVar9 + 3;
    }
    if (param_1[0xae] == 0) {
      return;
    }
    puVar9 = (undefined4 *)param_1[0xaf];
  }
  else {
    if (iVar3 == 1) {
      return;
    }
    if (iVar3 == 2) {
      FUN_014dd22c(param_1 + 2);
      uVar7 = param_1[0xc3];
      iVar3 = 0;
      if (uVar7 == 0) {
        uVar5 = 0;
        uVar4 = 0;
      }
      else {
        uVar5 = param_1[0xc0];
        uVar8 = param_1[0xc2];
        uVar4 = uVar8 - uVar5;
        if (uVar8 < uVar5) {
          uVar4 = uVar8;
        }
        if (uVar5 - uVar4 < uVar7) {
          iVar3 = uVar7 - (uVar5 - uVar4);
        }
        else {
          uVar5 = uVar4 + uVar7;
        }
      }
      iVar14 = param_1[0xc1];
      puVar9 = (undefined4 *)(iVar14 + uVar4 * 0xc + 4);
      for (iVar12 = uVar5 - uVar4; iVar12 != 0; iVar12 = iVar12 + -1) {
        if (puVar9[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar9);
        }
        puVar9 = puVar9 + 3;
      }
      puVar9 = (undefined4 *)(iVar14 + 4);
      for (; iVar3 != 0; iVar3 = iVar3 + -1) {
        if (puVar9[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar9);
        }
        puVar9 = puVar9 + 3;
      }
      if (param_1[0xc0] != 0) {
        thunk_FUN_016d3fb4(param_1[0xc1]);
      }
      if ((char)param_1[0xbc] != '\x03') {
        return;
      }
      puVar9 = (undefined4 *)param_1[0xbd];
      uVar10 = *puVar9;
      puVar13 = (undefined4 *)puVar9[1];
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)(uVar10);
      }
    }
    else {
      FUN_014dd22c(param_1 + 2);
      if ((char)param_1[0xbc] != '\x03') {
        return;
      }
      puVar9 = (undefined4 *)param_1[0xbd];
      uVar10 = *puVar9;
      puVar13 = (undefined4 *)puVar9[1];
      if ((code *)*puVar13 != (code *)0x0) {
        (*(code *)*puVar13)(uVar10);
      }
    }
    if (puVar13[1] != 0) {
      thunk_FUN_016d3fb4(uVar10);
    }
  }
  if (puVar9 == (undefined4 *)0x0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar7 = *(byte *)((int)puVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar4 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar12 = uVar4 - 0x10, uVar4 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar4 = (uint)(*(byte *)((int)puVar9 + -3) >> 5);
  iVar11 = *(int *)(iVar3 + 8) + 0x10;
  iVar14 = iVar12 * uVar7 + iVar12 + -4;
  iVar12 = iVar11 + iVar14;
  if (4 < uVar4) {
    if (uVar4 != 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar6)();
    }
    uVar4 = *(uint *)(iVar12 + -4);
    if (uVar4 < 5) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar6)();
    }
    if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar6)();
    }
  }
  if ((uint)(iVar12 - (int)puVar9) < uVar4) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar6)();
  }
  if (*(char *)(iVar12 - uVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar6)();
  }
  if (*(char *)(iVar11 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar6 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar6)();
  }
  bVar1 = *(byte *)(iVar3 + 0x14);
  uVar4 = 1 << uVar7;
  *(undefined1 *)((int)puVar9 + -3) = 0xff;
  *(undefined2 *)((int)puVar9 + -2) = 0;
  do {
    uVar8 = *(uint *)(iVar3 + 0x10);
    uVar5 = *(uint *)(iVar3 + 0xc) | uVar8;
    if ((uVar4 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar6)();
    }
    if ((uVar8 == 0) || (uVar5 + uVar4 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar7);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar9;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar9 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar4 + uVar8;
      return;
    }
    puVar15 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar5 = *puVar15;
      if (uVar8 != uVar5) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar4 + uVar8;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar8 == uVar5) {
      return;
    }
  } while( true );
}

