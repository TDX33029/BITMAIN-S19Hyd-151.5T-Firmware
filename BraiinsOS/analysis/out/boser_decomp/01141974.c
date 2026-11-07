// FUN_01141974 @ 01141974 size=52 calls_out=1 calls_in=2
// strings: 

void FUN_01141974(int param_1,undefined4 param_2,code *param_3,undefined4 param_4)

{
  undefined8 uVar1;
  
  uVar1 = (*param_3)(param_2);
  FUN_01bed4e2(param_1,param_4,0xa8);
  *(undefined8 *)(param_1 + 0xa8) = uVar1;
  return;
}

