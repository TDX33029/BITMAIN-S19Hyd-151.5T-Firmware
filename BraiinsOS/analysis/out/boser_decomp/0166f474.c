// FUN_0166f474 @ 0166f474 size=1004 calls_out=11 calls_in=2
// strings: 

void FUN_0166f474(int *param_1,int *param_2,char *param_3,uint param_4)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iStack_1bc;
  int iStack_1b8;
  int local_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int iStack_190;
  int local_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  int local_178;
  int local_174;
  undefined4 local_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int local_160;
  undefined4 uStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  int local_14c;
  int iStack_148;
  int iStack_144;
  int local_140;
  int local_13c;
  int iStack_138;
  int iStack_134;
  int local_130;
  int iStack_12c;
  int iStack_128;
  int iStack_124;
  int iStack_120;
  int local_118;
  int iStack_114;
  int iStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int iStack_f8;
  int local_f0;
  char *local_ec;
  uint local_e8;
  int local_e4;
  uint uStack_e0;
  int iStack_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  undefined4 local_cc;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  undefined2 local_b4;
  undefined1 local_b2;
  int local_b0;
  int local_ac;
  int *local_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  uint local_94;
  int *local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  char local_80;
  undefined2 local_7f;
  undefined1 local_7d;
  undefined3 local_78;
  undefined1 uStack_75;
  undefined3 uStack_74;
  char *local_50;
  uint local_4c;
  int local_48;
  uint uStack_44;
  int local_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  
  if (((param_4 != 0) && (*param_3 == '#')) && (uVar7 = param_2[1], param_4 <= uVar7)) {
    iVar5 = *param_2;
    iVar1 = thunk_FUN_01bed842(param_3,iVar5 + (uVar7 - param_4),param_4);
    if (iVar1 == 0) {
      uVar4 = 0;
      if (-1 < (int)uVar7) {
        uVar4 = 1;
        iVar1 = FUN_01298504(uVar7,1);
        if (iVar1 != 0) {
          FUN_01bed4e2(iVar1,iVar5,uVar7);
          iVar5 = param_2[3];
          iVar6 = param_2[4];
          param_1[4] = param_2[2];
          param_1[5] = iVar5;
          param_1[6] = iVar6;
          iVar5 = param_2[6];
          iVar6 = param_2[7];
          iVar8 = param_2[8];
          param_1[7] = param_2[5];
          param_1[8] = iVar5;
          param_1[9] = iVar6;
          param_1[10] = iVar8;
          *param_1 = -0x7ffffff6;
          param_1[1] = uVar7;
          param_1[2] = iVar1;
          param_1[3] = uVar7;
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar4,uVar7);
    }
  }
  FUN_01344b5c(&local_98,param_3,param_4,1,0);
  if (local_80 == '\x05') {
    FUN_0166f88c(&local_f0,param_3,param_4,local_98,local_94 & 0xff);
    if (local_f0 == -0x7ffffff6) goto LAB_0166f5bc;
    piVar2 = (int *)((uint)&local_f0 | 4);
    local_118 = *piVar2;
    iStack_114 = piVar2[1];
    iStack_110 = piVar2[2];
    iStack_10c = piVar2[3];
    local_108 = piVar2[4];
    iStack_104 = piVar2[5];
    iStack_100 = piVar2[6];
    iStack_fc = piVar2[7];
    iStack_f8 = piVar2[8];
    param_1[10] = local_c8;
    param_1[0xb] = iStack_c4;
    param_1[0xc] = iStack_c0;
    param_1[0xd] = iStack_bc;
    piVar3 = &local_108;
    param_1[1] = local_118;
    param_1[2] = iStack_114;
    param_1[3] = iStack_110;
    param_1[4] = iStack_10c;
    piVar2 = param_1 + 5;
LAB_0166f6a8:
    iVar1 = piVar3[1];
    iVar5 = piVar3[2];
    iVar6 = piVar3[3];
    iVar8 = piVar3[4];
    *piVar2 = *piVar3;
    piVar2[1] = iVar1;
    piVar2[2] = iVar5;
    piVar2[3] = iVar6;
    piVar2[4] = iVar8;
    *param_1 = local_f0;
  }
  else {
    iStack_a4 = iStack_8c;
    iStack_a0 = iStack_88;
    iStack_9c = iStack_84;
    local_b2 = local_7d;
    local_b4 = local_7f;
    local_e4 = local_98;
    uStack_e0 = local_94;
    iStack_dc = (int)local_90;
    local_d8 = iStack_8c;
    iStack_d4 = iStack_88;
    iStack_d0 = iStack_84;
    local_cc = CONCAT13(local_7d,CONCAT21(local_7f,local_80));
    local_ec = param_3;
    local_e8 = param_4;
LAB_0166f5bc:
    piVar2 = (int *)((uint)&local_f0 | 4);
    local_140 = *piVar2;
    local_13c = piVar2[1];
    iStack_138 = piVar2[2];
    iStack_134 = piVar2[3];
    local_130 = piVar2[4];
    iStack_12c = piVar2[5];
    iStack_128 = piVar2[6];
    iStack_124 = piVar2[7];
    iStack_120 = piVar2[8];
    local_90 = &iStack_138;
    local_a8 = param_2 + 2;
    local_b0 = *param_2;
    local_ac = param_2[1];
    local_118 = local_140;
    iStack_114 = local_13c;
    iStack_110 = iStack_138;
    iStack_10c = iStack_134;
    local_108 = local_130;
    iStack_104 = iStack_12c;
    iStack_100 = iStack_128;
    iStack_fc = iStack_124;
    iStack_f8 = iStack_120;
    local_98 = local_140;
    local_94 = local_13c;
    FUN_0134400c(&local_f0,&local_b0,&local_98);
    iVar1 = local_f0;
    if (local_f0 == -0x80000000) {
      FUN_0166f928(&local_178,param_3,param_4,param_2,(uint)local_ec & 0xff);
      if (local_178 != -0x7ffffff6) {
        local_18c = local_160;
        uStack_188 = uStack_15c;
        uStack_184 = uStack_158;
        uStack_180 = uStack_154;
        uStack_17c = uStack_150;
        param_1[0xb] = local_14c;
        param_1[0xc] = iStack_148;
        param_1[0xd] = iStack_144;
        piVar3 = &local_18c;
        param_1[1] = local_174;
        param_1[2] = (int)local_170;
        param_1[3] = iStack_16c;
        param_1[4] = iStack_168;
        param_1[5] = iStack_164;
        piVar2 = param_1 + 6;
        local_f0 = local_178;
        goto LAB_0166f6a8;
      }
    }
    else {
      FUN_01bed4e2((uint)&local_78 | 7,&local_e4,0x1c);
      local_78 = (undefined3)((uint)local_ec >> 8);
      uStack_75 = (undefined1)local_e8;
      uStack_74 = (undefined3)(local_e8 >> 8);
      local_170 = (int *)CONCAT31(local_170._1_3_,local_ec._0_1_);
      local_174 = iVar1;
      FUN_01bed4e2((int)&local_170 + 1,&local_78,0x23);
    }
    iVar5 = (int)local_170;
    iVar1 = local_174;
    local_1a0 = local_174;
    iStack_19c = (int)local_170;
    iStack_198 = iStack_16c;
    iStack_194 = iStack_168;
    iStack_190 = iStack_164;
    local_18c = local_160;
    uStack_188 = uStack_15c;
    uStack_184 = uStack_158;
    uStack_180 = uStack_154;
    uStack_17c = uStack_150;
    iStack_1bc = iStack_168;
    iStack_1b8 = iStack_164;
    local_1b4 = local_160;
    uStack_1b0 = uStack_15c;
    uStack_1ac = uStack_158;
    uStack_1a8 = uStack_154;
    uStack_1a4 = uStack_150;
    local_178 = (int)local_170;
    local_174 = iStack_16c;
    local_170 = &iStack_1bc;
    FUN_01346304(&local_f0,&local_178,&LAB_01345a54);
    if (local_f0 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_f0,&DAT_01d07228,&DAT_01d07198);
    }
    local_48 = local_e4;
    uStack_44 = uStack_e0;
    local_40 = iStack_dc;
    local_3c = local_d8;
    iStack_38 = iStack_d4;
    iStack_34 = iStack_d0;
    iStack_30 = local_cc;
    param_1[1] = local_f0;
    local_4c = local_e8;
    local_50 = local_ec;
    param_1[2] = (int)local_ec;
    param_1[3] = local_e8;
    param_1[4] = local_e4;
    param_1[5] = uStack_e0;
    param_1[6] = iStack_dc;
    param_1[7] = local_d8;
    param_1[8] = iStack_d4;
    param_1[9] = iStack_d0;
    param_1[10] = local_cc;
    *param_1 = -0x7ffffff6;
    FUN_019bb7e0(iVar1,iVar5);
  }
  return;
}

