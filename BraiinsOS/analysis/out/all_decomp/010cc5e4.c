// FUN_010cc5e4 @ 010cc5e4 size=88 calls_out=2 calls_in=0
// strings: Ready polled after completion

void FUN_010cc5e4(int *param_1,undefined4 *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)*param_2;
  iVar2 = *piVar1;
  iVar3 = piVar1[1];
  *piVar1 = 4;
  piVar1[1] = 0;
  if (iVar2 == 4 && iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("Ready polled after completion",0x1d,&DAT_018a4fc0);
  }
  FUN_016dd1aa(param_1 + 2,piVar1 + 2,0x60);
  *param_1 = iVar2;
  param_1[1] = iVar3;
  return;
}

