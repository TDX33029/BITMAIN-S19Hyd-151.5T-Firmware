// FUN_01535a54 @ 01535a54 size=76 calls_out=1 calls_in=0
// strings: 

undefined4
FUN_01535a54(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5)

{
  undefined4 uVar1;
  int local_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  uint local_c;
  
  uVar1 = 1;
  if (param_5 <= (uint)(*(int *)(*(int *)(param_1 + 0x48) + 0xc) * 0xff)) {
    local_c = param_5;
    local_18 = param_1;
    uStack_14 = param_2;
    uStack_10 = param_3;
    uVar1 = FUN_01535bb0(&local_18,param_4);
  }
  return uVar1;
}

