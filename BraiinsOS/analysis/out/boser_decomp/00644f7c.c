// FUN_00644f7c @ 00644f7c size=192 calls_out=5 calls_in=2
// strings: 

void FUN_00644f7c(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5
                 )

{
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  int local_154;
  undefined4 local_140 [2];
  undefined1 auStack_138 [104];
  int local_d0 [28];
  undefined1 auStack_60 [72];
  
  if ((*(int *)(param_2 + 0x10) != -0x80000000) && (*param_5 != -0x80000000)) {
    FUN_01a5bfb4(&local_1a8,param_5[1],param_5[2]);
    if (local_154 == 8) {
      *param_1 = local_1a8;
      param_1[1] = uStack_1a4;
      param_1[2] = uStack_1a0;
      return;
    }
    FUN_01bed4e2(auStack_138,&local_1a8,0x68);
    local_140[0] = 1;
    FUN_01a60d04(auStack_60,param_3,param_4);
    FUN_01a4b734(local_d0,param_2,auStack_60,local_140);
    if (local_d0[0] != 4) {
      FUN_005f6530(local_d0);
    }
  }
  *param_1 = &DAT_80000005;
  return;
}

