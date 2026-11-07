// FUN_016d9ee0 @ 016d9ee0 size=940 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016d9ee0(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int local_124;
  undefined4 local_120;
  undefined4 uStack_11c;
  undefined4 uStack_118;
  undefined4 local_110;
  undefined4 local_10c;
  int local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  uint local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  
  local_124 = FUN_016d4a28(param_2);
  if (local_124 != 0x5b) {
    uVar4 = FUN_016f4e14(&local_124,&DAT_0056d0b8,&DAT_01d09fc8);
    FUN_016d8104(&local_110);
                    /* WARNING: Subroutine does not return */
    FUN_01be040c(uVar4);
  }
  iVar1 = *param_2;
  puVar6 = (undefined4 *)(iVar1 + 0x50);
  local_120 = *puVar6;
  uStack_11c = *(undefined4 *)(iVar1 + 0x54);
  uStack_118 = *(undefined4 *)(iVar1 + 0x58);
  iVar2 = FUN_016d819c(param_2);
  if ((iVar2 == 0) ||
     ((iVar2 = FUN_016d4a28(param_2), iVar2 == 0x5e && (iVar3 = FUN_016d819c(param_2), iVar3 == 0)))
     ) {
    local_104 = *puVar6;
    local_100 = *(undefined4 *)(iVar1 + 0x54);
    uStack_fc = *(undefined4 *)(iVar1 + 0x58);
    local_110 = local_120;
    local_10c = uStack_11c;
    local_108 = uStack_118;
    local_e8 = 4;
    FUN_016d4540(param_1 + 1,param_2[1],param_2[2],&local_110,&local_e8);
    *param_1 = 0x110009;
  }
  else {
    local_f8 = *puVar6;
    uStack_f4 = *(undefined4 *)(iVar1 + 0x54);
    uStack_f0 = *(undefined4 *)(iVar1 + 0x58);
    local_104 = *puVar6;
    local_100 = *(undefined4 *)(iVar1 + 0x54);
    uStack_fc = *(undefined4 *)(iVar1 + 0x58);
    local_10c = 4;
    local_108 = 0;
    local_110 = 0;
    do {
      iVar3 = FUN_016d4a28(param_2);
      if (iVar3 != 0x2d) {
        if ((local_108 == 0) && (iVar3 = FUN_016d4a28(param_2), iVar3 == 0x5d)) {
          FUN_016d4f3c(&local_78,param_2);
          local_e0 = local_78;
          uStack_dc = uStack_74;
          uStack_d8 = uStack_70;
          local_d4 = uStack_6c;
          uStack_d0 = uStack_68;
          uStack_cc = uStack_64;
          local_c8 = local_c8 & 0xffffff00;
          local_e4 = 0x5d;
          local_e8 = 0x110001;
          FUN_016eb8e0(&local_110,&local_e8);
          iVar3 = FUN_016d819c(param_2);
          if (iVar3 == 0) {
            local_84 = *puVar6;
            uStack_80 = *(undefined4 *)(iVar1 + 0x54);
            uStack_7c = *(undefined4 *)(iVar1 + 0x58);
            local_90 = local_120;
            uStack_8c = uStack_11c;
            uStack_88 = uStack_118;
            local_78 = 4;
            FUN_016d4540(&local_e8,param_2[1],param_2[2],&local_90,&local_78);
            goto LAB_016da05c;
          }
        }
        uVar4 = *puVar6;
        uVar5 = *(undefined4 *)(iVar1 + 0x54);
        uVar7 = *(undefined4 *)(iVar1 + 0x58);
        param_1[0x1d] = local_110;
        param_1[0x1e] = local_10c;
        param_1[0x1f] = local_108;
        param_1[0x20] = local_104;
        param_1[0x21] = local_100;
        param_1[0x22] = uStack_fc;
        param_1[0x23] = local_f8;
        param_1[0x24] = uStack_f4;
        param_1[0x25] = uStack_f0;
        *param_1 = 0x110007;
        param_1[1] = 0;
        param_1[2] = 4;
        param_1[3] = 0;
        param_1[4] = local_104;
        param_1[5] = local_100;
        param_1[6] = uStack_fc;
        param_1[7] = local_104;
        param_1[8] = local_100;
        param_1[9] = uStack_fc;
        param_1[0x16] = local_120;
        param_1[0x17] = uStack_11c;
        param_1[0x18] = uStack_118;
        param_1[0x19] = uVar4;
        param_1[0x1a] = uVar5;
        param_1[0x1b] = uVar7;
        *(bool *)(param_1 + 0x1c) = iVar2 == 0x5e;
        return;
      }
      FUN_016d4f3c(&local_78,param_2);
      local_e0 = local_78;
      uStack_dc = uStack_74;
      uStack_d8 = uStack_70;
      local_d4 = uStack_6c;
      uStack_d0 = uStack_68;
      uStack_cc = uStack_64;
      local_c8 = local_c8 & 0xffffff00;
      local_e4 = 0x2d;
      local_e8 = 0x110001;
      FUN_016eb8e0(&local_110,&local_e8);
      iVar3 = FUN_016d819c(param_2);
    } while (iVar3 != 0);
    local_90 = local_120;
    uStack_8c = uStack_11c;
    uStack_88 = uStack_118;
    local_84 = local_120;
    uStack_80 = uStack_11c;
    uStack_7c = uStack_118;
    local_78 = 4;
    FUN_016d4540(&local_e8,param_2[1],param_2[2],&local_90,&local_78);
LAB_016da05c:
    param_1[1] = local_e8;
    param_1[2] = local_e4;
    param_1[3] = local_e0;
    param_1[4] = uStack_dc;
    param_1[5] = uStack_d8;
    param_1[6] = local_d4;
    param_1[7] = uStack_d0;
    param_1[8] = uStack_cc;
    param_1[9] = local_c8;
    param_1[10] = uStack_c4;
    param_1[0xb] = local_c0;
    param_1[0xc] = uStack_bc;
    param_1[0xd] = uStack_b8;
    param_1[0xe] = uStack_b4;
    param_1[0xf] = uStack_b0;
    param_1[0x10] = uStack_ac;
    *param_1 = 0x110009;
    FUN_016d8104(&local_110);
  }
  return;
}

