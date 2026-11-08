// FUN_00ce259c @ 00ce259c size=648 calls_out=1 calls_in=3
// strings: 

void FUN_00ce259c(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int unaff_r4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uStack_28;
  
  uVar5 = param_1[0x33];
  uVar7 = param_1[0x34];
  uVar9 = 0;
  if (uVar7 != 0) {
    do {
      while (iVar4 = uVar5 + uVar9 * 0x20, *(int *)(iVar4 + 8) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + 0xc));
        uVar9 = uVar9 + 1;
        if (uVar7 == uVar9) goto LAB_00ce25ec;
      }
      uVar9 = uVar9 + 1;
    } while (uVar7 != uVar9);
  }
LAB_00ce25ec:
  if (param_1[0x32] != 0) {
    thunk_FUN_016d3fb4(uVar5);
  }
  uVar5 = 0;
  iVar4 = 0;
  if ((uint)(*param_1 < 2) <= -param_1[1]) {
    iVar4 = *param_1 - 1;
  }
  if (iVar4 == 0) {
    uVar7 = param_1[0x16];
    uVar9 = param_1[0x17];
    while (uVar5 != uVar9) {
      iVar4 = uVar7 + uVar5 * 0x48;
      iVar12 = *(int *)(iVar4 + 0x3c);
      puVar11 = (undefined4 *)(iVar12 + 0x10);
      for (iVar13 = *(int *)(iVar4 + 0x40); iVar13 != 0; iVar13 = iVar13 + -1) {
        if (puVar11[-4] != 0) {
          thunk_FUN_016d3fb4(puVar11[-3]);
        }
        if (puVar11[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar11);
        }
        puVar11 = puVar11 + 6;
      }
      uVar5 = uVar5 + 1;
      if (*(int *)(iVar4 + 0x38) != 0) {
        thunk_FUN_016d3fb4(iVar12);
      }
    }
    uVar5 = param_1[0x15];
  }
  else {
    if (iVar4 != 1) {
      uVar9 = param_1[0x14];
      uVar7 = param_1[0x15];
      while (uVar5 != uVar7) {
        iVar4 = uVar9 + uVar5 * 0x48;
        iVar12 = *(int *)(iVar4 + 0x3c);
        puVar11 = (undefined4 *)(iVar12 + 0x10);
        for (iVar13 = *(int *)(iVar4 + 0x40); iVar13 != 0; iVar13 = iVar13 + -1) {
          if (puVar11[-4] != 0) {
            thunk_FUN_016d3fb4(puVar11[-3]);
          }
          if (puVar11[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar11);
          }
          puVar11 = puVar11 + 6;
        }
        uVar5 = uVar5 + 1;
        if (*(int *)(iVar4 + 0x38) != 0) {
          thunk_FUN_016d3fb4(iVar12);
        }
      }
      if (param_1[0x13] != 0) {
        thunk_FUN_016d3fb4(uVar9);
      }
      if (param_1[0x18] == 0) {
        return;
      }
      uVar7 = param_1[0x19];
      goto LAB_014b47f4;
    }
    uVar7 = param_1[0x14];
    uVar9 = param_1[0x15];
    while (uVar5 != uVar9) {
      iVar4 = uVar7 + uVar5 * 0x48;
      iVar12 = *(int *)(iVar4 + 0x3c);
      puVar11 = (undefined4 *)(iVar12 + 0x10);
      for (iVar13 = *(int *)(iVar4 + 0x40); iVar13 != 0; iVar13 = iVar13 + -1) {
        if (puVar11[-4] != 0) {
          thunk_FUN_016d3fb4(puVar11[-3]);
        }
        if (puVar11[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar11);
        }
        puVar11 = puVar11 + 6;
      }
      uVar5 = uVar5 + 1;
      if (*(int *)(iVar4 + 0x38) != 0) {
        thunk_FUN_016d3fb4(iVar12);
      }
    }
    uVar5 = param_1[0x13];
  }
  if (uVar5 == 0) {
    return;
  }
LAB_014b47f4:
  if (uVar7 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar5 = *(byte *)(uVar7 - 3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar12 = uVar9 - 0x10, uVar9 == 0)) {
    iVar12 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(uVar7 - 3) >> 5);
  iVar10 = *(int *)(iVar4 + 8) + 0x10;
  iVar13 = iVar12 * uVar5 + iVar12 + -4;
  iVar12 = iVar10 + iVar13;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar12 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar12 - uVar7 < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar10 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar9 = 1 << uVar5;
  *(undefined1 *)(uVar7 - 3) = 0xff;
  *(undefined2 *)(uVar7 - 2) = 0;
  do {
    uVar8 = *(uint *)(iVar4 + 0x10);
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar8;
    if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar8 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar11 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar11;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar11 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar9 + uVar8;
      return;
    }
    puVar14 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar7 = *puVar14;
      if (uVar8 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar9 + uVar8;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar8 == uVar7) {
      return;
    }
  } while( true );
}

