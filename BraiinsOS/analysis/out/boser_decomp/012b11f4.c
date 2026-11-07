// FUN_012b11f4 @ 012b11f4 size=76 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_012b11f4(int *param_1)

{
  int iVar1;
  int unaff_r4;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    iVar1 = 0;
  }
  else {
    unaff_r4 = param_1[2];
    *param_1 = iVar1 + 8;
    if (unaff_r4 == param_1[3]) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01ce24b4);
    }
    param_1[2] = unaff_r4 + 0x3c;
  }
  return CONCAT44(unaff_r4,iVar1);
}

