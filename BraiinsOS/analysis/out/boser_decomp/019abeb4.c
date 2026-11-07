// FUN_019abeb4 @ 019abeb4 size=108 calls_out=3 calls_in=2
// strings: 

undefined8 FUN_019abeb4(uint *param_1)

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
    thunk_FUN_01be4678(uVar3);
    return 1;
  }
  iVar1 = FUN_01298554(uVar3,*param_1,1,uVar2);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,uVar2);
  }
  return CONCAT44(uVar2,iVar1);
}

