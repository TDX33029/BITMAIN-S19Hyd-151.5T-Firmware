// FUN_00e9ad3c @ 00e9ad3c size=88 calls_out=3 calls_in=1
// strings: 

int FUN_00e9ad3c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_a8 [152];
  undefined4 local_10;
  undefined1 local_c;
  
  local_10 = param_1;
  FUN_01bed4e2(auStack_a8,param_2,0x48);
  local_c = 0;
  iVar1 = thunk_FUN_01be5118(0xa0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xa0);
  }
  FUN_01bed4e2(iVar1,auStack_a8,0xa0);
  return iVar1;
}

