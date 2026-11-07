// FUN_0171f2e8 @ 0171f2e8 size=140 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_0171f2e8(int param_1,uint param_2,uint param_3,undefined4 param_4,int param_5)

{
  FUN_0171f268(param_4,param_1,param_5);
  FUN_01714e04(param_1,param_3,param_4,param_1,param_5);
  if (param_5 != 0) {
    *(uint *)(param_1 + (param_5 + 0x3fffffff) * 4) =
         *(uint *)(param_1 + (param_5 + 0x3fffffff) * 4) | (param_3 & param_2) << 0x1f;
  }
  return 0;
}

