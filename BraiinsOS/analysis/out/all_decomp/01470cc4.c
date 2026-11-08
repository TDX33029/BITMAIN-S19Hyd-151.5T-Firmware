// FUN_01470cc4 @ 01470cc4 size=132 calls_out=0 calls_in=5
// strings: 

void FUN_01470cc4(int *param_1)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int unaff_r6;
  int iVar11;
  uint uVar12;
  uint *puVar13;
  bool bVar14;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 0) {
    unaff_r6 = param_1[2];
    puVar7 = (undefined4 *)param_1[3];
    pcVar3 = (code *)*puVar7;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(unaff_r6);
    }
    iVar2 = puVar7[1];
  }
  else {
    if (*param_1 != 1) {
      return;
    }
    bVar14 = param_1[2] == 0 && param_1[3] == 0;
    if (param_1[2] != 0 || param_1[3] != 0) {
      unaff_r6 = param_1[4];
      bVar14 = unaff_r6 == 0;
    }
    if (bVar14) {
      return;
    }
    puVar7 = (undefined4 *)param_1[5];
    pcVar3 = (code *)*puVar7;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(unaff_r6);
    }
    iVar2 = puVar7[1];
  }
  if (iVar2 == 0) {
    return;
  }
  if (unaff_r6 == 0) {
    return;
  }
  iVar2 = FUN_016d3bc8();
  uVar12 = *(byte *)(unaff_r6 + -3) & 0x1f;
  if (((*(byte *)(iVar2 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar2 + 0x14) & 0xfffff000, iVar4 = uVar8 - 0x10, uVar8 == 0)) {
    iVar4 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar2 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(unaff_r6 + -3) >> 5);
  iVar11 = *(int *)(iVar2 + 8) + 0x10;
  iVar9 = iVar4 * uVar12 + iVar4 + -4;
  iVar4 = iVar11 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar3)();
    }
    uVar8 = *(uint *)(iVar4 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar3)();
    }
    if (*(char *)(iVar4 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar3)();
    }
  }
  if ((uint)(iVar4 - unaff_r6) < uVar8) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar3)();
  }
  if (*(char *)(iVar4 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar3)();
  }
  if (*(char *)(iVar11 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar3)();
  }
  bVar1 = *(byte *)(iVar2 + 0x14);
  uVar8 = 1 << uVar12;
  *(undefined1 *)(unaff_r6 + -3) = 0xff;
  *(undefined2 *)(unaff_r6 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar2 + 0x10);
    uVar5 = *(uint *)(iVar2 + 0xc) | uVar10;
    if ((uVar8 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar3)();
    }
    if ((uVar10 == 0) || (uVar5 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar2,uVar12);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar7;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar7 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar2 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar13 = (uint *)(iVar2 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar13);
      uVar5 = *puVar13;
      if (uVar10 != uVar5) goto LAB_016d409c;
      bVar14 = (bool)hasExclusiveAccess(puVar13);
    } while (!bVar14);
    *puVar13 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar5) {
      return;
    }
  } while( true );
}

