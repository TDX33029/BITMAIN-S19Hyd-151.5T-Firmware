// FUN_01010b0c @ 01010b0c size=60 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01010b0c(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 1) {
    return *(undefined8 *)(param_1 + 2);
  }
  uVar1 = param_1[1];
  if (5 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar1,5,&DAT_018822e4);
  }
  return CONCAT44(uVar1,param_1 + 2);
}

