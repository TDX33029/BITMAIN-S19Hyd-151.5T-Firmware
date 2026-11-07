// FUN_0167127c @ 0167127c size=56 calls_out=2 calls_in=2
// strings: improperly encoded string

undefined4 FUN_0167127c(undefined4 param_1)

{
  int iVar1;
  
  iVar1 = FUN_01343a60();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("improperly encoded string",0x33,&DAT_01d06ffc);
  }
  return param_1;
}

