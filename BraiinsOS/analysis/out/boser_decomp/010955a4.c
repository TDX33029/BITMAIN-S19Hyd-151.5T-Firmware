// FUN_010955a4 @ 010955a4 size=92 calls_out=3 calls_in=2
// strings: 

int FUN_010955a4(undefined4 param_1)

{
  int iVar1;
  undefined4 local_3f0;
  undefined4 local_3ec;
  undefined4 local_3e0;
  undefined1 local_3d9;
  
  local_3ec = 0;
  local_3f0 = 0;
  local_3d9 = 0;
  local_3e0 = param_1;
  iVar1 = thunk_FUN_01be5118(0x3e0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x3e0);
  }
  FUN_01bed4e2(iVar1,&local_3f0,0x3e0);
  return iVar1;
}

