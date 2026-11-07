// FUN_007d0eb0 @ 007d0eb0 size=848 calls_out=7 calls_in=0
// strings: 

void FUN_007d0eb0(undefined4 param_1,undefined4 param_2)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 ***pppuVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_110;
  undefined4 local_10c;
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
  undefined4 *local_3c [3];
  
  DataMemoryBarrier(0xb);
  if (DAT_018ce310 != 0) {
    local_e8 = &local_78;
    local_78 = &DAT_018ce2b0;
    FUN_015eedc4(&DAT_018ce310,1,&local_e8,&DAT_0185eaac,&DAT_018ac9b8);
  }
  iVar5 = DAT_018ce2d8;
  uVar6 = DAT_018ce2d4;
  if (DAT_018ce2d8 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(DAT_018ce2d8);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar5);
    }
  }
  FUN_016dd1aa(iVar3,uVar6,iVar5);
  local_b4 = DAT_018ce2e4;
  local_b8 = DAT_018ce2e0;
  local_9c = DAT_018ce2fc;
  local_98 = DAT_018ce300;
  local_90 = DAT_018ce308;
  local_8c = DAT_018ce30c;
  uVar6 = DAT_018ce2b4;
  local_bc = DAT_018ce2dc;
  local_d0 = DAT_018ce2c8;
  local_94 = DAT_018ce304;
  pppuVar4 = (undefined4 ***)DAT_018ce2b0;
  if (DAT_018ce2b8 == -0x80000000) {
    local_e8 = (undefined4 ***)&DAT_80000000;
  }
  else {
    FUN_00835bfc(&local_e8,DAT_018ce2bc,DAT_018ce2c0);
    local_110 = local_e4;
    local_10c = DAT_018ce2c4;
  }
  local_b0 = DAT_018ce2e8;
  uStack_ac = DAT_018ce2ec;
  uStack_a8 = DAT_018ce2f0;
  uStack_a4 = DAT_018ce2f4;
  uStack_a0 = DAT_018ce2f8;
  local_dc = local_110;
  local_d4 = local_10c;
  DataMemoryBarrier(0xb);
  local_e4 = uVar6;
  local_e0 = local_e8;
  local_c8 = iVar5;
  local_c4 = iVar3;
  local_c0 = iVar5;
  if (DAT_018dab00 != 0) {
    local_78 = local_3c;
    local_3c[0] = &DAT_018dab00;
    local_e8 = pppuVar4;
    FUN_015eedc4(&DAT_018dab00,1,&local_78,&DAT_0185eae8,&DAT_018ac9b8);
    pppuVar4 = local_e8;
  }
  local_e8 = pppuVar4;
  local_80 = DAT_018dab08;
  local_7c = DAT_018dab0c;
  do {
    iVar5 = *DAT_018dab04;
    bVar2 = (bool)hasExclusiveAccess(DAT_018dab04);
  } while (!bVar2);
  *DAT_018dab04 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x7d11f0);
    (*pcVar1)();
  }
  local_84 = DAT_018dab04;
  DataMemoryBarrier(0xb);
  if (DAT_018cc720 != 0) {
    local_78 = local_3c;
    local_3c[0] = &DAT_018cc6e8;
    FUN_015eedc4(&DAT_018cc720,1,&local_78,&DAT_0185eafc,&DAT_018ac9b8);
  }
  local_68 = DAT_018cc6f8;
  local_64 = DAT_018cc6fc;
  local_70 = DAT_018cc6f0;
  local_60 = DAT_018cc700;
  uStack_58 = DAT_018cc708;
  uStack_50 = DAT_018cc710;
  uStack_48 = DAT_018cc718;
  local_74 = DAT_018cc6ec;
  local_78 = DAT_018cc6e8;
  FUN_007ceac8(local_3c);
  FUN_007c91dc(param_1,param_2,3,0x72,2,3,0,4,0,&local_e8,&local_84,4,2,4,&local_78,0,local_3c,0,0,0
              );
  return;
}

