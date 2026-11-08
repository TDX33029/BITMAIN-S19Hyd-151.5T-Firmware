// FUN_01895624 @ 01895624 size=500 calls_out=10 calls_in=0
// strings: 

bool FUN_01895624(int param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5,
                 int param_6,int param_7)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  undefined1 auStack_288 [32];
  undefined1 local_268 [16];
  undefined1 auStack_258 [104];
  undefined1 auStack_1f0 [44];
  undefined1 auStack_1c4 [68];
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [32];
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 local_12c;
  undefined4 uStack_128;
  undefined4 uStack_124;
  undefined4 uStack_120;
  undefined4 uStack_11c;
  undefined4 local_118;
  undefined4 uStack_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 local_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  bVar4 = true;
  if (param_3 == 0x20) {
    param_1 = param_7;
  }
  if (param_3 == 0x20 && param_1 == 0x40) {
    FUN_01bed4e2(local_268,param_6 + 0x20,0x20);
    iVar3 = 0;
    do {
      iVar2 = -iVar3;
      uVar1 = local_268[iVar3];
      local_268[iVar3] = auStack_258[iVar2 + 0xf];
      iVar3 = iVar3 + 1;
      auStack_258[iVar2 + 0xf] = uVar1;
    } while (iVar3 != 0x10);
    FUN_01bed93e(&local_140,0,0x20);
    bVar4 = true;
    iVar3 = FUN_01896114(local_268,0x20,1,&DAT_0056c248,8,&local_140,8);
    if (iVar3 == 0) {
      FUN_01bed4e2(auStack_288,param_6 + 0x20,0x20);
      FUN_01bed93e(&local_140,0,0xa0);
      iVar3 = FUN_01bca1d0(&local_140,param_2);
      if (iVar3 == 1) {
        FUN_01bed4e2(local_268,&local_140,0xa0);
        FUN_01bcc078(local_268);
        FUN_01bcc078(auStack_1f0);
        FUN_018981c8(auStack_1c4,param_6,param_2,param_4,param_5);
        FUN_018996f8(auStack_180,auStack_1c4);
        FUN_01bed93e(&local_140,0,0x78);
        FUN_01bcc1a0(&local_140,auStack_180,local_268,auStack_288);
        local_a0 = local_140;
        uStack_9c = uStack_13c;
        uStack_98 = uStack_138;
        uStack_94 = uStack_134;
        uStack_90 = uStack_130;
        local_8c = local_12c;
        uStack_88 = uStack_128;
        uStack_84 = uStack_124;
        uStack_80 = uStack_120;
        uStack_7c = uStack_11c;
        local_78 = local_118;
        uStack_74 = uStack_114;
        uStack_70 = uStack_110;
        uStack_6c = uStack_10c;
        uStack_68 = uStack_108;
        local_64 = local_104;
        uStack_60 = uStack_100;
        uStack_5c = uStack_fc;
        uStack_58 = uStack_f8;
        uStack_54 = uStack_f4;
        local_50 = local_f0;
        uStack_4c = uStack_ec;
        uStack_48 = uStack_e8;
        uStack_44 = uStack_e4;
        uStack_40 = uStack_e0;
        local_3c = local_dc;
        uStack_38 = uStack_d8;
        uStack_34 = uStack_d4;
        uStack_30 = uStack_d0;
        uStack_2c = uStack_cc;
        FUN_0189581c(auStack_160);
        iVar3 = thunk_FUN_01bed842(param_6,auStack_160,0x20);
        bVar4 = iVar3 != 0;
      }
      else {
        bVar4 = true;
      }
    }
  }
  return bVar4;
}

