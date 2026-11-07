// FUN_01bea86c @ 01bea86c size=118 calls_out=6 calls_in=4
// strings: 

undefined4 FUN_01bea86c(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  undefined1 auStack_20 [8];
  
  if (param_1 - 0x20U < 3 || 0x3f < param_1 - 1U) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar1 = 0xffffffff;
    *puVar2 = 0x16;
  }
  else {
    if (param_1 != 6) {
      uVar1 = FUN_01bea758();
      return uVar1;
    }
    FUN_01bea6b8(auStack_20);
    FUN_01bedf2c(&DAT_01d53564);
    uVar1 = FUN_01bea758(6,param_2,param_3);
    FUN_01bee02c(&DAT_01d53564);
    FUN_01bea6f0(auStack_20);
  }
  return uVar1;
}

