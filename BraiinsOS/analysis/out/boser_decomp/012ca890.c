// FUN_012ca890 @ 012ca890 size=124 calls_out=3 calls_in=2
// strings: 

void FUN_012ca890(uint param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = 0;
  if (3 < (param_1 & 0xff)) {
    iVar1 = (param_1 & 0xff) - 3;
  }
  if (iVar1 == 0) {
    FUN_011e9d50(param_1,param_2);
    return;
  }
  if (iVar1 != 1) {
    return;
  }
  if (*param_2 == 1) {
    FUN_011e9d50((char)param_2[1],param_2[2]);
  }
  else if ((*param_2 == 0) && (param_2[2] != 0)) {
    thunk_FUN_01be4678(param_2[1]);
  }
  thunk_FUN_01be4678(param_2);
  return;
}

