// FUN_018fb788 @ 018fb788 size=1296 calls_out=14 calls_in=2
// strings: 

void FUN_018fb788(undefined4 *param_1,int param_2,int *param_3)

{
  int iVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  undefined1 *puVar12;
  int iVar13;
  int iVar14;
  int local_180;
  int iStack_17c;
  undefined1 *puStack_178;
  int iStack_174;
  undefined4 uStack_170;
  int local_148;
  int local_144;
  int local_140;
  undefined4 local_13c;
  int local_138;
  int iStack_134;
  undefined1 *local_130;
  int local_12c;
  int local_128;
  undefined1 *local_124;
  int local_120;
  undefined4 local_11c;
  undefined4 uStack_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  int local_c8;
  undefined1 *local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int iStack_ac;
  undefined1 *local_a8;
  int iStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  uint local_7c;
  uint local_48 [9];
  
  (**(code **)(*(int *)(*(int *)(param_2 + 0x54) + 0x3c) + 0x10))
            (&local_c8,*(undefined4 *)(*(int *)(param_2 + 0x54) + 0x38));
  iVar14 = local_c0;
  puVar12 = local_c4;
  iVar13 = local_c8;
  if (local_c8 == -0x7fffffd7) {
    local_148 = *param_3;
    local_144 = param_3[1];
    local_140 = param_3[2];
    local_13c = 0x80000000;
    local_12c = local_c0;
    local_130 = local_c4;
    (**(code **)(local_c0 + 0x14))
              (&local_c8,local_c4 + (*(int *)(local_c0 + 8) - 1U & 0xfffffff8) + 8);
    iVar13 = local_c0;
    puVar12 = local_c4;
    iVar1 = local_c8;
    iVar10 = local_140;
    iVar14 = local_144;
    if (local_c8 == -0x7fffffff) {
      uVar5 = 1;
      iVar13 = -0x7fffffd9;
      local_124 = (undefined1 *)CONCAT31(local_124._1_3_,1);
      local_128 = -0x7fffffd9;
LAB_018fbb1c:
      puVar12 = local_124;
      iVar10 = local_140;
      iVar14 = local_144;
      iVar1 = local_148;
      if ((iVar13 != -0x7fffffd9) || ((uVar5 & 1) == 0)) {
        local_180 = local_11c;
        iStack_17c = uStack_118;
        puStack_178 = (undefined1 *)uStack_114;
        iStack_174 = uStack_110;
        uStack_170 = uStack_10c;
        FUN_01917c30(&local_148);
        iVar14 = local_120;
        goto LAB_018fbc20;
      }
      local_180 = local_138;
      iStack_17c = iStack_134;
      puStack_178 = local_130;
      iStack_174 = local_12c;
      FUN_01918c18(&local_128);
      local_c0 = iVar1;
    }
    else {
      local_48[0] = 0x80000017;
      if (local_140 == 0) {
        local_128 = -0x7fffffe9;
LAB_018fb910:
        iVar13 = local_128;
        if (iVar1 != -0x80000000) {
          FUN_0134bd64(iVar1,puVar12);
        }
      }
      else {
        FUN_01918c18(local_48);
        FUN_01917cdc(&local_c8,*(undefined4 *)(iVar14 + 4),*(undefined4 *)(iVar14 + 8));
        iVar4 = local_c0;
        puVar2 = local_c4;
        if (local_c8 == 1) {
          local_108 = local_bc;
          uStack_104 = local_b8;
          uStack_100 = local_b4;
          puVar7 = (undefined4 *)((uint)&local_128 | 4);
          local_fc = local_b0;
          uStack_f8 = iStack_ac;
          local_f4 = local_a8;
          uStack_f0 = iStack_a4;
          local_128 = local_c0;
          *puVar7 = local_bc;
          puVar7[1] = local_b8;
          puVar7[2] = local_b4;
          puVar7[3] = local_b0;
          puVar7[4] = iStack_ac;
          puVar7[5] = local_a8;
          puVar7[6] = iStack_a4;
          goto LAB_018fb910;
        }
        local_108 = local_bc;
        uStack_104 = local_b8;
        uStack_100 = local_b4;
        local_fc = local_b0;
        uStack_f8 = iStack_ac;
        local_f4 = local_a8;
        uStack_f0 = iStack_a4;
        uStack_ec = uStack_a0;
        uStack_e8 = uStack_9c;
        uStack_e4 = uStack_98;
        local_e0 = local_94;
        uStack_dc = uStack_90;
        uStack_d8 = uStack_8c;
        uStack_d4 = uStack_88;
        uStack_d0 = uStack_84;
        if (local_7c < 0x80) {
          iVar9 = local_7c + 2;
          local_c4 = (undefined1 *)FUN_01298504(iVar9,1);
          if (local_c4 == (undefined1 *)0x0) {
LAB_018fbc9c:
            uVar8 = 1;
LAB_018fba14:
                    /* WARNING: Subroutine does not return */
            FUN_00664620(uVar8,iVar9);
          }
          local_c4[1] = (char)local_7c;
          *local_c4 = 0x30;
          local_c0 = 2;
          local_c8 = iVar9;
          FUN_01ac6cbc(&local_c8,local_80,local_7c);
        }
        else {
          iVar11 = 0;
          local_48[0] = local_7c << 0x18 | (local_7c >> 8 & 0xff) << 0x10 |
                        (local_7c >> 0x10 & 0xff) << 8 | local_7c >> 0x18;
          while (*(char *)((int)local_48 + iVar11) == '\0') {
            iVar11 = iVar11 + 1;
            if (iVar11 == 4) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_00533af3,0x31,&DAT_01d30638);
            }
          }
          iVar9 = (local_7c - iVar11) + 6;
          uVar8 = 0;
          if (iVar9 < 0) goto LAB_018fba14;
          local_c4 = (undefined1 *)FUN_01298504(iVar9,1);
          if (local_c4 == (undefined1 *)0x0) goto LAB_018fbc9c;
          *local_c4 = 0x30;
          local_c4[1] = -0x7c - (char)iVar11;
          local_c0 = 2;
          local_c8 = iVar9;
          FUN_01ac6cbc(&local_c8,(int)local_48 + iVar11,4 - iVar11);
          FUN_01ac6cbc(&local_c8,local_80,local_7c);
        }
        puVar3 = local_c4;
        iVar11 = local_c8;
        if ((iVar13 == local_c0) && (iVar13 = thunk_FUN_01bed842(puVar12,local_c4), iVar13 == 0)) {
          iVar13 = -0x7fffffd7;
        }
        else {
          iVar13 = -0x7fffffd9;
          local_124 = (undefined1 *)((uint)local_124 & 0xffffff00);
        }
        local_128 = iVar13;
        if (puVar2 != &DAT_80000000) {
          FUN_0134bd64(puVar2,iVar4);
        }
        if (iVar1 != -0x80000000) {
          FUN_0134bd64(iVar1,puVar12);
        }
        if (iVar11 != -0x80000000) {
          FUN_0134bd64(iVar11,puVar3);
        }
      }
      if (iVar13 != -0x7fffffd7) {
        uVar5 = (uint)local_124 & 0xff;
        goto LAB_018fbb1c;
      }
      local_180 = local_138;
      iStack_17c = iStack_134;
      puStack_178 = local_130;
      iStack_174 = local_12c;
      local_c0 = local_148;
    }
    local_b4 = -0x80000000;
    local_c4 = (undefined1 *)0x1;
    local_c8 = 1;
    local_b0 = local_180;
    iStack_ac = iStack_17c;
    local_a8 = puStack_178;
    iStack_a4 = iStack_174;
    local_bc = iVar14;
    local_b8 = iVar10;
    piVar6 = (int *)thunk_FUN_01be5118(0x28);
    if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x28);
    }
    *piVar6 = local_c8;
    piVar6[1] = (int)local_c4;
    piVar6[2] = local_c0;
    piVar6[3] = local_bc;
    piVar6[4] = local_b8;
    piVar6[5] = local_b4;
    piVar6[6] = local_b0;
    piVar6[7] = iStack_ac;
    piVar6[8] = (int)local_a8;
    piVar6[9] = iStack_a4;
    puVar7 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *puVar7 = 1;
    puVar7[1] = 1;
    puVar7[2] = piVar6;
    FUN_018fafcc(param_1,param_2,puVar7,&DAT_01d240a0);
  }
  else {
    local_180 = local_bc;
    iStack_17c = local_b8;
    puStack_178 = (undefined1 *)local_b4;
    iStack_174 = local_b0;
    uStack_170 = iStack_ac;
    FUN_0190f040(param_3);
LAB_018fbc20:
    param_1[2] = iVar13;
    param_1[3] = puVar12;
    param_1[4] = iVar14;
    param_1[5] = local_180;
    param_1[6] = iStack_17c;
    param_1[7] = puStack_178;
    param_1[8] = iStack_174;
    param_1[9] = uStack_170;
    *param_1 = 2;
    FUN_018fb5fc(param_2);
  }
  return;
}

