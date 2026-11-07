// FUN_00e9bc74 @ 00e9bc74 size=88 calls_out=3 calls_in=2
// strings: 

int FUN_00e9bc74(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_b0 [160];
  undefined4 local_10;
  undefined1 local_c;
  
  local_10 = param_1;
  FUN_01bed4e2(auStack_b0,param_2,0x48);
  local_c = 0;
  iVar1 = thunk_FUN_01be5118(0xa8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xa8);
  }
  FUN_01bed4e2(iVar1,auStack_b0,0xa8);
  return iVar1;
}

