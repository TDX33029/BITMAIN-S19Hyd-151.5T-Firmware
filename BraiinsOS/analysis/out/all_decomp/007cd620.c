// FUN_007cd620 @ 007cd620 size=1244 calls_out=7 calls_in=0
// strings: 

void FUN_007cd620(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 ***pppuVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 ***local_e8;
  undefined4 local_e4;
  undefined4 ***local_e0;
  undefined4 local_dc;
  undefined4 local_d4;
  undefined8 local_d0;
  int local_c8;
  int local_c4;
  int local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined1 local_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  int *local_84;
  undefined4 local_80;
  undefined2 local_7c;
  undefined4 **local_78;
  undefined4 local_74;
  undefined8 local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  
  DataMemoryBarrier(0xb);
  if (DAT_018cd648 != 0) {
    local_e8 = &local_78;
    local_78 = &DAT_018cd5e8;
    FUN_015eedc4(&DAT_018cd648,1,&local_e8,&DAT_0185eaac,&DAT_018ac9b8);
  }
  iVar5 = DAT_018cd610;
  uVar6 = DAT_018cd60c;
  if (DAT_018cd610 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(DAT_018cd610);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar5);
    }
  }
  FUN_016dd1aa(iVar3,uVar6,iVar5);
  local_b4 = DAT_018cd61c;
  local_b8 = DAT_018cd618;
  local_9c = DAT_018cd634;
  local_98 = DAT_018cd638;
  local_90 = DAT_018cd640;
  local_8c = DAT_018cd644;
  uVar6 = DAT_018cd5ec;
  local_bc = DAT_018cd614;
  local_d0 = DAT_018cd600;
  local_94 = DAT_018cd63c;
  pppuVar4 = (undefined4 ***)DAT_018cd5e8;
  if (DAT_018cd5f0 == -0x80000000) {
    local_e8 = (undefined4 ***)&DAT_80000000;
  }
  else {
    FUN_00835bfc(&local_e8,DAT_018cd5f4,DAT_018cd5f8);
    local_10c = local_e4;
    local_108 = DAT_018cd5fc;
  }
  local_b0 = DAT_018cd620;
  uStack_ac = DAT_018cd624;
  uStack_a8 = DAT_018cd628;
  uStack_a4 = DAT_018cd62c;
  uStack_a0 = DAT_018cd630;
  local_dc = local_10c;
  local_d4 = local_108;
  DataMemoryBarrier(0xb);
  local_e4 = uVar6;
  local_e0 = local_e8;
  local_c8 = iVar5;
  local_c4 = iVar3;
  local_c0 = iVar5;
  if (DAT_018daaf0 != 0) {
    local_78 = &local_3c;
    local_3c = &DAT_018daaf0;
    local_e8 = pppuVar4;
    FUN_015eedc4(&DAT_018daaf0,1,&local_78,&DAT_0185eae8,&DAT_018ac9b8);
    pppuVar4 = local_e8;
  }
  local_e8 = pppuVar4;
  local_80 = DAT_018daaf8;
  local_7c = DAT_018daafc;
  do {
    iVar5 = *DAT_018daaf4;
    bVar2 = (bool)hasExclusiveAccess(DAT_018daaf4);
  } while (!bVar2);
  *DAT_018daaf4 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x7cdaec);
    (*pcVar1)();
  }
  local_84 = DAT_018daaf4;
  DataMemoryBarrier(0xb);
  if (DAT_018cc7e0 != 0) {
    local_78 = &local_3c;
    local_3c = &DAT_018cc7a8;
    FUN_015eedc4(&DAT_018cc7e0,1,&local_78,&DAT_0185eafc,&DAT_018ac9b8);
  }
  local_68 = DAT_018cc7b8;
  local_64 = DAT_018cc7bc;
  local_70 = DAT_018cc7b0;
  local_60 = DAT_018cc7c0;
  uStack_58 = DAT_018cc7c8;
  uStack_50 = DAT_018cc7d0;
  uStack_48 = DAT_018cc7d8;
  local_74 = DAT_018cc7ac;
  local_78 = DAT_018cc7a8;
  local_38 = (undefined4 *)thunk_FUN_016d4a50(0xfc);
  if (local_38 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xfc);
  }
  local_38[0x38] = 0x3f5b645a;
  local_38[0x39] = 0x3e0c49ba;
  local_38[0x3a] = 0x41700000;
  local_38[0x2f] = 0x3f5b645a;
  local_38[0x30] = 0x3e0c49ba;
  local_38[0x31] = 0x41700000;
  local_38[0x27] = 0x3f60c49c;
  local_38[0x26] = 0x3f45e354;
  local_38[0x1e] = 0x3f19999a;
  local_38[0x1d] = 0x3ef7ced9;
  local_38[0x15] = 0x3f5eb852;
  *(undefined2 *)(local_38 + 0x3e) = 0x4c02;
  *(undefined2 *)(local_38 + 0x11) = 0x4800;
  *(undefined2 *)(local_38 + 0x35) = 0x4c02;
  *(undefined2 *)(local_38 + 0x2c) = 0x4c02;
  *(undefined2 *)(local_38 + 0x23) = 0x4c02;
  *(undefined2 *)(local_38 + 0x1a) = 0x4c02;
  local_38[0x12] = 1;
  local_38[0x13] = 0;
  local_38[0x14] = 0x3e09374c;
  *(undefined2 *)(local_38 + 0x10) = 0x100;
  *(undefined2 *)(local_38 + 7) = 0x100;
  local_38[0xf] = 6;
  *(undefined2 *)(local_38 + 8) = 0x4c00;
  local_38[6] = 5;
  local_38[0xc] = 0x3dc08312;
  local_38[3] = 0x3f6b851f;
  *(undefined2 *)(local_38 + 0x3d) = 1;
  local_38[0x3c] = 4;
  *(undefined1 *)(local_38 + 0x3b) = 1;
  local_38[0x36] = 1;
  local_38[0x37] = 4;
  *(undefined2 *)(local_38 + 0x34) = 1;
  local_38[0x33] = 3;
  *(undefined1 *)(local_38 + 0x32) = 0;
  local_38[0x2d] = 1;
  local_38[0x2e] = 3;
  *(undefined2 *)(local_38 + 0x2b) = 1;
  local_38[0x2a] = 2;
  *(undefined1 *)(local_38 + 0x29) = 0;
  local_38[0x24] = 1;
  local_38[0x25] = 2;
  local_38[0x28] = 0x41700000;
  *(undefined2 *)(local_38 + 0x22) = 0;
  local_38[0x21] = 1;
  *(undefined1 *)(local_38 + 0x20) = 1;
  local_38[0x1b] = 1;
  local_38[0x1c] = 1;
  local_38[0x1f] = 0x41700000;
  *(undefined2 *)(local_38 + 0x19) = 0;
  local_38[0x18] = 0;
  *(undefined1 *)(local_38 + 0x17) = 0;
  local_38[0x16] = 0x41700000;
  *(undefined1 *)(local_38 + 0xe) = 4;
  local_38[0xb] = 0x3f7ced91;
  local_38[0xd] = 0x41700000;
  local_38[4] = 0x41700000;
  local_38[9] = 0;
  *(undefined1 *)(local_38 + 5) = 3;
  local_38[2] = 0x3f7ced91;
  *local_38 = 0;
  local_34 = 7;
  local_3c = (undefined4 *)0x7;
  FUN_007c91dc(param_1,0x22,8,0xa0,1,3,0x10,4,0,&local_e8,&local_84,4,0,0,&local_78,3,&local_3c,1,
               0x30101,0);
  return;
}

