// FUN_019311a8 @ 019311a8 size=56 calls_out=1 calls_in=4
// strings: 

undefined8 FUN_019311a8(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,uVar1,uVar1,&DAT_01d2562c);
  }
  param_1[2] = uVar1;
  return CONCAT44(uVar1 - uVar2,*param_1 + uVar2);
}

