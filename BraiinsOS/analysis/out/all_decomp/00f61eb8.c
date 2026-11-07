// FUN_00f61eb8 @ 00f61eb8 size=88 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_00f61eb8(int param_1,undefined4 param_2,undefined1 *param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0;
  if (((uint)-param_4 < (uint)(param_3 < &DAT_3b9aca00)) &&
     ((*(int *)(param_1 + 0x98) != 1 || (uVar1 = 1, *(undefined1 **)(param_1 + 0x9c) == param_3))))
  {
    *(undefined4 *)(param_1 + 0x98) = 1;
    *(undefined1 **)(param_1 + 0x9c) = param_3;
    return 8;
  }
  return uVar1;
}

