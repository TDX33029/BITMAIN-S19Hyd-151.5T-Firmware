// FUN_018c3188 @ 018c3188 size=56 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_018c3188(int *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1];
  uVar2 = param_1[2];
  if (uVar1 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar2,uVar1,uVar1,&DAT_01d22930);
  }
  param_1[2] = uVar1;
  return CONCAT44(uVar1 - uVar2,*param_1 + uVar2);
}

