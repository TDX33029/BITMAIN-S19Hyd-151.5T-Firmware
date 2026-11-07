// FUN_01a70970 @ 01a70970 size=84 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01a70970(undefined4 param_1)

{
  int iVar1;
  undefined1 auStack_70 [104];
  
  FUN_01a709e4(auStack_70,param_1);
  iVar1 = thunk_FUN_01be5118(0x68);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x68);
  }
  FUN_01bed4e2(iVar1,auStack_70,0x68);
  return CONCAT44(&UNK_01d2d1d4,iVar1);
}

