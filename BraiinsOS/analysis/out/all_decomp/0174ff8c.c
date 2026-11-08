// FUN_0174ff8c @ 0174ff8c size=244 calls_out=7 calls_in=7
// strings: 

undefined4 FUN_0174ff8c(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  iVar1 = FUN_0177ea78(param_1 + 0xb,0,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  if ((*param_1 != 0) && (pcVar3 = *(code **)(*param_1 + 8), pcVar3 != (code *)0x0)) {
    (*pcVar3)(param_1,0,0);
  }
  FUN_016f19e8(&DAT_018de68c,param_1,param_1 + 10);
  FUN_017046e0(param_1[1]);
  FUN_017046e0(param_1[2]);
  FUN_017046e0(param_1[3]);
  FUN_017046e0(param_1[4]);
  FUN_017046e0(param_1[5]);
  FUN_017046e0(param_1[6]);
  FUN_017046e0(param_1[7]);
  FUN_017046e0(param_1[8]);
  FUN_0177f2f8(param_1[9]);
  FUN_0174fea4(param_1);
  FUN_01781f20(param_1 + 0xd);
  uVar2 = FUN_0177aafc(param_1);
  return uVar2;
}

