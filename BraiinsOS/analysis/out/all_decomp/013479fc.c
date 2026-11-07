// FUN_013479fc @ 013479fc size=120 calls_out=1 calls_in=0
// strings: 

void FUN_013479fc(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint *puVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar5 = param_1[3];
  iVar9 = 0;
  uVar13 = *param_1;
  if (uVar5 == 0) {
    uVar6 = 0;
    uVar5 = 0;
  }
  else {
    uVar7 = param_1[2];
    uVar6 = uVar7 - uVar13;
    if (uVar7 < uVar13) {
      uVar6 = uVar7;
    }
    if (uVar13 - uVar6 < uVar5) {
      iVar9 = uVar5 - (uVar13 - uVar6);
      uVar5 = uVar13;
    }
    else {
      uVar5 = uVar6 + uVar5;
    }
  }
  uVar7 = param_1[1];
  FUN_0135273c(uVar7 + uVar6 * 0x10,uVar5 - uVar6);
  FUN_0135273c(uVar7,iVar9);
  if (uVar13 == 0) {
    return;
  }
  if (uVar7 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar5 = *(byte *)(uVar7 - 3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar8 = uVar13 - 0x10, uVar13 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)(uVar7 - 3) >> 5);
  iVar12 = *(int *)(iVar9 + 8) + 0x10;
  iVar11 = iVar8 * uVar5 + iVar8 + -4;
  iVar8 = iVar12 + iVar11;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar13 = *(uint *)(iVar8 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar8 - uVar7 < uVar13) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar9 + 0x14);
  uVar13 = 1 << uVar5;
  *(undefined1 *)(uVar7 - 3) = 0xff;
  *(undefined2 *)(uVar7 - 2) = 0;
  do {
    uVar7 = *(uint *)(iVar9 + 0x10);
    uVar6 = *(uint *)(iVar9 + 0xc) | uVar7;
    if ((uVar13 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar7 == 0) || (uVar6 + uVar13 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar9,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar13 + uVar7;
      return;
    }
    puVar14 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar14);
      uVar6 = *puVar14;
      if (uVar7 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar14);
    } while (!bVar3);
    *puVar14 = uVar13 + uVar7;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar7 == uVar6) {
      return;
    }
  } while( true );
}

