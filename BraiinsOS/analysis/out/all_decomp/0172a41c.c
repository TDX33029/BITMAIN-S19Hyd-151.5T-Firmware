// FUN_0172a41c @ 0172a41c size=312 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_0172a41c(int *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    if (param_2 == 0) {
      return 0;
    }
    if (param_1[1] != 0) {
LAB_0172a504:
      FUN_017046e0(iVar1);
      *param_1 = param_2;
      goto LAB_0172a45c;
    }
    if (param_4 == 0) {
      return 0;
    }
LAB_0172a528:
    FUN_017046e0(iVar1);
    *param_1 = param_2;
    if (param_3 != 0) {
LAB_0172a464:
      FUN_017046e0(param_1[2]);
      param_1[2] = param_3;
      goto LAB_0172a478;
    }
LAB_0172a4d8:
    iVar1 = param_1[1];
  }
  else {
    if (param_1[1] != 0) {
      if (param_2 != 0) goto LAB_0172a504;
LAB_0172a45c:
      if (param_3 != 0) goto LAB_0172a464;
LAB_0172a478:
      if (param_4 == 0) goto LAB_0172a480;
      goto LAB_0172a4d8;
    }
    if (param_4 == 0) {
      return 0;
    }
    if (param_2 != 0) goto LAB_0172a528;
    iVar1 = 0;
    if (param_3 != 0) {
      FUN_017046e0(param_1[2]);
      param_1[2] = param_3;
      goto LAB_0172a4d8;
    }
  }
  FUN_017046e0(iVar1);
  param_1[1] = param_4;
LAB_0172a480:
  FUN_0171c904(param_1[0xe]);
  param_1[0xe] = 0;
  return 1;
}

