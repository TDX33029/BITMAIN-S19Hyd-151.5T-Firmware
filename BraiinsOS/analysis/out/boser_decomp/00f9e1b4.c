// FUN_00f9e1b4 @ 00f9e1b4 size=660 calls_out=14 calls_in=3
// strings: 

void FUN_00f9e1b4(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_1f4 [24];
  undefined4 local_1dc;
  undefined4 local_1d8;
  undefined *local_1d4;
  undefined1 auStack_1d0 [144];
  undefined1 auStack_140 [48];
  undefined1 auStack_110 [48];
  undefined4 local_e0;
  undefined4 local_dc;
  undefined *local_d8;
  undefined1 local_d4;
  uint local_c8;
  undefined1 auStack_c4 [20];
  undefined4 local_b0;
  undefined4 local_ac;
  undefined1 auStack_a8 [4];
  undefined4 local_a4;
  undefined4 local_98;
  undefined4 local_8c;
  undefined4 local_80;
  undefined4 local_74;
  undefined4 local_68;
  undefined4 local_5c;
  undefined4 local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined *local_3c;
  undefined4 local_38;
  
  FUN_00a41ecc(auStack_1f4,*(undefined4 *)(param_1 + 0x8c),*(undefined4 *)(param_1 + 0x90),
               *(undefined4 *)(param_1 + 0x1fc),*(undefined4 *)(param_1 + 0x200));
  uVar1 = FUN_00ff793c();
  local_38 = 0;
  local_3c = &DAT_01c1e988;
  local_40 = 1;
  local_44 = 0;
  local_50 = 0;
  local_5c = 0;
  local_68 = 0;
  local_74 = 0;
  local_80 = 0;
  local_8c = 0;
  local_98 = 0;
  local_a4 = 0;
  local_b0 = 0;
  local_1d8 = FUN_011db52c();
  local_1dc = 2;
  local_1d4 = &DAT_01c2119c;
  FUN_00fec6ac(auStack_140,&local_b0,&local_1dc);
  uVar1 = FUN_0100d714(uVar1,&DAT_005327c4,1,auStack_140,&DAT_01c1b344);
  FUN_00fec824(&local_b0);
  uVar1 = FUN_0100d714(uVar1,&DAT_003f35e7,0xc,&local_b0,&DAT_01c1b354);
  FUN_00fef934(auStack_140,uVar1);
  uVar1 = FUN_011db52c();
  FUN_00feb76c(&local_e0);
  local_e0 = 2;
  local_d8 = &DAT_01c2119c;
  local_dc = uVar1;
  FUN_01bed4e2(auStack_a8,auStack_140,0x70);
  local_ac = 1;
  local_b0 = 1;
  iVar2 = thunk_FUN_01be5118(0x78);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x78);
  }
  FUN_01bed4e2(iVar2,&local_b0,0x78);
  local_38 = 0;
  local_44 = 0;
  local_40 = 1;
  local_3c = &DAT_01c1e988;
  local_50 = 0;
  local_5c = 0;
  local_68 = 0;
  local_74 = 0;
  local_80 = 0;
  local_8c = 0;
  local_98 = 0;
  local_a4 = 0;
  local_b0 = 0;
  uVar1 = FUN_011db52c();
  FUN_00feb76c(&local_44);
  local_44 = 2;
  local_3c = &DAT_01c2119c;
  local_40 = uVar1;
  FUN_01bed4e2(auStack_140,&local_b0,0x8c);
  if (1 < local_c8) {
    FUN_012840cc(auStack_c4);
  }
  local_c8 = 1;
  FUN_01bed4e2(auStack_1d0,auStack_140,0x8c);
  FUN_00fef934(auStack_140,iVar2);
  FUN_00ff7bcc(auStack_110,auStack_1d0);
  local_d4 = 0;
  FUN_01bed4e2(auStack_a8,auStack_140,0x70);
  local_ac = 1;
  local_b0 = 1;
  iVar2 = thunk_FUN_01be5118(0x78);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x78);
  }
  FUN_01bed4e2(iVar2,&local_b0,0x78);
  FUN_00fecd58(iVar2,auStack_1f4);
  return;
}

