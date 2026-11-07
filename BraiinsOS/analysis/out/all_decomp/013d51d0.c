// FUN_013d51d0 @ 013d51d0 size=664 calls_out=8 calls_in=1
// strings: 

void FUN_013d51d0(undefined4 *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  int unaff_r4;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint local_a8;
  uint local_a4;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_28;
  
  iVar4 = FUN_013d2518(param_2);
  if (((iVar4 != 0x3f) && (iVar4 = FUN_013d2518(param_2), iVar4 != 0x2a)) &&
     (iVar4 = FUN_013d2518(param_2), iVar4 != 0x2b)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_003ceef4,0x50,&DAT_01894e18);
  }
  iVar4 = *param_2;
  uVar9 = param_3[2];
  if (uVar9 == 0) {
    local_48 = *(undefined4 *)(iVar4 + 0x50);
    uStack_44 = *(undefined4 *)(iVar4 + 0x54);
    uStack_40 = *(undefined4 *)(iVar4 + 0x58);
    iVar11 = param_2[2];
    iVar4 = param_2[1];
    local_3c = local_48;
    uStack_38 = uStack_44;
    uStack_34 = uStack_40;
    if (iVar11 < 0) {
      uVar6 = 0;
LAB_013d52c0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar6,iVar11);
    }
    if (iVar11 == 0) {
      iVar14 = 1;
      iVar15 = 0;
    }
    else {
      iVar14 = thunk_FUN_016d4a50(iVar11);
      if (iVar14 == 0) {
        uVar6 = 1;
        goto LAB_013d52c0;
      }
      iVar15 = iVar11;
    }
    FUN_016dd1aa(iVar14,iVar4,iVar11);
    param_1[10] = local_48;
    param_1[0xb] = uStack_44;
    param_1[0xc] = uStack_40;
    param_1[0xd] = local_3c;
    param_1[0xe] = uStack_38;
    param_1[0xf] = uStack_34;
    param_1[7] = iVar15;
    param_1[8] = iVar14;
    param_1[9] = iVar11;
    iVar11 = param_3[1];
    *param_1 = 0x1b;
  }
  else {
    iVar11 = param_3[1];
    param_3[2] = uVar9 - 1;
    puVar12 = (uint *)(iVar11 + (uVar9 - 1) * 8);
    uVar13 = *puVar12;
    uVar5 = puVar12[1];
    local_a8 = uVar13;
    local_a4 = uVar5;
    if (1 < uVar13) {
      iVar4 = FUN_013d2d20(param_2);
      if ((iVar4 != 0) && (iVar4 = FUN_013d2518(param_2), iVar4 == 0x3f)) {
        FUN_013d2d20(param_2);
      }
                    /* WARNING: Could not recover jumptable at 0x013d5324. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_013d5328 + *(int *)(&DAT_013d5328 + uVar13 * 4)))(uVar5);
      return;
    }
    local_48 = *(undefined4 *)(iVar4 + 0x50);
    uStack_44 = *(undefined4 *)(iVar4 + 0x54);
    uStack_40 = *(undefined4 *)(iVar4 + 0x58);
    iVar15 = param_2[2];
    iVar4 = param_2[1];
    local_3c = local_48;
    uStack_38 = uStack_44;
    uStack_34 = uStack_40;
    if (iVar15 < 0) {
      uVar6 = 0;
LAB_013d528c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar6,iVar15);
    }
    if (iVar15 == 0) {
      iVar7 = 1;
      iVar14 = 0;
    }
    else {
      iVar7 = thunk_FUN_016d4a50(iVar15);
      if (iVar7 == 0) {
        uVar6 = 1;
        goto LAB_013d528c;
      }
      iVar14 = iVar15;
    }
    FUN_016dd1aa(iVar7,iVar4,iVar15);
    param_1[10] = local_48;
    param_1[0xb] = uStack_44;
    param_1[0xc] = uStack_40;
    param_1[0xd] = local_3c;
    param_1[0xe] = uStack_38;
    param_1[0xf] = uStack_34;
    param_1[7] = iVar14;
    param_1[8] = iVar7;
    param_1[9] = iVar15;
    *param_1 = 0x1b;
    FUN_013d6144(&local_a8);
  }
  iVar4 = iVar11;
  if (uVar9 < 2) {
    uVar9 = 1;
  }
  while (uVar9 = uVar9 - 1, uVar9 != 0) {
    FUN_013e7690(iVar4);
    iVar4 = iVar4 + 8;
  }
  if (*param_3 == 0) {
    return;
  }
  if (iVar11 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar9 = *(byte *)(iVar11 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar5 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar15 = uVar5 - 0x10, uVar5 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar5 = (uint)(*(byte *)(iVar11 + -3) >> 5);
  iVar7 = *(int *)(iVar4 + 8) + 0x10;
  iVar14 = iVar15 * uVar9 + iVar15 + -4;
  iVar15 = iVar7 + iVar14;
  if (4 < uVar5) {
    if (uVar5 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar5 = *(uint *)(iVar15 + -4);
    if (uVar5 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar15 - iVar11) < uVar5) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 - uVar5) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 + iVar14) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar5 = 1 << uVar9;
  *(undefined1 *)(iVar11 + -3) = 0xff;
  *(undefined2 *)(iVar11 + -2) = 0;
  do {
    uVar10 = *(uint *)(iVar4 + 0x10);
    uVar13 = *(uint *)(iVar4 + 0xc) | uVar10;
    if ((uVar5 & uVar13) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar10 == 0) || (uVar13 + uVar5 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar4,uVar9);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar6 = *puVar8;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar8 = uVar6;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar4 + 0x10) = uVar5 + uVar10;
      return;
    }
    puVar12 = (uint *)(iVar4 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar12);
      uVar13 = *puVar12;
      if (uVar10 != uVar13) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar12);
    } while (!bVar3);
    *puVar12 = uVar5 + uVar10;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar10 == uVar13) {
      return;
    }
  } while( true );
}

