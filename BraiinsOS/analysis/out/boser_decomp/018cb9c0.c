// FUN_018cb9c0 @ 018cb9c0 size=132 calls_out=4 calls_in=2
// strings: 

void FUN_018cb9c0(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 auStack_100 [64];
  undefined1 auStack_c0 [160];
  
  FUN_01bed93e(auStack_100,0,0x40);
  uVar1 = *(uint *)(*(int *)(param_2 + 0xc) + 0x48);
  if (0x40 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar1,0x40,&DAT_01d22c3c);
  }
  FUN_0188fc54(auStack_c0,*(int *)(param_2 + 0xc),auStack_100);
  FUN_01891bc0(param_1,auStack_c0,param_3,param_4);
  *(int *)(param_1 + 0xa0) = param_2;
  return;
}

