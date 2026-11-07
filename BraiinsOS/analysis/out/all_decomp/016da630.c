// FUN_016da630 @ 016da630 size=118 calls_out=6 calls_in=4
// strings: 

undefined4 FUN_016da630(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_20 [8];
  
  if (param_1 - 0x20U < 3 || 0x3f < param_1 - 1U) {
    puVar2 = (undefined4 *)FUN_016d2bc8();
    uVar1 = 0xffffffff;
    *puVar2 = 0x16;
  }
  else {
    if (param_1 != 6) {
      uVar1 = FUN_016da51c();
      return uVar1;
    }
    FUN_016da47c(auStack_20);
    FUN_016ddcc0(&DAT_018ddafc);
    uVar1 = FUN_016da51c(6,param_2,param_3);
    FUN_016dddc0(&DAT_018ddafc);
    FUN_016da4b4(auStack_20);
  }
  return uVar1;
}

