// FUN_01b3797c @ 01b3797c size=300 calls_out=7 calls_in=1
// strings: 

bool FUN_01b3797c(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  iVar1 = FUN_01b2e970(param_3);
  *param_1 = iVar1;
  iVar1 = FUN_01b2e970(param_3);
  param_1[1] = iVar1;
  iVar1 = FUN_01b2e970(param_3);
  param_1[2] = iVar1;
  iVar1 = FUN_01b2e970(param_3);
  iVar3 = *param_1;
  param_1[3] = iVar1;
  if (((iVar3 != 0) && (param_1[1] != 0)) && (iVar1 != 0 && param_1[2] != 0)) {
    uVar2 = FUN_01b2ae78();
    iVar1 = FUN_01b30698(iVar3,param_2 + 0x14,uVar2);
    if (iVar1 != 0) {
      iVar1 = FUN_01b3787c(*param_1);
      param_1[5] = iVar1;
      iVar1 = FUN_01b34374(param_1[1],*param_1,iVar1,param_3);
      if (iVar1 != 0) {
        iVar1 = FUN_01b2b8d0(param_2 + 0x14);
        param_1[4] = iVar1;
        iVar1 = FUN_01b32524(param_1[2],param_2,param_3);
        if (iVar1 != 0) {
          iVar1 = FUN_01b30698(param_1[3],param_2 + 0x14,param_1[2]);
          return iVar1 != 0;
        }
      }
    }
  }
  return false;
}

