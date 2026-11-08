// FUN_00ee3edc @ 00ee3edc size=132 calls_out=1 calls_in=3
// strings: 

void FUN_00ee3edc(int *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar3 = param_1[3] - param_1[1];
  if (uVar3 != 0) {
    iVar12 = 1 - (uVar3 >> 4);
    iVar10 = param_1[1] + 0x1c;
    do {
      uVar13 = *(undefined4 *)(iVar10 + -0x14);
      puVar14 = *(undefined4 **)(iVar10 + -0x10);
      pcVar4 = (code *)*puVar14;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar13);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar13);
      }
      iVar12 = iVar12 + 1;
      iVar10 = iVar10 + 0x10;
    } while (iVar12 != 1);
  }
  if (param_1[2] == 0) {
    return;
  }
  iVar10 = *param_1;
  if (iVar10 == 0) {
    return;
  }
  iVar12 = FUN_016d3bc8();
  uVar3 = *(byte *)(iVar10 + -3) & 0x1f;
  if (((*(byte *)(iVar12 + 0x14) & 0x1f) != 0) ||
     (uVar7 = *(uint *)(iVar12 + 0x14) & 0xfffff000, iVar5 = uVar7 - 0x10, uVar7 == 0)) {
    iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar12 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar7 = (uint)(*(byte *)(iVar10 + -3) >> 5);
  iVar11 = *(int *)(iVar12 + 8) + 0x10;
  iVar8 = iVar5 * uVar3 + iVar5 + -4;
  iVar5 = iVar11 + iVar8;
  if (4 < uVar7) {
    if (uVar7 != 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar4)();
    }
    uVar7 = *(uint *)(iVar5 + -4);
    if (uVar7 < 5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar4)();
    }
    if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar4)();
    }
  }
  if ((uint)(iVar5 - iVar10) < uVar7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar4)();
  }
  if (*(char *)(iVar5 - uVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar4)();
  }
  if (*(char *)(iVar11 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar4 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar4)();
  }
  bVar1 = *(byte *)(iVar12 + 0x14);
  uVar7 = 1 << uVar3;
  *(undefined1 *)(iVar10 + -3) = 0xff;
  *(undefined2 *)(iVar10 + -2) = 0;
  do {
    uVar9 = *(uint *)(iVar12 + 0x10);
    uVar6 = *(uint *)(iVar12 + 0xc) | uVar9;
    if ((uVar7 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar4)();
    }
    if ((uVar9 == 0) || (uVar6 + uVar7 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar12,uVar3);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar14 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar14;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar14 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar12 + 0x10) = uVar7 + uVar9;
      return;
    }
    puVar15 = (uint *)(iVar12 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar6 = *puVar15;
      if (uVar9 != uVar6) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar2);
    *puVar15 = uVar7 + uVar9;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar9 == uVar6) {
      return;
    }
  } while( true );
}

