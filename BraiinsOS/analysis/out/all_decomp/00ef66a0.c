// FUN_00ef66a0 @ 00ef66a0 size=236 calls_out=2 calls_in=2
// strings: 

void FUN_00ef66a0(int *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  code *pcVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  uint *puVar15;
  bool bVar16;
  undefined4 uStack_28;
  int iStack_24;
  
  if (*param_1 == 1) {
    puVar8 = (undefined4 *)param_1[2];
    if ((4 < *(byte *)(param_1 + 1)) || (*(byte *)(param_1 + 1) == 3)) {
      uVar13 = *puVar8;
      puVar14 = (undefined4 *)puVar8[1];
      pcVar5 = (code *)*puVar14;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar13);
      }
      if (puVar14[1] != 0) {
        thunk_FUN_016d3fb4(uVar13);
      }
      thunk_FUN_016d3fb4(puVar8);
      uVar2 = param_1[5];
      goto joined_r0x00ef66d4;
    }
  }
  uVar2 = param_1[5];
joined_r0x00ef66d4:
  if (uVar2 == 1) {
    FUN_00d793d8(param_1 + 6);
  }
  else {
    bVar16 = uVar2 == 0;
    if (bVar16) {
      uVar2 = (uint)*(byte *)(param_1 + 0xf);
    }
    if ((bVar16 && uVar2 == 3) && (param_1[7] != 0)) {
      thunk_FUN_016d3fb4(param_1[8]);
    }
  }
  uVar2 = param_1[0x10];
  if (uVar2 == 1) {
    FUN_00d793d8(param_1 + 0x11);
    return;
  }
  bVar16 = uVar2 == 0;
  if (bVar16) {
    uVar2 = (uint)*(byte *)(param_1 + 0x1a);
  }
  if ((!bVar16 || uVar2 != 3) || (param_1[0x12] == 0)) {
    return;
  }
  iVar3 = param_1[0x13];
  if (iVar3 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar2 = *(byte *)(iVar3 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar3 + -3) >> 5);
  iVar12 = *(int *)(iVar4 + 8) + 0x10;
  iVar10 = iVar6 * uVar2 + iVar6 + -4;
  iVar6 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar5)();
    }
    uVar9 = *(uint *)(iVar6 + -4);
    if (uVar9 < 5) {
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
  if ((uint)(iVar6 - iVar3) < uVar9) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar5)();
  }
  if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar5)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar5 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar5)();
  }
  bVar1 = *(byte *)(iVar4 + 0x14);
  uVar9 = 1 << uVar2;
  *(undefined1 *)(iVar3 + -3) = 0xff;
  *(undefined2 *)(iVar3 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar5)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar1 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar2);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar8;
      FUN_016d6ac4(uStack_28,iStack_24);
      *puVar8 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar9 + uVar11;
      return;
    }
    puVar15 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar15);
      uVar7 = *puVar15;
      if (uVar11 != uVar7) goto LAB_016d409c;
      bVar16 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar16);
    *puVar15 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

