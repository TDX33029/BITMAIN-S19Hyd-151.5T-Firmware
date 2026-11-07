// FUN_00e73b68 @ 00e73b68 size=316 calls_out=4 calls_in=0
// strings: 

void FUN_00e73b68(uint *param_1,undefined4 param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  int unaff_r4;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint uVar18;
  uint *puVar19;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  
  FUN_00f16f58(&local_30);
  uVar14 = local_28;
  uVar12 = local_2c;
  uVar18 = local_30;
  if (local_30 == 0x80000000) {
    *param_1 = 0x80000000;
    param_1[1] = local_2c;
    return;
  }
  FUN_00f16f58(&local_30,param_2);
  uVar7 = local_28;
  uVar5 = local_2c;
  uVar16 = local_30;
  if (local_30 == 0x80000000) {
    *param_1 = 0x80000000;
    param_1[1] = local_2c;
  }
  else {
    FUN_00ea971c(&local_30,param_2);
    uVar8 = local_28;
    uVar6 = local_2c;
    uVar4 = local_30;
    if (local_30 == 0x80000001) {
      *param_1 = 0x80000000;
      param_1[1] = local_2c;
    }
    else {
      FUN_00e76970(&local_30,param_2);
      if ((char)local_30 == '\0') {
        *(undefined1 *)(param_1 + 9) = local_30._1_1_;
        param_1[8] = uVar8;
        param_1[5] = uVar7;
        *param_1 = uVar18;
        param_1[1] = uVar12;
        param_1[2] = uVar14;
        param_1[3] = uVar16;
        param_1[4] = uVar5;
        param_1[6] = uVar4;
        param_1[7] = uVar6;
        return;
      }
      *param_1 = 0x80000000;
      param_1[1] = local_2c;
      if ((uVar4 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(uVar6);
      }
    }
    if (uVar16 != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
  }
  if (uVar18 == 0) {
    return;
  }
  if (uVar12 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar18 = *(byte *)(uVar12 - 3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar14 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar11 = uVar14 - 0x10, uVar14 == 0)) {
    iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar14 = (uint)(*(byte *)(uVar12 - 3) >> 5);
  iVar17 = *(int *)(iVar9 + 8) + 0x10;
  iVar15 = iVar11 * uVar18 + iVar11 + -4;
  iVar11 = iVar17 + iVar15;
  if (4 < uVar14) {
    if (uVar14 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar14 = *(uint *)(iVar11 + -4);
    if (uVar14 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if (iVar11 - uVar12 < uVar14) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar11 - uVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar17 + iVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar9 + 0x14);
  uVar14 = 1 << uVar18;
  *(undefined1 *)(uVar12 - 3) = 0xff;
  *(undefined2 *)(uVar12 - 2) = 0;
  do {
    uVar16 = *(uint *)(iVar9 + 0x10);
    uVar12 = *(uint *)(iVar9 + 0xc) | uVar16;
    if ((uVar14 & uVar12) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar16 == 0) || (uVar12 + uVar14 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar9,uVar18);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar10 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar10;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar10 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar14 + uVar16;
      return;
    }
    puVar19 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar19);
      uVar12 = *puVar19;
      if (uVar16 != uVar12) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar19);
    } while (!bVar3);
    *puVar19 = uVar14 + uVar16;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar16 == uVar12) {
      return;
    }
  } while( true );
}

