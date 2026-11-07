// FUN_009ce460 @ 009ce460 size=68 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_009ce460(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x48);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x48);
  }
  FUN_01bed4e2(iVar1,param_1,0x48);
  return CONCAT44(&DAT_01c0cbf4,iVar1);
}

