// FUN_0189bc00 @ 0189bc00 size=64 calls_out=2 calls_in=11
// strings: 

undefined8 FUN_0189bc00(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1[2];
  if (uVar2 < *param_1) {
    iVar1 = FUN_0189bb64(param_1,uVar2,1,1);
    if (iVar1 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    uVar2 = param_1[2];
  }
  return CONCAT44(uVar2,param_1[1]);
}

