// FUN_018fe910 @ 018fe910 size=132 calls_out=2 calls_in=2
// strings: 

void FUN_018fe910(undefined4 param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined8 uVar1;
  undefined1 auStack_5c [64];
  uint local_1c;
  
  uVar1 = (**(code **)(*(int *)(param_2[2] + 0x1c) + 0xc))(*(undefined4 *)(param_2[2] + 0x18));
  (**(code **)((int)((ulonglong)uVar1 >> 0x20) + 0x14))(auStack_5c,(int)uVar1);
  if (0x40 < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_1c,0x40,&DAT_01d258e8);
  }
  FUN_018fe844(param_1,*param_2,param_2[1],param_3,auStack_5c,local_1c);
  return;
}

