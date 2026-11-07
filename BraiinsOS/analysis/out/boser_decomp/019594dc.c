// FUN_019594dc @ 019594dc size=1252 calls_out=12 calls_in=4
// strings: 

uint FUN_019594dc(undefined4 *param_1,int param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 *puVar15;
  uint *puVar16;
  int *piVar17;
  int *piVar18;
  int local_14c;
  uint local_148;
  int local_144;
  uint *local_140;
  undefined1 *local_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  uint local_124;
  uint *local_120;
  undefined1 *puStack_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  uint uStack_104;
  uint *local_100;
  undefined1 *puStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int *local_c0;
  uint local_bc;
  undefined **local_b8;
  int *local_a8;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  int *local_68;
  int local_64;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  uint local_2c;
  undefined1 uStack_25;
  
  puVar4 = (undefined4 *)((uint)&local_c0 | 0x10);
  do {
    do {
      local_148 = DAT_01d50470;
      local_144 = DAT_01d50474;
      uVar12 = DAT_01d50470 + 1;
      iVar14 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
      bVar2 = (bool)hasExclusiveAccess(0x1d50470);
    } while (!bVar2);
    bVar2 = DAT_01d50470 == 0;
    bVar3 = DAT_01d50474 == 0;
    DAT_01d50470 = uVar12;
    DAT_01d50474 = iVar14;
  } while (bVar2 && bVar3);
  local_138 = *param_1;
  uStack_134 = param_1[1];
  local_130 = param_1[2];
  uStack_12c = param_1[3];
  uStack_128 = param_1[4];
  local_124 = param_1[5];
  iVar14 = thunk_FUN_01bee35a();
  puVar16 = (uint *)(iVar14 + 0x20);
  local_13c = &uStack_25;
  local_140 = &local_148;
  if (*(char *)(iVar14 + 0x58) != '\x01') {
    if (*(char *)(iVar14 + 0x58) == '\x02') {
      uVar8 = 1;
      if ((char)local_124 == '\0') {
        FUN_0193c71c(&local_138);
      }
      goto LAB_01959598;
    }
    FUN_019a2bcc(puVar16,&LAB_019efb68);
    *(undefined1 *)(iVar14 + 0x58) = 1;
  }
  local_120 = local_140;
  puStack_11c = local_13c;
  uStack_118 = local_138;
  uStack_114 = uStack_134;
  local_110 = local_130;
  uStack_10c = uStack_12c;
  uStack_108 = uStack_128;
  uStack_104 = local_124;
  uVar12 = *puVar16;
  if (0x7ffffffe < uVar12) {
                    /* WARNING: Subroutine does not return */
    FUN_0130701c(&DAT_01d2e14c);
  }
  *puVar16 = uVar12 + 1;
  local_100 = local_140;
  puStack_fc = local_13c;
  uStack_f8 = local_138;
  uStack_f4 = uStack_134;
  local_f0 = local_130;
  uStack_ec = uStack_12c;
  uStack_e8 = uStack_128;
  local_e4 = local_124;
  if (*(uint *)(iVar14 + 0x24) == 2) {
    if ((local_124 & 0xff) == 0) {
      FUN_0193c71c(&uStack_f8);
      uVar12 = *puVar16 - 1;
    }
    uVar8 = 0;
    *puVar16 = uVar12;
LAB_01959598:
    local_c0 = (int *)CONCAT31(local_c0._1_3_,uVar8);
                    /* WARNING: Subroutine does not return */
    FUN_0068d4ec(&local_c0,param_2);
  }
  piVar18 = (int *)*local_140;
  uVar12 = local_140[1];
  local_14c = param_2;
  if ((*(uint *)(iVar14 + 0x24) & 1) == 0) {
    piVar17 = *(int **)(iVar14 + 0x28);
    do {
      iVar5 = *piVar17;
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = iVar5 + 1;
    if (iVar5 < 0) goto LAB_0195999c;
    local_68 = (int *)piVar17[0x82];
    if (local_68 != (int *)0x0) {
      do {
        iVar5 = *local_68;
        bVar2 = (bool)hasExclusiveAccess(local_68);
      } while (!bVar2);
      *local_68 = iVar5 + 1;
      if (iVar5 < 0) goto LAB_0195999c;
      local_14c = piVar17[0x83];
    }
    puVar15 = (undefined4 *)((uint)&local_48 | 4);
    uVar6 = param_1[1];
    uVar7 = param_1[2];
    uVar9 = param_1[3];
    uVar10 = param_1[4];
    uVar13 = param_1[5];
    *puVar15 = *param_1;
    puVar15[1] = uVar6;
    puVar15[2] = uVar7;
    puVar15[3] = uVar9;
    puVar15[4] = uVar10;
    puVar15[5] = uVar13;
    local_98 = 0;
    local_94 = local_48;
    uStack_90 = uStack_44;
    uStack_8c = uStack_40;
    local_88 = local_3c;
    uStack_84 = uStack_38;
    uStack_80 = uStack_34;
    uStack_7c = uStack_30;
    puVar4[4] = piVar18;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[5] = uVar12;
    local_b8 = &PTR_LAB_01d2624c;
    local_bc = 0;
    local_c0 = (int *)0xcc;
    local_64 = local_14c;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    local_2c = 0;
    local_a8 = piVar17;
    iVar5 = FUN_01be5878(&local_2c,0x20,0x60);
    uVar11 = local_2c;
    if ((iVar5 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_2c,&local_c0,0x60);
    iVar5 = FUN_01a2cc10(piVar17 + 0x40,uVar11,uVar11);
    local_c0 = piVar18;
    local_bc = uVar12;
    if (piVar17[0x80] != 0) {
      (**(code **)(piVar17[0x81] + 0x14))
                (piVar17[0x80] + (*(int *)(piVar17[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_c0);
    }
    if (iVar5 != 0) {
      FUN_019dc904(*(undefined4 *)(iVar14 + 0x28),iVar5);
    }
  }
  else {
    piVar17 = *(int **)(iVar14 + 0x28);
    do {
      iVar14 = *piVar17;
      bVar2 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar2);
    *piVar17 = iVar14 + 1;
    if (iVar14 < 0) {
LAB_0195999c:
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x195999c);
      (*pcVar1)();
    }
    local_68 = (int *)piVar17[0x50];
    if (local_68 != (int *)0x0) {
      do {
        iVar14 = *local_68;
        bVar2 = (bool)hasExclusiveAccess(local_68);
      } while (!bVar2);
      *local_68 = iVar14 + 1;
      if (iVar14 < 0) goto LAB_0195999c;
      local_14c = piVar17[0x51];
    }
    puVar15 = (undefined4 *)((uint)&local_e0 | 4);
    uVar6 = param_1[1];
    uVar7 = param_1[2];
    uVar9 = param_1[3];
    uVar10 = param_1[4];
    uVar13 = param_1[5];
    *puVar15 = *param_1;
    puVar15[1] = uVar6;
    puVar15[2] = uVar7;
    puVar15[3] = uVar9;
    puVar15[4] = uVar10;
    puVar15[5] = uVar13;
    local_98 = 0;
    local_94 = local_e0;
    uStack_90 = uStack_dc;
    uStack_8c = uStack_d8;
    local_88 = local_d4;
    uStack_84 = uStack_d0;
    uStack_80 = uStack_cc;
    uStack_7c = uStack_c8;
    puVar4[4] = piVar18;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[5] = uVar12;
    local_b8 = &PTR_LAB_01d260e4;
    local_bc = 0;
    local_c0 = (int *)0xcc;
    local_64 = local_14c;
    local_70 = 0;
    local_74 = 0;
    local_78 = 0;
    local_2c = 0;
    local_a8 = piVar17;
    iVar14 = FUN_01be5878(&local_2c,0x20,0x60);
    uVar11 = local_2c;
    if ((iVar14 != 0) || (local_2c == 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(0x20,0x60);
    }
    FUN_01bed4e2(local_2c,&local_c0,0x60);
    iVar14 = FUN_01a2ce94(piVar17 + 0x14,uVar11,uVar11);
    if (piVar17[0x4e] != 0) {
      local_c0 = piVar18;
      local_bc = uVar12;
      (**(code **)(piVar17[0x4f] + 0x14))
                (piVar17[0x4e] + (*(int *)(piVar17[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_c0);
    }
    if (iVar14 != 0) {
      local_2c = local_2c & 0xffffff00;
      local_c0 = piVar17 + 2;
      local_bc = iVar14;
      local_b8 = (undefined **)&local_2c;
      FUN_019ee860(&local_c0);
    }
  }
  *puVar16 = *puVar16 - 1;
  return uVar11;
}

