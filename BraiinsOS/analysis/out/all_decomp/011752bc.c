// FUN_011752bc @ 011752bc size=664 calls_out=10 calls_in=1
// strings: 

void FUN_011752bc(undefined4 *param_1,undefined4 param_2,int *param_3,int *param_4)

{
  code *pcVar1;
  bool bVar2;
  byte bVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  undefined1 auStack_1a0 [56];
  int *local_168;
  undefined4 local_164;
  int *local_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  int iStack_fc;
  int local_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  int local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  int *local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  int *local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  uint local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int *local_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int iStack_8c;
  int local_88;
  int local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  int *local_70;
  undefined4 local_6c;
  int local_68;
  int iStack_64;
  int iStack_60;
  int *local_58;
  undefined4 local_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  int local_40;
  int iStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_0116065c(auStack_1a0);
  local_c8 = *param_3;
  local_c4 = param_3[1];
  uVar14 = param_3[2];
  iVar15 = param_4[2];
  local_b0 = 0;
  if (local_c8 != 0) {
    local_b0 = uVar14;
  }
  local_d0 = (int *)(uint)(local_c8 != 0);
  iVar6 = param_4[1];
  local_bc = 0;
  local_cc = 0;
  local_c0 = local_d0;
  local_b8 = local_c8;
  local_b4 = local_c4;
  FUN_01160954(&local_110,&local_d0,iVar6,iVar15);
  if (uVar14 < 0xf) {
    FUN_011e50c8(&local_e0,param_2,param_3);
    if (local_e0 != -0x80000000) {
      do {
        iVar15 = *local_168;
        bVar2 = (bool)hasExclusiveAccess(local_168);
      } while (!bVar2);
      *local_168 = iVar15 + 1;
      if (iVar15 < 0) goto LAB_01175554;
      iStack_8c = *param_4;
      local_88 = param_4[1];
      local_84 = param_4[2];
      local_98 = local_e0;
      uStack_94 = local_dc;
      uStack_90 = uStack_d8;
      local_d0 = local_110;
      local_cc = uStack_10c;
      local_c8 = iStack_108;
      local_c4 = uStack_104;
      local_c0 = (int *)uStack_100;
      local_bc = iStack_fc;
      local_b8 = local_f8;
      local_b4 = iStack_f4;
      local_b0 = uStack_f0;
      uStack_ac = uStack_ec;
      uStack_a8 = uStack_e8;
      uStack_a4 = uStack_e4;
      local_a0 = local_168;
      local_9c = local_164;
      iVar15 = thunk_FUN_016d4a50(0x50);
      if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x50);
      }
      FUN_016dd1aa(iVar15,&local_d0,0x50);
      puVar4 = &DAT_01889044;
      goto LAB_011754a4;
    }
  }
  else {
    FUN_011e4414(&local_58,param_2,param_3);
    if (local_58 != (int *)0x0) {
      do {
        iVar15 = *local_168;
        bVar2 = (bool)hasExclusiveAccess(local_168);
      } while (!bVar2);
      *local_168 = iVar15 + 1;
      if (iVar15 < 0) {
LAB_01175554:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1175554);
        (*pcVar1)();
      }
      local_d0 = local_58;
      local_cc = local_54;
      local_c8 = iStack_50;
      local_c4 = uStack_4c;
      local_c0 = (int *)uStack_48;
      local_bc = iStack_44;
      local_b8 = local_40;
      local_b4 = iStack_3c;
      local_b0 = uStack_38;
      uStack_ac = uStack_34;
      uStack_a8 = uStack_30;
      uStack_a4 = uStack_2c;
      local_68 = *param_4;
      iStack_64 = param_4[1];
      iStack_60 = param_4[2];
      local_a0 = local_110;
      local_9c = uStack_10c;
      local_98 = iStack_108;
      uStack_94 = uStack_104;
      uStack_90 = uStack_100;
      iStack_8c = iStack_fc;
      local_88 = local_f8;
      local_84 = iStack_f4;
      uStack_80 = uStack_f0;
      uStack_7c = uStack_ec;
      uStack_78 = uStack_e8;
      uStack_74 = uStack_e4;
      local_70 = local_168;
      local_6c = local_164;
      iVar15 = thunk_FUN_016d4a50(0x78);
      if (iVar15 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x78);
      }
      FUN_016dd1aa(iVar15,&local_d0,0x78);
      puVar4 = &DAT_01889024;
LAB_011754a4:
      *param_1 = 1;
      param_1[1] = iVar15;
      param_1[2] = puVar4;
      FUN_01161600(auStack_1a0);
      return;
    }
    local_dc = local_54;
  }
  param_1[2] = local_dc;
  *param_1 = 1;
  param_1[1] = 0;
  FUN_011a39dc(&local_110);
  FUN_01161600(auStack_1a0);
  iVar15 = iVar15 + 1;
  iVar7 = iVar6;
  while (iVar15 = iVar15 + -1, iVar15 != 0) {
    FUN_0115e87c(iVar7);
    iVar7 = iVar7 + 100;
  }
  if (*param_4 == 0) {
    return;
  }
  if (iVar6 == 0) {
    return;
  }
  iVar15 = FUN_016d3bc8();
  uVar14 = *(byte *)(iVar6 + -3) & 0x1f;
  if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
     (uVar10 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar7 = uVar10 - 0x10, uVar10 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar10 = (uint)(*(byte *)(iVar6 + -3) >> 5);
  iVar13 = *(int *)(iVar15 + 8) + 0x10;
  iVar11 = iVar7 * uVar14 + iVar7 + -4;
  iVar7 = iVar13 + iVar11;
  if (4 < uVar10) {
    if (uVar10 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar10 = *(uint *)(iVar7 + -4);
    if (uVar10 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - iVar6) < uVar10) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar3 = *(byte *)(iVar15 + 0x14);
  uVar10 = 1 << uVar14;
  *(undefined1 *)(iVar6 + -3) = 0xff;
  *(undefined2 *)(iVar6 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar15 + 0x10);
    uVar8 = *(uint *)(iVar15 + 0xc) | uVar12;
    if ((uVar10 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar8 + uVar10 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar15,uVar14);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar5 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar5;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar5 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar15 + 0x10) = uVar10 + uVar12;
      return;
    }
    puVar16 = (uint *)(iVar15 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar12 != uVar8) goto LAB_016d409c;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar10 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar8) {
      return;
    }
  } while( true );
}

