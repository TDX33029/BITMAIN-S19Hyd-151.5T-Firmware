// FUN_01410d80 @ 01410d80 size=64 calls_out=2 calls_in=16
// strings: 

undefined8 FUN_01410d80(uint *param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = param_1[2];
  if (uVar2 < *param_1) {
    iVar1 = FUN_01284458(param_1,uVar2,2,4);
    if (iVar1 != -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620();
    }
    uVar2 = param_1[2];
  }
  return CONCAT44(uVar2,param_1[1]);
}

