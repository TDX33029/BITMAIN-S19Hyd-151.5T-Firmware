// FUN_01b2b1bc @ 01b2b1bc size=104 calls_out=2 calls_in=1
// strings: copy_to_prebuf | /aws-lc/crypto/fipsmodule/bn/exponentiation.c

undefined8 FUN_01b2b1bc(undefined4 param_1,undefined4 param_2,int param_3,short param_4)

{
  int iVar1;
  
  iVar1 = FUN_01b2b0e4(param_3 + (int)param_4 * (int)(short)param_2 * 4,param_2,param_1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be3310(&DAT_0058ca77,"/aws-lc/crypto/fipsmodule/bn/exponentiation.c",0x30f,
                 "copy_to_prebuf");
  }
  return 0;
}

