// FUN_016d65a8 @ 016d65a8 size=1432 calls_out=17 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016d65a8(int *param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  undefined *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int local_18c;
  int local_188;
  int local_184;
  int local_180;
  int local_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int local_160;
  int iStack_15c;
  int iStack_158;
  int local_154;
  int local_150;
  int local_14c;
  undefined4 uStack_148;
  int iStack_144;
  int iStack_140;
  undefined1 auStack_13c [76];
  int local_f0;
  int local_ec;
  int iStack_e8;
  int local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int local_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  undefined4 local_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int local_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  local_18c = FUN_016d4a28(param_2);
  if (local_18c != 0x5b) {
    uVar4 = FUN_016f4e14(&local_18c,&DAT_0056d0b8,&DAT_01d09e98);
    FUN_016d8104(&local_188);
                    /* WARNING: Subroutine does not return */
    FUN_01be040c(uVar4);
  }
  iVar8 = *param_2;
  piVar7 = (int *)(iVar8 + 0x50);
  iStack_170 = *piVar7;
  iStack_16c = *(int *)(iVar8 + 0x54);
  iStack_168 = *(int *)(iVar8 + 0x58);
  local_17c = *piVar7;
  local_178 = *(int *)(iVar8 + 0x54);
  iStack_174 = *(int *)(iVar8 + 0x58);
  local_180 = 0;
  local_188 = 0;
  local_184 = 4;
  iVar6 = param_2[2];
  piVar1 = (int *)((uint)&local_f0 | 4);
  local_18c = 0x5b;
  local_f0 = local_17c;
  local_ec = local_178;
  iStack_e8 = iStack_174;
  local_e4 = iStack_170;
  local_e0 = iStack_16c;
  local_dc = iStack_168;
