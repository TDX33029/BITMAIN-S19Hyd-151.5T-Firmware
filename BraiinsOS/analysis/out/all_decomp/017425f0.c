// FUN_017425f0 @ 017425f0 size=140 calls_out=0 calls_in=3
// strings: 

int FUN_017425f0(code *param_1,int param_2,uint *param_3,uint param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  
  if (param_2 != 0) {
    if (param_4 <= *param_3) {
      iVar1 = (*param_1)(param_2,param_5,param_6);
      if (iVar1 == 0) {
        *param_3 = param_4;
      }
      return iVar1;
    }
  }
  return 1;
}

