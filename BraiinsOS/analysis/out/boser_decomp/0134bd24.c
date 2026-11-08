// FUN_0134bd24 @ 0134bd24 size=60 calls_out=1 calls_in=8
// strings: 

undefined8 FUN_0134bd24(int *param_1)

{
  uint uVar1;
  
  if (*param_1 == 1) {
    return *(undefined8 *)(param_1 + 2);
  }
  uVar1 = param_1[1];
  if (5 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,5,&DAT_01ce6d50);
  }
  return CONCAT44(uVar1,param_1 + 2);
}

