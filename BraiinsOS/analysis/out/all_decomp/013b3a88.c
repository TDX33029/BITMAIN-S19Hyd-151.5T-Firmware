// FUN_013b3a88 @ 013b3a88 size=136 calls_out=1 calls_in=0
// strings: 

void FUN_013b3a88(int *param_1)

{
  bool bVar1;
  code *pcVar2;
  byte bVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar10 = param_1[2];
  if (iVar10 != 0) {
    iVar13 = param_1[1];
    iVar15 = 0;
    do {
      piVar4 = (int *)(iVar13 + iVar15 * 8);
      piVar6 = (int *)*piVar4;
      if (piVar6 != (int *)0x0) {
        DataMemoryBarrier(0xb);
        do {
          iVar7 = *piVar6;
          bVar1 = (bool)hasExclusiveAccess(piVar6);
        } while (!bVar1);
        *piVar6 = iVar7 + -1;
        if (iVar7 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0143daec(*piVar4,piVar4[1]);
        }
      }
      iVar15 = iVar15 + 1;
    } while (iVar15 != iVar10);
  }
  if (*param_1 == 0) {
    return;
  }
  iVar10 = param_1[1];
  if (iVar10 == 0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar16 = *(byte *)(iVar10 + -3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar15 = uVar11 - 0x10, uVar11 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar11 = (uint)(*(byte *)(iVar10 + -3) >> 5);
  iVar14 = *(int *)(iVar13 + 8) + 0x10;
  iVar7 = iVar15 * uVar16 + iVar15 + -4;
  iVar15 = iVar14 + iVar7;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar11 = *(uint *)(iVar15 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar15 - iVar10) < uVar11) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar15 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar14 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar13 + 0x14);
  uVar11 = 1 << uVar16;
  *(undefined1 *)(iVar10 + -3) = 0xff;
  *(undefined2 *)(iVar10 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar13 + 0x10);
    uVar8 = *(uint *)(iVar13 + 0xc) | uVar12;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar11 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar13,uVar16);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar17 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar1 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar1);
    *puVar17 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

