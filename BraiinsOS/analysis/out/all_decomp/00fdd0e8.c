// FUN_00fdd0e8 @ 00fdd0e8 size=152 calls_out=4 calls_in=0
// strings: 

void FUN_00fdd0e8(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_00fd4a84(param_2,param_3,param_5);
  uVar3 = 0;
  if (iVar1 < 0) {
LAB_00fdd120:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,iVar1);
  }
  if (iVar1 == 0) {
    iVar4 = 0;
    iVar2 = 1;
  }
  else {
    uVar3 = 1;
    iVar2 = FUN_016d38c8(iVar1,1);
    iVar4 = iVar1;
    if (iVar2 == 0) goto LAB_00fdd120;
  }
  FUN_00fd4e94(param_2,param_3,param_4,param_5,iVar2,iVar1);
  *param_1 = iVar4;
  param_1[1] = iVar2;
  param_1[2] = iVar1;
  return;
}

