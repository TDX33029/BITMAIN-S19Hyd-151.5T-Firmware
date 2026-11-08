// FUN_0153eaa8 @ 0153eaa8 size=1876 calls_out=12 calls_in=0
// strings: 

void FUN_0153eaa8(uint *param_1,uint *param_2,undefined4 param_3,uint *param_4)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int *piVar5;
  code *pcVar6;
  undefined4 *puVar7;
  uint *puVar8;
  int iVar9;
  uint local_224;
  uint local_21c;
  uint local_210;
  uint local_20c;
  uint uStack_208;
  undefined1 *local_204;
  uint local_200;
  uint local_1fc;
  uint local_1f8;
  uint uStack_1f4;
  uint local_190;
  uint local_18c;
  uint local_188;
  uint local_180;
  uint uStack_17c;
  uint uStack_178;
  uint local_174;
  uint local_170;
  uint local_16c;
  uint local_168;
  uint local_160;
  uint local_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint uStack_148;
  uint local_144;
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
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  if (*param_4 < 0x80000001) {
    uVar2 = 1;
    if ((int)param_4[3] < 0) {
      uVar2 = param_4[3] ^ 0x80000000;
    }
    if (uVar2 == 7) {
      uVar2 = param_2[0x31];
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
      local_2c = (undefined1)param_2[0x42];
      local_88 = param_2[0x38];
      uStack_84 = param_2[0x39];
      uStack_80 = param_2[0x3a];
      local_7c = param_2[0x3b];
      local_78 = param_2[0x3c];
      local_74 = param_2[0x3d];
      uStack_70 = param_2[0x3e];
      local_140 = param_2[0x3f];
      local_13c = param_2[0x40];
      uStack_138 = param_2[0x41];
      local_54 = param_2[0x32];
      local_2b = *(undefined1 *)((int)param_2 + 0x109);
      local_12c = 0;
      local_134 = 0;
      local_130 = 1;
      local_58 = uVar2;
      iVar9 = thunk_FUN_016d4a50(0x118);
      if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x118);
      }
      FUN_016dd1aa(iVar9,&local_140,0x118);
      FUN_016dd1aa(&local_140,param_4,0x7c);
      FUN_0153a0c0(param_1,iVar9,param_3,&local_140);
      goto LAB_0153eddc;
    }
    if (uVar2 == 0x13) {
      uVar2 = param_2[0x31];
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
      local_60 = param_2[0x38];
      uStack_5c = param_2[0x39];
      local_58 = param_2[0x3a];
      local_54 = param_2[0x3b];
      local_50 = param_2[0x3c];
      uStack_4c = param_2[0x3d];
      uStack_48 = param_2[0x3e];
      local_44 = param_2[0x3f];
      local_40 = param_2[0x40];
      uStack_3c = param_2[0x41];
      local_78 = param_2[0x32];
      local_38 = CONCAT22(local_38._2_2_,(short)param_2[0x42]);
      local_7c = uVar2;
      puVar3 = (uint *)thunk_FUN_016d4a50(0x110);
      if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0x110);
      }
      FUN_016dd1aa(puVar3,&local_140,0x110);
      FUN_016dd1aa(&local_210,param_4,0x7c);
      FUN_0151eddc(puVar3 + 0x38,param_4);
      if ((local_210 < 0x80000001) && (local_204 == &DAT_80000013)) {
        local_188 = local_1f8;
        local_18c = local_1fc;
        local_190 = local_200;
        if (local_200 == 0x80000000) {
          uVar4 = 0;
          if ((int)local_1f8 < 0) {
LAB_0153ec28:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar4,local_1f8);
          }
          if (local_1f8 == 0) {
            local_21c = 0;
            local_224 = 1;
          }
          else {
            local_224 = thunk_FUN_016d4a50(local_1f8);
            local_21c = local_1f8;
            if (local_224 == 0) {
              uVar4 = 1;
              goto LAB_0153ec28;
            }
          }
          FUN_016dd1aa(local_224,local_1fc);
        }
        else {
          local_21c = local_200;
          local_224 = local_1fc;
        }
        uVar2 = puVar3[0x31];
        local_140 = puVar3[0x3f];
        local_13c = puVar3[0x40];
        uStack_138 = puVar3[0x41];
        FUN_016dd1aa(&uStack_128,puVar3 + 0x10,0x60);
        local_50 = puVar3[0x28];
        uStack_4c = puVar3[0x29];
        uStack_48 = puVar3[0x2a];
        local_44 = puVar3[0x2b];
        local_40 = puVar3[0x2c];
        uStack_3c = puVar3[0x2d];
        local_38 = puVar3[0x2e];
        uStack_34 = puVar3[0x2f];
        uStack_30 = puVar3[0x30];
        local_6c = puVar3[0x33];
        uStack_68 = puVar3[0x34];
        uStack_64 = puVar3[0x35];
        local_60 = puVar3[0x36];
        uStack_5c = puVar3[0x37];
        local_c8 = *puVar3;
        uStack_c4 = puVar3[1];
        uStack_c0 = puVar3[2];
        uStack_bc = puVar3[3];
        uStack_b8 = puVar3[4];
        local_b4 = puVar3[5];
        uStack_b0 = puVar3[6];
        uStack_ac = puVar3[7];
        uStack_a8 = puVar3[8];
        uStack_a4 = puVar3[9];
        local_a0 = puVar3[10];
        uStack_9c = puVar3[0xb];
        uStack_98 = puVar3[0xc];
        uStack_94 = puVar3[0xd];
        local_90 = puVar3[0xe];
        uStack_8c = puVar3[0xf];
        local_2c = (undefined1)puVar3[0x42];
        local_88 = puVar3[0x38];
        uStack_84 = puVar3[0x39];
        uStack_80 = puVar3[0x3a];
        local_7c = puVar3[0x3b];
        local_78 = puVar3[0x3c];
        local_74 = puVar3[0x3d];
        uStack_70 = puVar3[0x3e];
        local_12c = local_1f8;
        local_2b = *(undefined1 *)((int)puVar3 + 0x109);
        local_130 = local_224;
        local_54 = puVar3[0x32];
        local_134 = local_21c;
        local_58 = uVar2;
        uVar2 = thunk_FUN_016d4a50(0x118);
        if (uVar2 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x118);
        }
        FUN_016dd1aa(uVar2,&local_140,0x118);
        *param_1 = 0x80000029;
        param_1[1] = uVar2;
        param_1[2] = (uint)&DAT_018a7b34;
        if ((local_210 & 0x7fffffff) != 0) {
          thunk_FUN_016d3fb4(local_20c);
        }
        goto LAB_0153f078;
      }
      puVar8 = &local_140;
      FUN_016dd1aa(puVar8,&local_210,0x78);
      iVar9 = 1;
      FUN_015622b4(&local_160,puVar8,&DAT_0040c784,1,&DAT_0040bfaf,1);
      if (0x80000000 < local_140) {
        iVar9 = local_140 + 0x7fffffff;
      }
      local_170 = local_15c;
      local_16c = uStack_158;
      local_168 = uStack_154;
      local_180 = uStack_150;
      uStack_17c = uStack_14c;
      uStack_178 = uStack_148;
      local_174 = local_144;
      uVar2 = local_13c;
      switch(iVar9) {
      case 0:
      case 3:
        break;
      case 1:
        FUN_015396bc(&local_134);
        uVar2 = local_140;
        if (local_140 != 0x80000000) {
LAB_0153f028:
          if (uVar2 != 0) {
            thunk_FUN_016d3fb4(puVar8[1]);
          }
        }
        break;
      case 2:
        if (local_13c != 0x80000000) {
          puVar8 = (uint *)((uint)puVar8 | 4);
          goto LAB_0153f028;
        }
        break;
      default:
        if (local_13c != 0x80000000) {
          puVar8 = (uint *)((uint)&local_140 | 4);
          goto LAB_0153f028;
        }
      }
      local_190 = local_170;
      local_18c = local_16c;
      local_188 = local_168;
      *param_1 = local_160;
      param_1[1] = local_170;
      param_1[2] = local_16c;
      param_1[3] = local_168;
      param_1[4] = local_180;
      param_1[5] = uStack_17c;
      param_1[6] = uStack_178;
      param_1[7] = local_174;
      FUN_0153f758(puVar3);
      goto LAB_0153f078;
    }
  }
  puVar3 = &local_140;
  FUN_016dd1aa(puVar3,param_4,0x78);
  iVar9 = 1;
  FUN_015622b4(&local_210,param_4,&DAT_0040c784,1,&DAT_005674f4,2);
  *param_1 = local_210;
  param_1[1] = local_20c;
  param_1[2] = uStack_208;
  param_1[3] = (uint)local_204;
  param_1[4] = local_200;
  param_1[5] = local_1fc;
  param_1[6] = local_1f8;
  param_1[7] = uStack_1f4;
  if (0x80000000 < local_140) {
    iVar9 = local_140 + 0x7fffffff;
  }
  uVar2 = local_13c;
  switch(iVar9) {
  case 0:
  case 3:
    break;
  case 1:
    FUN_015396bc(&local_134);
    uVar2 = local_140;
    if (local_140 != 0x80000000) {
joined_r0x0153ee20:
      if (uVar2 != 0) {
        thunk_FUN_016d3fb4(puVar3[1]);
      }
    }
    break;
  case 2:
    if (local_13c != 0x80000000) {
      puVar3 = (uint *)((uint)puVar3 | 4);
      goto joined_r0x0153ee20;
    }
    break;
  default:
    if (local_13c != 0x80000000) {
      puVar3 = (uint *)((uint)&local_140 | 4);
      goto joined_r0x0153ee20;
    }
  }
  piVar5 = (int *)param_2[0x31];
  DataMemoryBarrier(0xb);
  do {
    iVar9 = *piVar5;
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = iVar9 + -1;
  if (iVar9 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561b24(param_2[0x31]);
  }
  if (param_2[0x19] != 0x80000000) {
    FUN_015376c0(param_2 + 0x10);
  }
  if (((char)param_2[0x33] == '\0') && ((param_2[0x34] & 0x7fffffff) != 0)) {
    thunk_FUN_016d3fb4(param_2[0x35]);
    uVar2 = param_2[0x3d];
    puVar7 = (undefined4 *)param_2[0x3e];
    pcVar6 = (code *)*puVar7;
  }
  else {
    uVar2 = param_2[0x3d];
    puVar7 = (undefined4 *)param_2[0x3e];
    pcVar6 = (code *)*puVar7;
  }
  if (pcVar6 != (code *)0x0) {
    (*pcVar6)(uVar2);
  }
  if (puVar7[1] != 0) {
    thunk_FUN_016d3fb4(uVar2);
  }
  if ((param_2[0x38] & 0x7fffffff) == 0) {
    uVar2 = param_2[0x41];
    puVar3 = (uint *)param_2[0x40];
  }
  else {
    thunk_FUN_016d3fb4(param_2[0x39]);
    uVar2 = param_2[0x41];
    puVar3 = (uint *)param_2[0x40];
  }
  if (uVar2 != 0) {
    puVar8 = puVar3 + 1;
    do {
      if ((puVar8[-1] & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(*puVar8);
      }
      puVar8 = puVar8 + 3;
      uVar2 = uVar2 - 1;
    } while (uVar2 != 0);
  }
  if (param_2[0x3f] == 0) {
LAB_0153eddc:
    thunk_FUN_016d3fb4(param_2);
    return;
  }
LAB_0153f078:
  thunk_FUN_016d3fb4(puVar3);
  thunk_FUN_016d3fb4(param_2);
  return;
}

