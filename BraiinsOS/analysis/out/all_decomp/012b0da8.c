// FUN_012b0da8 @ 012b0da8 size=24 calls_out=0 calls_in=0
// strings: 

void FUN_012b0da8(undefined1 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar1 = *param_2;
  uVar2 = param_2[1];
  *param_1 = 1;
  *(undefined4 *)(param_1 + 8) = uVar1;
  *(undefined4 *)(param_1 + 0xc) = uVar2;
  return;
}

