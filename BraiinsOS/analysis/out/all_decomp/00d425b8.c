// FUN_00d425b8 @ 00d425b8 size=68 calls_out=1 calls_in=0
// strings: 

void FUN_00d425b8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)*param_2 == 0) {
    *param_1 = 8;
    param_1[1] = 0;
    return;
  }
  iVar1 = FUN_00c7c448((int *)*param_2,*param_3);
  uVar2 = 6;
  if (iVar1 != 0) {
    uVar2 = 7;
  }
  *param_1 = uVar2;
  param_1[1] = 0;
  return;
}

