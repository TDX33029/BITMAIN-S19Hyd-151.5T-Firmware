// FUN_017904e4 @ 017904e4 size=68 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_017904e4(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x70);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x70);
  }
  FUN_01bed4e2(iVar1,param_1,0x70);
  return CONCAT44(&PTR_LAB_01d1b794,iVar1);
}

