// FUN_01a2fcb4 @ 01a2fcb4 size=2296 calls_out=21 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined4 FUN_01a2fcb4(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  char *pcVar4;
  char cVar5;
  int iVar6;
  int ****ppppiVar7;
  undefined4 uVar8;
  int ****ppppiVar9;
  undefined1 uVar10;
  int ***pppiVar11;
  int *piVar12;
  int iVar13;
  uint *puVar14;
  undefined4 *puVar15;
  undefined4 *puVar16;
  int *piVar17;
  int ****ppppiVar18;
  undefined8 uVar19;
  int local_190;
  int ***local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  int *local_15c;
  int ****local_158;
  undefined4 local_154;
  undefined4 local_150;
  undefined4 local_14c;
  int ****local_148;
  int ******local_144;
  int ******local_140;
  byte *local_13c;
  undefined4 *local_138;
  undefined4 uStack_134;
  undefined8 local_130;
  undefined4 uStack_128;
  undefined4 uStack_124;
  int *****local_120;
  int **local_11c;
  undefined4 *local_118;
  undefined4 uStack_114;
  undefined8 local_110;
  undefined4 uStack_108;
  undefined4 uStack_104;
  int *****local_100;
  int ****local_fc;
  undefined4 *local_f8;
  undefined4 uStack_f4;
  undefined8 local_f0;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  int ****local_c0;
  int ****local_bc;
  int **local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  int *local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
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
  byte local_25;
  
  uVar19 = FUN_01a36a70();
  uVar8 = (undefined4)((ulonglong)uVar19 >> 0x20);
  FUN_01a30844(&local_170,param_1);
  if (*(char *)(param_1 + 0x138) == '\0') {
    local_c0 = (int ****)local_170;
    local_bc = (int ****)uStack_16c;
    local_b8 = (int **)uStack_168;
    uStack_b4 = uStack_164;
    local_b0 = *param_2;
    uStack_ac = param_2[1];
    local_a8 = (int *)param_2[2];
    uStack_a4 = param_2[3];
    uStack_a0 = param_2[4];
    local_9c = param_2[5];
    local_98 = param_2[6];
    local_94 = param_2[7];
    uStack_90 = param_2[8];
    uStack_8c = param_2[9];
    (**(code **)(*(int *)(param_1 + 300) + 0x10))(*(undefined4 *)(param_1 + 0x128),&local_c0);
    local_25 = FUN_01a368f8((int)uVar19);
    if (local_25 != 2) {
      if ((DAT_01d50f88 < 5) &&
         (((DAT_01d505e8 - 1 < 2 ||
           ((DAT_01d505e8 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d505e0), cVar5 != '\0')))) &&
          (iVar13 = FUN_01aaa278(DAT_01d505e0), iVar13 != 0)))) {
        if (*(int *)(DAT_01d505e0 + 0x20) == 0) {
LAB_01a305a0:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2b088);
        }
        local_11c = &local_15c;
        local_b8 = *(int ***)(DAT_01d505e0 + 0x24);
        uStack_b4 = *(undefined4 *)(DAT_01d505e0 + 0x28);
        local_138 = (undefined4 *)(DAT_01d505e0 + 0x1c);
        local_c0 = (int ****)*local_138;
        local_140 = &local_120;
        local_b0 = 0;
        local_13c = (byte *)0x1;
        local_158 = (int ****)&local_148;
        local_15c = (int *)&DAT_005b616d;
        local_148 = (int ****)&local_25;
        local_118 = (undefined4 *)&DAT_01d2ea4c;
        local_144 = (int ******)&LAB_01a705e0;
        local_120 = &local_c0;
        local_bc = (int ****)*(int *)(DAT_01d505e0 + 0x20);
        FUN_01aaaecc(DAT_01d505e0,&local_140);
        iVar13 = DAT_01d505e0;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_fc = *(int *****)(DAT_01d505e0 + 0x14);
          local_f8 = *(undefined4 **)(DAT_01d505e0 + 0x18);
          local_100 = (int *****)0x1;
          DataMemoryBarrier(0xb);
          puVar16 = DAT_01d4edc8;
          pcVar4 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar16 = &DAT_01cfc5e0;
            pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar6 = (*(code *)puVar16[3])(pcVar4,&local_100);
          if (iVar6 != 0) {
            FUN_01aaa328(iVar13,pcVar4,puVar16[4],&local_100,&local_140);
          }
        }
      }
      else {
        iVar13 = DAT_01d505e0;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_150 = *(undefined4 *)(DAT_01d505e0 + 0x14);
          local_14c = *(undefined4 *)(DAT_01d505e0 + 0x18);
          local_154 = 1;
          DataMemoryBarrier(0xb);
          puVar16 = DAT_01d4edc8;
          pcVar4 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar16 = &DAT_01cfc5e0;
            pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar6 = (*(code *)puVar16[3])(pcVar4,&local_154);
          if (iVar6 != 0) {
            local_118 = (undefined4 *)(DAT_01d505e0 + 0x1c);
            if (*(int *)(DAT_01d505e0 + 0x20) == 0) goto LAB_01a305a0;
            local_fc = (int ****)&local_148;
            local_b8 = *(int ***)(DAT_01d505e0 + 0x24);
            uStack_b4 = *(undefined4 *)(DAT_01d505e0 + 0x28);
            local_120 = (int *****)&local_100;
            local_11c = (int **)0x1;
            local_144 = (int ******)&local_140;
            local_b0 = 0;
            local_f8 = (undefined4 *)&DAT_01d2ea4c;
            local_148 = (int ****)&DAT_005b616d;
            local_13c = &LAB_01a705e0;
            local_140 = (int ******)&local_25;
            local_100 = &local_c0;
            local_c0 = (int ****)*local_118;
            local_bc = (int ****)*(int *)(DAT_01d505e0 + 0x20);
            FUN_01aaa328(iVar13,pcVar4,puVar16[4],&local_154,&local_120);
          }
        }
      }
    }
  }
  else {
    local_c0 = (int ****)local_170;
    local_bc = (int ****)uStack_16c;
    local_b8 = (int **)uStack_168;
    uStack_b4 = uStack_164;
    local_b0 = *param_2;
    uStack_ac = param_2[1];
    local_a8 = (int *)param_2[2];
    uStack_a4 = param_2[3];
    uStack_a0 = param_2[4];
    local_9c = param_2[5];
    local_98 = param_2[6];
    local_94 = param_2[7];
    uStack_90 = param_2[8];
    uStack_8c = param_2[9];
    local_130 = (**(code **)(*(int *)(param_1 + 0x134) + 0x10))
                          (*(undefined4 *)(param_1 + 0x130),&local_c0);
    puVar16 = (undefined4 *)((uint)&local_c0 | 0x10);
    do {
      do {
        local_148 = (int ****)DAT_01d50470;
        local_144 = (int ******)DAT_01d50474;
        pppiVar11 = (int ***)((int)DAT_01d50470 + 1);
        iVar13 = DAT_01d50474 + (uint)((int ***)0xfffffffe < DAT_01d50470);
        bVar2 = (bool)hasExclusiveAccess(0x1d50470);
      } while (!bVar2);
      bVar2 = DAT_01d50470 == (int ***)0x0;
      bVar3 = DAT_01d50474 == 0;
      DAT_01d50470 = pppiVar11;
      DAT_01d50474 = iVar13;
    } while (bVar2 && bVar3);
    uStack_124._0_2_ = (ushort)(byte)uStack_124;
    local_13c = &local_25;
    local_140 = (int ******)&local_148;
    uStack_128 = (int)uVar19;
    iVar13 = thunk_FUN_01bee35a();
    puVar14 = (uint *)(iVar13 + 0x20);
    if (*(char *)(iVar13 + 0x58) != '\x01') {
      if (*(char *)(iVar13 + 0x58) == '\x02') {
        uVar10 = 1;
        FUN_01a00020(&local_138);
        goto LAB_01a2fde0;
      }
      FUN_019a2bcc(puVar14,&LAB_019efb68);
      *(undefined1 *)(iVar13 + 0x58) = 1;
    }
    local_120 = (int *****)local_140;
    local_11c = (int **)local_13c;
    local_118 = local_138;
    uStack_114 = uStack_134;
    uStack_108 = uStack_128;
    uStack_104 = uStack_124;
    local_110 = local_130;
    if (0x7ffffffe < *puVar14) {
                    /* WARNING: Subroutine does not return */
      FUN_0130701c(&DAT_01d2e14c);
    }
    *puVar14 = *puVar14 + 1;
    local_100 = (int *****)local_140;
    local_fc = (int ****)local_13c;
    local_f8 = local_138;
    uStack_f4 = uStack_134;
    uStack_e8 = uStack_128;
    uStack_e4 = uStack_124;
    local_f0 = local_130;
    if (*(uint *)(iVar13 + 0x24) == 2) {
      FUN_01a00020(&local_f8);
      uVar10 = 0;
      *puVar14 = *puVar14 - 1;
LAB_01a2fde0:
      local_c0 = (int ****)CONCAT31(local_c0._1_3_,uVar10);
                    /* WARNING: Subroutine does not return */
      FUN_0068d4ec(&local_c0,&DAT_01d2b098);
    }
    ppppiVar9 = (int ****)*local_140;
    ppppiVar18 = (int ****)local_140[1];
    if ((*(uint *)(iVar13 + 0x24) & 1) == 0) {
      piVar17 = *(int **)(iVar13 + 0x28);
      do {
        iVar6 = *piVar17;
        bVar2 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar2);
      *piVar17 = iVar6 + 1;
      if (iVar6 < 0) goto LAB_01a305b8;
      local_68 = (int *)piVar17[0x82];
      if (local_68 != (int *)0x0) {
        do {
          iVar6 = *local_68;
          bVar2 = (bool)hasExclusiveAccess(local_68);
        } while (!bVar2);
        *local_68 = iVar6 + 1;
        if (iVar6 < 0) goto LAB_01a305b8;
        local_190 = piVar17[0x83];
      }
      puVar15 = (undefined4 *)((uint)&local_48 | 4);
      *puVar15 = local_138;
      puVar15[1] = uStack_134;
      *(undefined8 *)(puVar15 + 2) = local_130;
      puVar15[4] = uStack_128;
      puVar15[5] = uStack_124;
      local_98 = 0;
      local_94 = local_48;
      uStack_90 = uStack_44;
      uStack_8c = uStack_40;
      local_88 = local_3c;
      uStack_84 = uStack_38;
      uStack_80 = uStack_34;
      uStack_7c = uStack_30;
      puVar16[4] = ppppiVar9;
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[5] = ppppiVar18;
      local_b8 = (int **)&PTR_LAB_01d2a1d0;
      local_bc = (int ****)0x0;
      local_c0 = (int ****)0xcc;
      local_64 = local_190;
      local_70 = 0;
      local_74 = 0;
      local_78 = 0;
      local_15c = (int *)0x0;
      local_a8 = piVar17;
      iVar6 = FUN_01be5878(&local_15c,0x20,0x60);
      piVar12 = local_15c;
      if ((iVar6 != 0) || (local_15c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0x60);
      }
      FUN_01bed4e2(local_15c,&local_c0,0x60);
      iVar6 = FUN_01a2cc10(piVar17 + 0x40,piVar12,piVar12);
      local_c0 = ppppiVar9;
      local_bc = ppppiVar18;
      if (piVar17[0x80] != 0) {
        (**(code **)(piVar17[0x81] + 0x14))
                  (piVar17[0x80] + (*(int *)(piVar17[0x81] + 8) - 1U & 0xfffffff8) + 8,&local_c0);
      }
      if (iVar6 != 0) {
        FUN_019dc904(*(undefined4 *)(iVar13 + 0x28),iVar6);
      }
    }
    else {
      piVar17 = *(int **)(iVar13 + 0x28);
      do {
        iVar13 = *piVar17;
        bVar2 = (bool)hasExclusiveAccess(piVar17);
      } while (!bVar2);
      *piVar17 = iVar13 + 1;
      if (iVar13 < 0) {
LAB_01a305b8:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x1a305b8);
        (*pcVar1)();
      }
      local_68 = (int *)piVar17[0x50];
      if (local_68 != (int *)0x0) {
        do {
          iVar13 = *local_68;
          bVar2 = (bool)hasExclusiveAccess(local_68);
        } while (!bVar2);
        *local_68 = iVar13 + 1;
        if (iVar13 < 0) goto LAB_01a305b8;
        local_190 = piVar17[0x51];
      }
      puVar15 = (undefined4 *)((uint)&local_e0 | 4);
      *puVar15 = local_138;
      puVar15[1] = uStack_134;
      *(undefined8 *)(puVar15 + 2) = local_130;
      puVar15[4] = uStack_128;
      puVar15[5] = uStack_124;
      local_98 = 0;
      local_94 = local_e0;
      uStack_90 = uStack_dc;
      uStack_8c = uStack_d8;
      local_88 = local_d4;
      uStack_84 = uStack_d0;
      uStack_80 = uStack_cc;
      uStack_7c = uStack_c8;
      puVar16[4] = ppppiVar9;
      *puVar16 = 0;
      puVar16[1] = 0;
      puVar16[5] = ppppiVar18;
      local_b8 = (int **)&PTR_LAB_01d2a068;
      local_bc = (int ****)0x0;
      local_c0 = (int ****)0xcc;
      local_64 = local_190;
      local_70 = 0;
      local_74 = 0;
      local_78 = 0;
      local_15c = (int *)0x0;
      local_a8 = piVar17;
      iVar13 = FUN_01be5878(&local_15c,0x20,0x60);
      piVar12 = local_15c;
      if ((iVar13 != 0) || (local_15c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0x60);
      }
      FUN_01bed4e2(local_15c,&local_c0,0x60);
      ppppiVar7 = (int ****)FUN_01a2ce94(piVar17 + 0x14,piVar12,piVar12);
      local_c0 = ppppiVar9;
      local_bc = ppppiVar18;
      if (piVar17[0x4e] != 0) {
        (**(code **)(piVar17[0x4f] + 0x14))
                  (piVar17[0x4e] + (*(int *)(piVar17[0x4f] + 8) - 1U & 0xfffffff8) + 8,&local_c0);
      }
      if (ppppiVar7 != (int ****)0x0) {
        local_15c = (int *)((uint)local_15c & 0xffffff00);
        local_c0 = (int ****)(piVar17 + 2);
        local_bc = ppppiVar7;
        local_b8 = &local_15c;
        FUN_019ee860(&local_c0);
      }
    }
    *puVar14 = *puVar14 - 1;
    if (*piVar12 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(piVar12);
      if (bVar2) {
        *piVar12 = 0x84;
        return uVar8;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    (**(code **)(piVar12[2] + 0x10))(piVar12);
  }
  return uVar8;
}

