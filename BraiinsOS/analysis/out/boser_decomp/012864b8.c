// FUN_012864b8 @ 012864b8 size=80 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_012864b8(int param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((uint)-param_4 < (uint)(param_3 < &DAT_3b9aca00)) &&
     ((*(int *)(param_1 + 0x98) != 1 || (uVar1 = 1, *(undefined1 **)(param_1 + 0x9c) == param_3))))
  {
    uVar1 = 8;
    *(undefined4 *)(param_1 + 0x98) = 1;
    *(undefined1 **)(param_1 + 0x9c) = param_3;
  }
  return uVar1;
}

