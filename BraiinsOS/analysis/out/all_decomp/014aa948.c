// FUN_014aa948 @ 014aa948 size=244 calls_out=3 calls_in=1
// strings: 

void FUN_014aa948(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  code *pcVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar5 = *param_1;
  uVar6 = param_1[1];
  puVar14 = param_1 + 2;
  if (uVar5 != 0 || uVar6 != 0) {
    uVar5 = *puVar14;
    iVar3 = 1;
    uVar6 = -(param_1[3] + (uint)(uVar5 >= 4));
    if ((uint)(uVar5 < 4) <= -param_1[3]) {
      iVar3 = uVar5 - 4;
    }
    if (iVar3 != 1) {
      if (iVar3 != 0) {
        return;
      }
      FUN_0145cbd0(param_1 + 0x66);
      FUN_014aaad8(param_1 + 0x2a);
      if (param_1[4] == 3 && param_1[5] == 0) {
        return;
      }
      FUN_0145d4a8(param_1 + 4);
      return;
    }
  }
  if (*puVar14 != 3 || param_1[3] != 0) {
    FUN_0145d4a8(puVar14,param_1[3],uVar5,uVar6);
  }
  FUN_0145cbd0(param_1 + 100);
  FUN_014aaad8(param_1 + 0x28);
  if ((char)param_1[0x6c] != '\0') {
    return;
  }
  uVar6 = param_1[0x6d];
  puVar8 = (undefined4 *)param_1[0x6e];
  pcVar4 = (code *)*puVar8;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar6);
  }
  if (puVar8[1] == 0) {
    return;
  }
  if (uVar6 == 0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar5 = *(byte *)(uVar6 - 3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(uVar6 - 3) >> 5);
  iVar13 = *(int *)(iVar3 + 8) + 0x10;
  iVar11 = iVar7 * uVar5 + iVar7 + -4;
  iVar7 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if (iVar7 - uVar6 < uVar10) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar3 + 0x14);
  uVar10 = 1 << uVar5;
  *(undefined1 *)(uVar6 - 3) = 0xff;
  *(undefined2 *)(uVar6 - 2) = 0;
  do {
    uVar12 = *(uint *)(iVar3 + 0x10);
    uVar6 = *(uint *)(iVar3 + 0xc) | uVar12;
    if ((uVar10 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar12 == 0) || (uVar6 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar14 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar6 = *puVar14;
      if (uVar12 != uVar6) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar2);
    *puVar14 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar6) {
      return;
    }
  } while( true );
}

