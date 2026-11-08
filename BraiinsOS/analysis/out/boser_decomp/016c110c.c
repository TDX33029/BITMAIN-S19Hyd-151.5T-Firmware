// FUN_016c110c @ 016c110c size=64 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_016c110c(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1[2];
  if (uVar2 < *param_1) {
    iVar1 = FUN_006641a8(param_1,uVar2,4,4);
    if (iVar1 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    uVar2 = param_1[2];
  }
  return CONCAT44(uVar2,param_1[1]);
}

