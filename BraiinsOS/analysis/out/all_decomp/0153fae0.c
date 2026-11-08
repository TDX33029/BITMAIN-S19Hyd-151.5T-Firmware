// FUN_0153fae0 @ 0153fae0 size=1928 calls_out=14 calls_in=1
// strings: 

void FUN_0153fae0(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4,int param_5,
                 byte param_6)

{
  bool bVar1;
  undefined1 uVar2;
  short *psVar3;
  int *piVar4;
  int iVar5;
  undefined *puVar6;
  byte bVar7;
  int iVar8;
  code *pcVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  undefined4 uVar13;
  uint uVar14;
  byte *pbVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 *puVar18;
  char cVar19;
  byte *pbVar20;
  undefined1 auStack_258 [32];
  int local_238;
  undefined4 local_230;
  undefined4 local_22c;
  int local_228;
  byte abStack_224 [32];
  int local_204;
  char local_200;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined1 auStack_1b4 [52];
  undefined4 local_180;
  undefined4 uStack_17c;
  undefined4 uStack_178;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 local_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 uStack_13c;
  undefined4 local_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined1 auStack_d4 [20];
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  int local_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined1 local_2c;
  undefined1 local_2b;
  
  uVar13 = *(undefined4 *)(param_5 + 0x18);
  uVar16 = *(undefined4 *)(param_5 + 0x1c);
  uVar17 = *(undefined4 *)(param_5 + 0x20);
  param_2[8] = *(undefined4 *)(param_5 + 0x14);
  param_2[9] = uVar13;
  param_2[10] = uVar16;
  param_2[0xb] = uVar17;
  uVar13 = *(undefined4 *)(param_5 + 0x28);
  uVar16 = *(undefined4 *)(param_5 + 0x2c);
  uVar17 = *(undefined4 *)(param_5 + 0x30);
  param_2[0xc] = *(undefined4 *)(param_5 + 0x24);
  param_2[0xd] = uVar13;
  param_2[0xe] = uVar16;
  param_2[0xf] = uVar17;
  if ((param_6 & (param_2[0xe] == 0x4e574f44 && param_2[0xf] == 0x1445247)) != 0) {
    local_e8 = CONCAT22(local_e8._2_2_,4);
    local_15c = 0xd0001;
    local_160 = 0x80000001;
    FUN_01525ed4(param_3,&local_160,*(char *)(param_3 + 0x31) == '\x02');
    bVar7 = 1;
    *(undefined1 *)(param_3 + 0x255) = 1;
    *(undefined1 *)(param_1 + 1) = 0;
    *param_1 = &DAT_8000001c;
    goto LAB_0153fc94;
  }
  iVar10 = *(int *)(param_5 + 4);
  iVar11 = *(int *)(param_5 + 8);
  iVar8 = iVar11 * 0x14;
  if (iVar11 != 0) {
    psVar3 = (short *)(iVar10 + 0x10);
    iVar5 = iVar8;
    do {
      if (((1 << (uint)*(byte *)(psVar3 + -8) & 0xff7fU) == 0) &&
         ((*(byte *)(psVar3 + -8) != 0x10 || (*psVar3 == 0x15)))) {
        cVar19 = '\x01';
        *(undefined1 *)(param_2 + 0x35) = 1;
        goto LAB_0153fd4c;
      }
      psVar3 = psVar3 + 10;
      iVar5 = iVar5 + -0x14;
    } while (iVar5 != 0);
  }
  cVar19 = '\0';
  *(undefined1 *)(param_2 + 0x35) = 0;
  if (*(char *)(param_2[0x28] + 0xb7) != '\0') {
    local_1f8 = 0x80000002;
    local_e8 = CONCAT22(local_e8._2_2_,4);
    local_15c = 0x60001;
    local_160 = 0x80000001;
    FUN_01525ed4(param_3,&local_160,*(char *)(param_3 + 0x31) == '\x02');
    bVar7 = 1;
    *(undefined1 *)(param_3 + 0x255) = 1;
    *param_1 = 0x8000001b;
    param_1[1] = local_1f8;
    param_1[2] = uStack_1f4;
    param_1[3] = uStack_1f0;
    goto LAB_0153fc94;
  }
LAB_0153fd4c:
  uVar2 = 0;
  if (iVar11 == 0) {
    bVar1 = false;
  }
  else {
    psVar3 = (short *)(iVar10 + 0x10);
    bVar1 = true;
    iVar5 = iVar8;
    do {
      uVar14 = (uint)*(byte *)(psVar3 + -8);
      if ((0xc < uVar14 - 3 && 1 < uVar14) && ((uVar14 != 0x10 || (*psVar3 == 0x17))))
      goto LAB_0153fdb4;
      psVar3 = psVar3 + 10;
      iVar5 = iVar5 + -0x14;
    } while (iVar5 != 0);
    bVar1 = false;
LAB_0153fdb4:
    if (iVar11 != 0) {
      psVar3 = (short *)(iVar10 + 0x10);
      do {
        if (((1 << (uint)*(byte *)(psVar3 + -8) & 0xfeffU) == 0) &&
           ((*(byte *)(psVar3 + -8) != 0x10 || (*psVar3 == 5)))) {
          uVar2 = 1;
          break;
        }
        psVar3 = psVar3 + 10;
        iVar8 = iVar8 + -0x14;
      } while (iVar8 != 0);
    }
  }
  if (param_2[0x19] == -0x80000000) goto LAB_0153feb8;
  puVar18 = param_2 + 0x10;
  FUN_016dd1aa(auStack_258,puVar18,0x60);
  if (local_204 != *(int *)(param_5 + 0x54)) {
LAB_0153fea8:
    FUN_015376c0(auStack_258);
    cVar19 = *(char *)(param_2 + 0x35);
LAB_0153feb8:
    *(undefined1 *)(param_3 + 0x25d) = 0;
    local_9c = param_2[0x28];
    local_c0 = *(undefined4 *)(param_5 + 0x34);
    uStack_bc = *(undefined4 *)(param_5 + 0x38);
    uStack_b8 = *(undefined4 *)(param_5 + 0x3c);
    uStack_b4 = *(undefined4 *)(param_5 + 0x40);
    local_b0 = *(undefined4 *)(param_5 + 0x44);
    uStack_ac = *(undefined4 *)(param_5 + 0x48);
    uStack_a8 = *(undefined4 *)(param_5 + 0x4c);
    uStack_a4 = *(undefined4 *)(param_5 + 0x50);
    uStack_a0 = *(undefined4 *)(param_5 + 0x54);
    local_94 = param_2[0x29];
    uStack_90 = param_2[0x2a];
    uStack_8c = param_2[0x2b];
    uStack_88 = param_2[0x2c];
    uStack_84 = param_2[0x2d];
    local_160 = *param_2;
    local_15c = param_2[1];
    uStack_158 = param_2[2];
    uStack_154 = param_2[3];
    uStack_150 = param_2[4];
    local_14c = param_2[5];
    uStack_148 = param_2[6];
    uStack_144 = param_2[7];
    uStack_140 = param_2[8];
    uStack_13c = param_2[9];
    local_138 = param_2[10];
    uStack_134 = param_2[0xb];
    uStack_130 = param_2[0xc];
    uStack_12c = param_2[0xd];
    uStack_128 = param_2[0xe];
    uStack_124 = param_2[0xf];
    local_80 = param_2[0x2e];
    uStack_7c = param_2[0x2f];
    uStack_78 = param_2[0x30];
    local_74 = param_2[0x31];
    uStack_70 = param_2[0x32];
    uStack_6c = param_2[0x33];
    local_68 = param_2[0x34];
    local_fc = 0x80000000;
    local_64 = CONCAT31(CONCAT21(CONCAT11(local_64._3_1_,bVar1),uVar2),cVar19);
    local_98 = param_4;
    iVar8 = thunk_FUN_016d4a50(0x100);
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x100);
    }
    FUN_016dd1aa(iVar8,&local_160,0x100);
    *param_1 = 0x80000029;
    param_1[1] = iVar8;
    param_1[2] = &DAT_018a7bd4;
    return;
  }
  pbVar20 = (byte *)(param_5 + 0x34);
  if (local_204 != 0) {
    if (local_204 - 0x21U < 0xffffffe0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0x20,0x20,&DAT_018a8fe8);
    }
    bVar7 = 0;
    pbVar12 = pbVar20;
    pbVar15 = abStack_224;
    do {
      local_204 = local_204 + -1;
      bVar7 = *pbVar12 ^ *pbVar15 | bVar7;
      pbVar12 = pbVar12 + 1;
      pbVar15 = pbVar15 + 1;
    } while (local_204 != 0);
    if (bVar7 != 0) goto LAB_0153fea8;
  }
  uVar2 = 0x2c;
  if ((*(short *)(local_228 + 0x28) == *(short *)(param_4 + 0x28)) &&
     (((*(short *)(local_228 + 0x28) != 0x178 ||
       (*(short *)(local_228 + 0x2a) == *(short *)(param_4 + 0x2a))) &&
      (uVar2 = 0x2d, local_200 == cVar19)))) {
    FUN_01558bcc(&local_1f8,param_2,param_4,local_230,local_22c);
    iVar8 = *(int *)(param_2[0x28] + 0x90);
    (**(code **)(iVar8 + 0x10))
              (*(int *)(param_2[0x28] + 0x8c) + (*(int *)(iVar8 + 8) - 1U & 0xfffffff8) + 8,
               &DAT_0040bfb3,0xd,(uint)&local_1f8 | 4,0x20,auStack_1b4,0x30);
    FUN_015272e8(param_3,&local_1f8);
    FUN_01504dd8(&local_160,*(undefined4 *)(local_238 + 0xc),*(undefined4 *)(local_238 + 0x10));
    local_170 = local_160;
    uStack_16c = local_15c;
    uStack_168 = uStack_158;
    FUN_01512dd0(&local_160,&local_170);
    local_180 = local_160;
    uStack_17c = local_15c;
    uStack_178 = uStack_158;
    FUN_0151d184(param_3 + 0x228);
    *(undefined4 *)(param_3 + 0x228) = local_180;
    *(undefined4 *)(param_3 + 0x22c) = uStack_17c;
    *(undefined4 *)(param_3 + 0x230) = uStack_178;
    *(undefined1 *)(param_3 + 0x25d) = 2;
    if (bVar1) {
      uVar13 = param_2[0x28];
      FUN_016dd1aa(&uStack_dc,&local_1f8,0x74);
      FUN_016dd1aa(&local_160,puVar18,0x60);
      local_100 = *(undefined4 *)pbVar20;
      local_fc = *(undefined4 *)(param_5 + 0x38);
      local_f8 = *(undefined4 *)(param_5 + 0x3c);
      uStack_f4 = *(undefined4 *)(param_5 + 0x40);
      local_f0 = *(undefined4 *)(param_5 + 0x44);
      uStack_ec = *(undefined4 *)(param_5 + 0x48);
      local_e8 = *(undefined4 *)(param_5 + 0x4c);
      uStack_e4 = *(undefined4 *)(param_5 + 0x50);
      uStack_e0 = *(undefined4 *)(param_5 + 0x54);
      local_64 = param_2[0x29];
      local_60 = param_2[0x2a];
      local_5c = param_2[0x2b];
      uStack_58 = param_2[0x2c];
      uStack_54 = param_2[0x2d];
      local_50 = param_2[0x2e];
      uStack_4c = param_2[0x2f];
      local_48 = param_2[0x30];
      local_44 = param_2[0x31];
      uStack_40 = param_2[0x32];
      local_3c = param_2[0x33];
      uStack_38 = param_2[0x34];
      local_34 = CONCAT22(local_34._2_2_,0x100);
      local_34 = CONCAT31(local_34._1_3_,*(undefined1 *)(param_2 + 0x35));
      local_68 = uVar13;
      uVar13 = FUN_0153d6c4(0x130);
      FUN_016dd1aa(uVar13,&local_160,0x130);
      puVar6 = &DAT_018a7b84;
    }
    else {
      uVar13 = param_2[0x28];
      FUN_016dd1aa(auStack_d4,&local_1f8,0x74);
      FUN_016dd1aa(&uStack_158,puVar18,0x60);
      local_f8 = *(undefined4 *)pbVar20;
      uStack_f4 = *(undefined4 *)(param_5 + 0x38);
      local_f0 = *(undefined4 *)(param_5 + 0x3c);
      uStack_ec = *(undefined4 *)(param_5 + 0x40);
      local_e8 = *(undefined4 *)(param_5 + 0x44);
      uStack_e4 = *(undefined4 *)(param_5 + 0x48);
      uStack_e0 = *(undefined4 *)(param_5 + 0x4c);
      uStack_dc = *(undefined4 *)(param_5 + 0x50);
      uStack_d8 = *(undefined4 *)(param_5 + 0x54);
      local_5c = param_2[0x29];
      uStack_58 = param_2[0x2a];
      uStack_54 = param_2[0x2b];
      local_50 = param_2[0x2c];
      uStack_4c = param_2[0x2d];
      local_2c = *(undefined1 *)(param_2 + 0x35);
      local_48 = param_2[0x2e];
      local_44 = param_2[0x2f];
      uStack_40 = param_2[0x30];
      local_3c = param_2[0x31];
      uStack_38 = param_2[0x32];
      local_34 = param_2[0x33];
      uStack_30 = param_2[0x34];
      local_2b = 1;
      local_160 = 0;
      local_60 = uVar13;
      uVar13 = FUN_0153d6c4(0x138);
      FUN_016dd1aa(uVar13,&local_160,0x138);
      puVar6 = &DAT_018a7aa8;
    }
    *param_1 = 0x80000029;
    param_1[1] = uVar13;
    param_1[2] = puVar6;
    return;
  }
  *(undefined1 *)(param_1 + 1) = uVar2;
  *param_1 = &DAT_8000001c;
  FUN_015376c0(auStack_258);
  bVar7 = 0;
LAB_0153fc94:
  piVar4 = (int *)param_2[0x28];
  DataMemoryBarrier(0xb);
  do {
    iVar8 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar8 + -1;
  if (iVar8 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01561b24(param_2[0x28]);
  }
  if ((bool)(bVar7 & param_2[0x19] != -0x80000000)) {
    FUN_015376c0(param_2 + 0x10);
  }
  if ((*(char *)(param_2 + 0x29) == '\0') && ((param_2[0x2a] & 0x7fffffff) != 0)) {
    thunk_FUN_016d3fb4(param_2[0x2b]);
  }
  puVar18 = (undefined4 *)param_2[0x34];
  uVar13 = param_2[0x33];
  pcVar9 = (code *)*puVar18;
  if (pcVar9 != (code *)0x0) {
    (*pcVar9)(uVar13);
  }
  if (puVar18[1] != 0) {
    thunk_FUN_016d3fb4(uVar13);
  }
  if ((param_2[0x2e] & 0x7fffffff) == 0) {
    return;
  }
  thunk_FUN_016d3fb4(param_2[0x2f]);
  return;
}

