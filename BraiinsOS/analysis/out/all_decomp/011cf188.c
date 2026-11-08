// FUN_011cf188 @ 011cf188 size=224 calls_out=3 calls_in=3
// strings: 

void FUN_011cf188(int *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int unaff_r4;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 *puVar15;
  int iVar16;
  uint *puVar17;
  int local_28;
  
  iVar16 = *param_2;
  puVar7 = (undefined4 *)param_2[1];
  iVar9 = param_2[2];
  puVar13 = (undefined4 *)param_2[3];
  if (puVar7 == puVar13) {
    iVar10 = iVar16;
  }
  else {
    iVar10 = 0;
    do {
      puVar15 = (undefined4 *)(iVar16 + iVar10);
      uVar4 = *(undefined4 *)((int)puVar7 + iVar10);
      param_2[1] = (int)((undefined4 *)((int)puVar7 + iVar10) + 1);
      uVar4 = FUN_011f0ab8(uVar4);
      iVar10 = iVar10 + 4;
      *puVar15 = uVar4;
    } while ((undefined4 *)((int)puVar7 + iVar10) != puVar13);
    puVar7 = (undefined4 *)((int)puVar7 + iVar10);
    iVar10 = iVar16 + iVar10;
  }
  *param_2 = 4;
  param_2[1] = 4;
  param_2[2] = 0;
  param_2[3] = 4;
  local_28 = iVar9;
  if ((int)puVar13 - (int)puVar7 != 0) {
    iVar8 = 1 - ((uint)((int)puVar13 - (int)puVar7) >> 2);
    do {
      uVar4 = *puVar7;
      FUN_012411a0(uVar4);
      thunk_FUN_016d3fb4(uVar4);
      iVar8 = iVar8 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar8 != 1);
  }
  *param_1 = iVar9;
  param_1[1] = iVar16;
  param_1[2] = (uint)(iVar10 - iVar16) >> 2;
  uVar5 = param_2[3] - param_2[1];
  if (uVar5 != 0) {
    iVar9 = 1 - (uVar5 >> 2);
    puVar7 = (undefined4 *)param_2[1];
    do {
      uVar4 = *puVar7;
      FUN_012411a0(uVar4);
      thunk_FUN_016d3fb4(uVar4);
      iVar9 = iVar9 + 1;
      puVar7 = puVar7 + 1;
    } while (iVar9 != 1);
  }
  if (param_2[2] == 0) {
    return;
  }
  iVar9 = *param_2;
  if (iVar9 == 0) {
    return;
  }
  iVar16 = FUN_016d3bc8();
  uVar5 = *(byte *)(iVar9 + -3) & 0x1f;
  if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar10 = uVar11 - 0x10, uVar11 == 0)) {
    iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar11 = (uint)(*(byte *)(iVar9 + -3) >> 5);
  iVar14 = *(int *)(iVar16 + 8) + 0x10;
  iVar8 = iVar10 * uVar5 + iVar10 + -4;
  iVar10 = iVar14 + iVar8;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar10 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar10 - iVar9) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar10 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar8) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar16 + 0x14);
  uVar11 = 1 << uVar5;
  *(undefined1 *)(iVar9 + -3) = 0xff;
  *(undefined2 *)(iVar9 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar16 + 0x10);
    uVar6 = *(uint *)(iVar16 + 0xc) | uVar12;
    if ((uVar11 & uVar6) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar6 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar16,uVar5);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar4 = *puVar7;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar7 = uVar4;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar16 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar17 = (uint *)(iVar16 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar6 = *puVar17;
      if (uVar12 != uVar6) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar6) {
      return;
    }
  } while( true );
}

