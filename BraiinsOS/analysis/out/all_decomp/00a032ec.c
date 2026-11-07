// FUN_00a032ec @ 00a032ec size=496 calls_out=5 calls_in=2
// strings: 

void FUN_00a032ec(undefined4 *param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined1 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  uint local_c0;
  uint local_bc;
  int local_b8;
  undefined4 local_b4;
  undefined1 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined1 local_94;
  undefined4 local_90;
  undefined1 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined1 local_70;
  int local_6c;
  uint local_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined1 local_58;
  int local_24;
  
  if (param_2 == 0) {
    local_bc = local_bc & 0xffffff00;
    local_fc = 1;
    local_100 = 1;
    local_c0 = local_c0 & 0xffffff00;
    local_c4 = 0;
    local_cc = 0;
    local_d0 = 0;
    local_d8 = 0;
    local_dc = 0;
    local_e4 = 0;
    local_e8 = 0;
    local_f0 = 0;
    local_f4 = 0;
    local_f8 = 0;
    local_c8 = 4;
    local_d4 = 4;
    local_e0 = 4;
    local_ec = 4;
    iVar4 = thunk_FUN_016d4a50(0x48);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x48);
    }
    FUN_016dd1aa(iVar4,&local_100,0x48);
    uVar3 = 2;
  }
  else {
    uVar2 = param_2 * 0x10;
    iVar4 = (0xffffffffU >> LZCOUNT(param_2)) + 1;
    if (param_2 + 1 < 2) {
      iVar4 = 1;
    }
    bVar6 = 0xffffffe < param_2;
    bVar5 = param_2 == 0xfffffff;
    if (param_2 < 0x10000000) {
      bVar6 = 0x7ffffffb < uVar2;
      bVar5 = uVar2 == 0x7ffffffc;
    }
    if (bVar6 && !bVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar2);
    }
    local_6c = thunk_FUN_016d4a50(uVar2);
    if (local_6c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar2);
    }
    local_bc = iVar4 << 1;
    uVar2 = 0;
    do {
      *(uint *)(local_6c + uVar2 * 0x10) = uVar2;
      uVar2 = uVar2 + 1;
    } while (param_2 != uVar2);
    local_5c = 1;
    uVar3 = 0;
    local_60 = 1;
    local_70 = 1;
    local_94 = 1;
    local_e0 = 0;
    local_100 = 0;
    local_58 = 0;
    local_74 = 0;
    local_78 = 4;
    local_7c = 0;
    local_80 = 0;
    local_84 = 4;
    local_88 = 0;
    local_8c = 0;
    local_90 = 0;
    local_98 = 0;
    local_9c = 4;
    local_a0 = 0;
    local_a4 = 0;
    local_a8 = 4;
    local_ac = 0;
    local_b0 = 0;
    local_b4 = 0;
    local_24 = 0;
    local_c0 = param_2;
    local_b8 = iVar4;
    local_68 = param_2;
    iVar1 = FUN_016d51b0(&local_24,0x20,0xc0);
    iVar4 = 0;
    if (iVar1 == 0) {
      iVar4 = local_24;
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0xc0);
    }
    FUN_016dd1aa(local_24,&local_100,0xc0);
  }
  *param_1 = uVar3;
  param_1[1] = iVar4;
  param_1[2] = uVar3;
  param_1[3] = iVar4;
  return;
}

