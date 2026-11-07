// FUN_0078fd60 @ 0078fd60 size=736 calls_out=9 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0078fd60(uint param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined4 local_2e8;
  undefined4 uStack_2e4;
  undefined4 uStack_2e0;
  int local_2dc;
  int iStack_2d8;
  int iStack_2d4;
  undefined2 local_2d0;
  undefined4 local_208 [3];
  undefined4 local_1fc;
  ushort local_1f0;
  uint local_1ee;
  undefined2 local_1ea;
  undefined4 local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined2 local_1d4;
  undefined2 local_1d0;
  undefined2 local_1b0;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined1 *local_110;
  undefined1 *local_100;
  undefined1 *local_f0;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_d8;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined2 local_b8;
  undefined1 local_b6;
  undefined2 local_b5;
  undefined1 local_b3;
  undefined2 local_b2;
  undefined1 local_b0;
  undefined2 local_af;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  int local_98;
  int local_94;
  int local_90;
  undefined4 local_88 [3];
  undefined4 local_7c;
  ushort local_70;
  uint local_6e;
  undefined2 local_6a;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined2 local_54;
  undefined2 local_50;
  undefined2 local_30;
  
  local_a4 = 4;
  local_a0 = 0;
  local_a8 = 0;
  iVar3 = thunk_FUN_01be5118(0x2e0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,0x2e0);
  }
  local_98 = 8;
  local_90 = 0;
  iVar8 = 0;
  uVar5 = param_1;
  iVar7 = 0;
  local_94 = iVar3;
  do {
    iVar2 = local_90;
    uVar6 = *(uint *)((int)&DAT_004760a4 + -iVar7);
    bVar9 = (""[-iVar7] & 1U) == 0;
    if (bVar9) {
      local_1ea = 0x35;
    }
    else {
      FUN_01bed4e2(&local_128,(int)&DAT_004760a8 - iVar7,0xc);
      local_1ea = (undefined2)(uVar6 >> 0x10);
      uVar6 = (uVar5 & 0xffff) + uVar6 * 0x10000;
    }
    local_1e8 = local_128;
    uStack_1e4 = local_124;
    uStack_1e0 = local_120;
    local_1f0 = (ushort)!bVar9;
    local_68 = local_128;
    uStack_64 = local_124;
    uStack_60 = local_120;
    local_30 = 0x101;
    local_54 = 0x35;
    local_1d4 = 0x35;
    local_1b0 = 0x100;
    local_50 = 2;
    local_1d0 = 2;
    local_58 = 0;
    local_5c = 0;
    local_7c = 0x80000000;
    local_88[0] = 0x80000000;
    local_1d8 = 0;
    local_1dc = 0;
    local_1fc = 0x80000000;
    local_208[0] = 0x80000000;
    local_1ee = uVar6;
    local_70 = local_1f0;
    local_6e = uVar6;
    local_6a = local_1ea;
    if (iVar2 == local_98) {
      FUN_0140bd8c(&local_98);
      iVar3 = local_94;
    }
    iVar1 = local_98;
    FUN_01bed4e2(iVar3 + iVar8,local_208,0x5c);
    local_90 = iVar2 + 1;
    if (local_90 == iVar1) {
      FUN_0140bd8c(&local_98);
      iVar3 = local_94;
    }
    FUN_01bed4e2(iVar3 + iVar8 + 0x5c,local_88,0x5c);
    iStack_2d4 = iVar2 + 2;
    iVar8 = iVar8 + 0xb8;
    bVar9 = iVar7 != -0x33;
    uVar5 = uVar6;
    iVar7 = iVar7 + -0x11;
    local_90 = iStack_2d4;
  } while (bVar9);
  local_2dc = local_98;
  iStack_2d8 = local_94;
  local_2d0 = 2;
  local_2e8 = local_a8;
  uStack_2e4 = local_a4;
  uStack_2e0 = local_a0;
  uVar4 = FUN_0140a0d4();
  FUN_014044d8(local_208,&local_2e8,uVar4);
  local_cc = FUN_0140ade8();
  local_bc = 2;
  local_128 = 5;
  local_d8 = 0x80000000;
  local_f0 = &DAT_3b9aca00;
  local_100 = &DAT_3b9aca00;
  local_110 = &DAT_3b9aca00;
  local_af = 0x201;
  local_124 = 0;
  local_e4 = 0;
  local_e8 = 0;
  local_b6 = 0;
  local_120 = 0;
  local_c8 = 1;
  local_b3 = 1;
  local_b5 = 1;
  local_c4 = 1;
  local_b2 = 0;
  local_b0 = 0;
  local_e0 = 0;
  local_c0 = 0;
  local_b8 = 0x101;
  FUN_007900b4(&local_2e8,local_208,&local_128);
  FUN_00790118(param_1,&local_2e8);
  return;
}

