// FUN_01505ed0 @ 01505ed0 size=172 calls_out=1 calls_in=11
// strings: 

void FUN_01505ed0(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar4 = *param_1;
  iVar5 = 3;
  if (0x80000000 < uVar4) {
    iVar5 = uVar4 + 0x7fffffff;
  }
  if (iVar5 != 0) {
    if (iVar5 == 1) {
      uVar4 = param_1[2];
      puVar8 = (undefined4 *)(uVar4 + 4);
      for (uVar13 = param_1[3]; uVar13 != 0; uVar13 = uVar13 - 1) {
        if (puVar8[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar8);
        }
        puVar8 = puVar8 + 3;
      }
      if (param_1[1] == 0) {
        return;
      }
      goto LAB_014b47f4;
    }
    if (iVar5 != 2) {
      if ((uVar4 & 0x7fffffff) == 0) {
        return;
      }
      uVar4 = param_1[1];
      goto LAB_014b47f4;
    }
  }
  if (param_1[1] == 0) {
    return;
  }
  uVar4 = param_1[2];
LAB_014b47f4:
  if (uVar4 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar13 = *(byte *)(uVar4 - 3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(uVar4 - 3) >> 5);
  iVar12 = *(int *)(iVar5 + 8) + 0x10;
  iVar10 = iVar6 * uVar13 + iVar6 + -4;
  iVar6 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar6 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar6 - uVar4 < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar9 = 1 << uVar13;
  *(undefined1 *)(uVar4 - 3) = 0xff;
  *(undefined2 *)(uVar4 - 2) = 0;
  do {
    uVar11 = *(uint *)(iVar5 + 0x10);
    uVar4 = *(uint *)(iVar5 + 0xc) | uVar11;
    if ((uVar9 & uVar4) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar4 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar14 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar4 = *puVar14;
      if (uVar11 != uVar4) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar4) {
      return;
    }
  } while( true );
}

