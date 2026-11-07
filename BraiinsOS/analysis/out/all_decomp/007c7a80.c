// FUN_007c7a80 @ 007c7a80 size=912 calls_out=7 calls_in=0
// strings: 

void FUN_007c7a80(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 **ppuVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_e4;
  undefined4 local_e0;
  int ***local_dc;
  undefined4 local_bc;
  undefined4 *local_b8;
  undefined4 local_b4;
  int ***local_b0;
  undefined4 local_ac;
  int ***local_a8;
  undefined4 local_a4;
  undefined4 local_9c;
  undefined8 local_98;
  int local_90;
  int local_8c;
  int local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined1 local_54;
  int *local_4c;
  undefined4 local_48;
  undefined2 local_44;
  int **local_40 [4];
  
  local_b8 = (undefined4 *)thunk_FUN_016d4a50(0xfc);
  if (local_b8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xfc);
  }
  local_b8[1] = 0;
  local_b8[2] = 0;
  local_b8[3] = 0;
  local_b8[4] = 0;
  local_b8[5] = 0x41700000;
  local_b8[6] = 1;
  local_b8[9] = 3;
  *(undefined2 *)(local_b8 + 7) = 0x4800;
  *local_b8 = 3;
  local_b8[10] = 0;
  local_b8[0xb] = 0;
  local_b8[0xc] = 0;
  local_b8[0xd] = 0;
  local_b8[0xe] = 0x41700000;
  local_b8[0xf] = 1;
  local_b8[0x12] = 3;
  *(undefined2 *)(local_b8 + 0x10) = 0x4900;
  local_b8[0x13] = 0;
  local_b8[0x14] = 0;
  local_b8[0x15] = 0;
  local_b8[0x16] = 0;
  local_b8[0x17] = 0x41700000;
  local_b8[0x18] = 1;
  local_b8[0x1b] = 3;
  *(undefined2 *)(local_b8 + 0x19) = 0x4a00;
  local_b8[0x1c] = 0;
  local_b8[0x1d] = 0;
  local_b8[0x1e] = 0;
  local_b8[0x1f] = 0;
  local_b8[0x20] = 0x41700000;
  local_b8[0x21] = 1;
  local_b8[0x24] = 3;
  *(undefined2 *)(local_b8 + 0x22) = 0x4b00;
  local_b8[0x25] = 0;
  local_b8[0x26] = 0;
  local_b8[0x27] = 0;
  local_b8[0x28] = 0;
  local_b8[0x29] = 0x41700000;
  local_b8[0x2a] = 1;
  local_b8[0x2d] = 3;
  *(undefined2 *)(local_b8 + 0x2b) = 0x4c00;
  local_b8[0x2e] = 0;
  local_b8[0x2f] = 0;
  local_b8[0x30] = 0;
  local_b8[0x31] = 0;
  local_b8[0x32] = 0x41700000;
  local_b8[0x33] = 1;
  *(undefined2 *)(local_b8 + 0x34) = 0x6001;
  local_b8[0x36] = 3;
  local_b8[0x37] = 0;
  local_b8[0x38] = 0;
  local_b8[0x39] = 0;
  local_b8[0x3a] = 0;
  local_b8[0x3b] = 0x41700000;
  local_b8[0x3c] = 1;
  *(undefined2 *)(local_b8 + 0x3d) = 0x6101;
  local_b4 = 7;
  local_bc = 7;
  DataMemoryBarrier(0xb);
  if (DAT_018ce2a8 != 0) {
    local_b0 = local_40;
    local_40[0] = (int **)&DAT_018ce248;
    FUN_015eedc4(&DAT_018ce2a8,1,&local_b0,&DAT_0185eaac,&DAT_018ac9b8);
  }
  iVar6 = DAT_018ce270;
  uVar5 = DAT_018ce26c;
  if (DAT_018ce270 == 0) {
    iVar3 = 1;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(DAT_018ce270);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar6);
    }
  }
  FUN_016dd1aa(iVar3,uVar5,iVar6);
  local_7c = DAT_018ce27c;
  local_80 = DAT_018ce278;
  local_64 = DAT_018ce294;
  local_60 = DAT_018ce298;
  local_58 = DAT_018ce2a0;
  local_54 = DAT_018ce2a4;
  uVar5 = DAT_018ce24c;
  local_84 = DAT_018ce274;
  local_98 = DAT_018ce260;
  local_5c = DAT_018ce29c;
  ppuVar4 = DAT_018ce248;
  if (DAT_018ce250 == -0x80000000) {
    local_dc = (int ***)&DAT_80000000;
  }
  else {
    FUN_00835bfc(&local_b0,DAT_018ce254,DAT_018ce258);
    local_dc = local_b0;
    local_e4 = local_ac;
    local_e0 = DAT_018ce25c;
  }
  local_78 = DAT_018ce280;
  uStack_74 = DAT_018ce284;
  uStack_70 = DAT_018ce288;
  uStack_6c = DAT_018ce28c;
  uStack_68 = DAT_018ce290;
  local_a4 = local_e4;
  local_9c = local_e0;
  local_a8 = local_dc;
  DataMemoryBarrier(0xb);
  local_b0 = (int ***)ppuVar4;
  local_ac = uVar5;
  local_90 = iVar6;
  local_8c = iVar3;
  local_88 = iVar6;
  if (DAT_018dab30 != 0) {
    local_40[0] = &local_4c;
    local_4c = &DAT_018dab30;
    FUN_015eedc4(&DAT_018dab30,1,local_40,&DAT_0185eae8,&DAT_018ac9b8);
  }
  local_48 = DAT_018dab38;
  local_44 = DAT_018dab3c;
  do {
    iVar6 = *DAT_018dab34;
    bVar2 = (bool)hasExclusiveAccess(DAT_018dab34);
  } while (!bVar2);
  *DAT_018dab34 = iVar6 + 1;
  if (iVar6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x7c7e0c);
    (*pcVar1)();
  }
  local_4c = DAT_018dab34;
  local_40[0] = (int **)0x0;
  FUN_007c7134(param_1,4,4,2,&local_bc,&local_b0,&local_4c,local_40);
  return;
}

