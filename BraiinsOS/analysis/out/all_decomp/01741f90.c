// FUN_01741f90 @ 01741f90 size=184 calls_out=0 calls_in=3
// strings: 

int FUN_01741f90(code *param_1,int param_2,uint *param_3,uint param_4,int param_5,uint *param_6,
                uint param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  
  if (((param_2 == 0) || (*param_3 < param_4 || param_5 == 0)) || (*param_6 < param_7)) {
    return 1;
  }
  iVar1 = (*param_1)(param_2,param_5,param_8,param_9);
  if (iVar1 == 0) {
    *param_3 = param_4;
    *param_6 = param_7;
  }
  return iVar1;
}

