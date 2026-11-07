// FUN_018a388c @ 018a388c size=80 calls_out=0 calls_in=10
// strings: 

byte FUN_018a388c(int *param_1,char param_2,undefined4 param_3,byte param_4)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    uVar2 = param_1[2];
    param_4 = 0;
    if ((uVar2 < (uint)param_1[1]) && (param_4 = *(char *)(iVar1 + uVar2) == param_2, (bool)param_4)
       ) {
      param_1[2] = uVar2 + 1;
    }
  }
  return iVar1 != 0 & param_4;
}

