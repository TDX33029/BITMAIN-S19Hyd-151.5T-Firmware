// FUN_007cf8bc @ 007cf8bc size=856 calls_out=7 calls_in=0
// strings: 

void FUN_007cf8bc(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 ***pppuVar4;
  int iVar5;
  undefined4 uVar6;
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
  undefined4 *local_3c [3];
  
  DataMemoryBarrier(0xb);
  if (DAT_018ce2a8 != 0) {
    local_e8 = &local_78;
    local_78 = &DAT_018ce248;
    FUN_015eedc4(&DAT_018ce2a8,1,&local_e8,&DAT_0185eaac,&DAT_018ac9b8);
  }
  iVar5 = DAT_018ce270;
  uVar6 = DAT_018ce26c;
  if (DAT_018ce270 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(DAT_018ce270);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar5);
    }
  }
  FUN_016dd1aa(iVar3,uVar6,iVar5);
  local_8c = DAT_018ce2a4;
  local_b4 = DAT_018ce27c;
  local_bc = DAT_018ce274;
  local_b8 = DAT_018ce278;
  local_9c = DAT_018ce294;
  uVar6 = DAT_018ce24c;
  local_d0 = DAT_018ce260;
  local_98 = DAT_018ce298;
  local_94 = DAT_018ce29c;
  local_90 = DAT_018ce2a0;
  pppuVar4 = (undefined4 ***)DAT_018ce248;
  if (DAT_018ce250 == -0x80000000) {
    local_e8 = (undefined4 ***)&DAT_80000000;
    local_e4 = 0x7cf964;
  }
  else {
    FUN_00835bfc(&local_e8,DAT_018ce254,DAT_018ce258);
    local_108 = DAT_018ce25c;
  }
  local_b0 = DAT_018ce280;
  uStack_ac = DAT_018ce284;
  uStack_a8 = DAT_018ce288;
  uStack_a4 = DAT_018ce28c;
  uStack_a0 = DAT_018ce290;
  local_d4 = local_108;
  DataMemoryBarrier(0xb);
  local_e0 = local_e8;
  local_dc = local_e4;
  local_c8 = iVar5;
  local_c4 = iVar3;
  local_c0 = iVar5;
  if (DAT_018dab30 != 0) {
    local_78 = local_3c;
    local_3c[0] = &DAT_018dab30;
    local_e8 = pppuVar4;
    local_e4 = uVar6;
    FUN_015eedc4(&DAT_018dab30,1,&local_78,&DAT_0185eae8,&DAT_018ac9b8);
    pppuVar4 = local_e8;
    uVar6 = local_e4;
  }
  local_e4 = uVar6;
  local_e8 = pppuVar4;
  local_80 = DAT_018dab38;
  local_7c = DAT_018dab3c;
  do {
    iVar5 = *DAT_018dab34;
    bVar2 = (bool)hasExclusiveAccess(DAT_018dab34);
  } while (!bVar2);
  *DAT_018dab34 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x7cfc04);
    (*pcVar1)();
  }
  local_84 = DAT_018dab34;
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
  FUN_007c91dc(param_1,0xf,3,0x6c,2,3,8,4,0,&local_e8,&local_84,4,2,4,&local_78,0,local_3c,0,0xf0101
               ,0);
  return;
}

