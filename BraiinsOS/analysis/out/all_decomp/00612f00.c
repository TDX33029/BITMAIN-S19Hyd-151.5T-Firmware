// FUN_00612f00 @ 00612f00 size=164 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_00612f00(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  
  uVar5 = 0;
  if (param_2 < 0) {
LAB_00612f14:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar5,param_2);
  }
  iVar6 = param_1[2];
  if (param_2 == 0) {
    iVar2 = 1;
    iVar3 = *param_1;
    iVar1 = 0;
  }
  else {
    uVar5 = 1;
    iVar2 = FUN_016d38c8(param_2,1);
    if (iVar2 == 0) goto LAB_00612f14;
    iVar3 = *param_1;
    iVar1 = param_2;
  }
  if (iVar6 == iVar3) {
    FUN_015e0a80(param_1);
  }
  piVar4 = (int *)(param_1[1] + iVar6 * 0xc);
  *piVar4 = iVar1;
  piVar4[1] = iVar2;
  piVar4[2] = param_2;
  param_1[2] = iVar6 + 1;
  return *(undefined8 *)(param_1[1] + iVar6 * 0xc + 4);
}

