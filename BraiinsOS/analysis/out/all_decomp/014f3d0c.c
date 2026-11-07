// FUN_014f3d0c @ 014f3d0c size=2016 calls_out=11 calls_in=0
// strings: 

void FUN_014f3d0c(undefined1 *param_1,int *param_2,undefined4 *param_3,int param_4,uint param_5,
                 int param_6,uint param_7,uint param_8)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  uint uVar21;
  undefined4 uVar22;
  int iVar23;
  undefined4 uVar24;
  uint uVar25;
  undefined4 uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int *local_4e0;
  undefined4 local_4dc;
  undefined4 local_4d8;
  undefined4 local_4d4;
  undefined4 local_4d0;
  undefined4 local_3b0;
  undefined4 local_3ac;
  undefined4 local_3a8;
  undefined4 local_3a4;
  undefined1 auStack_280 [272];
  int local_170;
  uint local_16c;
  int local_168;
  uint local_164;
  undefined4 local_160 [4];
  undefined1 auStack_150 [264];
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  byte local_38;
  byte bStack_37;
  byte bStack_36;
  byte bStack_35;
  byte local_34;
  byte bStack_33;
  byte bStack_32;
  byte bStack_31;
  byte local_30;
  byte bStack_2f;
  byte bStack_2e;
  byte bStack_2d;
  byte local_2c;
  byte bStack_2b;
  byte bStack_2a;
  byte bStack_29;
  
  if (*param_2 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a6f34);
  }
  if (param_7 < param_8) {
    *param_1 = 1;
    return;
  }
  local_160[3] = 0;
  local_160[2] = 0;
  local_160[1] = 0;
  local_160[0] = 0;
  FUN_016dd1aa(auStack_150,param_2 + 4,0x100);
  FUN_016dd1aa(auStack_280,local_160,0x110);
  uVar21 = param_7 - param_8;
  local_16c = param_5 >> 0x1d;
  local_170 = param_5 << 3;
  local_164 = uVar21 >> 0x1d;
  local_168 = uVar21 * 8;
  if (param_5 != 0) {
    do {
      uVar28 = param_5;
      if (0xf < param_5) {
        uVar28 = 0x10;
      }
      iVar23 = 0x10 - uVar28;
      if (0xf < param_5) {
        iVar23 = 0;
      }
      FUN_016dd606((int)local_160 + uVar28,0,iVar23);
      FUN_016dd1aa(local_160,param_4,uVar28);
      local_44 = local_160[1];
      local_48 = local_160[0];
      local_3c = local_160[3];
      local_40 = local_160[2];
      FUN_014f190c(auStack_280,&local_48);
      param_4 = param_4 + uVar28;
      param_5 = param_5 - uVar28;
    } while (param_5 != 0);
  }
  param_2 = param_2 + 0x44;
  FUN_016dd1aa((int)&local_3a4 + 3,auStack_280,0x120);
  FUN_016dd1aa((int)&local_4d4 + 3,(int)&local_3a4 + 3,0x120);
  FUN_016dd1aa(auStack_280,(int)&local_4d4 + 3,0x120);
  uVar22 = *param_3;
  uVar24 = param_3[1];
  uVar26 = param_3[2];
  local_160[3] = 0x2000000;
  uVar21 = uVar21 & 0x7ffffff0;
  local_160[0] = uVar22;
  local_160[1] = uVar24;
  local_160[2] = uVar26;
  if (uVar21 != 0) {
    uVar28 = uVar21;
    if (0xbff < uVar21) {
      uVar28 = 0xc00;
    }
    uVar27 = 0;
    uVar29 = param_8;
    do {
      if (param_7 < uVar29) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar29,param_7,param_7,&DAT_018a6f24);
      }
      if (param_7 - uVar29 < uVar28) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar28,param_7 - uVar29,&DAT_018a6f14);
      }
      FUN_014f21ec(auStack_280,param_6 + uVar29,uVar28);
      if (param_7 < uVar27) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar27,param_7,param_7,&DAT_018a6f04);
      }
      uVar25 = uVar28 + param_8;
      if (param_7 - uVar27 < uVar25) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar25,param_7 - uVar27,&DAT_018a6ef4);
      }
      FUN_014f4514(param_2,param_6 + uVar27,uVar25,param_8,local_160);
      uVar27 = uVar28 + uVar27;
      uVar29 = uVar28 + uVar29;
      uVar25 = uVar21 - uVar27;
      if (uVar28 <= uVar21 - uVar27) {
        uVar25 = uVar28;
      }
      uVar28 = uVar25;
    } while (uVar21 != uVar27);
  }
  uVar20 = local_160[3];
  uVar19 = local_160[2];
  uVar18 = local_160[1];
  uVar17 = local_160[0];
  if (param_7 < uVar21) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar21,param_7,param_7,&DAT_018a6ee4);
  }
  param_7 = param_7 - uVar21;
  if (param_7 < param_8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_8,param_7,param_7,&DAT_018a6ce0);
  }
  if (param_7 != param_8) {
    param_7 = param_7 - param_8;
    local_3a4 = 0;
    local_3a8 = 0;
    local_3ac = 0;
    local_3b0 = 0;
    if (0x10 < param_7) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,param_7,0x10,&DAT_018a6cd0);
    }
    FUN_016dd1aa(&local_3b0,param_6 + uVar21 + param_8);
    bVar1 = (byte)local_3b0;
    bVar2 = local_3b0._1_1_;
    bVar3 = local_3b0._2_1_;
    bVar16 = local_3a4._3_1_;
    bVar4 = local_3b0._3_1_;
    bVar15 = local_3a4._2_1_;
    bVar5 = (byte)local_3ac;
    bVar7 = local_3ac._2_1_;
    bVar9 = (byte)local_3a8;
    bVar11 = local_3a8._2_1_;
    bVar12 = local_3a8._3_1_;
    bVar13 = (byte)local_3a4;
    bVar14 = local_3a4._1_1_;
    bVar6 = local_3ac._1_1_;
    bVar8 = local_3ac._3_1_;
    bVar10 = local_3a8._1_1_;
    FUN_014f190c(auStack_280,&local_3b0);
    if ((DAT_018dffd8 & 4) == 0) {
      if ((DAT_018dffd8 & 1) == 0) {
        local_3a4 = uVar20;
        local_3a8 = uVar19;
        local_3ac = uVar18;
        local_3b0 = uVar17;
        FUN_01836ca8(&local_3b0,&local_4e0,param_2);
      }
      else {
        local_3a4 = uVar20;
        local_3a8 = uVar19;
        local_3ac = uVar18;
        local_3b0 = uVar17;
        FUN_0183bb90(&local_3b0,&local_4e0,param_2);
      }
    }
    else {
      local_3a4 = uVar20;
      local_3a8 = uVar19;
      local_3ac = uVar18;
      local_3b0 = uVar17;
      FUN_0183a960(&local_3b0,&local_4e0,param_2);
    }
    bStack_37 = (byte)((uint)local_4e0 >> 8);
    bStack_36 = (byte)((uint)local_4e0 >> 0x10);
    bStack_35 = (byte)((uint)local_4e0 >> 0x18);
    bStack_37 = bStack_37 ^ bVar2;
    _local_38 = CONCAT11(bStack_37,(byte)local_4e0 ^ bVar1);
    bStack_33 = (byte)((uint)local_4dc >> 8);
    bStack_36 = bStack_36 ^ bVar3;
    bStack_32 = (byte)((uint)local_4dc >> 0x10);
    _local_38 = CONCAT13(bStack_35 ^ bVar4,CONCAT12(bStack_36,_local_38));
    bStack_33 = bStack_33 ^ bVar6;
    _local_34 = CONCAT11(bStack_33,(byte)local_4dc ^ bVar5);
    bStack_32 = bStack_32 ^ bVar7;
    bStack_31 = (byte)((uint)local_4dc >> 0x18);
    _local_34 = CONCAT13(bStack_31 ^ bVar8,CONCAT12(bStack_32,_local_34));
    local_30 = (byte)local_4d8;
    local_30 = local_30 ^ bVar9;
    bStack_2f = (byte)((uint)local_4d8 >> 8);
    bStack_2f = bStack_2f ^ bVar10;
    bStack_2e = (byte)((uint)local_4d8 >> 0x10);
    bStack_2e = bStack_2e ^ bVar11;
    bStack_2d = (byte)((uint)local_4d8 >> 0x18);
    _local_30 = CONCAT13(bStack_2d ^ bVar12,CONCAT12(bStack_2e,_local_30));
    local_2c = (byte)local_4d4;
    local_2c = local_2c ^ bVar13;
    bStack_2b = (byte)((uint)local_4d4 >> 8);
    bStack_2b = bStack_2b ^ bVar14;
    bStack_2a = (byte)((uint)local_4d4 >> 0x10);
    bStack_2a = bStack_2a ^ bVar15;
    bStack_29 = (byte)((uint)local_4d4 >> 0x18);
    _local_2c = CONCAT13(bStack_29 ^ bVar16,CONCAT12(bStack_2a,_local_2c));
    FUN_016dd1aa(param_6 + uVar21,&local_38,param_7);
  }
  FUN_016dd1aa(&local_3b0,auStack_280,0x120);
  local_4d0 = 0x1000000;
  local_4e0 = param_2;
  local_4dc = uVar22;
  local_4d8 = uVar24;
  local_4d4 = uVar26;
  FUN_014f1680(param_1 + 1,&local_3b0,&local_4e0);
  *param_1 = 0;
  return;
}

