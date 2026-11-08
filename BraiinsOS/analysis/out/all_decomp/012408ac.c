// FUN_012408ac @ 012408ac size=264 calls_out=3 calls_in=2
// strings: 

void FUN_012408ac(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int unaff_r5;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  uint *puVar15;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  iVar5 = param_2[2];
  puVar13 = (undefined4 *)param_3[1];
  if (iVar5 != 0) {
    unaff_r5 = param_3[2];
  }
  if (iVar5 != 0 && unaff_r5 != 0) {
    if (unaff_r5 != 1) {
      if (iVar5 == 1) {
        local_30 = *param_3;
        iStack_2c = param_3[1];
        iStack_28 = param_3[2];
        FUN_01274bd8(&local_30,*(undefined4 *)param_2[1]);
        *param_1 = local_30;
        param_1[1] = iStack_2c;
        param_1[2] = iStack_28;
        iVar5 = *param_2;
        param_3 = param_2;
        goto joined_r0x01240900;
      }
      FUN_01274d38(param_1,(undefined4 *)param_2[1],iVar5,puVar13,unaff_r5);
      goto LAB_012408e4;
    }
    local_30 = *param_2;
    iStack_2c = param_2[1];
    iStack_28 = param_2[2];
    FUN_01274bd8(&local_30,*puVar13);
    *param_1 = local_30;
    param_1[1] = iStack_2c;
    param_1[2] = iStack_28;
  }
  else {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
LAB_012408e4:
    iVar5 = *param_3;
    param_3 = param_2;
    if (iVar5 != 0) {
      thunk_FUN_016d3fb4(puVar13);
      iVar5 = *param_2;
      goto joined_r0x01240900;
    }
  }
  iVar5 = *param_3;
joined_r0x01240900:
  if (iVar5 == 0) {
    return;
  }
  iVar5 = param_3[1];
  if (iVar5 == 0) {
    return;
  }
  iVar4 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar5 + -3) & 0x1f;
  if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
     (uVar9 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar6 = uVar9 - 0x10, uVar9 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar9 = (uint)(*(byte *)(iVar5 + -3) >> 5);
  iVar12 = *(int *)(iVar4 + 8) + 0x10;
  iVar10 = iVar6 * uVar14 + iVar6 + -4;
  iVar6 = iVar12 + iVar10;
  if (4 < uVar9) {
    if (uVar9 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar9 = *(uint *)(iVar6 + -4);
    if (uVar9 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar6 - iVar5) < uVar9) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar9) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar4 + 0x14);
  uVar9 = 1 << uVar14;
  *(undefined1 *)(iVar5 + -3) = 0xff;
  *(undefined2 *)(iVar5 + -2) = 0;
  do {
    uVar11 = *(uint *)(iVar4 + 0x10);
    uVar7 = *(uint *)(iVar4 + 0xc) | uVar11;
    if ((uVar9 & uVar7) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar11 == 0) || (uVar7 + uVar9 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&iStack_28,iVar4,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (iStack_24 == 0) {
        return;
      }
      puVar13 = (undefined4 *)FUN_016d2bc8();
      uVar8 = *puVar13;
      FUN_016d6ac4(iStack_28,iStack_24);
      *puVar13 = uVar8;
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
      bVar3 = (bool)hasExclusiveAccess(puVar15);
    } while (!bVar3);
    *puVar15 = uVar9 + uVar11;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar11 == uVar7) {
      return;
    }
  } while( true );
}

