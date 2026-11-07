// FUN_015f2180 @ 015f2180 size=252 calls_out=4 calls_in=1
// strings: 

void FUN_015f2180(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  int unaff_r4;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined4 uStack_28;
  
  if (((char)param_1[3] == '\0') && (uVar13 = param_1[2], uVar13 != 0)) {
    iVar15 = param_1[1];
    uVar14 = 0;
    do {
      iVar9 = iVar15 + uVar14;
      iVar11 = uVar13 - uVar14;
      iVar4 = FUN_016e034e(1,iVar9,iVar11);
      if (iVar4 == -1) {
        piVar5 = (int *)FUN_016d2bc8();
        iVar6 = *piVar5;
        *(undefined1 *)(param_1 + 3) = 0;
        if (iVar6 != 4) {
          iVar4 = iVar11;
          if (iVar6 == 9) goto LAB_015f2208;
          goto LAB_015f2218;
        }
      }
      else {
        *(undefined1 *)(param_1 + 3) = 0;
LAB_015f2208:
        if (iVar4 == 0) {
LAB_015f2218:
          if (uVar14 == 0) goto LAB_015f2240;
          FUN_016dd52c(iVar15,iVar9,iVar11);
          goto LAB_015f223c;
        }
        uVar14 = iVar4 + uVar14;
      }
    } while (uVar14 < uVar13);
    iVar11 = 0;
    if (uVar13 < uVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar14,uVar13,&DAT_018ab428);
    }
LAB_015f223c:
    param_1[2] = iVar11;
  }
LAB_015f2240:
  if (*param_1 == 0) {
    return;
  }
  iVar15 = param_1[1];
  if (iVar15 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar13 = *(byte *)(iVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar14 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar9 = uVar14 - 0x10, uVar14 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar14 = (uint)(*(byte *)(iVar15 + -3) >> 5);
  iVar6 = *(int *)(iVar4 + 8) + 0x10;
  iVar11 = iVar9 * uVar13 + iVar9 + -4;
  iVar9 = iVar6 + iVar11;
  if (4 < uVar14) {
    if (uVar14 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar14 = *(uint *)(iVar9 + -4);
    if (uVar14 < 5) {
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
  if ((uint)(iVar9 - iVar15) < uVar14) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 - uVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar14 = 1 << uVar13;
  *(undefined1 *)(iVar15 + -3) = 0xff;
  *(undefined2 *)(iVar15 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar4 + 0x10);
    uVar8 = *(uint *)(iVar4 + 0xc) | uVar12;
    if ((uVar14 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar14 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar7;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar7 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar14 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar14 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

