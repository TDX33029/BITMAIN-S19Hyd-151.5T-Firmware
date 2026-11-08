// FUN_019f6d4c @ 019f6d4c size=96 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_019f6d4c(int *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((char)param_1[2] == '\0') {
    uVar3 = param_1[1];
    if (param_3 <= uVar3) {
      iVar2 = *param_1;
      iVar1 = thunk_FUN_01bed842(param_2,iVar2,param_3);
      if (iVar1 == 0) {
        *param_1 = iVar2 + param_3;
        param_1[1] = uVar3 - param_3;
        return 0;
      }
    }
    *(undefined1 *)(param_1 + 2) = 1;
  }
  return 0;
}

