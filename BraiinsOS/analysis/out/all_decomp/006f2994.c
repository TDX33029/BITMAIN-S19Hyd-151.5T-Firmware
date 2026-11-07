// FUN_006f2994 @ 006f2994 size=1712 calls_out=15 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_006f2994(int param_1,undefined4 param_2,int *param_3)

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
  char *pcVar13;
  int iVar14;
  undefined4 uVar15;
  uint *puVar16;
  undefined1 uVar17;
  int iVar18;
  uint uVar19;
  int local_1c8;
  undefined4 *local_1bc;
  uint *local_1ac;
  undefined1 local_1a8 [24];
  undefined1 local_190;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 *local_180;
  undefined4 local_17c;
  undefined4 *local_178;
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
  undefined4 **local_bc;
  undefined4 *local_b8;
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
  int local_44;
  
  if (param_3[3] == 0) {
    return;
  }
  uVar15 = *(undefined4 *)(param_1 + 0x20);
  local_1bc = &local_50;
  iVar18 = *(int *)(param_1 + 0x24);
  uVar8 = FUN_006a4f44(param_3[4],param_3[5],param_3[6],param_3[7],uVar15,iVar18);
  uVar1 = uVar8 >> 0x19;
  iVar14 = *param_3;
  uVar19 = param_3[1];
  local_1c8 = 0;
  do {
    uVar8 = uVar19 & uVar8;
    uVar9 = *(uint *)(iVar14 + uVar8);
    uVar10 = uVar9 ^ uVar1 * 0x1010101;
    uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
    while (uVar10 != 0) {
      uVar11 = uVar10 >> 8;
      uVar3 = uVar10 >> 0x10;
      uVar4 = uVar10 >> 0x18;
      uVar5 = uVar10 << 0x18;
      uVar10 = uVar10 - 1 & uVar10;
      uVar11 = uVar8 + ((uint)LZCOUNT(uVar5 | (uVar11 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 | uVar4)
                       >> 3) & uVar19;
      iVar12 = iVar14 + -0x28 + uVar11 * -0x28;
      if ((iVar18 == *(int *)(iVar12 + 8)) &&
         (iVar12 = thunk_FUN_016dd50a(uVar15,*(undefined4 *)(iVar12 + 4),iVar18), iVar12 == 0)) {
        puVar16 = (uint *)(iVar14 + uVar11 * -0x28 + -0x18);
        uVar2 = *(undefined1 *)(param_1 + 0x78);
        local_b8 = (undefined4 *)((uint)local_b8 & 0xffffff00);
        local_1ac = puVar16;
        if (*(int *)(param_1 + 0x6c) == 1) {
          uVar17 = 2;
          local_48 = *(undefined4 ****)(param_1 + 0x70);
          local_58 = CONCAT31(local_58._1_3_,2);
          local_50 = 0;
          local_4c = 0;
          local_44 = 0;
          FUN_016dd1aa(&local_a0,(uint)&local_58 | 1,0x17);
          local_1bc = *(undefined4 **)(param_1 + 0x74);
        }
        else {
          uVar17 = 6;
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
        local_1a8[0] = uVar17;
        FUN_016dd1aa((uint)local_1a8 | 1,&local_a0,0x17);
        local_188 = 0;
        local_184 = 0;
        local_180 = local_1bc;
        local_17c = 0;
        local_ec = 4;
        local_e8 = 0;
        local_f0 = 0;
        local_114 = 0x80000000;
        local_120 = 0x80000000;
        local_12c = 0x80000000;
        local_138 = 0x80000000;
        local_148 = 0x80000000;
        local_190 = uVar17;
        local_e3 = uVar2;
        local_dc = (undefined4 *)FUN_00f382f8(local_1a8,puVar16);
        if (local_dc == (undefined4 *)0x0) {
          FUN_006eb3f4(local_1a8);
          iVar14 = 4;
          if (1 < *puVar16) {
            iVar14 = *puVar16 - 2;
          }
                    /* WARNING: Could not recover jumptable at 0x006f2e48. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_006f2e4c + *(int *)(&DAT_006f2e4c + iVar14 * 4)))();
          return;
        }
        if ((4 < DAT_018d9130) || (DAT_018d9278 == '\0')) goto LAB_006f2e04;
        if (DAT_018d9278 == '\x01') {
LAB_006f2c68:
          DataMemoryBarrier(0xb);
          pcVar13 = s_SetGloba_00414c05;
          puVar6 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar13 = DAT_018daa74, puVar6 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar13 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar14 = (**(code **)(puVar6 + 0x14))(pcVar13,DAT_018d9270);
          if (iVar14 == 0) goto LAB_006f2e04;
        }
        else if (DAT_018d9278 != '\x02') {
          cVar7 = FUN_0169ac90(&DAT_018d9270);
          if (cVar7 == '\0') goto LAB_006f2e04;
          if (cVar7 != '\x02') goto LAB_006f2c68;
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
        puVar6 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar13 = DAT_018daa74, puVar6 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar13 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_cc = &local_a0;
        local_b8 = (undefined4 *)(param_1 + 0x20);
        iVar14 = (**(code **)(puVar6 + 0x28))(pcVar13,&local_58);
        if (iVar14 != 0) {
          (**(code **)(puVar6 + 0x2c))(pcVar13,&local_58);
        }
LAB_006f2e04:
        (**(code **)*local_dc)();
        FUN_006eb3f4(local_1a8);
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

