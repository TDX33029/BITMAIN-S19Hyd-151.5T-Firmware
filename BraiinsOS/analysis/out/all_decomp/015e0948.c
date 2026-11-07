// FUN_015e0948 @ 015e0948 size=160 calls_out=4 calls_in=1
// strings: 

undefined8 FUN_015e0948(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  
  if (0x7fffffff < param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_00600c10();
  }
  iVar4 = param_1[2];
  if (param_2 == 0) {
    uVar1 = 1;
    iVar2 = *param_1;
  }
  else {
    uVar1 = FUN_016d38c8(param_2,1);
    if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_2);
    }
    iVar2 = *param_1;
  }
  if (iVar4 == iVar2) {
    FUN_015e0a80(param_1);
  }
  puVar3 = (uint *)(param_1[1] + iVar4 * 0xc);
  *puVar3 = param_2;
  param_1[2] = iVar4 + 1;
  puVar3[1] = uVar1;
  puVar3[2] = param_2;
  return *(undefined8 *)(param_1[1] + iVar4 * 0xc + 4);
}

