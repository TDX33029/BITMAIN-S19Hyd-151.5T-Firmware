// FUN_015dd074 @ 015dd074 size=156 calls_out=3 calls_in=1
// strings: 

void FUN_015dd074(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined8 uVar1;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  int local_28;
  int local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar1 = FUN_01adafd4(*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14),
                       *(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c),param_3,
                       param_4);
  FUN_015d2968(&local_40,param_2,(int)uVar1,(int)((ulonglong)uVar1 >> 0x20),param_3,param_4);
  if (local_28 == 2 && local_24 == 0) {
    param_1[2] = 2;
    param_1[3] = 0;
    return;
  }
  *param_1 = local_30;
  param_1[1] = uStack_2c;
  param_1[2] = local_28;
  param_1[3] = local_24;
  param_1[4] = uStack_20;
  param_1[5] = uStack_1c;
  FUN_0134bd64(local_40,local_3c);
  return;
}

