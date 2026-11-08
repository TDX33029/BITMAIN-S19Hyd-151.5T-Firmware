// FUN_012862b0 @ 012862b0 size=80 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_012862b0(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if ((-(param_4 - (uint)(param_3 == 0)) < (uint)(param_3 - 1U < 0x35)) &&
     ((*(int *)(param_1 + 0x60) != 1 || (uVar1 = 1, *(int *)(param_1 + 100) == param_3)))) {
    uVar1 = 8;
    *(undefined4 *)(param_1 + 0x60) = 1;
    *(int *)(param_1 + 100) = param_3;
  }
  return uVar1;
}

