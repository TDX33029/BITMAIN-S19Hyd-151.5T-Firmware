// FUN_01357100 @ 01357100 size=72 calls_out=2 calls_in=1
// strings: improperly encoded string

undefined4 FUN_01357100(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = FUN_01009aa0("",param_1,param_2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("improperly encoded string",0x33,&DAT_01892170);
  }
  return param_1;
}

