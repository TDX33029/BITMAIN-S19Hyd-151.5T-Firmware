// FUN_018d6178 @ 018d6178 size=152 calls_out=3 calls_in=1
// strings: 

void FUN_018d6178(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  FUN_018a7af8(&local_30,0xc);
  uVar1 = *(uint *)(*param_3 + 0x48);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0x40,&DAT_01d2571c);
  }
  FUN_018e1d14(local_2c,local_28,*(undefined4 *)(*param_2 + 0xc),param_2 + 0x11,0x30,param_4,0xf,
               param_3 + 1,uVar1);
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

