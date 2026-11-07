// FUN_016e0ec4 @ 016e0ec4 size=160 calls_out=2 calls_in=6
// strings: 

undefined8 FUN_016e0ec4(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  FUN_016e0e8c();
  iVar1 = FUN_0177a6c0(param_2);
  if (iVar1 == 0 && param_2 != 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[2] = iVar1;
  param_1[3] = 0;
  param_1[4] = param_2;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc | 1;
  return 1;
}

