// FUN_014fcb58 @ 014fcb58 size=56 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_014fcb58(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1[2];
  if (uVar2 < *param_1) {
    iVar1 = FUN_0164bb38(param_1);
    if (iVar1 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    uVar2 = param_1[2];
  }
  return CONCAT44(uVar2,param_1[1]);
}

