// FUN_01631910 @ 01631910 size=124 calls_out=3 calls_in=2
// strings: 

void FUN_01631910(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  uint uVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar9 = param_1[1];
  if (iVar9 == 0) {
    return;
  }
  iVar5 = *param_1;
  iVar11 = 0;
  puVar6 = (undefined4 *)(iVar5 + 0xc);
  do {
    iVar11 = iVar11 + 1;
    if (1 < *(ushort *)(puVar6 + -3)) {
      if (*(ushort *)(puVar6 + -3) == 2) {
        FUN_01631910(puVar6);
      }
      else {
        uVar12 = *puVar6;
        iVar13 = puVar6[1];
        FUN_016317bc(uVar12,iVar13);
        if (iVar13 != 0) {
          thunk_FUN_016d3fb4(uVar12);
        }
      }
    }
    puVar6 = puVar6 + 5;
  } while (iVar9 != iVar11);
  if (iVar5 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar11 = uVar7 - 0x10, uVar7 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar10 = *(int *)(iVar9 + 8) + 0x10;
  iVar13 = iVar11 * uVar14 + iVar11 + -4;
  iVar11 = iVar10 + iVar13;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar7 = *(uint *)(iVar11 + -4);
    if (uVar7 < 5) {
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
  if ((uint)(iVar11 - iVar5) < uVar7) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar10 + iVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar9 + 0x14);
  uVar7 = 1 << uVar14;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar8 = *(uint *)(iVar9 + 0x10);
    uVar4 = *(uint *)(iVar9 + 0xc) | uVar8;
    if ((uVar7 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar8 == 0) || (uVar4 + uVar7 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar9,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar12 = *puVar6;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar6 = uVar12;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar7 + uVar8;
      return;
    }
    puVar15 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar4 = *puVar15;
      if (uVar8 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar7 + uVar8;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar8 == uVar4) {
      return;
    }
  } while( true );
}

