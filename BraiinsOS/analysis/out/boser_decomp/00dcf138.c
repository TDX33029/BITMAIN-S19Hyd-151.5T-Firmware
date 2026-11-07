// FUN_00dcf138 @ 00dcf138 size=4056 calls_out=23 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00dcf138(int *param_1,int *param_2,int param_3)

{
  char cVar1;
  undefined1 uVar2;
  int *piVar3;
  int extraout_r2;
  int iVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  int *local_288;
  int *local_284;
  int local_280;
  int local_27c;
  int *local_278;
  int *local_274;
  int *local_270;
  int *local_26c;
  int *local_268;
  int local_264;
  int local_260;
  int local_258;
  int iStack_254;
  int *piStack_250;
  int local_248;
  int local_244;
  int local_240;
  int iStack_23c;
  int *local_238;
  int local_234;
  int local_230;
  int iStack_22c;
  int iStack_228;
  int local_224;
  int iStack_220;
  int iStack_21c;
  int iStack_218;
  int local_214;
  int local_210;
  int local_208;
  int iStack_204;
  int iStack_200;
  int local_1fc;
  int iStack_1f8;
  int iStack_1f4;
  int iStack_1f0;
  int local_1e8;
  int iStack_1e4;
  int *piStack_1e0;
  int local_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int local_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int local_1b8;
  int iStack_1b4;
  int *piStack_1b0;
  int local_1a8;
  int iStack_1a4;
  int iStack_1a0;
  int iStack_19c;
  int local_198;
  int iStack_194;
  int iStack_190;
  int iStack_18c;
  int iStack_188;
  int local_180;
  int iStack_17c;
  int iStack_178;
  int local_174;
  int iStack_170;
  int iStack_16c;
  int local_164;
  int local_160;
  int local_15c;
  int local_158;
  int iStack_154;
  int iStack_150;
  int local_148;
  int iStack_144;
  int iStack_140;
  int local_13c;
  int iStack_138;
  int iStack_134;
  int iStack_130;
  int local_128;
  int iStack_124;
  int *piStack_120;
  int local_118;
  int iStack_114;
  int iStack_110;
  int local_10c;
  int iStack_108;
  int iStack_104;
  int iStack_100;
  int local_f8;
  int iStack_f4;
  int *piStack_f0;
  int local_e8;
  int iStack_e4;
  int iStack_e0;
  int local_dc;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int *local_78;
  int *local_74;
  int local_70;
  int local_6c;
  int iStack_68;
  int iStack_64;
  int local_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int local_4c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[3]) {
  case '\0':
    iVar6 = param_2[1];
    param_2[2] = iVar6;
    iVar7 = *param_2;
    uVar2 = FUN_00a21fac(*(undefined4 *)(*(int *)(iVar6 + 0x10) + 0x3c),
                         *(undefined4 *)(*(int *)(iVar6 + 0x10) + 0x40));
    local_260 = -0x7ffffff9;
    local_264 = extraout_r2;
    iVar4 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar2) {
    case 0:
      param_2[4] = iVar7;
      param_2[5] = iVar6;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_00dcf2ac:
      *(undefined1 *)((int)param_2 + 0x7f) = 0;
      param_2[6] = iVar6;
      param_2[0x1d] = iVar6;
      param_2[0x1e] = iVar7;
LAB_00dcf36c:
      *(undefined1 *)((int)param_2 + 0x7e) = 0;
      *(undefined2 *)(param_2 + 0x1f) = 0;
      FUN_00a203b4(&local_88,iVar6,&DAT_00570de8,8);
      piVar11 = local_74;
      piVar8 = local_78;
      iVar4 = local_7c;
      if (local_88 == 2) {
        *(undefined2 *)((int)param_2 + 0x7d) = 1;
        FUN_00a203b4(&local_88,param_2[0x1d],&DAT_00571120,8);
        iVar6 = local_88;
        if (local_88 == 2) {
          *(undefined1 *)(param_2 + 0x1c) = 0;
          iVar6 = param_2[0x1d];
          iVar7 = param_2[0x1e];
          param_2[8] = iVar4;
          *(undefined2 *)(param_2 + 0x1f) = 0;
          param_2[9] = (int)piVar8;
          param_2[10] = (int)piVar11;
          param_2[0xb] = local_7c;
          param_2[0xc] = (int)local_78;
          param_2[0xd] = (int)local_74;
          param_2[0xe] = iVar7;
          param_2[0xf] = iVar6;
LAB_00dcfcdc:
          local_26c = param_2 + 8;
          local_180 = *local_26c;
          iStack_17c = param_2[9];
          iStack_178 = param_2[10];
          local_174 = param_2[0xb];
          iStack_170 = param_2[0xc];
          iStack_16c = param_2[0xd];
          param_2[0x10] = local_180;
          param_2[0x11] = iStack_17c;
          param_2[0x12] = iStack_178;
          param_2[0x13] = local_174;
          param_2[0x14] = iStack_170;
          param_2[0x15] = iStack_16c;
          *(undefined1 *)(param_2 + 0x1b) = 0;
          param_2[0x16] = iVar6;
          param_2[0x17] = iVar7;
LAB_00dcfd28:
          param_2[0x18] = iVar6;
          *(undefined2 *)((int)param_2 + 0x6d) = 0x101;
          iVar6 = *(int *)(iVar7 + 0x10);
          *(undefined1 *)((int)param_2 + 0x6e) = 0;
          local_158 = param_2[0x10];
          iStack_154 = param_2[0x11];
          iStack_150 = param_2[0x12];
          *(undefined1 *)((int)param_2 + 0x6d) = 0;
          local_e8 = param_2[0x13];
          iStack_e4 = param_2[0x14];
          iStack_e0 = param_2[0x15];
          iVar6 = FUN_00b83314(iVar6 + 8);
          puVar5 = &DAT_01c13ac8;
          param_2[0x19] = iVar6;
          param_2[0x1a] = (int)&DAT_01c13ac8;
          goto LAB_00dcfd98;
        }
        local_26c = (int *)local_84;
        local_27c = local_80;
        local_280 = local_7c;
        local_284 = local_78;
        local_288 = local_74;
        local_1a8 = local_70;
        iStack_1a4 = local_6c;
        iStack_1a0 = iStack_68;
        iStack_19c = iStack_64;
        local_198 = local_60;
        iStack_194 = iStack_5c;
        iStack_190 = iStack_58;
        iStack_18c = iStack_54;
        iStack_188 = local_50;
        FUN_019bb7e0(iVar4,piVar8);
        *(undefined2 *)((int)param_2 + 0x7d) = 0;
      }
      else {
        local_26c = (int *)local_84;
        local_27c = local_80;
        local_280 = local_7c;
        local_284 = local_78;
        local_288 = local_74;
        local_1a8 = local_70;
        iStack_1a4 = local_6c;
        iStack_1a0 = iStack_68;
        iStack_19c = iStack_64;
        local_198 = local_60;
        iStack_194 = iStack_5c;
        iStack_190 = iStack_58;
        iStack_18c = iStack_54;
        iStack_188 = local_50;
        iVar6 = local_88;
      }
LAB_00dcfa40:
      piVar8 = param_2 + 8;
      *(undefined1 *)((int)param_2 + 0x7f) = 1;
      FUN_00cb022c(piVar8);
      piVar11 = (int *)param_2[6];
      if (iVar6 == 2) {
        iStack_23c = local_280;
        local_244 = (int)local_26c;
LAB_00dcfae8:
        piVar3 = (int *)((uint)&local_248 | 4);
        local_258 = *piVar3;
        iStack_254 = piVar3[1];
        piStack_250 = (int *)piVar3[2];
        FUN_01bed864(piVar8,&local_258,0xc);
        iVar4 = piVar11[7];
        iVar7 = piVar11[4];
        iVar13 = piVar11[5];
        iVar14 = piVar11[6];
        iVar6 = piVar11[8];
        iVar9 = piVar11[1];
        iVar10 = piVar11[2];
        iVar12 = piVar11[3];
        param_2[0xb] = *piVar11;
        param_2[0xc] = iVar9;
        param_2[0xd] = iVar10;
        param_2[0xe] = iVar12;
        param_2[0xf] = iVar7 + 0x20;
        param_2[0x10] = iVar13;
        param_2[0x11] = iVar14;
        *(char *)(param_2 + 0x13) = (char)iVar6;
        param_2[0x12] = iVar4;
        iVar6 = piVar11[4];
        *(undefined1 *)(param_2 + 0x2f) = 0;
        param_2[0x2c] = (int)piVar8;
        param_2[0x2d] = (int)(param_2 + 0xb);
        param_2[0x2e] = iVar6;
        goto switchD_00dcf28c_caseD_4;
      }
      local_80 = local_27c;
      local_7c = local_280;
      local_78 = local_284;
      local_74 = local_288;
      local_84 = (int)local_26c;
      local_70 = local_1a8;
      local_6c = iStack_1a4;
      iStack_68 = iStack_1a0;
      iStack_64 = iStack_19c;
      local_60 = local_198;
      iStack_5c = iStack_194;
      iStack_58 = iStack_190;
      iStack_54 = iStack_18c;
      local_50 = iStack_188;
      local_88 = iVar6;
      FUN_009ed8c0(&local_248,piVar11);
      if (local_248 == 2) {
        piVar11 = (int *)param_2[6];
        goto LAB_00dcfae8;
      }
      local_264 = local_248;
      piVar8 = (int *)((uint)&local_248 | 4);
      iVar4 = 1;
      local_258 = *piVar8;
      iStack_254 = piVar8[1];
      piStack_250 = (int *)piVar8[2];
      local_268 = local_238;
      local_260 = local_234;
      local_1d8 = local_230;
      iStack_1d4 = iStack_22c;
      iStack_1d0 = iStack_228;
      local_1cc = local_224;
      iStack_1c8 = iStack_220;
      iStack_1c4 = iStack_21c;
      iStack_1c0 = iStack_218;
      local_26c = (int *)local_210;
      param_3 = local_214;
      local_1b8 = local_258;
      iStack_1b4 = iStack_254;
      piStack_1b0 = piStack_250;
LAB_00dcfea4:
      local_270 = param_2 + 7;
      local_278 = param_2 + 4;
      *(undefined1 *)local_270 = 1;
      FUN_00dd1114(local_278);
      break;
    case 1:
      param_2[4] = iVar7;
      param_2[5] = iVar6;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_00dcf4cc:
      param_2[8] = iVar7;
      param_2[9] = iVar6;
      param_2[6] = iVar6;
      *(undefined1 *)(param_2 + 0x13) = 0;
LAB_00dcf4e8:
      *(undefined1 *)(param_2 + 0x12) = 0;
      param_2[10] = iVar7;
      param_2[0xb] = iVar6;
LAB_00dcf4fc:
      *(undefined1 *)(param_2 + 0x11) = 0;
      param_2[0xc] = iVar6;
      param_2[0xd] = iVar7;
LAB_00dcf50c:
      param_2[0xe] = iVar6;
      iVar6 = *(int *)(iVar7 + 0x10);
      FUN_006666fc(&local_e8,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
      local_dc = CONCAT31(local_dc._1_3_,*(undefined1 *)(iVar7 + 0xc));
      iVar6 = FUN_00b820d4(iVar6 + 8,&local_e8);
      puVar5 = &DAT_01c13c48;
      param_2[0xf] = iVar6;
      param_2[0x10] = (int)&DAT_01c13c48;
LAB_00dcf54c:
      (**(code **)(puVar5 + 0xc))(&local_e8,iVar6,param_3);
      if (local_dc == 3) {
        *(undefined1 *)(param_2 + 0x11) = 3;
      }
      else {
        FUN_01bed4e2(&local_88,&local_e8,0x60);
        FUN_00fe4378(param_2[0xf],param_2[0x10]);
        FUN_00dd0750(&local_248,*(undefined4 *)(param_2[0xe] + 0x18),&local_88);
        *(undefined1 *)(param_2 + 0x11) = 1;
        if (local_248 != -0x7fffffff) {
          piVar8 = (int *)param_2[6];
          *(undefined1 *)(param_2 + 0x13) = 1;
          *(undefined1 *)(param_2 + 0x12) = 1;
          param_2[8] = local_248;
          param_2[9] = local_244;
          param_2[10] = local_240;
          iVar7 = piVar8[4];
          iVar14 = piVar8[5];
          iVar10 = piVar8[6];
          iVar13 = piVar8[7];
          iVar6 = piVar8[8];
          iVar4 = piVar8[1];
          iVar9 = piVar8[2];
          iVar12 = piVar8[3];
          param_2[0xb] = *piVar8;
          param_2[0xc] = iVar4;
          param_2[0xd] = iVar9;
          param_2[0xe] = iVar12;
          param_2[0x12] = iVar13;
          param_2[0xf] = iVar7 + 0x20;
          param_2[0x10] = iVar14;
          param_2[0x11] = iVar10;
          *(char *)(param_2 + 0x13) = (char)iVar6;
          iVar6 = piVar8[4];
          *(undefined1 *)(param_2 + 0x2f) = 0;
          param_2[0x2c] = (int)(param_2 + 8);
          param_2[0x2d] = (int)(param_2 + 0xb);
          param_2[0x2e] = iVar6;
          goto switchD_00dcf20c_caseD_4;
        }
      }
      uVar2 = 3;
      *(undefined1 *)(param_2 + 0x13) = 3;
      *(undefined1 *)(param_2 + 0x12) = 3;
      goto LAB_00dcf790;
    case 2:
      param_2[4] = iVar7;
      param_2[5] = iVar6;
      *(undefined1 *)(param_2 + 7) = 0;
LAB_00dcf5ec:
      param_2[8] = iVar7;
      param_2[9] = iVar6;
      param_2[6] = iVar6;
      *(undefined1 *)(param_2 + 0x13) = 0;
LAB_00dcf608:
      *(undefined1 *)(param_2 + 0x12) = 0;
      param_2[10] = iVar7;
      param_2[0xb] = iVar6;
LAB_00dcf61c:
      *(undefined1 *)(param_2 + 0x11) = 0;
      param_2[0xc] = iVar6;
      param_2[0xd] = iVar7;
LAB_00dcf62c:
      param_2[0xe] = iVar6;
      iVar6 = *(int *)(iVar7 + 0x10);
      FUN_006666fc(&local_e8,*(undefined4 *)(iVar7 + 4),*(undefined4 *)(iVar7 + 8));
      local_dc = CONCAT31(local_dc._1_3_,*(undefined1 *)(iVar7 + 0xc));
      iVar6 = FUN_00b820d4(iVar6 + 8,&local_e8);
      puVar5 = &DAT_01c13b88;
      param_2[0xf] = iVar6;
      param_2[0x10] = (int)&DAT_01c13b88;
LAB_00dcf66c:
      (**(code **)(puVar5 + 0xc))(&local_e8,iVar6,param_3);
      if (local_dc == 3) {
        *(undefined1 *)(param_2 + 0x11) = 3;
      }
      else {
        FUN_01bed4e2(&local_88,&local_e8,0x60);
        FUN_00fe4378(param_2[0xf],param_2[0x10]);
        FUN_00dd0750(&local_248,*(undefined4 *)(param_2[0xe] + 0x18),&local_88);
        *(undefined1 *)(param_2 + 0x11) = 1;
        if (local_248 != -0x7fffffff) {
          piVar8 = (int *)param_2[6];
          *(undefined1 *)(param_2 + 0x13) = 1;
          *(undefined1 *)(param_2 + 0x12) = 1;
          param_2[8] = local_248;
          param_2[9] = local_244;
          param_2[10] = local_240;
          iVar7 = piVar8[4];
          iVar14 = piVar8[5];
          iVar10 = piVar8[6];
          iVar13 = piVar8[7];
          iVar6 = piVar8[8];
          iVar4 = piVar8[1];
          iVar9 = piVar8[2];
          iVar12 = piVar8[3];
          param_2[0xb] = *piVar8;
          param_2[0xc] = iVar4;
          param_2[0xd] = iVar9;
          param_2[0xe] = iVar12;
          param_2[0x12] = iVar13;
          param_2[0xf] = iVar7 + 0x20;
          param_2[0x10] = iVar14;
          param_2[0x11] = iVar10;
          *(char *)(param_2 + 0x13) = (char)iVar6;
          iVar6 = piVar8[4];
          *(undefined1 *)(param_2 + 0x2f) = 0;
          param_2[0x2c] = (int)(param_2 + 8);
          param_2[0x2d] = (int)(param_2 + 0xb);
          param_2[0x2e] = iVar6;
          goto switchD_00dcf24c_caseD_4;
        }
      }
      uVar2 = 3;
      *(undefined1 *)(param_2 + 0x13) = 3;
      *(undefined1 *)(param_2 + 0x12) = 3;
      goto LAB_00dcf904;
    }
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c22308);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c22308);
  case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[7]) {
    case '\0':
      iVar7 = param_2[4];
      iVar6 = param_2[5];
      goto LAB_00dcf2ac;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22308);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22308);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x7f)) {
      case 0:
        iVar6 = param_2[0x1d];
        goto LAB_00dcf36c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22308);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22308);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x1c]) {
      case '\0':
        iVar7 = param_2[0xe];
        iVar6 = param_2[0xf];
        goto LAB_00dcfcdc;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22308);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22308);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x1b]) {
      case '\0':
        iVar6 = param_2[0x16];
        iVar7 = param_2[0x17];
        goto LAB_00dcfd28;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22308);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22308);
      case '\x03':
        iVar6 = param_2[0x19];
        puVar5 = (undefined *)param_2[0x1a];
      }
