// FUN_00ee3d94 @ 00ee3d94 size=132 calls_out=1 calls_in=1
// strings: 

void FUN_00ee3d94(int *param_1)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  uVar4 = param_1[3] - param_1[1];
  if (uVar4 != 0) {
    puVar11 = (undefined4 *)(param_1[1] + 4);
    iVar13 = 1 - (uVar4 >> 3);
    do {
      uVar14 = puVar11[-1];
      puVar15 = (undefined4 *)*puVar11;
      pcVar5 = (code *)*puVar15;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar14);
      }
      if (puVar15[1] != 0) {
        thunk_FUN_016d3fb4(uVar14);
      }
      iVar13 = iVar13 + 1;
      puVar11 = puVar11 + 2;
    } while (iVar13 != 1);
  }
  if (param_1[2] == 0) {
    return;
  }
  iVar13 = *param_1;
  if (iVar13 == 0) {
    return;
  }
  iVar3 = FUN_016d3bc8();
  uVar4 = *(byte *)(iVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar3 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar3 + 0x14) & 0xfffff000, iVar6 = uVar8 - 0x10, uVar8 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar3 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar8 = (uint)(*(byte *)(iVar13 + -3) >> 5);
  iVar12 = *(int *)(iVar3 + 8) + 0x10;
  iVar9 = iVar6 * uVar4 + iVar6 + -4;
  iVar6 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar8 = *(uint *)(iVar6 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar5)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar5)();
    }
  }
  if ((uint)(iVar6 - iVar13) < uVar8) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar6 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar1 = *(byte *)(iVar3 + 0x14);
  uVar8 = 1 << uVar4;
  *(undefined1 *)(iVar13 + -3) = 0xff;
  *(undefined2 *)(iVar13 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar3 + 0x10);
    uVar7 = *(uint *)(iVar3 + 0xc) | uVar10;
    if ((uVar8 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar10 == 0) || (uVar7 + uVar8 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar3,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar11 = (undefined4 *)FUN_016d2bc8();
      uVar14 = *puVar11;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar11 = uVar14;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar3 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar16 = (uint *)(iVar3 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar7 = *puVar16;
      if (uVar10 != uVar7) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar7) {
      return;
    }
  } while( true );
}

