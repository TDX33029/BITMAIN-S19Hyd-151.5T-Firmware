// FUN_015f3928 @ 015f3928 size=104 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_015f3928(uint *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1[2];
  uVar3 = param_1[1];
  if (*param_1 <= uVar2) {
    return *(undefined8 *)(param_1 + 1);
  }
  if (uVar2 == 0) {
    thunk_FUN_016d3fb4(uVar3);
    return 1;
  }
  iVar1 = thunk_FUN_016d4ea4(uVar3,uVar2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar2);
  }
  return CONCAT44(uVar2,iVar1);
}

