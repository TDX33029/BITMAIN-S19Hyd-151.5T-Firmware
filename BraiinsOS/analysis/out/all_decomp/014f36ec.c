// FUN_014f36ec @ 014f36ec size=1556 calls_out=10 calls_in=0
// strings: 

void FUN_014f36ec(undefined1 *param_1,int *param_2,undefined4 *param_3,int param_4,uint param_5,
                 int param_6,uint param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_3e0;
  undefined4 uStack_3dc;
  undefined4 uStack_3d8;
  undefined4 uStack_3d4;
  int *local_2c0;
  undefined4 local_2bc;
  undefined4 local_2b8;
  undefined4 local_2b4;
  undefined4 local_2b0;
  int local_1b0;
  uint local_1ac;
  int local_1a8;
  uint local_1a4;
  undefined4 local_190 [3];
  undefined4 local_184;
  undefined1 uStack_181;
  undefined1 auStack_180 [296];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38 [4];
  byte local_34;
  byte local_33;
  byte local_32;
  byte local_31;
  byte local_30;
  byte local_2f;
  byte local_2e;
  byte local_2d;
  byte local_2c;
  byte local_2b;
  byte local_2a;
  byte local_29;
  
  if (*param_2 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a6f44);
  }
  local_184 = 0;
  local_190[2] = 0;
  local_190[1] = 0;
  local_190[0] = 0;
  FUN_016dd1aa(auStack_180,param_2 + 4,0x100);
  FUN_016dd1aa(&local_2c0,local_190,0x110);
  local_1a4 = param_7 >> 0x1d;
  local_1a8 = param_7 << 3;
  local_1ac = param_5 >> 0x1d;
  local_1b0 = param_5 << 3;
  if (param_5 != 0) {
    do {
      uVar6 = param_5;
      if (0xf < param_5) {
        uVar6 = 0x10;
      }
      iVar2 = 0x10 - uVar6;
      if (0xf < param_5) {
        iVar2 = 0;
      }
      FUN_016dd606((int)local_190 + uVar6,0,iVar2);
      FUN_016dd1aa(local_190,param_4,uVar6);
      local_3e0 = local_190[0];
      uStack_3dc = local_190[1];
      uStack_3d8 = local_190[2];
      uStack_3d4 = local_184;
      FUN_014f190c(&local_2c0,&local_3e0);
      param_4 = param_4 + uVar6;
      param_5 = param_5 - uVar6;
    } while (param_5 != 0);
  }
  param_2 = param_2 + 0x44;
  FUN_016dd1aa(&uStack_181,&local_2c0,0x120);
  FUN_016dd1aa((int)&local_2b4 + 3,&uStack_181,0x120);
  FUN_016dd1aa(&local_3e0,(int)&local_2b4 + 3,0x120);
  uVar1 = *param_3;
  uVar3 = param_3[1];
  uVar4 = param_3[2];
  local_4c = 0x2000000;
  uVar6 = param_7 & 0x7ffffff0;
  param_7 = param_7 & 0xf;
  local_58 = uVar1;
  local_54 = uVar3;
  uStack_50 = uVar4;
  if (uVar6 != 0) {
    iVar2 = param_6;
    uVar7 = uVar6;
    do {
      uVar5 = uVar7;
      if (0xbff < uVar7) {
        uVar5 = 0xc00;
      }
      FUN_014f4514(param_2,iVar2,uVar5,0,&local_58);
      FUN_014f21ec(&local_3e0,iVar2,uVar5);
      iVar2 = iVar2 + uVar5;
      uVar7 = uVar7 - uVar5;
    } while (uVar7 != 0);
  }
  if (param_7 != 0) {
    FUN_016dd606(local_38 + param_7,0);
    FUN_016dd1aa(local_38,param_6 + uVar6,param_7);
    if ((DAT_018dffd8 & 4) == 0) {
      if ((DAT_018dffd8 & 1) == 0) {
        local_190[1] = local_54;
        local_184 = local_4c;
        local_190[2] = uStack_50;
        local_190[0] = local_58;
        FUN_01836ca8(local_190,&local_2c0,param_2);
      }
      else {
        local_190[1] = local_54;
        local_184 = local_4c;
        local_190[2] = uStack_50;
        local_190[0] = local_58;
        FUN_0183bb90(local_190,&local_2c0,param_2);
      }
    }
    else {
      local_190[1] = local_54;
      local_184 = local_4c;
      local_190[2] = uStack_50;
      local_190[0] = local_58;
      FUN_0183a960(local_190,&local_2c0,param_2);
    }
    local_48._1_1_ = (byte)((uint)local_2c0 >> 8);
    local_48._2_1_ = (byte)((uint)local_2c0 >> 0x10);
    local_48._1_1_ = local_48._1_1_ ^ local_38[1];
    local_48._3_1_ = (byte)((uint)local_2c0 >> 0x18);
    local_48._0_2_ = CONCAT11(local_48._1_1_,(byte)local_2c0 ^ local_38[0]);
    local_48._2_1_ = local_48._2_1_ ^ local_38[2];
    local_48 = CONCAT13(local_48._3_1_ ^ local_38[3],CONCAT12(local_48._2_1_,(undefined2)local_48));
    local_44._0_1_ = (byte)local_2bc;
    local_44._0_1_ = (byte)local_44 ^ local_34;
    local_44._1_1_ = (byte)((uint)local_2bc >> 8);
    local_44._1_1_ = local_44._1_1_ ^ local_33;
    local_44._2_1_ = (byte)((uint)local_2bc >> 0x10);
    local_44._2_1_ = local_44._2_1_ ^ local_32;
    local_44._3_1_ = (byte)((uint)local_2bc >> 0x18);
    local_44 = CONCAT13(local_44._3_1_ ^ local_31,CONCAT12(local_44._2_1_,(undefined2)local_44));
    local_40._0_1_ = (byte)local_2b8;
    local_40._0_1_ = (byte)local_40 ^ local_30;
    local_40._1_1_ = (byte)((uint)local_2b8 >> 8);
    local_190[1] = local_44;
    local_40._1_1_ = local_40._1_1_ ^ local_2f;
    local_40._2_1_ = (byte)((uint)local_2b8 >> 0x10);
    local_40._2_1_ = local_40._2_1_ ^ local_2e;
    local_40._3_1_ = (byte)((uint)local_2b8 >> 0x18);
    local_40 = CONCAT13(local_40._3_1_ ^ local_2d,CONCAT12(local_40._2_1_,(undefined2)local_40));
    local_3c._0_1_ = (byte)local_2b4;
    local_3c._0_1_ = (byte)local_3c ^ local_2c;
    local_3c._1_1_ = (byte)((uint)local_2b4 >> 8);
    local_190[2] = local_40;
    local_3c._1_1_ = local_3c._1_1_ ^ local_2b;
    local_3c._2_1_ = (byte)((uint)local_2b4 >> 0x10);
    local_3c._2_1_ = local_3c._2_1_ ^ local_2a;
    local_3c._3_1_ = (byte)((uint)local_2b4 >> 0x18);
    local_3c = CONCAT13(local_3c._3_1_ ^ local_29,CONCAT12(local_3c._2_1_,(undefined2)local_3c));
    local_184 = local_3c;
    local_190[0] = local_48;
    FUN_016dd606((int)local_190 + param_7,0,0x10 - param_7);
    local_48 = local_190[0];
    local_44 = local_190[1];
    local_40 = local_190[2];
    local_3c = local_184;
    FUN_014f190c(&local_3e0,local_190);
    FUN_016dd1aa(param_6 + uVar6,&local_48,param_7);
  }
  FUN_016dd1aa(local_190,&local_3e0,0x120);
  local_2b0 = 0x1000000;
  local_2c0 = param_2;
  local_2bc = uVar1;
  local_2b8 = uVar3;
  local_2b4 = uVar4;
  FUN_014f1680(param_1 + 1,local_190,&local_2c0);
  *param_1 = 0;
  return;
}

