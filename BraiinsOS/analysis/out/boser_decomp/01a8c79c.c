// FUN_01a8c79c @ 01a8c79c size=436 calls_out=9 calls_in=2
// strings: 

int FUN_01a8c79c(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 local_1b0;
  undefined4 local_1ac;
  undefined1 auStack_1a8 [88];
  undefined4 local_150;
  undefined4 local_14c;
  undefined *local_148;
  uint local_138;
  undefined1 auStack_134 [20];
  undefined4 local_120;
  undefined4 local_11c;
  undefined1 auStack_118 [4];
  undefined4 local_114;
  undefined4 local_108;
  undefined4 local_fc;
  undefined4 local_f0;
  undefined4 local_e4;
  undefined4 local_d8;
  undefined4 local_cc;
  undefined4 local_c0;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined *local_ac;
  undefined4 local_a8;
  undefined1 auStack_90 [48];
  undefined1 auStack_60 [60];
  undefined1 local_24;
  
  uVar1 = FUN_01a64fe8();
  FUN_00711858(&local_1b0,uVar1);
  uVar1 = FUN_01a7f90c();
  FUN_009436dc(&local_150);
  local_150 = 2;
  local_148 = &DAT_01d2da8c;
  local_14c = uVar1;
  FUN_01bed4e2(auStack_118,&local_1b0,0x70);
  local_11c = 1;
  local_120 = 1;
  iVar2 = thunk_FUN_01be5118(0x78);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x78);
  }
  FUN_01bed4e2(iVar2,&local_120,0x78);
  local_a8 = 0;
  local_ac = &DAT_01d2db74;
  local_b0 = 1;
  local_b4 = 0;
  local_c0 = 0;
  local_cc = 0;
  local_d8 = 0;
  local_e4 = 0;
  local_f0 = 0;
  local_fc = 0;
  local_108 = 0;
  local_114 = 0;
  local_120 = 0;
  uVar1 = FUN_01a7f90c();
  FUN_009436dc(&local_b4);
  local_b4 = 2;
  local_ac = &DAT_01d2da8c;
  local_b0 = uVar1;
  FUN_01bed4e2(&local_1b0,&local_120,0x8c);
  if (1 < local_138) {
    FUN_012840cc(auStack_134);
  }
  local_138 = 1;
  FUN_01bed4e2(&local_120,&local_1b0,0x8c);
  FUN_00711858(auStack_90,iVar2);
  FUN_01a65990(auStack_60,&local_120);
  local_24 = 0;
  FUN_01bed4e2(auStack_1a8,auStack_90,0x70);
  local_1ac = 1;
  local_1b0 = 1;
  iVar2 = thunk_FUN_01be5118(0x78);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x78);
  }
  FUN_01bed4e2(iVar2,&local_1b0,0x78);
  return iVar2;
}

