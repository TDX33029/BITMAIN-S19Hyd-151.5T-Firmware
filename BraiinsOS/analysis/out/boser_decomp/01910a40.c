// FUN_01910a40 @ 01910a40 size=1216 calls_out=11 calls_in=0
// strings: 

void FUN_01910a40(int *param_1,int *param_2,undefined4 param_3,uint *param_4)

{
  int *piVar1;
  int iVar2;
  undefined1 *puVar3;
  uint local_220 [3];
  undefined1 *local_214;
  undefined1 auStack_210 [112];
  int local_1a0;
  int iStack_19c;
  int iStack_198;
  int iStack_194;
  int local_190;
  int iStack_18c;
  int iStack_188;
  int iStack_184;
  int local_180;
  undefined1 *local_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int iStack_164;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  int local_f8;
  int local_f4;
  int iStack_f0;
  int iStack_ec;
  int local_e8;
  int iStack_e4;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int local_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int iStack_c4;
  int local_c0;
  int local_bc;
  int iStack_b8;
  int iStack_b4;
  int iStack_b0;
  int local_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int local_9c;
  int iStack_98;
  int iStack_94;
  int local_90;
  int local_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int iStack_6c;
  int iStack_68;
  int local_64;
  int iStack_60;
  int local_5c;
  int local_58;
  int local_54;
  undefined4 local_50;
  int iStack_4c;
  int iStack_48;
  int local_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  undefined1 local_30;
  undefined1 local_2f;
  
  if ((0x80000000 < *param_4) || ((undefined1 *)param_4[3] != &DAT_80000008)) {
    iVar2 = param_2[0x35];
    if (iVar2 != -0x80000000) {
      FUN_0134bd64(iVar2,param_2[0x36]);
    }
    param_2[0x35] = -0x80000000;
    iVar2 = param_2[0x41];
    FUN_01bed4e2(&iStack_168,param_2 + 6,0x60);
    local_54 = param_2[0x43];
    local_50 = param_2[0x44];
    iStack_4c = param_2[0x45];
    iStack_48 = param_2[0x46];
    local_44 = param_2[0x47];
    iStack_40 = param_2[0x48];
    iStack_3c = param_2[0x49];
    iStack_38 = param_2[0x4a];
    iStack_34 = param_2[0x4b];
    local_70 = param_2[0x3c];
    iStack_6c = param_2[0x3d];
    iStack_68 = param_2[0x3e];
    local_64 = param_2[0x3f];
    iStack_60 = param_2[0x40];
    local_e8 = param_2[0x1e];
    iStack_e4 = param_2[0x1f];
    local_e0 = param_2[0x20];
    iStack_dc = param_2[0x21];
    iStack_d8 = param_2[0x22];
    local_d4 = param_2[0x23];
    iStack_d0 = param_2[0x24];
    iStack_cc = param_2[0x25];
    local_c8 = param_2[0x26];
    iStack_c4 = param_2[0x27];
    local_c0 = param_2[0x28];
    local_bc = param_2[0x29];
    iStack_b8 = param_2[0x2a];
    iStack_b4 = param_2[0x2b];
    iStack_b0 = param_2[0x2c];
    local_ac = param_2[0x2d];
    local_30 = (undefined1)param_2[0x4c];
    local_8c = param_2[0x35];
    iStack_88 = param_2[0x36];
    iStack_84 = param_2[0x37];
    local_80 = param_2[0x38];
    local_7c = param_2[0x39];
    local_78 = param_2[0x3a];
    local_74 = param_2[0x3b];
    local_58 = param_2[0x42];
    local_180 = *param_2;
    local_17c = (undefined1 *)param_2[1];
    local_178 = param_2[2];
    iStack_174 = param_2[3];
    iStack_170 = param_2[4];
    iStack_16c = param_2[5];
    local_a8 = param_2[0x2e];
    iStack_a4 = param_2[0x2f];
    local_a0 = param_2[0x30];
    local_9c = param_2[0x31];
    iStack_98 = param_2[0x32];
    iStack_94 = param_2[0x33];
    local_90 = param_2[0x34];
    local_2f = *(undefined1 *)((int)param_2 + 0x131);
    local_108 = -0x7ffffffe;
    local_5c = iVar2;
    iVar2 = thunk_FUN_01be5118(0x158);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x158);
    }
    FUN_01bed4e2(iVar2,&local_180,0x158);
    FUN_01bed4e2(&local_180,param_4,0x7c);
    FUN_01911470(param_1,iVar2,param_3,&local_180);
    goto LAB_01910ecc;
  }
  iVar2 = param_2[0x41];
  FUN_01bed4e2(&iStack_168,param_2 + 6,0x60);
  local_74 = param_2[0x43];
  local_70 = param_2[0x44];
  iStack_6c = param_2[0x45];
  iStack_68 = param_2[0x46];
  local_64 = param_2[0x47];
  iStack_60 = param_2[0x48];
  local_5c = param_2[0x49];
  local_58 = param_2[0x4a];
  local_54 = param_2[0x4b];
  local_90 = param_2[0x3c];
  local_8c = param_2[0x3d];
  iStack_88 = param_2[0x3e];
  iStack_84 = param_2[0x3f];
  local_80 = param_2[0x40];
  local_108 = param_2[0x1e];
  iStack_104 = param_2[0x1f];
  iStack_100 = param_2[0x20];
  iStack_fc = param_2[0x21];
  local_f8 = param_2[0x22];
  local_f4 = param_2[0x23];
  iStack_f0 = param_2[0x24];
  iStack_ec = param_2[0x25];
  local_e8 = param_2[0x26];
  iStack_e4 = param_2[0x27];
  local_e0 = param_2[0x28];
  iStack_dc = param_2[0x29];
  iStack_d8 = param_2[0x2a];
  local_d4 = param_2[0x2b];
  iStack_d0 = param_2[0x2c];
  iStack_cc = param_2[0x2d];
  local_ac = param_2[0x35];
  local_a8 = param_2[0x36];
  iStack_a4 = param_2[0x37];
  local_a0 = param_2[0x38];
  local_9c = param_2[0x39];
  iStack_98 = param_2[0x3a];
  iStack_94 = param_2[0x3b];
  local_78 = param_2[0x42];
  local_180 = *param_2;
  local_17c = (undefined1 *)param_2[1];
  local_178 = param_2[2];
  iStack_174 = param_2[3];
  iStack_170 = param_2[4];
  iStack_16c = param_2[5];
  local_c8 = param_2[0x2e];
  iStack_c4 = param_2[0x2f];
  local_c0 = param_2[0x30];
  local_bc = param_2[0x31];
  iStack_b8 = param_2[0x32];
  iStack_b4 = param_2[0x33];
  iStack_b0 = param_2[0x34];
  local_50 = CONCAT31(CONCAT21(local_50._2_2_,*(undefined1 *)((int)param_2 + 0x131)),
                      (char)param_2[0x4c]);
  local_7c = iVar2;
  piVar1 = (int *)thunk_FUN_01be5118(0x138);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x138);
  }
  FUN_01bed4e2(piVar1,&local_180,0x138);
  FUN_01bed4e2(local_220,param_4,0x7c);
  if ((local_220[0] < 0x80000001) && (local_214 == &DAT_80000008)) {
    puVar3 = auStack_210;
LAB_01910d0c:
    FUN_0191e124(piVar1 + 0x35,local_220);
    iVar2 = piVar1[0x41];
    FUN_019237b4(&local_1a0,
                 *(int *)(iVar2 + 0x84) + (*(int *)(*(int *)(iVar2 + 0x88) + 8) - 1U & 0xfffffff8) +
                 8,*(undefined4 *)(*(int *)(iVar2 + 0x88) + 0x10),*(undefined4 *)(puVar3 + 0x1c),
                 *(undefined4 *)(puVar3 + 0x20),*(undefined4 *)(puVar3 + 0x10),
                 *(undefined4 *)(puVar3 + 0x14),&DAT_005234a0,0);
    FUN_01bed4e2(&iStack_168,piVar1 + 6,0x60);
    local_54 = piVar1[0x43];
    local_50 = piVar1[0x44];
    iStack_4c = piVar1[0x45];
    iStack_48 = piVar1[0x46];
    local_44 = piVar1[0x47];
    iStack_40 = piVar1[0x48];
    iStack_3c = piVar1[0x49];
    iStack_38 = piVar1[0x4a];
    iStack_34 = piVar1[0x4b];
    local_70 = piVar1[0x3c];
    iStack_6c = piVar1[0x3d];
    iStack_68 = piVar1[0x3e];
    local_64 = piVar1[0x3f];
    iStack_60 = piVar1[0x40];
    local_e8 = piVar1[0x1e];
    iStack_e4 = piVar1[0x1f];
    local_e0 = piVar1[0x20];
    iStack_dc = piVar1[0x21];
    iStack_d8 = piVar1[0x22];
    local_d4 = piVar1[0x23];
    iStack_d0 = piVar1[0x24];
    iStack_cc = piVar1[0x25];
    local_c8 = piVar1[0x26];
    iStack_c4 = piVar1[0x27];
    local_c0 = piVar1[0x28];
    local_bc = piVar1[0x29];
    iStack_b8 = piVar1[0x2a];
    iStack_b4 = piVar1[0x2b];
    iStack_b0 = piVar1[0x2c];
    local_ac = piVar1[0x2d];
    local_30 = (undefined1)piVar1[0x4c];
    local_8c = piVar1[0x35];
    iStack_88 = piVar1[0x36];
    iStack_84 = piVar1[0x37];
    local_80 = piVar1[0x38];
    local_7c = piVar1[0x39];
    local_78 = piVar1[0x3a];
    local_74 = piVar1[0x3b];
    local_58 = piVar1[0x42];
    local_180 = *piVar1;
    local_17c = (undefined1 *)piVar1[1];
    local_178 = piVar1[2];
    iStack_174 = piVar1[3];
    iStack_170 = piVar1[4];
    iStack_16c = piVar1[5];
    local_a8 = piVar1[0x2e];
    iStack_a4 = piVar1[0x2f];
    local_a0 = piVar1[0x30];
    local_9c = piVar1[0x31];
    iStack_98 = piVar1[0x32];
    iStack_94 = piVar1[0x33];
    local_90 = piVar1[0x34];
    local_108 = local_1a0;
    iStack_104 = iStack_19c;
    iStack_100 = iStack_198;
    iStack_fc = iStack_194;
    local_f8 = local_190;
    local_f4 = iStack_18c;
    iStack_f0 = iStack_188;
    iStack_ec = iStack_184;
    local_2f = *(undefined1 *)((int)piVar1 + 0x131);
    local_5c = iVar2;
    iVar2 = thunk_FUN_01be5118(0x158);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x158);
    }
    FUN_01bed4e2(iVar2,&local_180,0x158);
    *param_1 = -0x7fffffd7;
    param_1[1] = iVar2;
    param_1[2] = (int)&DAT_01d25214;
    FUN_0190eb24(local_220);
  }
  else {
    FUN_0191d9a0(&local_180,param_4,&DAT_0052389f,1,&DAT_0052383d,1);
    local_1a0 = local_178;
    iStack_19c = iStack_174;
    iStack_198 = iStack_170;
    iStack_194 = iStack_16c;
    local_190 = iStack_168;
    iStack_18c = iStack_164;
    puVar3 = local_17c;
    if (local_180 == -0x7fffffd7) goto LAB_01910d0c;
    param_1[2] = local_178;
    param_1[3] = iStack_174;
    param_1[4] = iStack_170;
    param_1[5] = iStack_16c;
    param_1[6] = iStack_168;
    param_1[7] = iStack_164;
    *param_1 = local_180;
    param_1[1] = (int)local_17c;
    FUN_0190eb24(local_220);
    FUN_01911268(piVar1);
  }
  thunk_FUN_01be4678(piVar1);
LAB_01910ecc:
  thunk_FUN_01be4678(param_2);
  return;
}

