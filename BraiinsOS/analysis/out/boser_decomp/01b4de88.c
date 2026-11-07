// FUN_01b4de88 @ 01b4de88 size=116 calls_out=0 calls_in=3
// strings: 

int FUN_01b4de88(code *param_1,int param_2,uint *param_3,uint param_4,undefined4 param_5,
                undefined4 param_6)

{
  int iVar1;
  
  if ((param_2 == 0) || (*param_3 < param_4)) {
    return 1;
  }
  iVar1 = (*param_1)(param_2,param_5,param_6);
  if (iVar1 == 0) {
    *param_3 = param_4;
    return 0;
  }
  return iVar1;
}

