// FUN_018cf278 @ 018cf278 size=144 calls_out=3 calls_in=1
// strings: 

void FUN_018cf278(undefined4 *param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  
  local_18 = 0;
  local_20 = 0;
  uStack_1c = 1;
  FUN_018a7a68(&local_20,0x40,0x20);
  FUN_01ac6d2c(&local_20,param_3,param_3 + 0x22);
  uVar1 = *(uint *)(*param_2 + 0x48);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0x40,&DAT_01d2571c);
  }
  FUN_01ac6d2c(&local_20,param_2 + 1,(int)(param_2 + 1) + uVar1);
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  param_1[2] = local_18;
  return;
}

