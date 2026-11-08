// FUN_008b6b40 @ 008b6b40 size=104 calls_out=2 calls_in=0
// strings: 

void FUN_008b6b40(undefined4 *param_1)

{
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24 [3];
  
  FUN_015e9334(&local_30,&DAT_0034370a,0xc);
  if (local_30 == -0x80000000) {
    *param_1 = 1;
    param_1[1] = 0x80000000;
    return;
  }
  FUN_00fab1e0(local_24,uStack_2c,uStack_28);
  param_1[2] = uStack_2c;
  param_1[3] = uStack_28;
  *param_1 = local_24[0];
  param_1[1] = local_30;
  return;
}

