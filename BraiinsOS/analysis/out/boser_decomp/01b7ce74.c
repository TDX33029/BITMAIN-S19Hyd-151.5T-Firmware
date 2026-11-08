// FUN_01b7ce74 @ 01b7ce74 size=136 calls_out=0 calls_in=1
// strings: 

undefined8
FUN_01b7ce74(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,
            undefined4 param_6)

{
  *(undefined4 *)(param_1 + 0x38) = param_3;
  *(undefined4 *)(param_1 + 0x3c) = param_4;
  *(byte *)(param_1 + 0x44) = *(byte *)(param_1 + 0x44) | 1;
  if (param_5 == 0) {
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_1 + 0x28);
  }
  else {
    *(int *)(param_1 + 0x34) = param_5;
  }
  *(undefined4 *)(param_1 + 0x30) = param_6;
  return 0;
}

