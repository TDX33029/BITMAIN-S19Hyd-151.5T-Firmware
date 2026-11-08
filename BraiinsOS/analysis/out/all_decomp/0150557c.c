// FUN_0150557c @ 0150557c size=164 calls_out=1 calls_in=0
// strings: 

void FUN_0150557c(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar14 = param_1[1];
  iVar16 = param_1[2];
  if (iVar16 != 0) {
    piVar11 = (int *)(iVar14 + 4);
    iVar9 = 0;
    do {
      uVar6 = piVar11[-1];
      iVar7 = 4;
      piVar4 = (int *)(iVar14 + iVar9 * 0x10);
      if (0x80000000 < uVar6) {
        iVar7 = uVar6 + 0x7fffffff;
      }
      switch(iVar7) {
      case 0:
      case 2:
        break;
      case 1:
        piVar4 = piVar4 + 1;
        goto LAB_015055fc;
      case 3:
        piVar4 = piVar11;
LAB_015055fc:
        if (*piVar4 != 0) {
          thunk_FUN_016d3fb4(piVar4[1]);
        }
        break;
      default:
        if (uVar6 != 0x80000000) goto LAB_015055fc;
      }
      iVar9 = iVar9 + 1;
      piVar11 = piVar11 + 4;
      iVar16 = iVar16 + -1;
    } while (iVar16 != 0);
  }
  if (*param_1 == 0) {
    return;
  }
  if (iVar14 == 0) {
    return;
  }
  iVar16 = FUN_016d3bc8();
  uVar6 = *(byte *)(iVar14 + -3) & 0x1f;
  if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
     (uVar12 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar9 = uVar12 - 0x10, uVar12 == 0)) {
    iVar9 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar12 = (uint)(*(byte *)(iVar14 + -3) >> 5);
  iVar15 = *(int *)(iVar16 + 8) + 0x10;
  iVar7 = iVar9 * uVar6 + iVar9 + -4;
  iVar9 = iVar15 + iVar7;
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
  if ((uint)(iVar9 - iVar14) < uVar12) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar9 - uVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar16 + 0x14);
  uVar12 = 1 << uVar6;
  *(undefined1 *)(iVar14 + -3) = 0xff;
  *(undefined2 *)(iVar14 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar16 + 0x10);
    uVar8 = *(uint *)(iVar16 + 0xc) | uVar13;
    if ((uVar12 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar12 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar16,uVar6);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar5;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar5 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar16 + 0x10) = uVar12 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar16 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar8 = *puVar17;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar12 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

