// FUN_00b80634 @ 00b80634 size=80 calls_out=3 calls_in=0
// strings: 

int FUN_00b80634(undefined4 param_1,undefined1 param_2)

{
  int iVar1;
  undefined4 local_300;
  undefined1 local_2fc;
  undefined1 local_2fb;
  
  local_2fb = 0;
  local_300 = param_1;
  local_2fc = param_2;
  iVar1 = thunk_FUN_01be5118(0x2ec);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x2ec);
  }
  FUN_01bed4e2(iVar1,&local_300,0x2ec);
  return iVar1;
}

