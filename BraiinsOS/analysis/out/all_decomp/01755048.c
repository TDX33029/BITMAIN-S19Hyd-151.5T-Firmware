// FUN_01755048 @ 01755048 size=112 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01755048(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 4);
  iVar1 = FUN_017417fc(param_2);
  if ((iVar1 == 0) || (iVar1 = FUN_01754c98(param_2 + 0x10,iVar2 + 0x5c), iVar1 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2c24();
  }
  return 0;
}

