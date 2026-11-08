// FUN_01295474 @ 01295474 size=380 calls_out=2 calls_in=0
// strings: 

void FUN_01295474(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int iVar17;
  uint *puVar18;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
  iVar13 = *param_2;
  iVar12 = param_2[1];
  iVar17 = param_2[3];
  iVar14 = param_2[4];
  iVar16 = param_2[5];
  FUN_01295648(&local_40,iVar12,param_2[2]);
  uVar6 = local_2c;
  uVar5 = local_30;
  uVar4 = local_34;
  uVar9 = local_38;
  if (local_40 == -0x7ffffffb) {
    FUN_01295648(&local_40,iVar14,iVar16);
    if (local_40 == -0x7ffffffb) {
      param_1[2] = uVar5;
      param_1[3] = uVar6;
      param_1[4] = local_38;
      param_1[5] = local_34;
      param_1[6] = local_30;
      param_1[7] = local_2c;
      *param_1 = uVar9;
      param_1[1] = uVar4;
      if (iVar17 != 0) {
        thunk_FUN_016d3fb4(iVar14);
      }
    }
    else {
      param_1[4] = local_38;
      param_1[5] = local_34;
      param_1[6] = local_30;
      param_1[7] = local_2c;
      *param_1 = 2;
      param_1[1] = 0;
      param_1[2] = local_40;
      param_1[3] = local_3c;
      if (iVar17 != 0) {
        thunk_FUN_016d3fb4(iVar14);
      }
    }
  }
  else {
    param_1[4] = local_38;
    param_1[5] = local_34;
    param_1[6] = local_30;
    param_1[7] = local_2c;
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = local_40;
    param_1[3] = local_3c;
    if (iVar17 != 0) {
      thunk_FUN_016d3fb4(iVar14);
    }
  }
  if (iVar13 == 0) {
    return;
  }
  if (iVar12 == 0) {
    return;
  }
  iVar13 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar12 + -3) & 0x1f;
  if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar14 = uVar10 - 0x10, uVar10 == 0)) {
    iVar14 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar10 = (uint)(*(byte *)(iVar12 + -3) >> 5);
  iVar17 = *(int *)(iVar13 + 8) + 0x10;
  iVar16 = iVar14 * uVar15 + iVar14 + -4;
  iVar14 = iVar17 + iVar16;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar14 + -4);
    if (uVar10 < 5) {
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
  if ((uint)(iVar14 - iVar12) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar17 + iVar16) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar13 + 0x14);
  uVar10 = 1 << uVar15;
  *(undefined1 *)(iVar12 + -3) = 0xff;
  *(undefined2 *)(iVar12 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar13 + 0x10);
    uVar8 = *(uint *)(iVar13 + 0xc) | uVar11;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar8 + uVar10 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar13,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar7;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar7 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar13 + 0x10) = uVar10 + uVar11;
      return;
    }
    puVar18 = (uint *)(iVar13 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar18);
      uVar8 = *puVar18;
      if (uVar11 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar18);
    } while (!bVar3);
    *puVar18 = uVar10 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar8) {
      return;
    }
  } while( true );
}

