// FUN_01b34bac @ 01b34bac size=132 calls_out=1 calls_in=1
// strings: 

undefined8 FUN_01b34bac(int param_1,uint param_2,uint param_3,undefined4 param_4,int param_5)

{
  FUN_01b344e0(param_1,param_3,param_4,param_5);
  if (param_5 == 0) {
    return 0;
  }
  *(uint *)(param_1 + (param_5 + 0x3fffffff) * 4) =
       *(uint *)(param_1 + (param_5 + 0x3fffffff) * 4) | (param_3 & param_2) << 0x1f;
  return 0;
}

