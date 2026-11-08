// FUN_01b4fe04 @ 01b4fe04 size=176 calls_out=2 calls_in=0
// strings: 

void FUN_01b4fe04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_20 [4];
  int local_1c;
  
  local_1c = DAT_01d53560;
  *(undefined4 *)(param_1 + 0x218) = 0;
  *(undefined4 *)(param_1 + 0x21c) = 0;
  iVar1 = FUN_01b4fc7c(param_1 + 8,local_20,param_2,param_3,param_4);
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x241) = local_20[0];
  }
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return;
}

