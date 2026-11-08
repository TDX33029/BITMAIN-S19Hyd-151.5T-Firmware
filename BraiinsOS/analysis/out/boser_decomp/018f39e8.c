// FUN_018f39e8 @ 018f39e8 size=140 calls_out=2 calls_in=2
// strings: 

void FUN_018f39e8(undefined4 *param_1,int *param_2,int param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_018a7af8(&local_30,0xc);
  uVar1 = *(uint *)(param_3 + 0x40);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0x40,&DAT_01d258e8);
  }
  (**(code **)(((undefined4 *)*param_2)[1] + 0x10))
            (*(undefined4 *)*param_2,local_2c,local_28,param_2 + 0x11,0x30,param_4,0xf,param_3,uVar1
            );
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

