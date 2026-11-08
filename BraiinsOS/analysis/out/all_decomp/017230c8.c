// FUN_017230c8 @ 017230c8 size=308 calls_out=7 calls_in=1
// strings: 

bool FUN_017230c8(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_017186b0(param_3);
  *param_1 = iVar1;
  iVar1 = FUN_017186b0(param_3);
  param_1[1] = iVar1;
  iVar1 = FUN_017186b0(param_3);
  param_1[2] = iVar1;
  iVar1 = FUN_017186b0(param_3);
  iVar3 = *param_1;
  param_1[3] = iVar1;
  if (((iVar3 != 0) && (param_1[1] != 0)) && (iVar1 != 0 && param_1[2] != 0)) {
    uVar2 = FUN_01714250();
    iVar1 = FUN_0171a748(iVar3,param_2 + 0x14,uVar2);
    if (iVar1 != 0) {
      iVar1 = FUN_01722f98(*param_1);
      param_1[5] = iVar1;
      iVar1 = FUN_0171f16c(param_1[1],*param_1,iVar1,param_3);
      if (iVar1 != 0) {
        iVar1 = FUN_01714eb4(param_2 + 0x14);
        param_1[4] = iVar1;
        iVar1 = FUN_0171ca68(param_1[2],param_2,param_3);
        if (iVar1 != 0) {
          iVar1 = FUN_0171a748(param_1[3],param_2 + 0x14,param_1[2]);
          return iVar1 != 0;
        }
      }
    }
  }
  return false;
}

