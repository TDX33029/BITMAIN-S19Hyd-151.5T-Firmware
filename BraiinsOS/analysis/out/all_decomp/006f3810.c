// FUN_006f3810 @ 006f3810 size=3376 calls_out=24 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_006f3810(int *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  undefined1 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined *puVar6;
  char cVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  uint **ppuVar14;
  int iVar15;
  char *pcVar16;
  code *pcVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint *puVar21;
  int local_1c8;
  undefined4 local_1c4;
  uint *local_1ac;
  int *local_1a8;
  int local_1a4;
  int local_1a0;
  int local_19c;
  int ****local_198;
  code *pcStack_194;
  int *local_190;
  code *pcStack_18c;
  uint **ppuStack_188;
  code *pcStack_184;
  int ****local_180;
  code *local_17c;
  int **local_178;
  undefined **local_174;
  undefined *local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_148;
  undefined4 local_138;
  undefined4 local_12c;
  undefined4 local_120;
  undefined4 local_114;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  int *local_f0;
  code *pcStack_ec;
  uint **ppuStack_e8;
  undefined1 local_e4;
  undefined1 local_e3;
  int ***local_dc;
  undefined *local_d8;
  int **local_d4;
  int ***local_d0;
  undefined4 local_cc;
  code *local_c8;
  int *local_b8;
  code *local_b4;
  uint **local_b0;
  code *local_ac;
  int ****local_a8;
  code *local_a4;
  int **local_88;
  undefined **local_84;
  undefined *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  int *local_70;
  int local_6c;
  int local_68;
  int local_64;
  int ****local_60;
  code *local_5c;
  int *local_58;
  code *local_54;
  uint **local_50;
  code *local_4c;
  int ****local_48;
  code *local_44;
  
  if (param_3[3] == 0) {
    return;
  }
  iVar19 = param_1[0x10];
  iVar15 = param_1[0x11];
  uVar8 = FUN_006a4f44(param_3[4],param_3[5],param_3[6],param_3[7],iVar19,iVar15);
  uVar1 = uVar8 >> 0x19;
  iVar20 = *param_3;
  uVar18 = param_3[1];
  local_1c8 = 0;
  do {
    uVar8 = uVar18 & uVar8;
    uVar9 = *(uint *)(iVar20 + uVar8);
    uVar10 = uVar9 ^ uVar1 * 0x1010101;
    uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
    while (uVar10 != 0) {
      uVar11 = uVar10 >> 8;
      uVar3 = uVar10 >> 0x10;
      uVar4 = uVar10 >> 0x18;
      uVar5 = uVar10 << 0x18;
      uVar10 = uVar10 - 1 & uVar10;
      uVar11 = uVar8 + ((uint)LZCOUNT(uVar5 | (uVar11 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 | uVar4)
                       >> 3) & uVar18;
      iVar12 = iVar20 + -0x28 + uVar11 * -0x28;
      if ((iVar15 == *(int *)(iVar12 + 8)) &&
         (iVar12 = thunk_FUN_016dd50a(iVar19,*(undefined4 *)(iVar12 + 4),iVar15), iVar12 == 0)) {
        puVar21 = (uint *)(iVar20 + uVar11 * -0x28 + -0x18);
        uVar13 = 0;
        uVar2 = *(undefined1 *)((int)param_1 + 0x81);
        local_88 = (int **)((uint)local_88 & 0xffffff00);
        local_1ac = puVar21;
        if (*param_1 == -0x80000000) {
          local_70 = (int *)CONCAT31(local_70._1_3_,6);
          local_b8 = (int *)CONCAT31(local_b8._1_3_,6);
        }
        else {
          iVar15 = param_1[2];
          if (iVar15 < 0) {
LAB_006f3c40:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar13,iVar15);
          }
          iVar19 = param_1[1];
          local_1c4 = 0;
          if (iVar15 == 0) {
            iVar12 = 1;
            iVar20 = 0;
          }
          else {
            iVar12 = thunk_FUN_016d4a50(iVar15);
            iVar20 = iVar15;
            if (iVar12 == 0) {
              uVar13 = 1;
              goto LAB_006f3c40;
            }
          }
          FUN_016dd1aa(iVar12,iVar19,iVar15);
          local_58 = (int *)CONCAT31(local_58._1_3_,3);
          local_70 = local_58;
          local_60 = local_48;
          local_5c = local_44;
          local_ac = (code *)param_1[5];
          local_6c = iVar20;
          local_68 = iVar12;
          local_64 = iVar15;
          local_54 = (code *)iVar20;
          local_50 = (uint **)iVar12;
          local_4c = (code *)iVar15;
          if ((int)local_ac < 0) {
LAB_006f3d48:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(local_1c4,local_ac);
          }
          iVar19 = param_1[4];
          if (local_ac == (code *)0x0) {
            pcVar17 = (code *)0x0;
            ppuVar14 = (uint **)&DAT_00000001;
          }
          else {
            ppuVar14 = (uint **)thunk_FUN_016d4a50(local_ac);
            pcVar17 = local_ac;
            if (ppuVar14 == (uint **)0x0) {
              local_1c4 = 1;
              goto LAB_006f3d48;
            }
          }
          FUN_016dd1aa(ppuVar14,iVar19,local_ac);
          local_58 = (int *)CONCAT31(local_58._1_3_,3);
          local_b8 = local_58;
          local_a8 = local_48;
          local_a4 = local_44;
          local_b4 = pcVar17;
          local_b0 = ppuVar14;
          local_54 = pcVar17;
          local_50 = ppuVar14;
          local_4c = local_ac;
        }
        FUN_00751614(&local_58);
        local_f4 = 0;
        local_fc = 0;
        local_100 = 0;
        local_108 = 0;
        local_e4 = 3;
        local_f8 = 1;
        local_104 = 1;
        local_178 = local_88;
        local_174 = local_84;
        local_170 = local_80;
        local_16c = local_7c;
        local_168 = local_78;
        local_164 = local_74;
        local_1a8 = local_70;
        local_1a4 = local_6c;
        local_1a0 = local_68;
        local_19c = local_64;
        local_198 = local_60;
        pcStack_194 = local_5c;
        local_190 = local_b8;
        pcStack_18c = local_b4;
        ppuStack_188 = local_b0;
        pcStack_184 = local_ac;
        local_180 = local_a8;
        local_17c = local_a4;
        local_114 = 0x80000000;
        local_120 = 0x80000000;
        local_12c = 0x80000000;
        local_138 = 0x80000000;
        local_148 = 0x80000000;
        local_f0 = local_58;
        pcStack_ec = local_54;
        ppuStack_e8 = local_50;
        local_e3 = uVar2;
        local_dc = (int ***)FUN_00f382f8(&local_1a8,puVar21);
        if (local_dc == (int ***)0x0) {
          FUN_006eb3f4(&local_1a8);
          iVar15 = 4;
          if (1 < *puVar21) {
            iVar15 = *puVar21 - 2;
          }
                    /* WARNING: Could not recover jumptable at 0x006f3ccc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_006f3cd0 + *(int *)(&DAT_006f3cd0 + iVar15 * 4)))();
          return;
        }
        if ((4 < DAT_018d9130) || (DAT_018d9278 == '\0')) goto LAB_006f3c58;
        if (DAT_018d9278 == '\x01') {
LAB_006f3aa4:
          DataMemoryBarrier(0xb);
          pcVar16 = s_SetGloba_00414c05;
          puVar6 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar16 = DAT_018daa74, puVar6 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar16 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar15 = (**(code **)(puVar6 + 0x14))(pcVar16,DAT_018d9270);
          if (iVar15 == 0) goto LAB_006f3c58;
        }
        else if (DAT_018d9278 != '\x02') {
          cVar7 = FUN_0169ac90(&DAT_018d9270);
          if (cVar7 == '\0') goto LAB_006f3c58;
          if (cVar7 != '\x02') goto LAB_006f3aa4;
        }
        local_44 = DAT_018d9270;
        if (*(int *)(DAT_018d9270 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01859844);
        }
        local_6c = *(int *)(DAT_018d9270 + 0x20);
        local_68 = *(int *)(DAT_018d9270 + 0x24);
        local_64 = *(int *)(DAT_018d9270 + 0x28);
        local_c8 = DAT_018d9270 + 0x1c;
        local_70 = *(int **)local_c8;
        local_60 = (int ****)0x0;
        local_d8 = &DAT_00579a8f;
        local_ac = FUN_00788a88;
        local_b0 = &local_1ac;
        local_84 = &local_d8;
        local_88 = &local_70;
        local_a4 = FUN_00604528;
        local_a8 = &local_dc;
        local_d0 = &local_88;
        local_48 = &local_d0;
        local_b4 = (code *)&DAT_0157d360;
        local_80 = &DAT_018abb78;
        local_cc = 1;
        local_54 = (code *)0x0;
        local_58 = (int *)&DAT_00000001;
        DataMemoryBarrier(0xb);
        pcVar16 = s_SetGloba_00414c05;
        puVar6 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar16 = DAT_018daa74, puVar6 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar16 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_d4 = &local_b8;
        local_b8 = param_1 + 0x10;
        iVar15 = (**(code **)(puVar6 + 0x28))(pcVar16,&local_58);
        if (iVar15 != 0) {
          (**(code **)(puVar6 + 0x2c))(pcVar16,&local_58);
        }
LAB_006f3c58:
        (*(code *)**local_dc)();
        FUN_006eb3f4(&local_1a8);
        return;
      }
    }
    if ((uVar9 & 0x80808080 & uVar9 << 1) != 0) {
      return;
    }
    local_1c8 = local_1c8 + 4;
    uVar8 = uVar8 + local_1c8;
  } while( true );
}