LAB_00dcfd98:
      local_274 = param_2 + 0x1b;
      local_288 = param_2 + 0x10;
      local_284 = param_2 + 0x1c;
      (**(code **)(puVar5 + 0xc))(&local_e8,iVar6,param_3);
      if (local_dc == 3) {
        *(undefined1 *)local_274 = 3;
      }
      else {
        FUN_01bed4e2(&local_88,&local_e8,0x60);
        FUN_00fe4378(param_2[0x19],param_2[0x1a]);
        FUN_00dd0750(&local_164,*(undefined4 *)(param_2[0x18] + 0x18),&local_88);
        *(undefined1 *)local_274 = 1;
        if (local_164 != -0x7fffffff) {
          local_280 = local_15c;
          FUN_00cb01b4(local_288);
          local_27c = local_160;
          local_26c = (int *)local_164;
          *(undefined1 *)local_284 = 1;
          FUN_00cb01f0(param_2 + 8);
          *(undefined1 *)((int)param_2 + 0x7e) = 0;
          *(undefined2 *)(param_2 + 0x1f) = 0;
          iVar6 = 2;
          goto LAB_00dcfa40;
        }
      }
      uVar2 = 3;
      *(undefined1 *)((int)param_2 + 0x7f) = 3;
      *(undefined1 *)local_284 = 3;
      break;
    case '\x04':
