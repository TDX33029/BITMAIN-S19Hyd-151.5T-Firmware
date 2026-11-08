// FUN_006ed7fc @ 006ed7fc size=1764 calls_out=15 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_006ed7fc(uint *param_1,undefined4 param_2,int *param_3)

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
  uint *puVar12;
  uint uVar13;
  char *pcVar14;
  uint uVar15;
  undefined1 uVar16;
  int iVar17;
  uint uVar18;
  uint *local_1c4;
  uint *local_1c0;
  int local_1bc;
  uint *local_1ac;
  undefined1 local_1a8 [24];
  undefined1 local_190;
  uint *local_188;
  undefined4 uStack_184;
  uint *local_180;
  uint local_17c;
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
  uint local_50 [2];
  undefined4 ***local_48;
  uint local_44;
  
  if (param_3[3] == 0) {
    return;
  }
  uVar13 = param_1[0x10];
  local_1c4 = local_50;
  uVar18 = param_1[0x11];
  local_1c0 = param_1 + 2;
  uVar7 = FUN_006a4f44(param_3[4],param_3[5],param_3[6],param_3[7],uVar13,uVar18);
  uVar1 = uVar7 >> 0x19;
  iVar17 = *param_3;
  uVar15 = param_3[1];
  local_1bc = 0;
  do {
    uVar7 = uVar15 & uVar7;
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
                       >> 3) & uVar15;
      iVar11 = iVar17 + -0x28 + uVar10 * -0x28;
      if ((uVar18 == *(uint *)(iVar11 + 8)) &&
         (iVar11 = thunk_FUN_016dd50a(uVar13,*(undefined4 *)(iVar11 + 4),uVar18), iVar11 == 0)) {
        puVar12 = (uint *)(iVar17 + uVar10 * -0x28 + -0x18);
        local_b8 = (uint *)((uint)local_b8 & 0xffffff00);
        uVar1 = param_1[0x22];
        local_1ac = puVar12;
        if ((*param_1 & 1) == 0) {
          uVar16 = 6;
        }
        else {
          uVar16 = 2;
          local_58 = CONCAT31(local_58._1_3_,2);
          local_48 = (undefined4 ***)*local_1c0;
          local_44 = param_1[3];
          local_50[0] = local_44 >> 0x1f;
          local_50[1] = 0;
          FUN_016dd1aa(&local_a0,(uint)&local_58 | 1,0x17);
          uVar18 = param_1[5];
          local_1c0 = (uint *)param_1[4];
          local_1c4 = (uint *)(uVar18 >> 0x1f);
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
        local_188 = local_1c4;
        uStack_184 = 0;
        local_180 = local_1c0;
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
        local_17c = uVar18;
        local_dc = (undefined4 *)FUN_00f382f8(local_1a8,puVar12);
        if (local_dc == (undefined4 *)0x0) {
          FUN_006eb3f4(local_1a8);
          iVar17 = 4;
          if (1 < *puVar12) {
            iVar17 = *puVar12 - 2;
          }
                    /* WARNING: Could not recover jumptable at 0x006edce4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_006edce8 + *(int *)(&DAT_006edce8 + iVar17 * 4)))();
          return;
        }
        if ((4 < DAT_018d9130) || (DAT_018d9278 == '\0')) goto LAB_006edc9c;
        if (DAT_018d9278 == '\x01') {
LAB_006edafc:
          DataMemoryBarrier(0xb);
          pcVar14 = s_SetGloba_00414c05;
          puVar5 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar14 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar14 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar17 = (**(code **)(puVar5 + 0x14))(pcVar14,DAT_018d9270);
          if (iVar17 == 0) goto LAB_006edc9c;
        }
        else if (DAT_018d9278 != '\x02') {
          cVar6 = FUN_0169ac90(&DAT_018d9270);
          if (cVar6 == '\0') goto LAB_006edc9c;
          if (cVar6 != '\x02') goto LAB_006edafc;
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
        local_ac = FUN_00788a88;
        local_b0 = &local_1ac;
        local_c8 = &local_c0;
        local_a4 = FUN_00604528;
        local_a8 = &local_dc;
        local_d8 = &local_cc;
        local_48 = &local_d8;
        local_b4 = &DAT_0157d360;
        local_c4 = &DAT_018abb78;
        local_d4 = 1;
        local_54 = 0;
        local_58 = 1;
        DataMemoryBarrier(0xb);
        pcVar14 = s_SetGloba_00414c05;
        puVar5 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar14 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar14 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_cc = &local_a0;
        local_b8 = param_1 + 0x10;
        iVar17 = (**(code **)(puVar5 + 0x28))(pcVar14,&local_58);
        if (iVar17 != 0) {
          (**(code **)(puVar5 + 0x2c))(pcVar14,&local_58);
        }
LAB_006edc9c:
        (**(code **)*local_dc)();
        FUN_006eb3f4(local_1a8);
        return;
      }
    }
    if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) {
      return;
    }
    local_1bc = local_1bc + 4;
    uVar7 = uVar7 + local_1bc;
  } while( true );
}

