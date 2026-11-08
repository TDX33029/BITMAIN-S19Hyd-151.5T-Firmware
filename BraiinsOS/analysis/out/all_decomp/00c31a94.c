// FUN_00c31a94 @ 00c31a94 size=248 calls_out=5 calls_in=2
// strings: 

void FUN_00c31a94(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  uint uVar16;
  uint *puVar17;
  undefined4 uStack_28;
  int iStack_24;
  
  iVar5 = param_3 * 0x38;
  if (0x2492492 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar5);
  }
  if (iVar5 == 0) {
    puVar4 = (undefined4 *)&DAT_00000008;
    uVar16 = 0;
  }
  else {
    puVar4 = (undefined4 *)thunk_FUN_016d4a50(iVar5);
    uVar16 = param_3;
    if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar5);
    }
  }
  FUN_016dd1aa(puVar4,param_2,iVar5);
  if (param_3 < 2) {
    if (param_3 == 0) {
      *param_1 = 5;
      param_1[1] = 0;
      goto joined_r0x00c31b5c;
    }
  }
  else if (param_3 < 0x15) {
    FUN_00b5e064(puVar4,param_3);
  }
  else {
    FUN_00cdb29c(puVar4,param_3);
  }
  uVar6 = puVar4[1];
  uVar7 = puVar4[2];
  uVar14 = puVar4[3];
  *param_1 = *puVar4;
  param_1[1] = uVar6;
  param_1[2] = uVar7;
  param_1[3] = uVar14;
  uVar6 = puVar4[5];
  uVar7 = puVar4[6];
  uVar14 = puVar4[7];
  uVar15 = puVar4[8];
  param_1[4] = puVar4[4];
  param_1[5] = uVar6;
  param_1[6] = uVar7;
  param_1[7] = uVar14;
  param_1[8] = uVar15;
  uVar6 = puVar4[10];
  uVar7 = puVar4[0xb];
  uVar14 = puVar4[0xc];
  uVar15 = puVar4[0xd];
  param_1[9] = puVar4[9];
  param_1[10] = uVar6;
  param_1[0xb] = uVar7;
  param_1[0xc] = uVar14;
  param_1[0xd] = uVar15;
joined_r0x00c31b5c:
  if (uVar16 == 0) {
    return;
  }
  if (puVar4 == (undefined4 *)0x0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar16 = *(byte *)((int)puVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)((int)puVar4 + -3) >> 5);
  iVar13 = *(int *)(iVar5 + 8) + 0x10;
  iVar11 = iVar8 * uVar16 + iVar8 + -4;
  iVar8 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar8 + -4);
    if (uVar10 < 5) {
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
  if ((uint)(iVar8 - (int)puVar4) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar10 = 1 << uVar16;
  *(undefined1 *)((int)puVar4 + -3) = 0xff;
  *(undefined2 *)((int)puVar4 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar5 + 0x10);
    uVar9 = *(uint *)(iVar5 + 0xc) | uVar12;
    if ((uVar10 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar9 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar16);
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
      *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar17 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar9 = *puVar17;
      if (uVar12 != uVar9) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar9) {
      return;
    }
  } while( true );
}

