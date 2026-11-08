// FUN_007d1b98 @ 007d1b98 size=988 calls_out=7 calls_in=0
// strings: 

void FUN_007d1b98(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 ***pppuVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 local_108;
  undefined4 local_104;
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
  if (DAT_018cd5e0 != 0) {
    local_e8 = &local_78;
    local_78 = &DAT_018cd580;
    FUN_015eedc4(&DAT_018cd5e0,1,&local_e8,&DAT_0185eaac,&DAT_018ac9b8);
  }
  iVar5 = DAT_018cd5a8;
  uVar6 = DAT_018cd5a4;
  if (DAT_018cd5a8 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(DAT_018cd5a8);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar5);
    }
  }
  FUN_016dd1aa(iVar3,uVar6,iVar5);
  local_b4 = DAT_018cd5b4;
  local_9c = DAT_018cd5cc;
  local_98 = DAT_018cd5d0;
  local_90 = DAT_018cd5d8;
  local_8c = DAT_018cd5dc;
  uVar6 = DAT_018cd584;
  local_bc = DAT_018cd5ac;
  local_b8 = DAT_018cd5b0;
  local_d0 = DAT_018cd598;
  local_94 = DAT_018cd5d4;
  pppuVar4 = (undefined4 ***)DAT_018cd580;
  if (DAT_018cd588 == -0x80000000) {
    local_e8 = (undefined4 ***)&DAT_80000000;
  }
  else {
    FUN_00835bfc(&local_e8,DAT_018cd58c,DAT_018cd590);
    local_108 = local_e4;
    local_104 = DAT_018cd594;
  }
  local_b0 = DAT_018cd5b8;
  uStack_ac = DAT_018cd5bc;
  uStack_a8 = DAT_018cd5c0;
  uStack_a4 = DAT_018cd5c4;
  uStack_a0 = DAT_018cd5c8;
  local_dc = local_108;
  local_d4 = local_104;
  DataMemoryBarrier(0xb);
  local_e4 = uVar6;
  local_e0 = local_e8;
  local_c8 = iVar5;
  local_c4 = iVar3;
  local_c0 = iVar5;
  if (DAT_018daae0 != 0) {
    local_78 = &local_3c;
    local_3c = &DAT_018daae0;
    local_e8 = pppuVar4;
    FUN_015eedc4(&DAT_018daae0,1,&local_78,&DAT_0185eae8,&DAT_018ac9b8);
    pppuVar4 = local_e8;
  }
  local_e8 = pppuVar4;
  local_80 = DAT_018daae8;
  local_7c = DAT_018daaec;
  do {
    iVar5 = *DAT_018daae4;
    bVar2 = (bool)hasExclusiveAccess(DAT_018daae4);
  } while (!bVar2);
  *DAT_018daae4 = iVar5 + 1;
  if (iVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x7d1f64);
    (*pcVar1)();
  }
  local_84 = DAT_018daae4;
  DataMemoryBarrier(0xb);
  if (DAT_018cc7a0 != 0) {
    local_78 = &local_3c;
    local_3c = &DAT_018cc768;
    FUN_015eedc4(&DAT_018cc7a0,1,&local_78,&DAT_0185eafc,&DAT_018ac9b8);
  }
  local_68 = DAT_018cc778;
  local_64 = DAT_018cc77c;
  local_70 = DAT_018cc770;
  local_60 = DAT_018cc780;
  uStack_58 = DAT_018cc788;
  uStack_50 = DAT_018cc790;
  uStack_48 = DAT_018cc798;
  local_74 = DAT_018cc76c;
  local_78 = DAT_018cc768;
  local_38 = (undefined4 *)thunk_FUN_016d4a50(0x48);
  if (local_38 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x48);
  }
  *(undefined2 *)(local_38 + 0x10) = 0x4c00;
  local_38[0xc] = 0x3e0c49ba;
  *(undefined2 *)(local_38 + 7) = 0x4800;
  local_38[0xd] = 0x3ee56042;
  local_38[9] = 3;
  local_38[3] = 0x3f6d0e56;
  local_38[4] = 0x3d072b02;
  *local_38 = 3;
  *(undefined1 *)(local_38 + 0xf) = 1;
  local_38[0xe] = 0x41700000;
  local_38[5] = 0x41700000;
  local_38[10] = 0;
  *(undefined1 *)(local_38 + 6) = 0;
  local_38[1] = 0;
  local_34 = 2;
  local_3c = (undefined4 *)0x2;
  FUN_007c91dc(param_1,9,7,0x4d,2,3,0x20,4,0,&local_e8,&local_84,0,2,4,&local_78,0,&local_3c,1,
               0x40401,0);
  return;
}

