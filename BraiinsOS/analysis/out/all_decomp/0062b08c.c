// FUN_0062b08c @ 0062b08c size=224 calls_out=1 calls_in=0
// strings: 

void FUN_0062b08c(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  int unaff_r4;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  undefined4 uStack_28;
  
  iVar15 = param_1[1];
  iVar16 = param_1[2];
  if (iVar16 != 0) {
    iVar9 = 0;
    do {
      iVar14 = iVar15 + iVar9 * 0x1c;
      iVar4 = *(int *)(iVar14 + 0x10);
      if (iVar4 != -0x80000000) {
        iVar13 = *(int *)(iVar14 + 0x18);
        if (iVar13 != 0) {
          puVar12 = (uint *)(*(int *)(iVar14 + 0x14) + 0x18);
          do {
            if ((*puVar12 & 0x7fffffff) == 0) {
              uVar5 = puVar12[3];
            }
            else {
              thunk_FUN_016d3fb4(puVar12[1]);
              uVar5 = puVar12[3];
            }
            if ((uVar5 & 0x7fffffff) != 0) {
              thunk_FUN_016d3fb4(puVar12[4]);
            }
            puVar12 = puVar12 + 0xc;
            iVar13 = iVar13 + -1;
          } while (iVar13 != 0);
          iVar4 = *(int *)(iVar14 + 0x10);
        }
        if (iVar4 != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar14 + 0x14));
        }
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 != iVar16);
  }
  if (*param_1 == 0) {
    return;
  }
  if (iVar15 == 0) {
    return;
  }
  iVar16 = FUN_016d3bc8();
  uVar5 = *(byte *)(iVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar9 = uVar10 - 0x10, uVar10 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar15 + -3) >> 5);
  iVar14 = *(int *)(iVar16 + 8) + 0x10;
  iVar4 = iVar9 * uVar5 + iVar9 + -4;
  iVar9 = iVar14 + iVar4;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar9 + -4);
    if (uVar10 < 5) {
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
  if ((uint)(iVar9 - iVar15) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar4) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar16 + 0x14);
  uVar10 = 1 << uVar5;
  *(undefined1 *)(iVar15 + -3) = 0xff;
  *(undefined2 *)(iVar15 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar16 + 0x10);
    uVar7 = *(uint *)(iVar16 + 0xc) | uVar11;
    if ((uVar10 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar16,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar6;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar6 = uVar8;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar16 + 0x10) = uVar10 + uVar11;
      return;
    }
    puVar12 = (uint *)(iVar16 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar12);
      uVar7 = *puVar12;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar12);
    } while (!bVar3);
    *puVar12 = uVar10 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

