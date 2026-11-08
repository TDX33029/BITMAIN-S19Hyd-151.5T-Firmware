// FUN_018be7d8 @ 018be7d8 size=40 calls_out=1 calls_in=0
// strings: 

void FUN_018be7d8(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_3;
  uVar2 = param_3[1];
  *param_1 = 0x80000000;
  *(undefined1 *)(param_1 + 1) = 5;
  FUN_0134bd64(uVar1,uVar2);
  return;
}

