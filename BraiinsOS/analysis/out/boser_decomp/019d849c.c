// FUN_019d849c @ 019d849c size=68 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_019d849c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x50);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x50);
  }
  FUN_01bed4e2(iVar1,param_1,0x50);
  return CONCAT44(&DAT_01d28cf4,iVar1);
}

