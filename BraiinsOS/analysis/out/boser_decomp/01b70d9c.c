// FUN_01b70d9c @ 01b70d9c size=248 calls_out=4 calls_in=2
// strings: 

ulonglong FUN_01b70d9c(undefined4 *param_1)

{
  uint uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  
  if (DAT_01d53408 == '\x01') {
    FUN_01b7076c(&DAT_01d5340c);
    *param_1 = DAT_01d533f8;
    FUN_01b707cc(&DAT_01d5340c);
    return CONCAT44(extraout_r1,1);
  }
  FUN_01b70810(&DAT_01d5345c,FUN_01b7127c);
  uVar1 = DAT_01d53458;
  if (DAT_01d53458 == 1) {
    uVar2 = *DAT_01d53454;
  }
  else if (DAT_01d53458 == 2) {
    uVar2 = 0;
    uVar1 = 1;
  }
  else {
    if (DAT_01d53458 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01be32a0();
    }
    uVar2 = 0;
  }
  *param_1 = uVar2;
  return (ulonglong)uVar1;
}

