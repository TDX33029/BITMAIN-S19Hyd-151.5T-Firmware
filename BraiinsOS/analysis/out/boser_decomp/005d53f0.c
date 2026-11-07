// FUN_005d53f0 @ 005d53f0 size=88 calls_out=3 calls_in=1
// strings: 

int FUN_005d53f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_310 [144];
  undefined4 local_280;
  undefined1 local_1bc;
  
  local_280 = param_1;
  FUN_01bed4e2(auStack_310,param_2,0x48);
  local_1bc = 0;
  iVar1 = thunk_FUN_01be5118(0x300);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x300);
  }
  FUN_01bed4e2(iVar1,auStack_310,0x300);
  return iVar1;
}

