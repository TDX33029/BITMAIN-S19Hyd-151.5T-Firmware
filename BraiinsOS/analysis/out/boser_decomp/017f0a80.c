// FUN_017f0a80 @ 017f0a80 size=132 calls_out=3 calls_in=1
// strings: 

int FUN_017f0a80(undefined1 param_1)

{
  int iVar1;
  undefined4 local_60 [18];
  undefined2 local_18;
  undefined1 *local_14;
  undefined *local_10;
  
  local_14 = (undefined1 *)thunk_FUN_01be5118(1);
  if (local_14 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,1);
  }
  *local_14 = param_1;
  local_18 = 0;
  local_60[0] = 2;
  local_10 = &DAT_01d1c0c8;
  iVar1 = thunk_FUN_01be5118(0x54);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x54);
  }
  FUN_01bed4e2(iVar1,local_60,0x54);
  return iVar1;
}

