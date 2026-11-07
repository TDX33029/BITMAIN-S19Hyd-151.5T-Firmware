// FUN_01652c38 @ 01652c38 size=208 calls_out=2 calls_in=1
// strings: 

void FUN_01652c38(int *param_1)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  code *pcVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 *puVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    if (param_1[2] == -0x80000000) {
      return;
    }
    if (param_1[2] != 0) {
      thunk_FUN_016d3fb4(param_1[3]);
    }
    piVar6 = (int *)param_1[6];
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar6;
      bVar1 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar1);
    *piVar6 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016592f4(param_1[6]);
      return;
    }
    return;
  }
  if (*param_1 != 1) {
    return;
  }
  if (param_1[2] == 4) {
    iVar9 = param_1[6];
    if (iVar9 == 0) {
      return;
    }
    puVar13 = (undefined4 *)param_1[7];
    pcVar5 = (code *)*puVar13;
    if (pcVar5 != (code *)0x0) {
      (*pcVar5)(iVar9);
    }
    if (puVar13[1] == 0) {
      return;
    }
    goto LAB_014b47f4;
  }
  uVar3 = param_1[2];
  iVar9 = uVar3 - 2;
  if (uVar3 < 2) {
    iVar9 = 2;
  }
  if (iVar9 == 0) {
    puVar13 = (undefined4 *)param_1[4];
    if ((4 < *(byte *)(param_1 + 3)) || (*(byte *)(param_1 + 3) == 3)) {
      puVar16 = (undefined4 *)puVar13[1];
      uVar15 = *puVar13;
      if ((code *)*puVar16 != (code *)0x0) {
        (*(code *)*puVar16)(uVar15);
      }
LAB_0165294c:
      iVar9 = puVar16[1];
joined_r0x01652954:
      if (iVar9 != 0) {
        thunk_FUN_016d3fb4(uVar15);
      }
      thunk_FUN_016d3fb4(puVar13);
    }
  }
  else if (iVar9 == 1) {
    puVar13 = (undefined4 *)param_1[4];
    if ((4 < *(byte *)(param_1 + 3)) || (*(byte *)(param_1 + 3) == 3)) {
      uVar15 = *puVar13;
      puVar16 = (undefined4 *)puVar13[1];
      pcVar5 = (code *)*puVar16;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar15);
      }
      iVar9 = puVar16[1];
      goto joined_r0x01652954;
    }
  }
  else if ((uVar3 != 0) && ((char)param_1[3] == '\x03')) {
    puVar13 = (undefined4 *)param_1[4];
    puVar16 = (undefined4 *)puVar13[1];
    uVar15 = *puVar13;
    if ((code *)*puVar16 != (code *)0x0) {
      (*(code *)*puVar16)(uVar15);
    }
    goto LAB_0165294c;
  }
  if (param_1[6] == 0) {
    return;
  }
  iVar9 = param_1[7];
LAB_014b47f4:
  if (iVar9 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar3 = *(byte *)(iVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar9 + -3) >> 5);
  iVar14 = *(int *)(iVar4 + 8) + 0x10;
  iVar11 = iVar7 * uVar3 + iVar7 + -4;
  iVar7 = iVar14 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar7 - iVar9) < uVar10) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar10 = 1 << uVar3;
  *(undefined1 *)(iVar9 + -3) = 0xff;
  *(undefined2 *)(iVar9 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar15 = *puVar13;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar13 = uVar15;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar17 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

