// FUN_00c02024 @ 00c02024 size=560 calls_out=1 calls_in=2
// strings: 

void FUN_00c02024(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int unaff_r4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uStack_28;
  
  uVar6 = 0;
  iVar4 = 0;
  if ((uint)(*param_1 < 2) <= -param_1[1]) {
    iVar4 = *param_1 - 1;
  }
  if (iVar4 == 0) {
    uVar8 = param_1[0x16];
    uVar12 = param_1[0x17];
    while (uVar6 != uVar12) {
      iVar4 = uVar8 + uVar6 * 0x48;
      iVar11 = *(int *)(iVar4 + 0x3c);
      puVar10 = (undefined4 *)(iVar11 + 0x10);
      for (iVar13 = *(int *)(iVar4 + 0x40); iVar13 != 0; iVar13 = iVar13 + -1) {
        if (puVar10[-4] != 0) {
          thunk_FUN_016d3fb4(puVar10[-3]);
        }
        if (puVar10[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar10);
        }
        puVar10 = puVar10 + 6;
      }
      uVar6 = uVar6 + 1;
      if (*(int *)(iVar4 + 0x38) != 0) {
        thunk_FUN_016d3fb4(iVar11);
      }
    }
    uVar6 = param_1[0x15];
  }
  else {
    if (iVar4 != 1) {
      uVar12 = param_1[0x14];
      uVar8 = param_1[0x15];
      while (uVar6 != uVar8) {
        iVar4 = uVar12 + uVar6 * 0x48;
        iVar11 = *(int *)(iVar4 + 0x3c);
        puVar10 = (undefined4 *)(iVar11 + 0x10);
        for (iVar13 = *(int *)(iVar4 + 0x40); iVar13 != 0; iVar13 = iVar13 + -1) {
          if (puVar10[-4] != 0) {
            thunk_FUN_016d3fb4(puVar10[-3]);
          }
          if (puVar10[-1] != 0) {
            thunk_FUN_016d3fb4(*puVar10);
          }
          puVar10 = puVar10 + 6;
        }
        uVar6 = uVar6 + 1;
        if (*(int *)(iVar4 + 0x38) != 0) {
          thunk_FUN_016d3fb4(iVar11);
        }
      }
      if (param_1[0x13] != 0) {
        thunk_FUN_016d3fb4(uVar12);
      }
      if (param_1[0x18] == 0) {
        return;
      }
      uVar8 = param_1[0x19];
      goto LAB_014b47f4;
    }
    uVar8 = param_1[0x14];
    uVar12 = param_1[0x15];
    while (uVar6 != uVar12) {
      iVar4 = uVar8 + uVar6 * 0x48;
      iVar11 = *(int *)(iVar4 + 0x3c);
      puVar10 = (undefined4 *)(iVar11 + 0x10);
      for (iVar13 = *(int *)(iVar4 + 0x40); iVar13 != 0; iVar13 = iVar13 + -1) {
        if (puVar10[-4] != 0) {
          thunk_FUN_016d3fb4(puVar10[-3]);
        }
        if (puVar10[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar10);
        }
        puVar10 = puVar10 + 6;
      }
      uVar6 = uVar6 + 1;
      if (*(int *)(iVar4 + 0x38) != 0) {
        thunk_FUN_016d3fb4(iVar11);
      }
    }
    uVar6 = param_1[0x13];
  }
  if (uVar6 == 0) {
    return;
  }
LAB_014b47f4:
  if (uVar8 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar6 = *(byte *)(uVar8 - 3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar11 = uVar12 - 0x10, uVar12 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(uVar8 - 3) >> 5);
  iVar9 = *(int *)(iVar4 + 8) + 0x10;
  iVar13 = iVar11 * uVar6 + iVar11 + -4;
  iVar11 = iVar9 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar12 = *(uint *)(iVar11 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar11 - uVar8 < uVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar12 = 1 << uVar6;
  *(undefined1 *)(uVar8 - 3) = 0xff;
  *(undefined2 *)(uVar8 - 2) = 0;
  do {
    uVar7 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar7;
    if ((uVar12 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar7 == 0) || (uVar8 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar6);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar10 = (undefined4 *)FUN_016d2bc8();
      uVar5 = *puVar10;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar10 = uVar5;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar12 + uVar7;
      return;
    }
    puVar14 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar8 = *puVar14;
      if (uVar7 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar12 + uVar7;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar7 == uVar8) {
      return;
    }
  } while( true );
}

