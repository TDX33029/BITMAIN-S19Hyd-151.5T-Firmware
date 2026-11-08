// FUN_0148e400 @ 0148e400 size=408 calls_out=3 calls_in=2
// strings: 

void FUN_0148e400(int param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  int iVar5;
  int unaff_r4;
  undefined4 uVar6;
  int *piVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 *puVar17;
  uint *puVar18;
  int *local_28;
  
  if ((9 < *(byte *)(param_1 + 0x6c)) && (*(int *)(param_1 + 0x74) != 0)) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x70));
  }
  FUN_0145d5e0(param_1 + 0x40);
  FUN_0148dd54(param_1);
  piVar7 = *(int **)(param_1 + 0x80);
  if (piVar7 != (int *)0x0) {
    iVar3 = piVar7[1];
    if (iVar3 != 0) {
      iVar14 = piVar7[3];
      local_28 = piVar7;
      if (iVar14 != 0) {
        puVar12 = (uint *)*piVar7;
        puVar18 = puVar12 + 1;
        uVar15 = ~*puVar12 & 0x80808080;
        do {
          puVar8 = puVar18;
          if (uVar15 == 0) {
            do {
              puVar18 = puVar8 + 1;
              uVar15 = *puVar8;
              puVar12 = puVar12 + -0x18;
              puVar8 = puVar18;
            } while ((uVar15 & 0x80808080) == 0x80808080);
            uVar15 = uVar15 & 0x80808080 ^ 0x80808080;
          }
          uVar9 = (uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3;
          uVar16 = puVar12[uVar9 * -6 + -2];
          puVar17 = (undefined4 *)puVar12[uVar9 * -6 + -1];
          pcVar4 = (code *)*puVar17;
          if (pcVar4 != (code *)0x0) {
            (*pcVar4)(uVar16);
          }
          if (puVar17[1] != 0) {
            thunk_FUN_016d3fb4(uVar16);
          }
          iVar14 = iVar14 + -1;
          uVar15 = uVar15 - 1 & uVar15;
        } while (iVar14 != 0);
      }
      piVar7 = local_28;
      if (iVar3 * 0x19 != -0x1d) {
        thunk_FUN_016d3fb4(*local_28 + iVar3 * -0x18 + -0x18);
      }
    }
    thunk_FUN_016d3fb4(piVar7);
  }
  if (*(int *)(param_1 + 0x88) != 0) {
                    /* WARNING: Could not recover jumptable at 0x0148e558. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)(param_1 + 0x88) + 0x10))
              (param_1 + 0x94,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90));
    return;
  }
  iVar3 = *(int *)(param_1 + 0x8c);
  puVar17 = *(undefined4 **)(param_1 + 0x90);
  pcVar4 = (code *)*puVar17;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(iVar3);
  }
  if (puVar17[1] == 0) {
    return;
  }
  if (iVar3 == 0) {
    return;
  }
  iVar14 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar3 + -3) & 0x1f;
  if (((*(byte *)(iVar14 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar14 + 0x14) & 0xfffff000, iVar5 = uVar9 - 0x10, uVar9 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar14 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar3 + -3) >> 5);
  iVar13 = *(int *)(iVar14 + 8) + 0x10;
  iVar10 = iVar5 * uVar15 + iVar5 + -4;
  iVar5 = iVar13 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar9 = *(uint *)(iVar5 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar5 - iVar3) < uVar9) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar5 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar13 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar14 + 0x14);
  uVar9 = 1 << uVar15;
  *(undefined1 *)(iVar3 + -3) = 0xff;
  *(undefined2 *)(iVar3 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar14 + 0x10);
    uVar16 = *(uint *)(iVar14 + 0xc) | uVar11;
    if ((uVar9 & uVar16) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar11 == 0) || (uVar16 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar14,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar17 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar17;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar17 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar14 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar18 = (uint *)(iVar14 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar16 = *puVar18;
      if (uVar11 != uVar16) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar2);
    *puVar18 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar16) {
      return;
    }
  } while( true );
}

