// FUN_0168fe3c @ 0168fe3c size=268 calls_out=3 calls_in=1
// strings: 

void FUN_0168fe3c(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  char cVar1;
  int local_40;
  int *local_3c;
  int iStack_38;
  int *local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (*(char *)(*param_2 + 0x15a) == '\0') {
    FUN_0168cfd4(param_1,param_2,param_3,param_4,param_5,param_6);
    if (*param_1 != 0) {
      return;
    }
  }
  else {
    cVar1 = *(char *)(*param_2 + 0x15b);
    FUN_0168cfd4(param_1,param_2,param_3,param_4,param_5,param_6);
    if (*param_1 != 0) {
      if (cVar1 == '\0') {
        return;
      }
      uStack_2c = param_5;
      uStack_28 = param_6;
      local_34 = param_2;
      local_30 = param_3;
      FUN_016870b0(&local_40,param_4,param_1[1],param_1[2],param_1[2],&local_34);
      if (local_40 == 2) {
        local_34 = local_3c;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_34,&DAT_01d07c8c,&DAT_01d0798c);
      }
      *param_1 = local_40;
      param_1[1] = (int)local_3c;
      param_1[2] = iStack_38;
      return;
    }
  }
  *param_1 = 0;
  return;
}

