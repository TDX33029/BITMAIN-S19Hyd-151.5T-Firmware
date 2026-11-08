// FUN_01afc914 @ 01afc914 size=148 calls_out=2 calls_in=5
// strings: 

undefined8 FUN_01afc914(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  FUN_01afc77c();
  iVar1 = FUN_01b6ad8c(param_2);
  if (iVar1 == 0 && param_2 != 0) {
    return 0;
  }
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = iVar1;
  param_1[4] = param_2;
  *(byte *)(param_1 + 5) = *(byte *)(param_1 + 5) & 0xfc | 1;
  return 1;
}

