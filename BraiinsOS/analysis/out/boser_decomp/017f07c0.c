// FUN_017f07c0 @ 017f07c0 size=200 calls_out=5 calls_in=3
// strings: 

int FUN_017f07c0(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_70 [18];
  undefined2 local_28;
  undefined4 *local_24;
  undefined *local_20;
  
  local_24 = (undefined4 *)0x0;
  if (param_1 != 0) {
    iVar1 = FUN_01298504(param_2,1);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,param_2);
    }
    FUN_01bed4e2(iVar1,param_1,param_2);
    local_24 = (undefined4 *)thunk_FUN_01be5118(0xc);
    if (local_24 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0xc);
    }
    *local_24 = param_2;
    local_24[1] = iVar1;
    local_24[2] = param_2;
  }
  local_70[0] = 2;
  local_28 = 0;
  local_20 = &DAT_01d1cd18;
  iVar1 = thunk_FUN_01be5118(0x54);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x54);
  }
  FUN_01bed4e2(iVar1,local_70,0x54);
  return iVar1;
}

