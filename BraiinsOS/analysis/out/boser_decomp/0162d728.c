// FUN_0162d728 @ 0162d728 size=1676 calls_out=17 calls_in=1
// strings: failed to parse TCA_ACT_KIND | failed to parse action nla | failed to parse TCA_ACT_IN_HW_COUNT | failed to parse TCA_ACT_INDEX

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0162d728(undefined4 *param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  longlong lVar10;
  undefined8 uVar11;
  int *local_14c;
  int *local_148;
  int *local_144;
  int local_140;
  undefined4 local_13c;
  int local_138;
  int iStack_134;
  int iStack_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int local_120;
  int iStack_11c;
  int iStack_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int iStack_f4;
  int local_f0;
  int iStack_ec;
  int iStack_e8;
  int iStack_e4;
  int iStack_e0;
  int iStack_dc;
  int *local_d4;
  int *local_d0;
  int *piStack_cc;
  int *local_c8;
  int *local_c4;
  int *local_c0;
  undefined8 local_b8;
  int *local_b0;
  int *local_ac;
  int **local_a8;
  int *local_a0;
  int *local_9c;
  int *local_98;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  undefined8 local_68;
  int *piStack_60;
  int *piStack_5c;
  int **ppiStack_58;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  puVar2 = (undefined4 *)((uint)&local_68 | 4);
  puVar3 = (undefined4 *)((uint)&local_c8 | 4);
  piVar4 = *(int **)(param_2 + 0x10);
LAB_0162d77c:
  FUN_0162385c(&local_14c,param_2);
  piVar9 = local_144;
  piVar5 = local_148;
  if (local_14c != (int *)&DAT_80000001) {
    piVar8 = local_14c;
    if (local_14c != (int *)&DAT_80000000) goto LAB_0162db20;
    local_140 = *(int *)(*(int *)(param_2 + 0xc) + 4);
    local_13c = *(undefined4 *)(*(int *)(param_2 + 0xc) + 8);
    uVar1 = FUN_01623bc0(local_148,local_144);
    switch(uVar1) {
    case 1:
      uVar11 = FUN_01623bf0(piVar5,piVar9);
      FUN_0160ef98(&local_68,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      if (((uint)(int *)local_68 & 1) == 0) {
        local_b8._0_4_ = (int *)local_68;
        local_b8._4_4_ = local_68._4_4_;
        local_b0 = piStack_60;
        local_ac = piStack_5c;
        if (((uint)(int *)local_68 & 1) == 0) {
          local_68._0_4_ = (int *)&DAT_80000000;
          piVar5 = piStack_60;
          piVar8 = local_68._4_4_;
          goto LAB_0162dda8;
        }
      }
      else {
        local_a0 = (int *)*puVar2;
        local_9c = (int *)puVar2[1];
        local_98 = (int *)puVar2[2];
        FUN_016403ac((uint)&local_b8 | 4,&local_a0,"failed to parse TCA_ACT_KIND",0x1c);
      }
      piVar5 = local_b0;
      piVar8 = local_b8._4_4_;
      piVar9 = local_ac;
      goto LAB_0162db20;
    case 2:
      local_b8 = FUN_01623bf0(piVar5,piVar9);
      local_d4 = (int *)&DAT_80000000;
      local_a8 = &local_d4;
      local_ac = &local_140;
      local_b0 = (int *)0x0;
      FUN_0162a8ec(&local_138,&local_b8);
      if (local_138 == 4) {
        local_c0 = (int *)0x0;
        local_c4 = (int *)&DAT_00000008;
        local_c8 = (int *)0x0;
      }
      else {
        piVar5 = (int *)thunk_FUN_01be5118(0xc0);
        if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(8,0xc0);
        }
        *piVar5 = local_138;
        piVar5[1] = iStack_134;
        piVar5[2] = iStack_130;
        piVar5[3] = iStack_12c;
        piVar5[4] = iStack_128;
        piVar5[5] = iStack_124;
        piVar5[6] = local_120;
        piVar5[7] = iStack_11c;
        piVar5[8] = iStack_118;
        piVar5[9] = iStack_114;
        piVar5[10] = iStack_110;
        piVar5[0xb] = iStack_10c;
        local_a0 = (int *)&SUB_00000004;
        local_98 = (int *)&DAT_00000001;
        iVar7 = 0x30;
        piStack_60 = local_b0;
        piStack_5c = local_ac;
        ppiStack_58 = local_a8;
        local_9c = piVar5;
        local_68 = local_b8;
        while( true ) {
          piVar9 = local_98;
          FUN_0162a8ec(&local_108,&local_68);
          if (local_108 == 4) break;
          if (piVar9 == local_a0) {
            FUN_006520b4(&local_a0,piVar9,1,8,0x30);
            piVar5 = local_9c;
          }
          piVar8 = (int *)((int)piVar5 + iVar7);
          local_98 = (int *)((int)piVar9 + 1);
          iVar7 = iVar7 + 0x30;
          *piVar8 = local_108;
          piVar8[1] = iStack_104;
          piVar8[2] = iStack_100;
          piVar8[3] = iStack_fc;
          piVar8[4] = iStack_f8;
          piVar8[5] = iStack_f4;
          piVar8[6] = local_f0;
          piVar8[7] = iStack_ec;
          piVar8[8] = iStack_e8;
          piVar8[9] = iStack_e4;
          piVar8[10] = iStack_e0;
          piVar8[0xb] = iStack_dc;
        }
        local_c8 = local_a0;
        local_c4 = local_9c;
        local_c0 = local_98;
      }
      piVar8 = local_d4;
      if (local_d4 != (int *)&DAT_80000000) {
        FUN_0162ee58(&local_c8);
        piVar5 = local_d0;
        piVar9 = piStack_cc;
        goto LAB_0162db24;
      }
      piVar5 = (int *)*puVar3;
      piStack_5c = (int *)puVar3[1];
      local_68._0_4_ = (int *)&DAT_80000001;
      piVar8 = local_c8;
      goto LAB_0162dda8;
    case 3:
      uVar11 = FUN_01623bf0(piVar5,piVar9);
      FUN_0160f300(&local_b8,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      if ((int *)local_b8 == (int *)&DAT_80000000) {
        local_a0 = (int *)local_b8;
        local_9c = local_b8._4_4_;
        local_98 = local_b0;
      }
      else {
        local_68._0_4_ = (int *)local_b8;
        local_68._4_4_ = local_b8._4_4_;
        piStack_60 = local_b0;
        FUN_016403ac(&local_a0,&local_68,"failed to parse TCA_ACT_INDEX",0x1d);
      }
      if (local_a0 != (int *)&DAT_80000000) {
LAB_0162daf8:
        piVar5 = local_9c;
        piVar8 = local_a0;
        piVar9 = local_98;
        goto LAB_0162db24;
      }
      local_68._0_4_ = (int *)0x80000002;
      break;
    case 4:
      local_b8 = FUN_01623bf0(piVar5,piVar9);
      local_d4 = (int *)&DAT_80000000;
      local_a8 = &local_d4;
      local_ac = &local_140;
      local_b0 = (int *)0x0;
      FUN_0162e33c(&local_90,&local_b8);
      if (local_90 == 8) {
        local_c0 = (int *)0x0;
        local_c4 = (int *)&DAT_00000008;
        local_c8 = (int *)0x0;
      }
      else {
        piVar5 = (int *)thunk_FUN_01be5118(0xa0);
        if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(8,0xa0);
        }
        *piVar5 = local_90;
        piVar5[1] = iStack_8c;
        piVar5[2] = iStack_88;
        piVar5[3] = iStack_84;
        piVar5[4] = iStack_80;
        piVar5[5] = local_7c;
        piVar5[6] = iStack_78;
        piVar5[7] = iStack_74;
        piVar5[8] = iStack_70;
        piVar5[9] = iStack_6c;
        local_a0 = (int *)&SUB_00000004;
        local_98 = (int *)&DAT_00000001;
        iVar7 = 0x28;
        piStack_60 = local_b0;
        piStack_5c = local_ac;
        ppiStack_58 = local_a8;
        local_9c = piVar5;
        local_68 = local_b8;
        while( true ) {
          piVar9 = local_98;
          FUN_0162e33c(&local_50,&local_68);
          if (local_50 == 8) break;
          if (piVar9 == local_a0) {
            FUN_006520b4(&local_a0,piVar9,1,8,0x28);
            piVar5 = local_9c;
          }
          piVar8 = (int *)((int)piVar5 + iVar7);
          local_98 = (int *)((int)piVar9 + 1);
          iVar7 = iVar7 + 0x28;
          *piVar8 = local_50;
          piVar8[1] = iStack_4c;
          piVar8[2] = iStack_48;
          piVar8[3] = iStack_44;
          piVar8[4] = iStack_40;
          piVar8[5] = local_3c;
          piVar8[6] = iStack_38;
          piVar8[7] = iStack_34;
          piVar8[8] = iStack_30;
          piVar8[9] = iStack_2c;
        }
        local_c8 = local_a0;
        local_c4 = local_9c;
        local_c0 = local_98;
      }
      piVar8 = local_d4;
      if (local_d4 == (int *)&DAT_80000000) {
        piVar5 = (int *)*puVar3;
        piStack_5c = (int *)puVar3[1];
        local_68._0_4_ = (int *)0x80000003;
        piVar8 = local_c8;
        goto LAB_0162dda8;
      }
      FUN_0162ee9c(&local_c8);
      piVar5 = local_d0;
      piVar9 = piStack_cc;
      goto LAB_0162db24;
    default:
      FUN_01623ae4(&local_68,piVar5,piVar9);
      if ((int *)local_68 == (int *)&DAT_80000000) {
        local_a0 = (int *)*puVar2;
        local_9c = (int *)puVar2[1];
        local_98 = (int *)puVar2[2];
        FUN_016403ac((uint)&local_b8 | 4,&local_a0,"failed to parse action nla",0x1a);
        piVar5 = local_b0;
        piVar8 = local_b8._4_4_;
        piVar9 = local_ac;
      }
      else {
        local_b8._0_4_ = (int *)local_68;
        local_b8._4_4_ = local_68._4_4_;
        local_b0 = piStack_60;
        local_ac = piStack_5c;
        piVar5 = piStack_60;
        piVar8 = local_68._4_4_;
        piVar9 = piStack_5c;
        if ((int *)local_68 != (int *)&DAT_80000000) goto code_r0x0162d844;
      }
      goto LAB_0162db20;
    case 6:
      lVar10 = FUN_01623bf0(piVar5,piVar9);
      piStack_5c = (int *)((ulonglong)lVar10 >> 0x20);
      if (lVar10 < 0) {
        uVar6 = 0;
        piStack_5c = piVar9;
LAB_0162d878:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar6,piStack_5c);
      }
      if (piStack_5c == (int *)0x0) {
        piVar5 = (int *)&DAT_00000001;
        piVar8 = (int *)0x0;
      }
      else {
        uVar6 = 1;
        piVar5 = (int *)FUN_01298504(piStack_5c,1);
        if (piVar5 == (int *)0x0) goto LAB_0162d878;
        piVar8 = piStack_5c;
      }
      FUN_01bed4e2(piVar5,(int)lVar10,piStack_5c);
      local_68._0_4_ = (int *)&DAT_80000004;
      goto LAB_0162dda8;
    case 10:
      uVar11 = FUN_01623bf0(piVar5,piVar9);
      FUN_0160f300(&local_b8,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
      if ((int *)local_b8 == (int *)&DAT_80000000) {
        local_a0 = (int *)local_b8;
        local_9c = local_b8._4_4_;
        local_98 = local_b0;
      }
      else {
        local_68._0_4_ = (int *)local_b8;
        local_68._4_4_ = local_b8._4_4_;
        piStack_60 = local_b0;
        FUN_016403ac(&local_a0,&local_68,"failed to parse TCA_ACT_IN_HW_COUNT",0x23);
      }
      if (local_a0 != (int *)&DAT_80000000) goto LAB_0162daf8;
      local_68._0_4_ = (int *)&DAT_80000005;
    }
    piVar5 = local_9c;
    piVar8 = local_9c;
    piStack_5c = piVar9;
    goto LAB_0162dda8;
  }
  goto LAB_0162db3c;
code_r0x0162d844:
  if ((int *)local_68 != (int *)0x80000007) {
    if ((int *)local_68 == (int *)0x80000006) {
LAB_0162db20:
LAB_0162db24:
      if (*piVar4 != -0x80000000) {
        FUN_0134bd64(*piVar4,piVar4[1]);
      }
      *piVar4 = (int)piVar8;
      piVar4[1] = (int)piVar5;
      piVar4[2] = (int)piVar9;
LAB_0162db3c:
      local_68._0_4_ = (int *)0x80000006;
    }
    else {
LAB_0162dda8:
      param_1[1] = piVar8;
      param_1[2] = piVar5;
      param_1[3] = piStack_5c;
    }
    *param_1 = (int *)local_68;
    return;
  }
  goto LAB_0162d77c;
}

