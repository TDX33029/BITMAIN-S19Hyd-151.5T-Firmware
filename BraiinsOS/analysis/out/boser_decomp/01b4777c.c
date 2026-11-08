// FUN_01b4777c @ 01b4777c size=68 calls_out=1 calls_in=13
// strings: 

undefined8 FUN_01b4777c(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  
  FUN_01b1c878();
  uVar1 = *param_2;
  *(undefined4 **)(param_1 + 0xc) = param_2;
  *(undefined4 *)(param_1 + 4) = uVar1;
  return 0;
}

