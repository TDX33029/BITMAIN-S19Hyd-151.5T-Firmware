// FUN_01969b9c @ 01969b9c size=212 calls_out=5 calls_in=5
// strings: $serde_json::private::RawValue

void FUN_01969b9c(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int unaff_r8;
  undefined4 uVar3;
  
  if (param_3 == 0x1e) {
    iVar1 = thunk_FUN_01bed842(param_2,"$serde_json::private::RawValue",0x1e);
    if (iVar1 == 0) {
      *param_1 = -0x80000000;
      return;
    }
    iVar2 = thunk_FUN_01be5118(0x1e);
    if (iVar2 != 0) {
      iVar1 = 0x1e;
      goto LAB_01969c40;
    }
    uVar3 = 1;
    param_3 = 0x1e;
  }
  else {
    if (-1 < param_3) {
      if (param_3 == 0) {
        iVar1 = 0;
        iVar2 = 1;
      }
      else {
        uVar3 = 1;
        iVar2 = FUN_01298504(param_3,1);
        if (iVar2 == 0) goto LAB_01969bf8;
        iVar1 = param_3;
      }
LAB_01969c40:
      FUN_01bed4e2(iVar2,param_2,param_3);
      *param_1 = iVar1;
      param_1[1] = iVar2;
      param_1[2] = param_3;
      return;
    }
    uVar3 = 0;
    param_3 = unaff_r8;
  }
LAB_01969bf8:
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar3,param_3);
}

