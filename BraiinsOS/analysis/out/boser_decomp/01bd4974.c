// FUN_01bd4974 @ 01bd4974 size=604 calls_out=8 calls_in=2
// strings: 

undefined8 FUN_01bd4974(int param_1,undefined4 param_2)

{
  int iVar1;
  uint uVar2;
  uint extraout_r2;
  uint extraout_r2_00;
  uint extraout_r2_01;
  uint extraout_r2_02;
  int iVar3;
  bool bVar4;
  undefined1 auStack_ec [32];
  undefined1 auStack_cc [32];
  undefined1 auStack_ac [32];
  undefined1 auStack_8c [32];
  undefined1 auStack_6c [32];
  undefined1 auStack_4c [32];
  int local_2c;
  
  bVar4 = true;
  iVar3 = 0x1f;
  local_2c = DAT_01d53560;
  FUN_01bed93e(auStack_ec,0,0x60,0);
  while( true ) {
    iVar1 = FUN_01bd3ecc(param_2,iVar3 + 0xe0);
    iVar1 = FUN_01bd3ecc(param_2,iVar3 + 0xa0,iVar1 << 3);
    iVar1 = FUN_01bd3ecc(param_2,iVar3 + 0x60,extraout_r2 | iVar1 << 2);
    uVar2 = FUN_01bd3ecc(param_2,iVar3 + 0x20);
    FUN_01bd3f6c(extraout_r2_00 | uVar2 | iVar1 << 1,&DAT_005646c4,auStack_8c);
    if (bVar4) {
      FUN_01bd3b08(auStack_ec,auStack_8c);
      FUN_01bd3b08(auStack_cc,auStack_6c);
      FUN_01bd3b08(auStack_ac,auStack_4c);
    }
    else {
      FUN_01bd4000(auStack_ec,auStack_cc,auStack_ac,auStack_ec,auStack_cc,auStack_ac,1,auStack_8c,
                   auStack_6c,auStack_4c);
    }
    iVar1 = FUN_01bd3ecc(param_2,iVar3 + 0xc0);
    iVar1 = FUN_01bd3ecc(param_2,iVar3 + 0x80,iVar1 << 3);
    iVar1 = FUN_01bd3ecc(param_2,iVar3 + 0x40,extraout_r2_01 | iVar1 << 2);
    uVar2 = FUN_01bd3ecc(param_2,iVar3);
    FUN_01bd3f6c(extraout_r2_02 | uVar2 | iVar1 << 1,&DAT_00564304,auStack_8c);
    FUN_01bd4000(auStack_ec,auStack_cc,auStack_ac,auStack_ec,auStack_cc,auStack_ac,1,auStack_8c,
                 auStack_6c,auStack_4c);
    bVar4 = iVar3 == 0;
    iVar3 = iVar3 + -1;
    if (bVar4) break;
    bVar4 = false;
    FUN_01bd3cb8(auStack_ec,auStack_cc,auStack_ac,auStack_ec,auStack_cc,auStack_ac);
  }
  FUN_01bd3efc(param_1,auStack_ec);
  FUN_01bd3efc(param_1 + 0x20,auStack_cc);
  FUN_01bd3efc(param_1 + 0x40,auStack_ac);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

