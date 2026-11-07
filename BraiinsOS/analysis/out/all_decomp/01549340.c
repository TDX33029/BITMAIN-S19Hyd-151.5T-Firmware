// FUN_01549340 @ 01549340 size=948 calls_out=13 calls_in=0
// strings: TLS 1.3; server CertificateVerify

void FUN_01549340(uint *param_1,uint *param_2,int *param_3,uint *param_4)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint local_1e8 [2];
  undefined4 local_1e0;
  undefined4 local_1dc;
  uint local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  uint local_180;
  uint local_17c;
  uint local_178;
  uint local_174;
  uint uStack_170;
  uint uStack_16c;
  uint uStack_168;
  uint local_164;
  uint uStack_160;
  uint uStack_15c;
  uint local_158;
  uint uStack_154;
  uint uStack_150;
  uint uStack_14c;
  uint local_148;
  uint uStack_144;
  uint uStack_140;
  uint uStack_13c;
  uint local_138;
  uint uStack_134;
  uint uStack_130;
  uint uStack_12c;
  uint uStack_128;
  uint local_124;
  uint local_120;
  undefined1 auStack_11c [148];
  uint local_88;
  uint uStack_84;
  uint uStack_80;
  uint uStack_7c;
  uint uStack_78;
  uint local_74;
  uint uStack_70;
  uint uStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  
  if ((*param_4 < 0x80000001) && (param_4[3] == 0x8000000a)) {
    uVar5 = param_2[2];
    if (uVar5 == 0) {
      uVar1 = 0x80000017;
    }
    else {
      uVar3 = param_2[1];
      iVar2 = *(int *)(param_2[0x1d] + 0x98);
      (**(code **)(iVar2 + 0x10))
                (local_1e8,
                 *(int *)(param_2[0x1d] + 0x94) + (*(int *)(iVar2 + 8) - 1U & 0xfffffff8) + 8);
      uVar1 = 0x80000021;
      local_180 = 0x80000021;
      if ((local_1e8[0] & 1) != 0) {
        FUN_0152bfc0(&local_180);
        iVar2 = *(int *)(param_2[0x1d] + 0xa4);
        (**(code **)(iVar2 + 0x10))
                  (local_1e8,
                   *(int *)(param_2[0x1d] + 0xa0) + (*(int *)(iVar2 + 8) - 1U & 0xfffffff8) + 8,
                   uVar3,uVar3 + 0xc,uVar5 - 1,param_2 + 0x18,param_2[4],param_2[5],local_1e0,
                   local_1dc);
        if (local_1e8[0] == 0x80000029) {
          (**(code **)(param_2[0xc] + 0xc))(local_1e8,param_2[0xb]);
          iVar4 = *(int *)(param_2[0x1d] + 0xa4);
          iVar2 = *(int *)(param_2[0x1d] + 0xa0);
          iVar6 = *(int *)(iVar4 + 8);
          FUN_01527d18(&local_180,local_1e8,"TLS 1.3, server CertificateVerify");
          if (0xa2 < local_180) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,local_180,0xa2,&DAT_018a7884);
          }
          (**(code **)(iVar4 + 0x18))
                    (&local_1a0,iVar2 + (iVar6 - 1U & 0xfffffff8) + 8,&local_17c,local_180,uVar3,
                     param_4 + 4);
          if (local_1a0 == 0x80000029) {
            local_180 = *param_2;
            local_17c = param_2[1];
            local_178 = param_2[2];
            FUN_01512dd0(&local_48,&local_180);
            local_1a0 = local_48;
            uStack_19c = uStack_44;
            uStack_198 = uStack_40;
            iVar2 = *param_3;
            FUN_0151d184(iVar2 + 0x228);
            *(uint *)(iVar2 + 0x228) = local_1a0;
            *(undefined4 *)(iVar2 + 0x22c) = uStack_19c;
            *(undefined4 *)(iVar2 + 0x230) = uStack_198;
            FUN_0151eddc(param_2 + 6,param_4);
            uVar5 = param_2[0x1d];
            local_138 = param_2[0x18];
            uStack_134 = param_2[0x19];
            uStack_130 = param_2[0x1a];
            uStack_12c = param_2[0x1b];
            uStack_128 = param_2[0x1c];
            local_88 = param_2[0x44];
            uStack_84 = param_2[0x45];
            uStack_80 = param_2[0x46];
            uStack_7c = param_2[0x47];
            uStack_78 = param_2[0x48];
            local_74 = param_2[0x49];
            uStack_70 = param_2[0x4a];
            uStack_6c = param_2[0x4b];
            uStack_68 = param_2[0x4c];
            uStack_64 = param_2[0x4d];
            local_60 = param_2[0x4e];
            uStack_5c = param_2[0x4f];
            uStack_58 = param_2[0x50];
            uStack_54 = param_2[0x51];
            uStack_50 = param_2[0x52];
            uStack_4c = param_2[0x53];
            uVar1 = param_2[0x1e];
            local_180 = param_2[6];
            local_17c = param_2[7];
            local_178 = param_2[8];
            local_174 = param_2[9];
            uStack_170 = param_2[10];
            uStack_16c = param_2[0xb];
            uStack_168 = param_2[0xc];
            FUN_016dd1aa(auStack_11c,param_2 + 0x1f,0x94);
            local_158 = param_2[0x10];
            uStack_154 = param_2[0x11];
            uStack_150 = param_2[0x12];
            uStack_14c = param_2[0x13];
            local_148 = param_2[0x14];
            uStack_144 = param_2[0x15];
            uStack_140 = param_2[0x16];
            uStack_13c = param_2[0x17];
            local_164 = param_2[0xd];
            uStack_160 = param_2[0xe];
            uStack_15c = param_2[0xf];
            local_124 = uVar5;
            local_120 = uVar1;
            uVar5 = FUN_01547e3c(0x138,4);
            FUN_016dd1aa(uVar5,&local_180,0x138);
            *param_1 = 0x80000029;
            param_1[1] = uVar5;
            param_1[2] = (uint)&DAT_018a7d4c;
            FUN_015430a0(param_4);
            if (param_2[3] != 0) {
              thunk_FUN_016d3fb4(param_2[4]);
              thunk_FUN_016d3fb4(param_2);
              return;
            }
            goto LAB_01549674;
          }
          puVar7 = &local_48;
          FUN_015277ec(puVar7,*param_3,&local_1a0);
        }
        else {
          puVar7 = &local_180;
          FUN_015277ec(puVar7,*param_3,local_1e8);
        }
        uVar5 = puVar7[1];
        uVar1 = puVar7[2];
        uVar3 = puVar7[3];
        *param_1 = *puVar7;
        param_1[1] = uVar5;
        param_1[2] = uVar1;
        param_1[3] = uVar3;
        uVar5 = puVar7[5];
        uVar1 = puVar7[6];
        uVar3 = puVar7[7];
        param_1[4] = puVar7[4];
        param_1[5] = uVar5;
        param_1[6] = uVar1;
        param_1[7] = uVar3;
        goto LAB_01549664;
      }
    }
    *param_1 = uVar1;
  }
  else {
    FUN_015622b4(&local_180,param_4,&DAT_0040c784,1,&DAT_0040c0b5,1);
    param_1[2] = local_178;
    param_1[3] = local_174;
    param_1[4] = uStack_170;
    param_1[5] = uStack_16c;
    param_1[6] = uStack_168;
    param_1[7] = local_164;
    *param_1 = local_180;
    param_1[1] = local_17c;
  }
LAB_01549664:
  FUN_015430a0(param_4);
  FUN_01548f80(param_2);
LAB_01549674:
  thunk_FUN_016d3fb4(param_2);
  return;
}

