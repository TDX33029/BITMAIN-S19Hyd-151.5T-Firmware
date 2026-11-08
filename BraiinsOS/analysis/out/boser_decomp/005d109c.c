// FUN_005d109c @ 005d109c size=92 calls_out=3 calls_in=3
// strings: 

int FUN_005d109c(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_1c8 [368];
  undefined1 auStack_58 [68];
  undefined1 local_14;
  
  FUN_01bed4e2(auStack_58,param_1,0x44);
  local_14 = 0;
  iVar1 = thunk_FUN_01be5118(0x1b8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x1b8);
  }
  FUN_01bed4e2(iVar1,auStack_1c8,0x1b8);
  return iVar1;
}

