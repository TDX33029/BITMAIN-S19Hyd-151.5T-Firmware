// FUN_01b4d5c8 @ 01b4d5c8 size=160 calls_out=0 calls_in=3
// strings: 

int FUN_01b4d5c8(code *param_1,int param_2,uint *param_3,uint param_4,int param_5,uint *param_6,
                uint param_7)

{
  int iVar1;
  
  if (((param_2 == 0) || (*param_3 < param_4 || param_5 == 0)) || (*param_6 < param_7)) {
    iVar1 = 1;
  }
  else {
    iVar1 = (*param_1)(param_2);
    if (iVar1 == 0) {
      *param_3 = param_4;
      *param_6 = param_7;
    }
  }
  return iVar1;
}

