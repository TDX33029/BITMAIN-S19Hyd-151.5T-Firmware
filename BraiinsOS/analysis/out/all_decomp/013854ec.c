// FUN_013854ec @ 013854ec size=256 calls_out=3 calls_in=1
// strings: 

void FUN_013854ec(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  char cVar1;
  int local_40;
  int *local_3c;
  int iStack_38;
  int *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*(char *)(*param_2 + 0x15a) == '\0') {
    FUN_01382124(param_1);
    if (*param_1 == 0) goto LAB_01385560;
  }
  else {
    cVar1 = *(char *)(*param_2 + 0x15b);
    FUN_01382124(param_1);
    if (*param_1 == 0) {
LAB_01385560:
      *param_1 = 0;
      return;
    }
    if (cVar1 != '\0') {
      local_24 = param_6;
      local_28 = param_5;
      local_30 = param_2;
      local_2c = param_3;
      FUN_013b796c(&local_40,param_4,param_1[1],param_1[2],param_1[2],&local_30);
      if (local_40 == 2) {
        local_30 = local_3c;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_01892d70,&DAT_01892c30);
      }
      *param_1 = local_40;
      param_1[1] = (int)local_3c;
      param_1[2] = iStack_38;
      return;
    }
  }
  return;
}

