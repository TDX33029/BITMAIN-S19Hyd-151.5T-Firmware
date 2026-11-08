// FUN_012c2334 @ 012c2334 size=52 calls_out=1 calls_in=5
// strings: 

undefined8 FUN_012c2334(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,uVar1,uVar1,&DAT_01ce29dc);
  }
  return CONCAT44(uVar1 - uVar2,*param_1 + uVar2);
}

