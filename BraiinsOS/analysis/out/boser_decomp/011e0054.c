// FUN_011e0054 @ 011e0054 size=68 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_011e0054(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0xa8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xa8);
  }
  FUN_01bed4e2(iVar1,param_1,0xa8);
  return CONCAT44(&UNK_01c224b8,iVar1);
}