switchD_00dcf28c_caseD_4:
      FUN_00dd0ad4(&local_88,param_2 + 0x14,param_3);
      param_3 = local_50;
      iVar4 = local_88;
      if (local_88 != 2) {
        local_264 = local_84;
        local_1e8 = local_80;
        iStack_1e4 = local_7c;
        piStack_1e0 = local_78;
        local_268 = local_74;
        local_260 = local_70;
        local_208 = local_6c;
        iStack_204 = iStack_68;
        iStack_200 = iStack_64;
        local_1fc = local_60;
        iStack_1f8 = iStack_5c;
        iStack_1f4 = iStack_58;
        iStack_1f0 = iStack_54;
        cVar1 = (char)param_2[0x2f];
        bVar15 = cVar1 == '\x03';
        if (bVar15) {
          cVar1 = (char)param_2[0x2a];
        }
        if (bVar15 && cVar1 == '\x03') {
          FUN_00db1dcc(param_2 + 0x14);
        }
        local_26c = (int *)local_4c;
        local_1b8 = local_1e8;
        iStack_1b4 = iStack_1e4;
        piStack_1b0 = piStack_1e0;
        local_1d8 = local_208;
        iStack_1d4 = iStack_204;
        iStack_1d0 = iStack_200;
        local_1cc = local_1fc;
        iStack_1c8 = iStack_1f8;
        iStack_1c4 = iStack_1f4;
        iStack_1c0 = iStack_1f0;
        if (param_2[8] != -0x80000000) {
          FUN_019bb7e0(param_2[8],param_2[9]);
        }
        goto LAB_00dcfea4;
      }
      uVar2 = 4;
    }
    local_270 = param_2 + 7;
    *(undefined1 *)local_270 = uVar2;
    *param_1 = 2;
    uVar2 = 3;
    goto LAB_00dcff0c;
  case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[7]) {
    case '\0':
      iVar7 = param_2[4];
      iVar6 = param_2[5];
      goto LAB_00dcf4cc;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22308);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22308);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x13]) {
      case '\0':
        iVar7 = param_2[8];
        iVar6 = param_2[9];
        goto LAB_00dcf4e8;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22308);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22308);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x12]) {
      case '\0':
        iVar7 = param_2[10];
        iVar6 = param_2[0xb];
        goto LAB_00dcf4fc;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22308);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22308);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x11]) {
      case '\0':
        iVar6 = param_2[0xc];
        iVar7 = param_2[0xd];
        goto LAB_00dcf50c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22308);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22308);
      case '\x03':
        iVar6 = param_2[0xf];
        puVar5 = (undefined *)param_2[0x10];
      }
      goto LAB_00dcf54c;
    }
