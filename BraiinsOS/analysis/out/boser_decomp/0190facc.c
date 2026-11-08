// FUN_0190facc @ 0190facc size=164 calls_out=6 calls_in=0
// strings: 

void FUN_0190facc(undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 *param_4)

{
  int iVar1;
  undefined4 local_a8 [30];
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if ((undefined1 *)*param_4 == &DAT_80000005) {
    iVar1 = *param_3;
    FUN_01935918(local_a8,param_4 + 1);
    FUN_01914ee4(iVar1 + 0x1d8,local_a8);
    *param_1 = 0x80000029;
    param_1[1] = param_2;
    param_1[2] = &DAT_01d25160;
  }
  else {
    FUN_01bed4e2(local_a8,param_4,0x78);
    FUN_0191d928(&local_30,local_a8[0],&DAT_00523488,1);
    *param_1 = local_30;
    param_1[1] = uStack_2c;
    param_1[2] = uStack_28;
    param_1[3] = uStack_24;
    param_1[4] = local_20;
    param_1[5] = uStack_1c;
    param_1[6] = uStack_18;
    param_1[7] = uStack_14;
    FUN_0190eb24(local_a8);
    FUN_01910034(param_2);
  }
  return;
}

