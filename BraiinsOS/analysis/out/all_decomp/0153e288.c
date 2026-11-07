// FUN_0153e288 @ 0153e288 size=936 calls_out=8 calls_in=0
// strings: 

void FUN_0153e288(undefined4 *param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  undefined **ppuVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  undefined4 local_148;
  undefined4 local_144;
  uint local_140;
  uint local_13c;
  uint uStack_138;
  uint local_134;
  uint local_130;
  uint local_12c;
  uint uStack_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  undefined1 auStack_100 [56];
  uint local_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  uint uStack_b8;
  uint local_b4;
  uint uStack_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0;
  uint uStack_9c;
  uint uStack_98;
  uint uStack_94;
  uint local_90;
  uint uStack_8c;
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint uStack_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint local_44;
  uint local_40;
  uint uStack_3c;
  undefined4 local_38;
  uint uStack_34;
  uint uStack_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  puVar4 = param_2 + 0x38;
  FUN_0151eddc(puVar4,param_4);
  uVar5 = *param_4;
  if ((uVar5 < 0x80000001) && ((undefined1 *)param_4[3] == &DAT_80000004)) {
    if (*(char *)((int)param_2 + 0xfd) == '\0') {
      local_140 = param_4[4];
      local_13c = param_4[5];
      uStack_138 = param_4[6];
      uVar1 = param_2[0x31];
      FUN_016dd1aa(&uStack_128,param_2 + 0x10,0x60);
      local_50 = param_2[0x28];
      uStack_4c = param_2[0x29];
      uStack_48 = param_2[0x2a];
      local_44 = param_2[0x2b];
      local_40 = param_2[0x2c];
      uStack_3c = param_2[0x2d];
      local_38 = param_2[0x2e];
      uStack_34 = param_2[0x2f];
      uStack_30 = param_2[0x30];
      local_6c = param_2[0x33];
      uStack_68 = param_2[0x34];
      uStack_64 = param_2[0x35];
      local_60 = param_2[0x36];
      uStack_5c = param_2[0x37];
      local_c8 = *param_2;
      uStack_c4 = param_2[1];
      uStack_c0 = param_2[2];
      uStack_bc = param_2[3];
      uStack_b8 = param_2[4];
      local_b4 = param_2[5];
      uStack_b0 = param_2[6];
      uStack_ac = param_2[7];
      uStack_a8 = param_2[8];
      uStack_a4 = param_2[9];
      local_a0 = param_2[10];
      uStack_9c = param_2[0xb];
      uStack_98 = param_2[0xc];
      uStack_94 = param_2[0xd];
      local_90 = param_2[0xe];
      uStack_8c = param_2[0xf];
      local_2c = (undefined1)param_2[0x3f];
      local_88 = *puVar4;
      uStack_84 = param_2[0x39];
      uStack_80 = param_2[0x3a];
      local_7c = param_2[0x3b];
      local_78 = param_2[0x3c];
      local_74 = param_2[0x3d];
      uStack_70 = param_2[0x3e];
      local_2b = *(undefined1 *)((int)param_2 + 0xfe);
      local_54 = param_2[0x32];
      local_12c = 0;
      local_134 = 0;
      local_130 = 1;
      local_58 = uVar1;
      iVar2 = thunk_FUN_016d4a50(0x118);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x118);
      }
      FUN_016dd1aa(iVar2,&local_140,0x118);
      ppuVar3 = (undefined **)&DAT_018a7b34;
    }
    else {
      uVar1 = param_2[0x31];
      FUN_016dd1aa(auStack_100,param_2 + 0x10,0x60);
      local_a0 = param_2[0x28];
      uStack_9c = param_2[0x29];
      uStack_98 = param_2[0x2a];
      uStack_94 = param_2[0x2b];
      local_90 = param_2[0x2c];
      uStack_8c = param_2[0x2d];
      local_88 = param_2[0x2e];
      uStack_84 = param_2[0x2f];
      uStack_80 = param_2[0x30];
      local_74 = param_2[0x33];
      uStack_70 = param_2[0x34];
      local_6c = param_2[0x35];
      uStack_68 = param_2[0x36];
      uStack_64 = param_2[0x37];
      local_140 = *param_2;
      local_13c = param_2[1];
      uStack_138 = param_2[2];
      local_134 = param_2[3];
      local_130 = param_2[4];
      local_12c = param_2[5];
      uStack_128 = param_2[6];
      uStack_124 = param_2[7];
      uStack_120 = param_2[8];
      uStack_11c = param_2[9];
      local_118 = param_2[10];
      uStack_114 = param_2[0xb];
      uStack_110 = param_2[0xc];
      uStack_10c = param_2[0xd];
      uStack_108 = param_2[0xe];
      uStack_104 = param_2[0xf];
      local_60 = *puVar4;
      uStack_5c = param_2[0x39];
      local_58 = param_2[0x3a];
      local_54 = param_2[0x3b];
      local_50 = param_2[0x3c];
      uStack_4c = param_2[0x3d];
      uStack_48 = param_2[0x3e];
      local_44 = param_4[4];
      local_40 = param_4[5];
      uStack_3c = param_4[6];
      local_78 = param_2[0x32];
      local_38._0_2_ = CONCAT11(*(undefined1 *)((int)param_2 + 0xfe),(char)param_2[0x3f]);
      local_7c = uVar1;
      iVar2 = thunk_FUN_016d4a50(0x110);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x110);
      }
      FUN_016dd1aa(iVar2,&local_140,0x110);
      ppuVar3 = &PTR_FUN_018a7bfc;
    }
    param_1[2] = ppuVar3;
    *param_1 = 0x80000029;
    param_1[1] = iVar2;
    if ((uVar5 & 0x7fffffff) == 0) {
      thunk_FUN_016d3fb4(param_2);
      return;
    }
    thunk_FUN_016d3fb4(param_4[1]);
    thunk_FUN_016d3fb4(param_2);
    return;
  }
  puVar4 = &local_140;
  FUN_016dd1aa(puVar4,param_4,0x78);
  iVar2 = 1;
  FUN_015622b4(&local_160,puVar4,&DAT_0040c784,1,&DAT_0040c0b1,1);
  if (0x80000000 < local_140) {
    iVar2 = local_140 + 0x7fffffff;
  }
  switch(iVar2) {
  case 0:
  case 3:
    goto switchD_0153e440_caseD_0;
  case 1:
    FUN_015396bc(&local_134);
    if ((local_140 == 0x80000000) || (local_140 == 0)) goto switchD_0153e440_caseD_0;
    goto LAB_0153e4ac;
  case 2:
    break;
  default:
  }
  if ((local_13c != -0x80000000) && (puVar4 = (uint *)((uint)&local_140 | 4), local_13c != 0)) {
LAB_0153e4ac:
    thunk_FUN_016d3fb4(puVar4[1]);
  }
switchD_0153e440_caseD_0:
  *param_1 = local_160;
  param_1[1] = local_15c;
  param_1[2] = uStack_158;
  param_1[3] = uStack_154;
  param_1[4] = uStack_150;
  param_1[5] = uStack_14c;
  param_1[6] = local_148;
  param_1[7] = local_144;
  FUN_0153e96c(param_2);
  thunk_FUN_016d3fb4(param_2);
  return;
}