switchD_00dcf20c_caseD_4:
    local_270 = param_2 + 7;
    local_278 = param_2 + 4;
    FUN_00dd0ad4(&local_88,param_2 + 0x14,param_3);
    if (local_88 == 2) {
      uVar2 = 4;
LAB_00dcf790:
      local_270 = param_2 + 7;
      *(undefined1 *)local_270 = uVar2;
      *param_1 = 2;
      uVar2 = 4;
      goto LAB_00dcff0c;
    }
    local_128 = local_80;
    iStack_124 = local_7c;
    piStack_120 = local_78;
    local_268 = local_74;
    local_260 = local_70;
    local_148 = local_6c;
    iStack_144 = iStack_68;
    iStack_140 = iStack_64;
    local_13c = local_60;
    iStack_138 = iStack_5c;
    iStack_134 = iStack_58;
    iStack_130 = iStack_54;
    cVar1 = (char)param_2[0x2f];
    bVar15 = cVar1 == '\x03';
    if (bVar15) {
      cVar1 = (char)param_2[0x2a];
    }
    if (bVar15 && cVar1 == '\x03') {
      FUN_00db1dcc(param_2 + 0x14);
    }
    local_26c = (int *)local_4c;
    if (param_2[8] != -0x80000000) {
      FUN_019bb7e0(param_2[8],param_2[9]);
    }
    local_1b8 = local_128;
    iStack_1b4 = iStack_124;
    piStack_1b0 = piStack_120;
    local_1d8 = local_148;
    iStack_1d4 = iStack_144;
    iStack_1d0 = iStack_140;
    local_1cc = local_13c;
    iStack_1c8 = iStack_138;
    iStack_1c4 = iStack_134;
    iStack_1c0 = iStack_130;
    *(undefined1 *)local_270 = 1;
    FUN_00dd1194(local_278);
    local_264 = local_84;
    iVar4 = local_88;
    param_3 = local_50;
    break;
  case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[7]) {
    case '\0':
      iVar7 = param_2[4];
      iVar6 = param_2[5];
      goto LAB_00dcf5ec;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c22308);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c22308);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x13]) {
      case '\0':
        iVar7 = param_2[8];
        iVar6 = param_2[9];
        goto LAB_00dcf608;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22308);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22308);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x12]) {
      case '\0':
        iVar7 = param_2[10];
        iVar6 = param_2[0xb];
        goto LAB_00dcf61c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22308);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22308);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x11]) {
      case '\0':
        iVar6 = param_2[0xc];
        iVar7 = param_2[0xd];
        goto LAB_00dcf62c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22308);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c22308);
      case '\x03':
        iVar6 = param_2[0xf];
        puVar5 = (undefined *)param_2[0x10];
      }
      goto LAB_00dcf66c;
    }
