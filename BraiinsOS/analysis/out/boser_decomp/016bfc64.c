// FUN_016bfc64 @ 016bfc64 size=1772 calls_out=18 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016bfc64(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  char cVar6;
  int *piVar7;
  undefined4 uVar8;
  undefined4 **ppuVar9;
  int *piVar10;
  int *piVar11;
  int iVar12;
  int *piVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;
  undefined4 local_1b0;
  int local_190 [3];
  int *local_184;
  int local_180;
  int *local_17c;
  int local_178;
  int *local_174;
  int *local_170;
  int *local_16c;
  int *local_168;
  int *local_164;
  int *piStack_160;
  int *local_15c;
  int *local_158;
  int *piStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 local_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  int *local_130;
  int *local_12c;
  int *local_128;
  int *local_124;
  int *local_120;
  int *local_11c;
  int *local_118;
  int *local_114;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined1 local_cc;
  undefined1 local_cb;
  undefined1 local_ca;
  undefined1 local_c9;
  undefined4 *local_c8;
  undefined4 *local_c4;
  int *local_c0;
  int *local_bc;
  int *local_b8;
  int *local_b4;
  int *piStack_b0;
  int *piStack_ac;
  int *piStack_a8;
  int *local_a0;
  int *piStack_9c;
  int *piStack_98;
  int *piStack_94;
  int *piStack_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined2 local_74;
  undefined1 local_72;
  undefined1 local_71;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *local_44;
  int iStack_40;
  int iStack_3c;
  char local_38;
  undefined2 local_34;
  undefined1 local_32;
  undefined1 local_31;
  undefined1 local_30;
  undefined4 local_2f;
  undefined2 local_2b;
  
  uVar3 = *(undefined1 *)(param_2 + 0x14);
  uVar4 = *(undefined1 *)((int)param_2 + 0x51);
  local_190[0] = param_3;
  uVar5 = *(undefined1 *)((int)param_2 + 0x52);
  piVar16 = (int *)&SUB_00000004;
  uVar8 = param_2[0x13];
  local_190[1] = param_4;
  local_180 = 0;
  local_184 = (int *)&SUB_00000004;
  local_190[2] = 0;
  local_174 = (int *)0x0;
  local_178 = 4;
  local_17c = (int *)0x0;
  for (iVar17 = 8; iVar12 = local_180, piVar10 = local_184, iVar17 != 0; iVar17 = iVar17 + -8) {
    local_c9 = uVar5;
    local_cb = uVar4;
    local_d0 = uVar8;
    local_d8 = 1;
    local_dc = 1;
    local_e8 = 1;
    local_ca = uVar3;
    local_d4 = 0;
    local_e0 = 0;
    local_cc = uVar3;
    local_e4 = 0;
    local_ec = 0;
    local_f0 = 0;
    local_f4 = 0;
    local_f8 = 4;
    local_fc = 0;
    local_100 = 0;
    local_104 = 0;
    local_108 = 4;
    local_10c = 0;
    local_110 = 0;
    local_114 = (int *)0x0;
    local_118 = (int *)&SUB_00000004;
    local_11c = (int *)0x0;
    local_120 = (int *)0x0;
    local_124 = (int *)0x0;
    local_128 = (int *)&SUB_00000004;
    local_12c = (int *)0x0;
    local_130 = (int *)0x0;
    FUN_016dd884(&local_170,&local_130,local_190[local_180 * 2],local_190[local_180 * 2 + 1]);
    piVar7 = local_168;
    piVar10 = local_16c;
    if (local_170 != (int *)&DAT_00000022) {
      param_1[3] = local_16c;
      param_1[4] = local_168;
      param_1[5] = local_164;
      param_1[6] = piStack_160;
      param_1[7] = local_15c;
      param_1[8] = local_158;
      param_1[9] = piStack_154;
      param_1[10] = uStack_150;
      param_1[0xb] = uStack_14c;
      param_1[0xc] = uStack_148;
      param_1[0xd] = local_144;
      param_1[0xe] = uStack_140;
      param_1[0xf] = uStack_13c;
      param_1[0x10] = uStack_138;
      param_1[0x11] = uStack_134;
      *param_1 = 0;
      param_1[1] = iVar12;
      param_1[2] = local_170;
      FUN_016bee9c(&local_130);
      goto LAB_016c0314;
    }
    local_bc = local_168;
    local_c0 = local_16c;
    FUN_016bee9c(&local_130);
    local_12c = piVar7;
    local_130 = piVar10;
    if (iVar12 == local_190[2]) {
      FUN_015f5ab8(local_190 + 2);
      piVar16 = local_184;
    }
    piVar16[iVar12 * 2] = (int)piVar10;
    (piVar16 + iVar12 * 2)[1] = (int)piVar7;
    local_180 = iVar12 + 1;
  }
  iVar18 = 0;
  uVar3 = *(undefined1 *)(param_2 + 0x11);
  uVar4 = *(undefined1 *)((int)param_2 + 0x4b);
  iVar12 = 0;
  iVar17 = 0;
  do {
    piVar7 = local_174;
    iVar15 = local_178;
    ppuVar9 = &local_c4;
    if (iVar17 == 8) {
      iVar19 = 8;
LAB_016bfe6c:
      puVar14 = (undefined4 *)0x0;
    }
    else {
      if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d097d8);
      }
      iVar19 = iVar17 + 8;
      iVar12 = 1;
      if (iVar18 == 8) {
        iVar18 = 8;
        goto LAB_016bfe6c;
      }
      local_c4 = (undefined4 *)((int)local_190 + iVar17);
      puVar14 = (undefined4 *)((int)piVar10 + iVar18);
      iVar18 = iVar18 + 8;
      ppuVar9 = &local_c8;
      local_1b0 = 0;
    }
    *ppuVar9 = puVar14;
    if (local_c4 == (undefined4 *)0x0) {
      cVar6 = *(char *)(param_2 + 0xd);
      uVar3 = *(undefined1 *)((int)param_2 + 0x3a);
      uVar4 = *(undefined1 *)((int)param_2 + 0x3b);
      uVar5 = *(undefined1 *)(param_2 + 0xf);
      if (cVar6 != '\x03' && cVar6 != '\x02') {
        piVar16 = (int *)param_2[10];
        do {
          iVar17 = *piVar16;
          bVar20 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar20);
        *piVar16 = iVar17 + 1;
        if (iVar17 < 0) {
LAB_016c0358:
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xfdee,0x16c0358);
          (*pcVar2)();
        }
        iVar12 = param_2[0xb];
        iVar18 = param_2[0xc];
      }
      local_50 = param_2[7];
      bVar21 = (int *)0x3ffffffe < local_174;
      bVar20 = local_174 == (int *)0x3fffffff;
      local_6c = *param_2;
      local_68 = param_2[1];
      local_64 = param_2[2];
      local_4c = param_2[8];
      local_48 = param_2[9];
      local_2f = *(undefined4 *)((int)param_2 + 0x3d);
      local_60 = param_2[3];
      local_54 = param_2[6];
      local_5c = param_2[4];
      local_58 = param_2[5];
      uVar1 = (int)local_174 * 4;
      if (local_174 < (int *)0x40000000) {
        bVar21 = 0x7ffffffb < uVar1;
        bVar20 = uVar1 == 0x7ffffffc;
      }
      local_2b = *(undefined2 *)((int)param_2 + 0x41);
      local_34 = *(undefined2 *)(param_2 + 0xe);
      uVar8 = 0;
      local_44 = piVar16;
      iStack_40 = iVar12;
      iStack_3c = iVar18;
      local_38 = cVar6;
      local_32 = uVar3;
      local_31 = uVar4;
      local_30 = uVar5;
      if (bVar21 && !bVar20) {
LAB_016c0164:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar8,uVar1);
      }
      if (uVar1 == 0) {
        piVar10 = (int *)&SUB_00000004;
        piVar16 = (int *)0x0;
      }
      else {
        uVar8 = 4;
        piVar10 = (int *)FUN_01298504(uVar1,4);
        piVar16 = piVar7;
        if (piVar10 == (int *)0x0) goto LAB_016c0164;
      }
      piVar11 = (int *)0x0;
      if (piVar7 != (int *)0x0) {
        piVar11 = piVar10;
        piVar13 = piVar7;
        do {
          *piVar11 = iVar15;
          iVar15 = iVar15 + 0x1c;
          piVar13 = (int *)((int)piVar13 + -1);
          piVar11 = piVar11 + 1;
        } while (piVar13 != (int *)0x0);
        piVar11 = piVar7;
      }
      piVar13 = (int *)FUN_016bf3b8(&local_6c,piVar10,piVar11);
      FUN_01696d40(&local_130,piVar13,piVar10,piVar11);
      piVar11 = local_128;
      piVar7 = local_12c;
      if (local_130 == (int *)0x2) {
        do {
          iVar17 = *local_12c;
          bVar20 = (bool)hasExclusiveAccess(local_12c);
        } while (!bVar20);
        *local_12c = iVar17 + 1;
        if (iVar17 < 0) goto LAB_016c0358;
        puVar14 = (undefined4 *)thunk_FUN_01be5118(8);
        if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,8);
        }
        *puVar14 = piVar7;
        puVar14[1] = piVar11;
        uVar8 = FUN_016bf83c(puVar14,&DAT_01d09010);
        local_12c = (int *)&DAT_00000001;
        local_130 = (int *)&DAT_00000001;
        local_124 = piVar11;
        local_128 = piVar7;
        local_120 = piVar13;
        puVar14 = (undefined4 *)thunk_FUN_01be5118(0x14);
        if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x14);
        }
        *puVar14 = local_130;
        puVar14[1] = local_12c;
        puVar14[2] = local_128;
        puVar14[3] = local_124;
        puVar14[4] = local_120;
        param_1[1] = puVar14;
        param_1[2] = uVar8;
        *param_1 = 2;
      }
      else {
        param_1[3] = local_124;
        param_1[4] = local_120;
        param_1[5] = local_11c;
        param_1[6] = local_118;
        param_1[7] = local_114;
        param_1[8] = local_110;
        param_1[9] = local_10c;
        param_1[10] = local_108;
        param_1[0xb] = local_104;
        param_1[0xc] = local_100;
        param_1[0xd] = local_fc;
        param_1[0xe] = local_f8;
        param_1[0xf] = local_f4;
        param_1[0x10] = local_f0;
        param_1[0x11] = local_ec;
        *param_1 = local_130;
        param_1[1] = local_12c;
        param_1[2] = local_128;
        DataMemoryBarrier(0xb);
        do {
          iVar17 = *piVar13;
          bVar20 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar20);
        *piVar13 = iVar17 + -1;
        if (iVar17 == 1) {
          DataMemoryBarrier(0xb);
          FUN_016bbf10(piVar13);
        }
      }
      FUN_0134aee0(piVar16,piVar10,4,4);
      goto LAB_016c0314;
    }
    local_78 = *(undefined4 *)((int)param_2 + 0x45);
    local_74 = *(undefined2 *)((int)param_2 + 0x49);
    local_80 = 4;
    local_7c = 0;
    local_84 = 0;
    local_88 = 0;
    local_72 = uVar4;
    local_71 = uVar3;
    FUN_016e6b80(&local_170,&local_88,*local_c4,local_c4[1],local_c8);
    if (local_170 != (int *)&DAT_80000000) {
      local_130 = local_170;
      local_12c = local_16c;
      local_128 = local_168;
      local_124 = local_164;
      local_120 = piStack_160;
      local_11c = local_15c;
      local_118 = local_158;
      local_114 = piStack_154;
      local_110 = uStack_150;
      local_10c = uStack_14c;
      local_a0 = local_170;
      piStack_9c = local_16c;
      piStack_98 = local_168;
      piStack_94 = local_164;
      piStack_90 = piStack_160;
      param_1[8] = local_15c;
      param_1[9] = local_158;
      param_1[10] = piStack_154;
      param_1[0xb] = uStack_150;
      param_1[0xc] = uStack_14c;
      param_1[0xd] = local_108;
      param_1[0xe] = local_104;
      param_1[0xf] = local_100;
      param_1[0x10] = local_fc;
      param_1[0x11] = local_f8;
      param_1[2] = 0x22;
      param_1[1] = local_1b0;
      param_1[3] = local_170;
      param_1[4] = local_16c;
      param_1[5] = local_168;
      param_1[6] = local_164;
      param_1[7] = piStack_160;
      *param_1 = 0;
      FUN_016bee4c(&local_88);
LAB_016c0314:
      FUN_01334e1c(&local_17c);
      FUN_016bedfc(local_190 + 2);
      return;
    }
    local_a0 = local_164;
    piStack_9c = piStack_160;
    piStack_98 = local_15c;
    piStack_94 = local_158;
    piStack_90 = piStack_154;
    local_bc = local_168;
    local_c0 = local_16c;
    local_b8 = local_164;
    local_b4 = piStack_160;
    piStack_b0 = local_15c;
    piStack_ac = local_158;
    piStack_a8 = piStack_154;
    FUN_016bee4c(&local_88);
    piVar16 = local_174;
    local_130 = local_c0;
    local_12c = local_bc;
    local_128 = local_b8;
    local_124 = local_b4;
    local_120 = piStack_b0;
    local_11c = piStack_ac;
    local_118 = piStack_a8;
    if (local_174 == local_17c) {
      FUN_015f5b48(&local_17c);
    }
    puVar14 = (undefined4 *)(local_178 + (int)piVar16 * 0x1c);
    *puVar14 = local_c0;
    puVar14[1] = local_bc;
    puVar14[2] = local_b8;
    puVar14[3] = local_b4;
    puVar14[4] = piStack_b0;
    puVar14[5] = piStack_ac;
    puVar14[6] = piStack_a8;
    local_174 = (int *)((int)piVar16 + 1);
    iVar17 = iVar19;
  } while( true );
}

