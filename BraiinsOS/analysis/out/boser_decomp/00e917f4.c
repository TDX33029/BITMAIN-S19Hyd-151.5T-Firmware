// FUN_00e917f4 @ 00e917f4 size=96 calls_out=3 calls_in=2
// strings: 

int FUN_00e917f4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_a48 [408];
  undefined4 local_8b0;
  undefined1 local_89c;
  
  local_8b0 = param_1;
  FUN_01bed4e2(auStack_a48,param_2,0x48);
  local_89c = 0;
  iVar1 = thunk_FUN_01be5118(0xa38);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xa38);
  }
  FUN_01bed4e2(iVar1,auStack_a48,0xa38);
  return iVar1;
}

