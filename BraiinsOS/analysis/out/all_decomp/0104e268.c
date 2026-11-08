// FUN_0104e268 @ 0104e268 size=140 calls_out=2 calls_in=0
// strings: 

void FUN_0104e268(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  short *psVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int iVar8;
  int extraout_r1;
  int extraout_r1_00;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar7 = param_1[3] - param_1[1];
  if (uVar7 != 0) {
    uVar7 = uVar7 >> 2;
    iVar8 = uVar7 * 0x24924925;
    uVar7 = uVar7 / 7;
    psVar4 = (short *)param_1[1];
    do {
      if (*psVar4 != 0) {
        if (*psVar4 == 2) {
          FUN_0104d4ac(psVar4 + 2,iVar8);
          iVar8 = extraout_r1;
        }
        else if (*(int *)(psVar4 + 2) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(psVar4 + 4));
          iVar8 = extraout_r1_00;
        }
      }
      uVar7 = uVar7 - 1;
      psVar4 = psVar4 + 0xe;
    } while (uVar7 != 0);
  }
  if (param_1[2] == 0) {
    return;
  }
  iVar8 = *param_1;
  if (iVar8 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar7 = *(byte *)(iVar8 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar9 = uVar12 - 0x10, uVar12 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar8 + -3) >> 5);
  iVar15 = *(int *)(iVar5 + 8) + 0x10;
  iVar13 = iVar9 * uVar7 + iVar9 + -4;
  iVar9 = iVar15 + iVar13;
  if (4 < uVar12) {
    if (uVar12 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar12 = *(uint *)(iVar9 + -4);
    if (uVar12 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar9 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar9 - iVar8) < uVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar12 = 1 << uVar7;
  *(undefined1 *)(iVar8 + -3) = 0xff;
  *(undefined2 *)(iVar8 + -2) = 0;
  do {
    uVar14 = *(uint *)(iVar5 + 0x10);
    uVar10 = *(uint *)(iVar5 + 0xc) | uVar14;
    if ((uVar12 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar14 == 0) || (uVar10 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar7);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar11 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar11;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar12 + uVar14;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar10 = *puVar16;
      if (uVar14 != uVar10) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar12 + uVar14;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar14 == uVar10) {
      return;
    }
  } while( true );
}

