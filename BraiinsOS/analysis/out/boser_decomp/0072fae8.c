// FUN_0072fae8 @ 0072fae8 size=120 calls_out=3 calls_in=1
// strings: 

void FUN_0072fae8(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  if (param_3 < 0) {
LAB_0072fafc:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(iVar2,param_3);
  }
  if (param_3 == 0) {
    iVar1 = 1;
  }
  else {
    iVar2 = 1;
    iVar1 = FUN_01298504(param_3,1);
    if (iVar1 == 0) goto LAB_0072fafc;
    iVar2 = param_3;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  *(int *)(param_1 + 4) = iVar2;
  *(int *)(param_1 + 8) = iVar1;
  *(int *)(param_1 + 0xc) = param_3;
  *param_1 = 0x4f;
  return;
}

