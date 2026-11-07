// FUN_00ef0730 @ 00ef0730 size=180 calls_out=1 calls_in=0
// strings: 

void FUN_00ef0730(int *param_1)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint *puVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar11 = param_1[1];
  piVar7 = (int *)(iVar11 + 0x40);
  for (iVar13 = param_1[2]; iVar13 != 0; iVar13 = iVar13 + -1) {
    if (*piVar7 != 0) {
      thunk_FUN_016d3fb4(piVar7[1]);
    }
    if (piVar7[3] != 0) {
      thunk_FUN_016d3fb4(piVar7[4]);
    }
    piVar7 = piVar7 + 0x1e;
  }
  if (*param_1 != 0) {
    thunk_FUN_016d3fb4(iVar11);
  }
  iVar13 = param_1[4];
  iVar14 = param_1[5];
  for (iVar11 = 0; iVar14 != iVar11; iVar11 = iVar11 + 1) {
    if (*(int *)(iVar13 + iVar11 * 0x10) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar13 + iVar11 * 0x10 + 4));
    }
  }
  if (param_1[3] == 0) {
    return;
  }
  if (iVar13 == 0) {
    return;
  }
  iVar11 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar13 + -3) & 0x1f;
  if (((*(byte *)(iVar11 + 0x14) & 0x1f) != 0) ||
     (uVar8 = *(uint *)(iVar11 + 0x14) & 0xfffff000, iVar14 = uVar8 - 0x10, uVar8 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar11 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar8 = (uint)(*(byte *)(iVar13 + -3) >> 5);
  iVar12 = *(int *)(iVar11 + 8) + 0x10;
  iVar9 = iVar14 * uVar15 + iVar14 + -4;
  iVar14 = iVar12 + iVar9;
  if (4 < uVar8) {
    if (uVar8 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar8 = *(uint *)(iVar14 + -4);
    if (uVar8 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar14 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar14 - iVar13) < uVar8) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 - uVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar11 + 0x14);
  uVar8 = 1 << uVar15;
  *(undefined1 *)(iVar13 + -3) = 0xff;
  *(undefined2 *)(iVar13 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar11 + 0x10);
    uVar5 = *(uint *)(iVar11 + 0xc) | uVar10;
    if ((uVar8 & uVar5) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar5 + uVar8 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar11,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar4 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar4;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar4 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar11 + 0x10) = uVar8 + uVar10;
      return;
    }
    puVar16 = (uint *)(iVar11 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar5 = *puVar16;
      if (uVar10 != uVar5) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar8 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar5) {
      return;
    }
  } while( true );
}

