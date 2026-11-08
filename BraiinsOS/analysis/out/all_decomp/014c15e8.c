// FUN_014c15e8 @ 014c15e8 size=508 calls_out=3 calls_in=3
// strings: 

void FUN_014c15e8(uint *param_1)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int unaff_r4;
  undefined4 uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  uint *puVar18;
  bool bVar19;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  puVar17 = (uint *)param_1[6];
  uVar9 = param_1[3];
  uVar3 = param_1[4];
  uVar16 = param_1[1];
  puVar4 = (uint *)param_1[8];
  puVar18 = puVar17;
  if ((*param_1 & 1) == 0) goto LAB_014c168c;
  do {
    if (uVar3 <= uVar16) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar16,uVar3,&DAT_018a65ec);
    }
    iVar5 = uVar9 + uVar16 * 0x24;
    bVar19 = *(int *)(iVar5 + 8) != 0;
    uVar6 = (uint)bVar19;
    if (bVar19) {
      uVar16 = *(uint *)(iVar5 + 0xc);
    }
    *param_1 = uVar6;
    param_1[1] = uVar16;
    local_38 = *(uint *)(iVar5 + 0x10);
    uStack_34 = *(uint *)(iVar5 + 0x14);
    uStack_30 = *(uint *)(iVar5 + 0x18);
    uStack_2c = *(uint *)(iVar5 + 0x1c);
    uStack_28 = *(uint *)(iVar5 + 0x20);
LAB_014c170c:
    (**(code **)(local_38 + 0x10))(&uStack_2c,uStack_34,uStack_30);
    puVar18 = puVar17;
  } while (uVar6 != 0);
LAB_014c168c:
  puVar17 = puVar18;
  if (puVar18 != puVar4) {
    puVar17 = puVar18 + 0xd;
    uVar6 = *puVar18;
    param_1[6] = (uint)puVar17;
    if (uVar6 == 2) goto LAB_014c1734;
    uVar16 = puVar18[1];
    uVar10 = puVar18[8];
    uVar11 = puVar18[9];
    uVar12 = puVar18[10];
    uStack_3c = puVar18[0xb];
    local_38 = puVar18[3];
    uStack_34 = puVar18[4];
    uStack_30 = puVar18[5];
    uStack_2c = puVar18[6];
    uStack_28 = puVar18[7];
    uVar6 = uVar6 & 1;
    *param_1 = uVar6;
    param_1[1] = uVar16;
    if (uVar10 != 0) {
      (**(code **)(uVar10 + 0x10))(&uStack_3c,uVar11,uVar12);
    }
    goto LAB_014c170c;
  }
LAB_014c1734:
  param_1[4] = 0;
  FUN_0149814c(puVar17,((uint)((int)puVar4 - (int)puVar17) >> 2) * -0x3b13b13b);
  if (param_1[7] != 0) {
    thunk_FUN_016d3fb4(param_1[5]);
  }
  uVar3 = param_1[3];
  iVar15 = 0;
  iVar5 = param_1[4] + 1;
  while (iVar5 = iVar5 + -1, iVar5 != 0) {
    iVar7 = uVar3 + iVar15;
    iVar15 = iVar15 + 0x24;
    (**(code **)(*(int *)(iVar7 + 0x10) + 0x10))
              (iVar7 + 0x1c,*(undefined4 *)(iVar7 + 0x14),*(undefined4 *)(iVar7 + 0x18));
  }
  if (param_1[2] == 0) {
    return;
  }
  if (uVar3 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar9 = *(byte *)(uVar3 - 3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar16 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar15 = uVar16 - 0x10, uVar16 == 0)) {
    iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar16 = (uint)(*(byte *)(uVar3 - 3) >> 5);
  iVar14 = *(int *)(iVar5 + 8) + 0x10;
  iVar7 = iVar15 * uVar9 + iVar15 + -4;
  iVar15 = iVar14 + iVar7;
  if (4 < uVar16) {
    if (uVar16 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar16 = *(uint *)(iVar15 + -4);
    if (uVar16 < 5) {
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
  if (iVar15 - uVar3 < uVar16) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 - uVar16) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar7) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar16 = 1 << uVar9;
  *(undefined1 *)(uVar3 - 3) = 0xff;
  *(undefined2 *)(uVar3 - 2) = 0;
  do {
    uVar6 = *(uint *)(iVar5 + 0x10);
    uVar3 = *(uint *)(iVar5 + 0xc) | uVar6;
    if ((uVar16 & uVar3) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar6 == 0) || (uVar3 + uVar16 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar5,uVar9);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar13 = *puVar8;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar8 = uVar13;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar16 + uVar6;
      return;
    }
    puVar17 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar3 = *puVar17;
      if (uVar6 != uVar3) goto LAB_016d409c;
      bVar19 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar19);
    *puVar17 = uVar16 + uVar6;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar6 == uVar3) {
      return;
    }
  } while( true );
}

