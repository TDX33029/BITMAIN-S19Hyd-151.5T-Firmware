// FUN_016571c0 @ 016571c0 size=96 calls_out=3 calls_in=11
// strings: 

undefined8 FUN_016571c0(uint *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_1[2];
  if (uVar2 < *param_1) {
    if (uVar2 == 0) {
      thunk_FUN_01be4678(param_1[1]);
      uVar1 = 1;
    }
    else {
      uVar1 = FUN_01298554(param_1[1],*param_1,1,uVar2);
      if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,uVar2);
      }
    }
    param_1[1] = uVar1;
  }
  return CONCAT44(uVar2,param_1[1]);
}

