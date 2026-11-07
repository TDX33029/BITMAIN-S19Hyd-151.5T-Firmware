// FUN_016df42a @ 016df42a size=26 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_016df42a(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_016dd606(param_1,0,0x20,param_4,param_4);
  if (param_2 != (int *)0x0) {
    *(int *)(param_1 + 8) = *param_2 << 7;
  }
  return 0;
}