switchD_00dcf24c_caseD_4:
    local_270 = param_2 + 7;
    local_278 = param_2 + 4;
    FUN_00dd0ad4(&local_88,param_2 + 0x14,param_3);
    if (local_88 == 2) {
      uVar2 = 4;
LAB_00dcf904:
      local_270 = param_2 + 7;
      *(undefined1 *)local_270 = uVar2;
      *param_1 = 2;
      uVar2 = 5;
      goto LAB_00dcff0c;
    }
    local_f8 = local_80;
    iStack_f4 = local_7c;
    piStack_f0 = local_78;
    local_268 = local_74;
    local_260 = local_70;
    local_118 = local_6c;
    iStack_114 = iStack_68;
    iStack_110 = iStack_64;
    local_10c = local_60;
    iStack_108 = iStack_5c;
    iStack_104 = iStack_58;
    iStack_100 = iStack_54;
    cVar1 = (char)param_2[0x2f];
    bVar15 = cVar1 == '\x03';
    if (bVar15) {
      cVar1 = (char)param_2[0x2a];
    }
    if (bVar15 && cVar1 == '\x03') {
      FUN_00db1dcc(param_2 + 0x14);
    }
    local_26c = (int *)local_4c;
    if (param_2[8] != -0x80000000) {
      FUN_019bb7e0(param_2[8],param_2[9]);
    }
    local_1b8 = local_f8;
    iStack_1b4 = iStack_f4;
    piStack_1b0 = piStack_f0;
    local_1d8 = local_118;
    iStack_1d4 = iStack_114;
    iStack_1d0 = iStack_110;
    local_1cc = local_10c;
    iStack_1c8 = iStack_108;
    iStack_1c4 = iStack_104;
    iStack_1c0 = iStack_100;
    *(undefined1 *)local_270 = 1;
    FUN_00dd1194(local_278);
    local_264 = local_84;
    iVar4 = local_88;
    param_3 = local_50;
  }
  *param_1 = iVar4;
  param_1[1] = local_264;
  param_1[2] = local_1b8;
  param_1[3] = iStack_1b4;
  param_1[4] = (int)piStack_1b0;
  param_1[5] = (int)local_268;
  param_1[6] = local_260;
  param_1[7] = local_1d8;
  param_1[8] = iStack_1d4;
  param_1[9] = iStack_1d0;
  param_1[10] = local_1cc;
  param_1[0xb] = iStack_1c8;
  param_1[0xc] = iStack_1c4;
  param_1[0xd] = iStack_1c0;
  param_1[0xe] = param_3;
  param_1[0xf] = (int)local_26c;
  uVar2 = 1;
LAB_00dcff0c:
  *(undefined1 *)(param_2 + 3) = uVar2;
  return;
}

