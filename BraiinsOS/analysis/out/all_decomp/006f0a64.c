// FUN_006f0a64 @ 006f0a64 size=1752 calls_out=15 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_006f0a64(uint *param_1,undefined4 param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined *puVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  uint uVar14;
  uint uVar15;
  undefined1 uVar16;
  int iVar17;
  uint *puVar18;
  int local_1cc;
  undefined4 *local_1c0;
  uint *local_1bc;
  uint *local_1ac;
  undefined1 local_1a8 [24];
  undefined1 local_190;
  undefined4 local_188;
  undefined4 local_184;
  uint *local_180;
  undefined4 *local_17c;
  uint *local_178;
  undefined4 *puStack_174;
  uint **ppuStack_170;
  code *pcStack_16c;
  undefined4 **ppuStack_168;
  code *pcStack_164;
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
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined1 local_e3;
  undefined4 *local_dc;
  undefined4 **local_d8;
  undefined4 local_d4;
  undefined4 *local_d0;
  undefined4 *local_cc;
  undefined **local_c8;
  undefined *local_c4;
  undefined *local_c0;
  uint **local_bc;
  uint *local_b8;
  undefined4 *local_b4;
  uint **local_b0;
  code *local_ac;
  undefined4 **local_a8;
  code *local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 ***local_48;
  uint local_44;
  
  if (param_3[3] == 0) {
    return;
  }
  uVar15 = param_1[0x10];
  local_1c0 = &local_50;
  uVar12 = param_1[0x11];
  local_1bc = param_1 + 2;
  uVar7 = FUN_006a4f44(param_3[4],param_3[5],param_3[6],param_3[7],uVar15,uVar12);
  uVar1 = uVar7 >> 0x19;
  iVar17 = *param_3;
  uVar14 = param_3[1];
  local_1cc = 0;
  do {
    uVar7 = uVar14 & uVar7;
    uVar8 = *(uint *)(iVar17 + uVar7);
    uVar9 = uVar8 ^ uVar1 * 0x1010101;
    uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
    while (uVar9 != 0) {
      uVar10 = uVar9 >> 8;
      uVar2 = uVar9 >> 0x10;
      uVar3 = uVar9 >> 0x18;
      uVar4 = uVar9 << 0x18;
      uVar9 = uVar9 - 1 & uVar9;
      uVar10 = uVar7 + ((uint)LZCOUNT(uVar4 | (uVar10 & 0xff) << 0x10 | (uVar2 & 0xff) << 8 | uVar3)
                       >> 3) & uVar14;
      iVar11 = iVar17 + -0x28 + uVar10 * -0x28;
      if ((uVar12 == *(uint *)(iVar11 + 8)) &&
         (iVar11 = thunk_FUN_016dd50a(uVar15,*(undefined4 *)(iVar11 + 4),uVar12), iVar11 == 0)) {
        puVar18 = (uint *)(iVar17 + uVar10 * -0x28 + -0x18);
        uVar1 = param_1[0x22];
        local_b8 = (uint *)((uint)local_b8 & 0xffffff00);
        local_1ac = puVar18;
        if ((*param_1 & 1) == 0) {
          uVar16 = 6;
        }
        else {
          uVar16 = 2;
          local_58 = CONCAT31(local_58._1_3_,2);
          local_48 = (undefined4 ***)*local_1bc;
          local_44 = param_1[3];
          local_50 = 0;
          local_4c = 0;
          FUN_016dd1aa(&local_a0,(uint)&local_58 | 1,0x17);
          local_1bc = (uint *)param_1[4];
          local_1c0 = (undefined4 *)param_1[5];
        }
        local_f4 = 0;
        local_f8 = 1;
        local_fc = 0;
        local_100 = 0;
        local_104 = 1;
        local_e4 = 1;
        local_108 = 0;
        local_178 = local_b8;
        puStack_174 = local_b4;
        ppuStack_170 = local_b0;
        pcStack_16c = local_ac;
        ppuStack_168 = local_a8;
        pcStack_164 = local_a4;
        local_1a8[0] = uVar16;
        FUN_016dd1aa((uint)local_1a8 | 1,&local_a0,0x17);
        local_180 = local_1bc;
        local_188 = 0;
        local_184 = 0;
        local_17c = local_1c0;
        local_ec = 4;
        local_e8 = 0;
        local_f0 = 0;
        local_114 = 0x80000000;
        local_120 = 0x80000000;
        local_12c = 0x80000000;
        local_138 = 0x80000000;
        local_148 = 0x80000000;
        local_190 = uVar16;
        local_e3 = (char)uVar1;
        local_dc = (undefined4 *)FUN_00f382f8(local_1a8,puVar18);
        if (local_dc == (undefined4 *)0x0) {
          FUN_006eb3f4(local_1a8);
          iVar17 = 4;
          if (1 < *puVar18) {
            iVar17 = *puVar18 - 2;
          }
                    /* WARNING: Could not recover jumptable at 0x006f0f40. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_006f0f44 + *(int *)(&DAT_006f0f44 + iVar17 * 4)))();
          return;
        }
        if ((4 < DAT_018d9130) || (DAT_018d9278 == '\0')) goto LAB_006f0efc;
        if (DAT_018d9278 == '\x01') {
LAB_006f0d5c:
          DataMemoryBarrier(0xb);
          pcVar13 = s_SetGloba_00414c05;
          puVar5 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar13 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar13 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar17 = (**(code **)(puVar5 + 0x14))(pcVar13,DAT_018d9270);
          if (iVar17 == 0) goto LAB_006f0efc;
        }
        else if (DAT_018d9278 != '\x02') {
          cVar6 = FUN_0169ac90(&DAT_018d9270);
          if (cVar6 == '\0') goto LAB_006f0efc;
          if (cVar6 != '\x02') goto LAB_006f0d5c;
        }
        local_44 = DAT_018d9270;
        if (*(int *)(DAT_018d9270 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01859844);
        }
        local_9c = *(undefined4 *)(DAT_018d9270 + 0x20);
        local_98 = *(undefined4 *)(DAT_018d9270 + 0x24);
        local_94 = *(undefined4 *)(DAT_018d9270 + 0x28);
        local_d0 = (undefined4 *)(DAT_018d9270 + 0x1c);
        local_a0 = *local_d0;
        local_bc = &local_b8;
        local_90 = 0;
        local_c0 = &DAT_00579a8f;
        local_a8 = &local_dc;
        local_ac = FUN_00788a88;
        local_b0 = &local_1ac;
        local_c8 = &local_c0;
        local_d8 = &local_cc;
        local_48 = &local_d8;
        local_a4 = FUN_00604528;
        local_b4 = &DAT_0157d360;
        local_c4 = &DAT_018abb78;
        local_d4 = 1;
        local_54 = 0;
        local_58 = 1;
        DataMemoryBarrier(0xb);
        pcVar13 = s_SetGloba_00414c05;
        puVar5 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar13 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar13 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_cc = &local_a0;
        local_b8 = param_1 + 0x10;
        iVar17 = (**(code **)(puVar5 + 0x28))(pcVar13,&local_58);
        if (iVar17 != 0) {
          (**(code **)(puVar5 + 0x2c))(pcVar13,&local_58);
        }
LAB_006f0efc:
        (**(code **)*local_dc)();
        FUN_006eb3f4(local_1a8);
        return;
      }
    }
    if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) {
      return;
    }
    local_1cc = local_1cc + 4;
    uVar7 = uVar7 + local_1cc;
  } while( true );
}