LAB_016d6670:
  do {
    FUN_016d4684(param_2);
    if (*piVar7 == iVar6) {
      FUN_016d8808(&local_f0,param_2);
      param_1[1] = local_f0;
      param_1[2] = local_ec;
      param_1[3] = iStack_e8;
      param_1[4] = local_e4;
      param_1[5] = local_e0;
      param_1[6] = local_dc;
      param_1[7] = local_d8;
      param_1[8] = iStack_d4;
      param_1[9] = iStack_d0;
      param_1[10] = iStack_cc;
      param_1[0xb] = local_c8;
      param_1[0xc] = local_c4;
      param_1[0xd] = iStack_c0;
      param_1[0xe] = iStack_bc;
      param_1[0xf] = iStack_b8;
      param_1[0x10] = iStack_b4;
      *param_1 = 0x110009;
LAB_016d6a00:
      FUN_016d8104(&local_188);
      return;
    }
    iVar2 = FUN_016d4a28(param_2);
    if (0x5a < iVar2) {
      if (iVar2 == 0x5b) {
        if (0x7ffffffe < *(uint *)(iVar8 + 0x20)) {
                    /* WARNING: Subroutine does not return */
          FUN_0130701c(&DAT_01d09e58);
        }
        if (*(int *)(iVar8 + 0x2c) != 0) {
          FUN_016d9340(&local_160,param_2);
          if (uStack_148._1_1_ != '\x02') {
            local_ec = local_160;
            iStack_e8 = iStack_15c;
            local_e4 = iStack_158;
            local_e0 = local_154;
            local_dc = local_150;
            local_d8 = local_14c;
            iStack_d4 = uStack_148;
            local_f0 = 0x110003;
            FUN_016eb8e0(&local_188,&local_f0);
            goto LAB_016d6670;
          }
        }
        FUN_016d9764(&local_f0,param_2,&local_188);
        local_188 = *piVar1;
        local_184 = piVar1[1];
        local_180 = piVar1[2];
        local_17c = piVar1[3];
        local_178 = piVar1[4];
        iStack_174 = piVar1[5];
        iStack_170 = piVar1[6];
        iStack_16c = piVar1[7];
        iStack_168 = piVar1[8];
        if (local_f0 != 0x22) {
          param_1[0xb] = local_c8;
          param_1[0xc] = local_c4;
          param_1[0xd] = iStack_c0;
          param_1[0xe] = iStack_bc;
          param_1[0xf] = iStack_b8;
          param_1[0x10] = iStack_b4;
          param_1[2] = local_188;
          param_1[3] = local_184;
          param_1[4] = local_180;
          param_1[5] = local_17c;
          param_1[6] = local_178;
          param_1[7] = iStack_174;
          param_1[8] = iStack_170;
          param_1[9] = iStack_16c;
          param_1[10] = iStack_168;
          *param_1 = 0x110009;
          param_1[1] = local_f0;
          return;
        }
        local_160 = local_188;
        iStack_15c = local_184;
        iStack_158 = local_180;
        local_154 = local_17c;
        local_150 = local_178;
        local_14c = iStack_174;
        uStack_148 = iStack_170;
        iStack_144 = iStack_16c;
        iStack_140 = iStack_168;
        goto LAB_016d6670;
      }
      if (iVar2 == 0x5d) {
        FUN_016d8ed4(&local_f0,param_2,&local_188);
        iVar2 = local_f0;
        if (local_f0 == 0x11000a) {
          param_1[1] = local_ec;
          param_1[2] = iStack_e8;
          param_1[3] = local_e4;
          param_1[4] = local_e0;
          param_1[5] = local_dc;
          param_1[6] = local_d8;
          param_1[7] = iStack_d4;
          param_1[8] = iStack_d0;
          param_1[9] = iStack_cc;
          param_1[10] = local_c8;
          param_1[0xb] = local_c4;
          param_1[0xc] = iStack_c0;
          param_1[0xd] = iStack_bc;
          param_1[0xe] = iStack_b8;
          param_1[0xf] = iStack_b4;
          param_1[0x10] = iStack_b0;
          iVar2 = 0x110009;
        }
        else {
          FUN_01bed4e2(&local_160,&local_ec,0x70);
          if (iVar2 == 0x110009) {
            local_188 = local_160;
            local_184 = iStack_15c;
            local_180 = iStack_158;
            local_17c = local_154;
            local_178 = local_150;
            iStack_174 = local_14c;
            iStack_170 = uStack_148;
            iStack_16c = iStack_144;
            iStack_168 = iStack_140;
            goto LAB_016d6670;
          }
          param_1[1] = local_160;
          param_1[2] = iStack_15c;
          param_1[3] = iStack_158;
          param_1[4] = local_154;
          param_1[5] = local_150;
          param_1[6] = local_14c;
          param_1[7] = uStack_148;
          param_1[8] = iStack_144;
          param_1[9] = iStack_140;
          FUN_01bed4e2(param_1 + 10,auStack_13c,0x4c);
        }
        *param_1 = iVar2;
        return;
      }
      if ((iVar2 != 0x7e) || (iVar2 = FUN_016d923c(param_2), iVar2 != 0x7e)) goto LAB_016d68c0;
      iVar2 = FUN_016d99b0(param_2,&DAT_004cfd61,2);
      if (iVar2 == 0) {
        puVar5 = &DAT_01d09e88;
        puVar3 = &DAT_004cfd63;
        goto LAB_016d6b0c;
      }
      local_f0 = local_188;
      local_ec = local_184;
      iStack_e8 = local_180;
      local_e4 = local_17c;
      local_e0 = local_178;
      local_dc = iStack_174;
      local_d8 = iStack_170;
      iStack_d4 = iStack_16c;
      iStack_d0 = iStack_168;
      uVar4 = 2;
LAB_016d68b0:
      local_188 = local_f0;
      local_184 = local_ec;
      local_180 = iStack_e8;
      local_17c = local_e4;
      local_178 = local_e0;
      iStack_174 = local_dc;
      iStack_170 = local_d8;
      iStack_16c = iStack_d4;
      iStack_168 = iStack_d0;
      FUN_016d9a84(&local_188,iVar8,uVar4,&local_f0);
      goto LAB_016d6670;
    }
    if (iVar2 == 0x26) {
      iVar2 = FUN_016d923c(param_2);
      if (iVar2 != 0x26) goto LAB_016d68c0;
      iVar2 = FUN_016d99b0(param_2,&DAT_004cfd15,2);
      if (iVar2 == 0) {
        puVar3 = &DAT_004cfd17;
        puVar5 = &DAT_01d09e68;
        goto LAB_016d6b0c;
      }
      local_f0 = local_188;
      local_ec = local_184;
      iStack_e8 = local_180;
      local_e4 = local_17c;
      local_e0 = local_178;
      local_dc = iStack_174;
      local_d8 = iStack_170;
      iStack_d4 = iStack_16c;
      iStack_d0 = iStack_168;
      uVar4 = 0;
      goto LAB_016d68b0;
    }
    if ((iVar2 == 0x2d) && (iVar2 = FUN_016d923c(param_2), iVar2 == 0x2d)) {
      iVar2 = FUN_016d99b0(param_2,&DAT_004cfd3b,2);
      if (iVar2 == 0) {
        puVar3 = &DAT_004cfd3d;
        puVar5 = &DAT_01d09e78;
LAB_016d6b0c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(puVar3,0x24,puVar5);
      }
      local_f0 = local_188;
      local_ec = local_184;
      iStack_e8 = local_180;
      local_e4 = local_17c;
      local_e0 = local_178;
      local_dc = iStack_174;
      local_d8 = iStack_170;
      iStack_d4 = iStack_16c;
      iStack_d0 = iStack_168;
      uVar4 = 1;
      goto LAB_016d68b0;
    }
LAB_016d68c0:
    FUN_016d88f0(&local_f0,param_2);
    local_160 = local_ec;
    iStack_15c = iStack_e8;
    iStack_158 = local_e4;
    local_154 = local_e0;
    local_150 = local_dc;
    local_14c = local_d8;
    uStack_148 = iStack_d4;
    iStack_144 = iStack_d0;
    iStack_140 = iStack_cc;
    if (local_f0 == 0x110008) {
      param_1[1] = local_ec;
      param_1[2] = iStack_e8;
      param_1[3] = local_e4;
      param_1[4] = local_e0;
      param_1[5] = local_dc;
      param_1[6] = local_d8;
      param_1[7] = iStack_d4;
      param_1[8] = iStack_d0;
      param_1[9] = iStack_cc;
      param_1[10] = local_c8;
      param_1[0xb] = local_c4;
      param_1[0xc] = iStack_c0;
      param_1[0xd] = iStack_bc;
      param_1[0xe] = iStack_b8;
      param_1[0xf] = iStack_b4;
      param_1[0x10] = iStack_b0;
      *param_1 = 0x110009;
      goto LAB_016d6a00;
    }
    local_38 = local_ac;
    uStack_34 = uStack_a8;
    uStack_30 = uStack_a4;
    uStack_2c = uStack_a0;
    uStack_28 = uStack_9c;
    local_7c = local_f0;
    local_78 = local_ec;
    iStack_74 = iStack_e8;
    iStack_70 = local_e4;
    iStack_6c = local_e0;
    iStack_68 = local_dc;
    local_64 = local_d8;
    iStack_60 = iStack_d4;
    iStack_5c = iStack_d0;
    iStack_58 = iStack_cc;
    iStack_54 = local_c8;
    local_50 = local_c4;
    iStack_4c = iStack_c0;
    iStack_48 = iStack_bc;
    iStack_44 = iStack_b8;
    iStack_40 = iStack_b4;
    iStack_3c = iStack_b0;
    FUN_016eb8e0(&local_188,&local_7c);
  } while( true );
}

