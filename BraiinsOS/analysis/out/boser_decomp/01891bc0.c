// FUN_01891bc0 @ 01891bc0 size=96 calls_out=3 calls_in=4
// strings: 

void FUN_01891bc0(undefined4 param_1,int param_2)

{
  int local_54;
  undefined1 auStack_50 [64];
  
  FUN_018908c4(&local_54);
  if (0x40 < *(uint *)(local_54 + 0x48)) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,*(uint *)(local_54 + 0x48),0x40,&DAT_01d2571c);
  }
  FUN_0188fc54(param_1,*(undefined4 *)(param_2 + 0x48),auStack_50);
  return;
}

