// FUN_01386f04 @ 01386f04 size=116 calls_out=1 calls_in=6
// strings: 

void FUN_01386f04(int *param_1,int *param_2)

{
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  
  *(undefined1 *)(param_1 + 9) = 1;
  if (((*param_1 == 0) || (param_1[1] != param_2[4])) || (param_1[2] != param_2[5])) {
    local_30 = *param_2;
    iStack_2c = param_2[1];
    iStack_28 = param_2[2];
    iStack_24 = param_2[3];
    iStack_20 = param_2[4];
    iStack_1c = param_2[5];
    FUN_01386f78(param_1,&local_30);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01386f4c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_2 + 0x10))(param_2 + 3,param_2[1],param_2[2]);
  return;
}

