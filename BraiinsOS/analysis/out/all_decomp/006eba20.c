// FUN_006eba20 @ 006eba20 size=1752 calls_out=17 calls_in=0
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

void FUN_006eba20(uint *param_1,undefined4 param_2,int *param_3)

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
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint *puVar16;
  uint uVar17;
  int local_1c8;
  uint *local_1b4;
  uint *local_1b0;
  undefined4 *local_1ac;
  uint **local_1a8;
  code *local_1a4;
  uint ***local_1a0;
  code *pcStack_19c;
  char local_198;
  undefined1 auStack_197 [23];
  uint local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_150;
  undefined4 local_140;
  undefined4 local_134;
  undefined4 local_128;
  undefined4 local_11c;
  undefined4 local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined1 local_eb;
  uint **local_e8;
  uint **local_e4;
  undefined4 local_e0;
  code *local_dc;
  undefined *local_d8;
  uint **local_d4;
  uint local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  uint *local_b8;
  undefined4 *local_b4;
  uint **local_b0;
  code *local_ac;
  uint ***local_a8;
  code *local_a4;
  uint *local_a0;
  undefined **local_9c;
  undefined *local_98;
  uint *local_58;
  undefined4 *local_54;
  uint **local_50;
  code *local_4c;
  uint ***local_48;
  code *local_44;
  
  if (param_3[3] == 0) {
    return;
  }
  uVar17 = param_1[0x10];
  uVar13 = param_1[0x11];
  uVar7 = FUN_006a4f44(param_3[4],param_3[5],param_3[6],param_3[7],uVar17,uVar13);
  uVar1 = uVar7 >> 0x19;
  iVar15 = *param_3;
  uVar14 = param_3[1];
  local_1c8 = 0;
  do {
    uVar7 = uVar14 & uVar7;
    uVar8 = *(uint *)(iVar15 + uVar7);
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
      iVar11 = iVar15 + -0x28 + uVar10 * -0x28;
      if ((uVar13 == *(uint *)(iVar11 + 8)) &&
         (iVar11 = thunk_FUN_016dd50a(uVar17,*(undefined4 *)(iVar11 + 4),uVar13), iVar11 == 0)) {
        puVar16 = (uint *)(iVar15 + uVar10 * -0x28 + -0x18);
        uVar1 = param_1[0x22];
        local_d0 = local_d0 & 0xffffff00;
        local_1b4 = puVar16;
        if ((*param_1 & 1) == 0) {
          cVar6 = '\x06';
          local_b8 = (uint *)CONCAT31(local_b8._1_3_,6);
        }
        else {
          FUN_0157a2e8((int)*(undefined8 *)(param_1 + 2),&local_58);
          if ((char)local_58 == '\x06') {
            local_b8 = (uint *)CONCAT31(local_b8._1_3_,6);
            FUN_011e1b28((uint)&local_58 | 4);
          }
          else {
            local_b8 = local_58;
            local_b4 = local_54;
            local_b0 = local_50;
            local_ac = local_4c;
            local_a8 = local_48;
            local_a4 = local_44;
          }
          FUN_0157a2e8((int)*(undefined8 *)(param_1 + 4),&local_58);
          cVar6 = (char)local_58;
          if ((char)local_58 == '\x06') {
            FUN_011e1b28((uint)&local_58 | 4);
          }
          else {
            FUN_016dd1aa(&local_a0,(uint)&local_58 | 1,0x17);
          }
        }
        local_100 = 1;
        local_10c = 1;
        local_fc = 0;
        local_ec = 2;
        local_104 = 0;
        local_108 = 0;
        local_110 = 0;
        local_180 = local_d0;
        uStack_17c = local_cc;
        uStack_178 = local_c8;
        uStack_174 = local_c4;
        uStack_170 = local_c0;
        uStack_16c = uStack_bc;
        local_1b0 = local_b8;
        local_1ac = local_b4;
        local_1a8 = local_b0;
        local_1a4 = local_ac;
        local_1a0 = local_a8;
        pcStack_19c = local_a4;
        local_198 = cVar6;
        FUN_016dd1aa(auStack_197,&local_a0,0x17);
        local_f4 = 4;
        local_f0 = 0;
        local_f8 = 0;
        local_11c = 0x80000000;
        local_128 = 0x80000000;
        local_134 = 0x80000000;
        local_140 = 0x80000000;
        local_150 = 0x80000000;
        local_eb = (char)uVar1;
        local_e8 = (uint **)FUN_00f382f8(&local_1b0,puVar16);
        if (local_e8 == (uint **)0x0) {
          FUN_006eb3f4(&local_1b0);
          iVar15 = 4;
          if (1 < *puVar16) {
            iVar15 = *puVar16 - 2;
          }
                    /* WARNING: Could not recover jumptable at 0x006ebf00. Too many branches */
                    /* WARNING: Treating indirect jump as call */
          (*(code *)(&DAT_006ebf04 + *(int *)(&DAT_006ebf04 + iVar15 * 4)))();
          return;
        }
        if ((4 < DAT_018d9130) || (DAT_018d9278 == '\0')) goto LAB_006ebebc;
        if (DAT_018d9278 == '\x01') {
LAB_006ebd20:
          DataMemoryBarrier(0xb);
          pcVar12 = s_SetGloba_00414c05;
          puVar5 = &DAT_018ae394;
          if ((DAT_018dd984 == 2) &&
             (pcVar12 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0)) {
            pcVar12 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
          }
          iVar15 = (**(code **)(puVar5 + 0x14))(pcVar12,DAT_018d9270);
          if (iVar15 == 0) goto LAB_006ebebc;
        }
        else if (DAT_018d9278 != '\x02') {
          cVar6 = FUN_0169ac90(&DAT_018d9270);
          if (cVar6 == '\0') goto LAB_006ebebc;
          if (cVar6 != '\x02') goto LAB_006ebd20;
        }
        local_44 = DAT_018d9270;
        if (*(int *)(DAT_018d9270 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01859844);
        }
        local_cc = *(undefined4 *)(DAT_018d9270 + 0x20);
        local_c8 = *(undefined4 *)(DAT_018d9270 + 0x24);
        local_c4 = *(undefined4 *)(DAT_018d9270 + 0x28);
        local_dc = DAT_018d9270 + 0x1c;
        local_d0 = *(uint *)local_dc;
        local_d4 = &local_b8;
        local_c0 = 0;
        local_d8 = &DAT_00579a8f;
        local_a8 = &local_e8;
        local_ac = FUN_00788a88;
        local_b0 = &local_1b4;
        local_9c = &local_d8;
        local_a0 = &local_d0;
        local_48 = &local_e4;
        local_a4 = FUN_00604528;
        local_b4 = &DAT_0157d360;
        local_98 = &DAT_018abb78;
        local_e0 = 1;
        local_54 = (undefined4 *)0x0;
        local_58 = (uint *)&DAT_00000001;
        DataMemoryBarrier(0xb);
        pcVar12 = s_SetGloba_00414c05;
        puVar5 = &DAT_018ae394;
        if ((DAT_018dd984 == 2) &&
           (pcVar12 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0)) {
          pcVar12 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
        }
        local_e4 = &local_a0;
        local_b8 = param_1 + 0x10;
        iVar15 = (**(code **)(puVar5 + 0x28))(pcVar12,&local_58);
        if (iVar15 != 0) {
          (**(code **)(puVar5 + 0x2c))(pcVar12,&local_58);
        }
LAB_006ebebc:
        (*(code *)**local_e8)();
        FUN_006eb3f4(&local_1b0);
        return;
      }
    }
    if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) {
      return;
    }
    local_1c8 = local_1c8 + 4;
    uVar7 = uVar7 + local_1c8;
  } while( true );
}

