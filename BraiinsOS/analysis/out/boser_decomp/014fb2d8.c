// FUN_014fb2d8 @ 014fb2d8 size=104 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_014fb2d8(byte *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  
  pbVar1 = (byte *)0x0;
  if ((param_2 != 0) && (param_3 = param_3 & 0xff, *param_1 == param_3)) {
    if ((param_2 != 1) && ((char)param_1[1] < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(param_1,param_2,1,param_2,&DAT_01cfa814);
    }
    pbVar1 = param_1 + 1;
    param_3 = param_2 - 1;
  }
  return CONCAT44(param_3,pbVar1);
}

