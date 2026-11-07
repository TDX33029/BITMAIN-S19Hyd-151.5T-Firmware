// FUN_017422e8 @ 017422e8 size=200 calls_out=0 calls_in=3
// strings: 

int FUN_017422e8(code *param_1,int param_2,uint *param_3,uint param_4,int param_5,uint *param_6,
                uint param_7,undefined4 param_8)

{
  int iVar1;
  
  if (((param_2 == 0) || (*param_3 < param_4 || param_5 == 0)) || (*param_6 < param_7)) {
    iVar1 = 1;
  }
  else {
    iVar1 = (*param_1)(param_2,param_5,param_8);
    if (iVar1 == 0) {
      *param_3 = param_4;
      *param_6 = param_7;
      return 0;
    }
  }
  return iVar1;
}

