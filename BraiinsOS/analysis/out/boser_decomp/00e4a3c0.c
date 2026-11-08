// FUN_00e4a3c0 @ 00e4a3c0 size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00e4a3c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_660 [144];
  undefined4 local_5d0;
  undefined1 local_5c8;
  
  local_5d0 = param_1;
  FUN_01bed4e2(auStack_660,param_2,0x48);
  local_5c8 = 0;
  iVar1 = thunk_FUN_01be5118(0x650);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x650);
  }
  FUN_01bed4e2(iVar1,auStack_660,0x650);
  return iVar1;
}

