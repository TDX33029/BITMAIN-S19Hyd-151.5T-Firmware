// FUN_00aba2c0 @ 00aba2c0 size=844 calls_out=13 calls_in=13
// strings: 

void FUN_00aba2c0(undefined4 *param_1,uint param_2)

{
  undefined4 ****ppppuVar1;
  undefined4 **ppuVar2;
  undefined4 **ppuVar3;
  int iVar4;
  undefined4 **ppuVar5;
  undefined *puVar6;
  undefined4 ***pppuVar7;
  undefined4 local_138 [4];
  undefined4 ***local_128;
  int local_124;
  int local_120;
  undefined4 local_11c;
  int local_114;
  undefined4 uStack_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 local_100;
  uint local_fc [3];
  undefined4 uStack_f0;
  uint local_ec;
  undefined4 local_e8;
  int iStack_e4;
  undefined4 uStack_e0;
  undefined4 local_dc;
  undefined4 ****local_d8;
  undefined4 **local_d4;
  undefined4 local_d0;
  undefined4 ***local_cc;
  undefined4 **local_c8;
  undefined4 **local_c4;
  undefined4 **ppuStack_c0;
  undefined4 **ppuStack_bc;
  undefined4 **ppuStack_b8;
  undefined4 **local_b4;
  undefined4 **local_b0;
  undefined4 **ppuStack_ac;
  undefined4 **ppuStack_a8;
  undefined4 **ppuStack_a4;
  undefined4 **ppuStack_a0;
  undefined4 **local_9c;
  undefined4 ****local_98;
  undefined4 **ppuStack_94;
  undefined4 ****local_90;
  undefined4 **local_8c;
  undefined4 **local_88;
  undefined4 **ppuStack_84;
  undefined4 **ppuStack_80;
  undefined4 **ppuStack_7c;
  undefined4 **local_78;
  undefined4 **ppuStack_74;
  undefined4 **ppuStack_70;
  undefined4 **ppuStack_6c;
  undefined4 **ppuStack_68;
  undefined4 **ppuStack_64;
  undefined4 ****local_60;
  undefined4 **local_5c;
  int local_58;
  undefined4 ***local_54;
  undefined4 **local_50;
  undefined4 **local_4c;
  undefined4 **ppuStack_48;
  undefined4 **ppuStack_44;
  undefined4 **ppuStack_40;
  undefined4 **local_3c;
  undefined4 **local_38;
  undefined4 **ppuStack_34;
  undefined4 **ppuStack_30;
  undefined4 **ppuStack_2c;
  undefined4 **ppuStack_28;
  
  local_58 = 0;
  local_5c = (undefined4 **)0x1;
  local_60 = (undefined4 ****)0x0;
  FUN_0132b898(&local_60,0,0x13,1,1);
  local_120 = local_58;
  puVar6 = &DAT_003e7d42;
  if ((param_2 & 1) == 0) {
    puVar6 = &DAT_003e7d2f;
  }
  FUN_01bed4e2((int)local_5c + local_58,puVar6,0x13);
  local_120 = local_120 + 0x13;
  local_128 = local_60;
  local_124 = (int)local_5c;
  local_11c = 0;
  local_138[0] = 0;
  local_10c = 0;
  local_114 = 0;
  local_58 = local_120;
  FUN_00b054a8(&local_60,param_2 & 1);
  local_88 = (undefined4 **)0x0;
  local_d4 = (undefined4 **)&DAT_01c0ff80;
  local_d8 = &local_90;
  local_90 = (undefined4 ****)0x0;
  local_cc = (undefined4 ***)0x0;
  local_8c = (undefined4 **)0x1;
  local_d0 = 0x60000020;
  iVar4 = FUN_00700f8c(&local_60,&local_d8);
  ppuVar3 = local_88;
  ppuVar2 = local_8c;
  ppppuVar1 = local_90;
  if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,local_fc,&DAT_01c0ffb8,&DAT_01d30334);
  }
  FUN_00ba8128(&local_60);
  ppuVar5 = (undefined4 **)thunk_FUN_01be5118(4);
  if (ppuVar5 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,4);
  }
  local_88 = (undefined4 **)0x4;
  *ppuVar5 = (undefined4 *)0x65646f63;
  local_90 = (undefined4 ****)0x4;
  local_50 = (undefined4 **)0x80000002;
  local_58 = (int)ppuVar3;
  local_5c = ppuVar2;
  local_60 = ppppuVar1;
  local_8c = ppuVar5;
  FUN_006c200c(&local_d8,&local_114,&local_90,&local_60);
  if (local_c8 != (undefined4 **)0x80000007) {
    FUN_00ba8128(&local_d8);
  }
  FUN_006666fc(&local_60,local_124,local_120);
  iVar4 = local_58;
  ppuVar2 = local_5c;
  ppppuVar1 = local_60;
  local_100 = 0;
  local_108 = 0;
  local_dc = 0;
  if (local_114 != 0) {
    local_e8 = 0;
    iStack_e4 = local_114;
    uStack_e0 = uStack_110;
    local_fc[1] = 0;
    local_fc[2] = local_114;
    uStack_f0 = uStack_110;
    local_dc = local_10c;
  }
  local_fc[0] = (uint)(local_114 != 0);
  local_ec = local_fc[0];
  while( true ) {
    FUN_006c1214(&local_90,local_fc);
    if (local_90 == (undefined4 ****)0x0) break;
    pppuVar7 = local_90 + (int)local_88 * 0xc;
    local_d8 = (undefined4 ****)local_90[(int)local_88 * 3 + 0x86];
    local_d4 = local_90[(int)local_88 * 3 + 0x87];
    local_cc = (undefined4 ***)*pppuVar7;
    local_c8 = pppuVar7[1];
    local_c4 = pppuVar7[2];
    ppuStack_c0 = pppuVar7[3];
    ppuStack_bc = pppuVar7[4];
    ppuStack_b8 = pppuVar7[5];
    local_b4 = pppuVar7[6];
    local_b0 = pppuVar7[7];
    ppuStack_ac = pppuVar7[8];
    ppuStack_a8 = pppuVar7[9];
    ppuStack_a4 = pppuVar7[10];
    ppuStack_a0 = pppuVar7[0xb];
    local_d0 = local_58;
    local_60 = local_d8;
    local_5c = local_d4;
    local_54 = local_cc;
    local_50 = local_c8;
    local_4c = local_c4;
    ppuStack_48 = ppuStack_c0;
    ppuStack_44 = ppuStack_bc;
    ppuStack_40 = ppuStack_b8;
    local_3c = local_b4;
    local_38 = local_b0;
    ppuStack_34 = ppuStack_ac;
    ppuStack_30 = ppuStack_a8;
    ppuStack_2c = ppuStack_a4;
    ppuStack_28 = ppuStack_a0;
    if (local_90[(int)local_88 * 3 + 0x85] == (undefined4 ***)0x80000000) break;
    local_9c = local_90[(int)local_88 * 3 + 0x85];
    local_98 = local_d8;
    ppuStack_94 = local_d4;
    local_90 = (undefined4 ****)local_cc;
    local_8c = local_c8;
    local_88 = local_c4;
    ppuStack_84 = ppuStack_c0;
    ppuStack_80 = ppuStack_bc;
    ppuStack_7c = ppuStack_b8;
    local_78 = local_b4;
    ppuStack_74 = local_b0;
    ppuStack_70 = ppuStack_ac;
    ppuStack_6c = ppuStack_a8;
    ppuStack_68 = ppuStack_a4;
    ppuStack_64 = ppuStack_a0;
    FUN_006c200c(&local_60,&local_108,&local_9c);
    if (local_50 != (undefined4 **)0x80000007) {
      FUN_00ba8128(&local_60);
    }
  }
  FUN_006c11a8(local_fc);
  param_1[6] = iVar4;
  param_1[5] = ppuVar2;
  param_1[4] = ppppuVar1;
  param_1[1] = local_108;
  param_1[2] = uStack_104;
  param_1[3] = local_100;
  *param_1 = 1;
  param_1[7] = 0;
  FUN_00a1ed90(local_138);
  return;
}

