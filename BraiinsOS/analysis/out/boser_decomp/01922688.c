// FUN_01922688 @ 01922688 size=1052 calls_out=15 calls_in=0
// strings: TLS 1.3; server CertificateVerify

void FUN_01922688(uint *param_1,uint *param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *local_1f8;
  uint local_1e8;
  uint uStack_1e4;
  uint uStack_1e0;
  uint uStack_1dc;
  uint uStack_1d8;
  uint uStack_1d4;
  uint local_1a0 [8];
  uint local_180;
  uint *puStack_17c;
  undefined4 uStack_178;
  uint local_160;
  uint *local_15c;
  uint local_158;
  uint local_154;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint local_144;
  uint uStack_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint uStack_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint local_104;
  uint local_100;
  undefined1 auStack_fc [148];
  uint local_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  if ((*param_4 < 0x80000001) && (param_4[3] == 0x8000000a)) {
    local_1f8 = param_4 + 4;
  }
  else {
    FUN_0191d9a0(&local_160,param_4,&DAT_0052389f,1,&DAT_0052383b,1);
    local_1e8 = local_158;
    uStack_1e4 = local_154;
    uStack_1e0 = local_150;
    uStack_1dc = uStack_14c;
    uStack_1d8 = uStack_148;
    uStack_1d4 = local_144;
    if (local_160 != 0x80000029) {
      param_1[2] = local_158;
      param_1[3] = local_154;
      param_1[4] = local_150;
      param_1[5] = uStack_14c;
      param_1[6] = uStack_148;
      param_1[7] = local_144;
      *param_1 = local_160;
      param_1[1] = (uint)local_15c;
      goto LAB_01922a64;
    }
    local_1f8 = local_15c;
  }
  uVar8 = param_2[2];
  if (uVar8 == 0) {
    uVar8 = 0x80000017;
  }
  else {
    uVar1 = param_2[1];
    iVar4 = *(int *)(param_2[0x1d] + 0x98);
    FUN_0190b0e0(&local_160,*(undefined4 *)(param_2[0x1d] + 0x94),*(undefined4 *)(iVar4 + 8),
                 *(undefined4 *)(iVar4 + 0x10));
    if (local_160 != 0x80000029) {
      param_1[4] = local_150;
      param_1[5] = uStack_14c;
      param_1[6] = uStack_148;
      param_1[7] = local_144;
      *param_1 = local_160;
      param_1[1] = (uint)local_15c;
      param_1[2] = local_158;
      param_1[3] = local_154;
      goto LAB_01922a64;
    }
    iVar4 = *(int *)(param_2[0x1d] + 0xa4);
    (**(code **)(iVar4 + 0x10))
              (&local_160,
               *(int *)(param_2[0x1d] + 0xa0) + (*(int *)(iVar4 + 8) - 1U & 0xfffffff8) + 8,uVar1,
               uVar1 + 0xc,uVar8 - 1,param_2 + 0x18,param_2[4],param_2[5],local_158,local_154);
    iVar4 = *param_3;
    if (local_160 == 0x80000029) {
LAB_01922810:
      (**(code **)(param_2[0xc] + 0xc))(&local_1e8,param_2[0xb]);
      iVar9 = *(int *)(param_2[0x1d] + 0xa4);
      iVar3 = *(int *)(param_2[0x1d] + 0xa0);
      iVar2 = *(int *)(iVar9 + 8);
      FUN_018f3a94(&local_160,&local_1e8,"TLS 1.3, server CertificateVerify");
      if (0xa2 < local_160) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,local_160,0xa2,&DAT_01d23fc8);
      }
      (**(code **)(iVar9 + 0x18))
                (&local_180,iVar3 + (iVar2 - 1U & 0xfffffff8) + 8,&local_15c,local_160,uVar1,
                 local_1f8);
      if (local_180 == 0x80000029) {
LAB_019228b4:
        local_160 = *param_2;
        local_15c = (uint *)param_2[1];
        local_158 = param_2[2];
        FUN_018eb5a8(&local_180,&local_160);
        local_160 = local_180;
        local_15c = puStack_17c;
        local_158 = uStack_178;
        puVar5 = (uint *)(iVar4 + 0x228);
        if (*puVar5 != 0x80000000) {
          FUN_0190f040(puVar5);
        }
        *puVar5 = local_160;
        *(uint **)(iVar4 + 0x22c) = local_15c;
        *(uint *)(iVar4 + 0x230) = local_158;
        puVar5 = (uint *)FUN_0191e124(param_2 + 6,param_4);
        uVar1 = param_2[0x1d];
        local_118 = param_2[0x18];
        uStack_114 = param_2[0x19];
        uStack_110 = param_2[0x1a];
        uStack_10c = param_2[0x1b];
        uStack_108 = param_2[0x1c];
        local_68 = param_2[0x44];
        uStack_64 = param_2[0x45];
        uStack_60 = param_2[0x46];
        uStack_5c = param_2[0x47];
        uStack_58 = param_2[0x48];
        local_54 = param_2[0x49];
        uStack_50 = param_2[0x4a];
        uStack_4c = param_2[0x4b];
        uStack_48 = param_2[0x4c];
        uStack_44 = param_2[0x4d];
        local_40 = param_2[0x4e];
        uStack_3c = param_2[0x4f];
        uStack_38 = param_2[0x50];
        uStack_34 = param_2[0x51];
        uStack_30 = param_2[0x52];
        uStack_2c = param_2[0x53];
        uVar8 = param_2[0x1e];
        local_160 = *puVar5;
        local_15c = (uint *)puVar5[1];
        local_158 = puVar5[2];
        local_154 = puVar5[3];
        local_150 = puVar5[4];
        uStack_14c = puVar5[5];
        uStack_148 = puVar5[6];
        FUN_01bed4e2(auStack_fc,param_2 + 0x1f,0x94);
        local_138 = param_2[0x10];
        uStack_134 = param_2[0x11];
        uStack_130 = param_2[0x12];
        uStack_12c = param_2[0x13];
        local_128 = param_2[0x14];
        uStack_124 = param_2[0x15];
        uStack_120 = param_2[0x16];
        uStack_11c = param_2[0x17];
        local_144 = param_2[0xd];
        uStack_140 = param_2[0xe];
        uStack_13c = param_2[0xf];
        local_104 = uVar1;
        local_100 = uVar8;
        uVar8 = thunk_FUN_01be5118(0x138);
        if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x138);
        }
        FUN_01bed4e2(uVar8,&local_160,0x138);
        *param_1 = 0x80000029;
        param_1[1] = uVar8;
        param_1[2] = (uint)&DAT_01d253ac;
        FUN_0191edf0(param_4);
        FUN_0134bd64(param_2[3],param_2[4]);
        thunk_FUN_01be4678(param_2);
        return;
      }
      puVar5 = local_1a0;
      FUN_018f31a0(puVar5,iVar4,&local_180);
      uVar8 = local_1a0[0];
      if (local_1a0[0] == 0x80000029) goto LAB_019228b4;
    }
    else {
      puVar5 = &local_1e8;
      FUN_018f31a0(puVar5,iVar4,&local_160);
      uVar8 = local_1e8;
      if (local_1e8 == 0x80000029) goto LAB_01922810;
    }
    puVar5 = (uint *)((uint)puVar5 | 4);
    uVar1 = puVar5[1];
    uVar6 = puVar5[2];
    param_1[1] = *puVar5;
    param_1[2] = uVar1;
    param_1[3] = uVar6;
    uVar1 = puVar5[4];
    uVar6 = puVar5[5];
    uVar7 = puVar5[6];
    param_1[4] = puVar5[3];
    param_1[5] = uVar1;
    param_1[6] = uVar6;
    param_1[7] = uVar7;
  }
  *param_1 = uVar8;
LAB_01922a64:
  FUN_0191edf0(param_4);
  FUN_01922e84(param_2);
  return;
}

