// FUN_00b12660 @ 00b12660 size=68 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_00b12660(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x70);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x70);
  }
  FUN_01bed4e2(iVar1,param_1,0x70);
  return CONCAT44(&UNK_01c118f8,iVar1);
}

