// FUN_01b4fd58 @ 01b4fd58 size=160 calls_out=2 calls_in=0
// strings: 

void FUN_01b4fd58(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_18 [4];
  int local_14;
  
  local_14 = DAT_01d53560;
  iVar1 = FUN_01b4fc7c(param_1 + 8,local_18,param_2,param_3,param_4);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x241) = local_18[0];
  }
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return;
}

