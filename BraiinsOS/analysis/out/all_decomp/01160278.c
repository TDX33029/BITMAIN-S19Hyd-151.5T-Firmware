// FUN_01160278 @ 01160278 size=768 calls_out=13 calls_in=1
// strings: 

void FUN_01160278(undefined4 *param_1,undefined4 param_2,int *param_3,int *param_4,
                 undefined4 param_5)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  undefined4 uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint *puVar17;
  undefined1 auStack_1c8 [136];
  undefined1 local_140;
  uint local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  uint uStack_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  undefined4 uStack_10c;
  uint local_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  uint local_f0;
  undefined4 local_ec;
  int local_e8;
  int local_e4;
  uint local_e0;
  uint local_dc;
  int local_d8;
  int local_d4;
  uint local_d0;
  int iStack_cc;
  int iStack_c8;
  undefined4 uStack_c4;
  uint local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  uint local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  undefined4 uStack_94;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  uint local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_0116065c(auStack_1c8);
  local_e8 = *param_3;
  local_e4 = param_3[1];
  uVar14 = param_3[2];
  iVar16 = param_4[2];
  local_d0 = 0;
  if (local_e8 != 0) {
    local_d0 = uVar14;
  }
  local_f0 = (uint)(local_e8 != 0);
  iVar7 = param_4[1];
  local_dc = 0;
  local_ec = 0;
  local_e0 = local_f0;
  local_d8 = local_e8;
  local_d4 = local_e4;
  FUN_01160954(&local_138,&local_f0,iVar7,iVar16);
  if (uVar14 < 0xf) {
    uVar4 = FUN_01352d48(local_140,param_5);
    FUN_0125acb4(&local_108,auStack_1c8,param_5,uVar4);
    if (local_108 != 0) {
      FUN_011e50c8(&local_58,param_2,param_3);
      if (local_58 != 0x80000000) {
        iStack_a0 = *param_4;
        iStack_9c = param_4[1];
        local_98 = param_4[2];
        local_ac = local_58;
        local_a8 = local_54;
        uStack_a4 = uStack_50;
        local_f0 = local_138;
        local_ec = uStack_134;
        local_e8 = uStack_130;
        local_e4 = uStack_12c;
        local_e0 = uStack_128;
        local_dc = uStack_124;
        local_d8 = local_120;
        local_d4 = uStack_11c;
        local_d0 = iStack_118;
        iStack_cc = iStack_114;
        iStack_c8 = iStack_110;
        uStack_c4 = uStack_10c;
        local_c0 = local_108;
        uStack_bc = local_104;
        uStack_b8 = uStack_100;
        uStack_b4 = uStack_fc;
        uStack_b0 = uStack_f8;
        iVar16 = thunk_FUN_016d4a50(0x60);
        if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x60);
        }
        FUN_016dd1aa(iVar16,&local_f0,0x60);
        puVar5 = &DAT_01888f84;
        goto LAB_011604c8;
      }
      param_1[1] = 0;
      *param_1 = 1;
      param_1[2] = local_54;
      FUN_0115ccf0(&local_108);
      goto LAB_01160504;
    }
  }
  else {
    uVar4 = FUN_01352d48(local_140,param_5);
    FUN_0125acb4(&local_70,auStack_1c8,param_5,uVar4);
    if (local_70 != 0) {
      FUN_011e4414(&local_58,param_2,param_3);
      if (local_58 != 0) {
        local_f0 = local_58;
        local_ec = local_54;
        local_e8 = uStack_50;
        local_e4 = uStack_4c;
        local_e0 = uStack_48;
        local_dc = uStack_44;
        local_d8 = local_40;
        local_d4 = uStack_3c;
        local_d0 = iStack_38;
        iStack_cc = iStack_34;
        iStack_c8 = iStack_30;
        uStack_c4 = uStack_2c;
        local_7c = *param_4;
        iStack_78 = param_4[1];
        iStack_74 = param_4[2];
        local_c0 = local_138;
        uStack_bc = uStack_134;
        uStack_b8 = uStack_130;
        uStack_b4 = uStack_12c;
        uStack_b0 = uStack_128;
        local_ac = uStack_124;
        local_a8 = local_120;
        uStack_a4 = uStack_11c;
        iStack_a0 = iStack_118;
        iStack_9c = iStack_114;
        local_98 = iStack_110;
        uStack_94 = uStack_10c;
        local_90 = local_70;
        uStack_8c = local_6c;
        uStack_88 = uStack_68;
        uStack_84 = uStack_64;
        uStack_80 = uStack_60;
        iVar16 = thunk_FUN_016d4a50(0x80);
        if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x80);
        }
        FUN_016dd1aa(iVar16,&local_f0,0x80);
        puVar5 = &DAT_01888f64;
LAB_011604c8:
        param_1[2] = puVar5;
        param_1[1] = iVar16;
        *param_1 = 1;
        FUN_01161600(auStack_1c8);
        return;
      }
      param_1[1] = 0;
      *param_1 = 1;
      param_1[2] = local_54;
      FUN_0115ccf0(&local_70);
      goto LAB_01160504;
    }
    local_104 = local_6c;
  }
  *param_1 = 1;
  param_1[1] = 0;
  param_1[2] = local_104;
LAB_01160504:
  FUN_011a39dc(&local_138);
  FUN_01161600(auStack_1c8);
  iVar16 = iVar16 + 1;
  iVar8 = iVar7;
  while (iVar16 = iVar16 + -1, iVar16 != 0) {
    FUN_0115e87c(iVar8);
    iVar8 = iVar8 + 100;
  }
  if (*param_4 == 0) {
    return;
  }
  if (iVar7 == 0) {
    return;
  }
  iVar16 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar7 + -3) & 0x1f;
  if (((*(byte *)(iVar16 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar16 + 0x14) & 0xfffff000, iVar8 = uVar11 - 0x10, uVar11 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar16 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar7 + -3) >> 5);
  iVar15 = *(int *)(iVar16 + 8) + 0x10;
  iVar12 = iVar8 * uVar14 + iVar8 + -4;
  iVar8 = iVar15 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar8 + -4);
    if (uVar11 < 5) {
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
  if ((uint)(iVar8 - iVar7) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar15 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar16 + 0x14);
  uVar11 = 1 << uVar14;
  *(undefined1 *)(iVar7 + -3) = 0xff;
  *(undefined2 *)(iVar7 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar16 + 0x10);
    uVar9 = *(uint *)(iVar16 + 0xc) | uVar13;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar9 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar16,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar6;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar6 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar16 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar17 = (uint *)(iVar16 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar17);
      uVar9 = *puVar17;
      if (uVar13 != uVar9) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar17);
    } while (!bVar3);
    *puVar17 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar9) {
      return;
    }
  } while( true );
}

