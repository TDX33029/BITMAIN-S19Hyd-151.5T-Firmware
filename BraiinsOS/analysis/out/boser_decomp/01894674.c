// FUN_01894674 @ 01894674 size=140 calls_out=2 calls_in=1
// strings: 

void FUN_01894674(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = *param_5;
  iVar2 = 5;
  do {
    FUN_01bda5e0(param_3,param_3,param_3,uVar1,param_5 + 2,param_4);
    iVar2 = iVar2 + -1;
  } while (iVar2 != 0);
  FUN_0189472c(param_2,param_7,param_8,param_6);
  FUN_01bda5e0(param_3,param_3,param_7,uVar1,param_5 + 2,param_4);
  *param_1 = param_3;
  param_1[1] = param_4;
  param_1[2] = param_7;
  param_1[3] = param_8;
  return;
}

