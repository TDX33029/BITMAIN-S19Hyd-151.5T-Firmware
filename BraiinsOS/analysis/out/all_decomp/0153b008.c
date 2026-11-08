// FUN_0153b008 @ 0153b008 size=1416 calls_out=10 calls_in=0
// strings: 

void FUN_0153b008(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,uint *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  undefined4 uVar5;
  uint local_220;
  uint local_21c;
  undefined1 *local_214 [5];
  undefined4 local_200;
  undefined4 local_1fc;
  undefined4 local_1f4;
  undefined4 local_1f0;
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 local_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  undefined4 uStack_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined4 uStack_174;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 local_90;
  uint local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined1 local_30;
  undefined1 local_2f;
  
  if ((0x80000000 < *param_4) || ((undefined1 *)param_4[3] != &DAT_80000008)) {
    if ((param_2[0x35] & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(param_2[0x36]);
    }
    param_2[0x35] = 0x80000000;
    uVar5 = param_2[0x41];
    FUN_016dd1aa(&uStack_168,param_2 + 6,0x60);
    local_54 = param_2[0x43];
    local_50 = param_2[0x44];
    uStack_4c = param_2[0x45];
    uStack_48 = param_2[0x46];
    local_44 = param_2[0x47];
    uStack_40 = param_2[0x48];
    uStack_3c = param_2[0x49];
    uStack_38 = param_2[0x4a];
    uStack_34 = param_2[0x4b];
    local_70 = param_2[0x3c];
    uStack_6c = param_2[0x3d];
    uStack_68 = param_2[0x3e];
    local_64 = param_2[0x3f];
    uStack_60 = param_2[0x40];
    local_e8 = param_2[0x1e];
    uStack_e4 = param_2[0x1f];
    local_e0 = param_2[0x20];
    uStack_dc = param_2[0x21];
    uStack_d8 = param_2[0x22];
    local_d4 = param_2[0x23];
    uStack_d0 = param_2[0x24];
    uStack_cc = param_2[0x25];
    local_c8 = param_2[0x26];
    uStack_c4 = param_2[0x27];
    local_c0 = param_2[0x28];
    local_bc = param_2[0x29];
    uStack_b8 = param_2[0x2a];
    uStack_b4 = param_2[0x2b];
    uStack_b0 = param_2[0x2c];
    local_ac = param_2[0x2d];
    local_30 = *(undefined1 *)(param_2 + 0x4c);
    local_8c = param_2[0x35];
    uStack_88 = param_2[0x36];
    uStack_84 = param_2[0x37];
    local_80 = param_2[0x38];
    local_7c = param_2[0x39];
    local_78 = param_2[0x3a];
    local_74 = param_2[0x3b];
    local_58 = param_2[0x42];
    local_180 = *param_2;
    local_17c = param_2[1];
    local_178 = param_2[2];
    uStack_174 = param_2[3];
    uStack_170 = param_2[4];
    uStack_16c = param_2[5];
    local_a8 = param_2[0x2e];
    uStack_a4 = param_2[0x2f];
    local_a0 = param_2[0x30];
    local_9c = param_2[0x31];
    uStack_98 = param_2[0x32];
    uStack_94 = param_2[0x33];
    local_90 = param_2[0x34];
    local_2f = *(undefined1 *)((int)param_2 + 0x131);
    local_108 = 0x80000002;
    local_5c = uVar5;
    iVar2 = thunk_FUN_016d4a50(0x158);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x158);
    }
    FUN_016dd1aa(iVar2,&local_180,0x158);
    FUN_016dd1aa(&local_180,param_4,0x7c);
    FUN_0153bd90(param_1,iVar2,param_3,&local_180);
    thunk_FUN_016d3fb4(param_2);
    return;
  }
  uVar5 = param_2[0x41];
  FUN_016dd1aa(&uStack_168,param_2 + 6,0x60);
  local_74 = param_2[0x43];
  local_70 = param_2[0x44];
  uStack_6c = param_2[0x45];
  uStack_68 = param_2[0x46];
  local_64 = param_2[0x47];
  uStack_60 = param_2[0x48];
  local_5c = param_2[0x49];
  local_58 = param_2[0x4a];
  local_54 = param_2[0x4b];
  local_90 = param_2[0x3c];
  local_8c = param_2[0x3d];
  uStack_88 = param_2[0x3e];
  uStack_84 = param_2[0x3f];
  local_80 = param_2[0x40];
  local_108 = param_2[0x1e];
  uStack_104 = param_2[0x1f];
  uStack_100 = param_2[0x20];
  uStack_fc = param_2[0x21];
  local_f8 = param_2[0x22];
  local_f4 = param_2[0x23];
  uStack_f0 = param_2[0x24];
  uStack_ec = param_2[0x25];
  local_e8 = param_2[0x26];
  uStack_e4 = param_2[0x27];
  local_e0 = param_2[0x28];
  uStack_dc = param_2[0x29];
  uStack_d8 = param_2[0x2a];
  local_d4 = param_2[0x2b];
  uStack_d0 = param_2[0x2c];
  uStack_cc = param_2[0x2d];
  local_ac = param_2[0x35];
  local_a8 = param_2[0x36];
  uStack_a4 = param_2[0x37];
  local_a0 = param_2[0x38];
  local_9c = param_2[0x39];
  uStack_98 = param_2[0x3a];
  uStack_94 = param_2[0x3b];
  local_78 = param_2[0x42];
  local_180 = *param_2;
  local_17c = param_2[1];
  local_178 = param_2[2];
  uStack_174 = param_2[3];
  uStack_170 = param_2[4];
  uStack_16c = param_2[5];
  local_c8 = param_2[0x2e];
  uStack_c4 = param_2[0x2f];
  local_c0 = param_2[0x30];
  local_bc = param_2[0x31];
  uStack_b8 = param_2[0x32];
  uStack_b4 = param_2[0x33];
  uStack_b0 = param_2[0x34];
  local_50 = CONCAT31(CONCAT21(local_50._2_2_,*(undefined1 *)((int)param_2 + 0x131)),
                      *(undefined1 *)(param_2 + 0x4c));
  local_7c = uVar5;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x138);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x138);
  }
  FUN_016dd1aa(puVar1,&local_180,0x138);
  puVar4 = &local_220;
  FUN_016dd1aa(puVar4,param_4,0x7c);
  if ((local_220 < 0x80000001) && (local_214[0] == &DAT_80000008)) {
    FUN_0151eddc(puVar1 + 0x35,param_4);
    iVar2 = puVar1[0x41];
    FUN_0154a8c4(&local_1a0,
                 *(int *)(iVar2 + 0x84) + (*(int *)(*(int *)(iVar2 + 0x88) + 8) - 1U & 0xfffffff8) +
                 8,*(undefined4 *)(*(int *)(iVar2 + 0x88) + 0x10),local_1f4,local_1f0,local_200,
                 local_1fc,&DAT_0040bfc4,0);
    FUN_016dd1aa(&uStack_168,puVar1 + 6,0x60);
    local_54 = puVar1[0x43];
    local_50 = puVar1[0x44];
    uStack_4c = puVar1[0x45];
    uStack_48 = puVar1[0x46];
    local_44 = puVar1[0x47];
    uStack_40 = puVar1[0x48];
    uStack_3c = puVar1[0x49];
    uStack_38 = puVar1[0x4a];
    uStack_34 = puVar1[0x4b];
    local_70 = puVar1[0x3c];
    uStack_6c = puVar1[0x3d];
    uStack_68 = puVar1[0x3e];
    local_64 = puVar1[0x3f];
    uStack_60 = puVar1[0x40];
    local_e8 = puVar1[0x1e];
    uStack_e4 = puVar1[0x1f];
    local_e0 = puVar1[0x20];
    uStack_dc = puVar1[0x21];
    uStack_d8 = puVar1[0x22];
    local_d4 = puVar1[0x23];
    uStack_d0 = puVar1[0x24];
    uStack_cc = puVar1[0x25];
    local_c8 = puVar1[0x26];
    uStack_c4 = puVar1[0x27];
    local_c0 = puVar1[0x28];
    local_bc = puVar1[0x29];
    uStack_b8 = puVar1[0x2a];
    uStack_b4 = puVar1[0x2b];
    uStack_b0 = puVar1[0x2c];
    local_ac = puVar1[0x2d];
    local_30 = *(undefined1 *)(puVar1 + 0x4c);
    local_8c = puVar1[0x35];
    uStack_88 = puVar1[0x36];
    uStack_84 = puVar1[0x37];
    local_80 = puVar1[0x38];
    local_7c = puVar1[0x39];
    local_78 = puVar1[0x3a];
    local_74 = puVar1[0x3b];
    local_58 = puVar1[0x42];
    local_180 = *puVar1;
    local_17c = puVar1[1];
    local_178 = puVar1[2];
    uStack_174 = puVar1[3];
    uStack_170 = puVar1[4];
    uStack_16c = puVar1[5];
    local_a8 = puVar1[0x2e];
    uStack_a4 = puVar1[0x2f];
    local_a0 = puVar1[0x30];
    local_9c = puVar1[0x31];
    uStack_98 = puVar1[0x32];
    uStack_94 = puVar1[0x33];
    local_90 = puVar1[0x34];
    local_108 = local_1a0;
    uStack_104 = uStack_19c;
    uStack_100 = uStack_198;
    uStack_fc = uStack_194;
    local_f8 = local_190;
    local_f4 = uStack_18c;
    uStack_f0 = uStack_188;
    uStack_ec = uStack_184;
    local_2f = *(undefined1 *)((int)puVar1 + 0x131);
    local_5c = iVar2;
    iVar2 = thunk_FUN_016d4a50(0x158);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x158);
    }
    FUN_016dd1aa(iVar2,&local_180,0x158);
    *param_1 = 0x80000029;
    param_1[1] = iVar2;
    param_1[2] = &DAT_018a7bac;
    uVar3 = 1;
    if (0x80000000 < local_220) {
      uVar3 = local_220 + 0x7fffffff;
    }
    if (uVar3 < 4) {
      puVar4 = &local_220;
      switch(uVar3) {
      default:
        goto switchD_0153b2e8_caseD_0;
      case 1:
        FUN_015396bc(local_214);
        local_21c = local_220;
        if (local_220 == 0x80000000) goto switchD_0153b2e8_caseD_0;
        break;
      case 2:
        if (local_21c == 0x80000000) goto switchD_0153b2e8_caseD_0;
        puVar4 = (uint *)((uint)puVar4 | 4);
      }
    }
    else {
      if (local_21c == 0x80000000) goto switchD_0153b2e8_caseD_0;
      puVar4 = (uint *)((uint)&local_220 | 4);
    }
    if (local_21c != 0) {
      thunk_FUN_016d3fb4(puVar4[1]);
    }
    goto switchD_0153b2e8_caseD_0;
  }
  iVar2 = 1;
  FUN_015622b4(&local_180,param_4,&DAT_0040c784,1,&DAT_0040c0b7,1);
  param_1[2] = local_178;
  param_1[3] = uStack_174;
  param_1[4] = uStack_170;
  param_1[5] = uStack_16c;
  param_1[6] = uStack_168;
  param_1[7] = uStack_164;
  *param_1 = local_180;
  param_1[1] = local_17c;
  if (0x80000000 < local_220) {
    iVar2 = local_220 + 0x7fffffff;
  }
  switch(iVar2) {
  case 0:
  case 3:
    break;
  case 1:
    FUN_015396bc(local_214);
    local_21c = local_220;
    if (local_220 != 0x80000000) {
LAB_0153b520:
      if (local_21c != 0) {
        thunk_FUN_016d3fb4(puVar4[1]);
      }
    }
    break;
  case 2:
    if (local_21c != 0x80000000) {
      puVar4 = (uint *)((uint)puVar4 | 4);
      goto LAB_0153b520;
    }
    break;
  default:
    if (local_21c != 0x80000000) {
      puVar4 = (uint *)((uint)&local_220 | 4);
      goto LAB_0153b520;
    }
  }
  FUN_0153b9ac(puVar1);
switchD_0153b2e8_caseD_0:
  thunk_FUN_016d3fb4(puVar1);
  thunk_FUN_016d3fb4(param_2);
  return;
}

