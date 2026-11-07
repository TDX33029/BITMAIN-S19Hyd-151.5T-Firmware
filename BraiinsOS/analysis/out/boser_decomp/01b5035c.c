// FUN_01b5035c @ 01b5035c size=188 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_01b5035c(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0 || param_1 == (int *)0x0) {
    return 0;
  }
  FUN_01b1fac8();
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = param_2;
  iVar2 = FUN_01b6b0a8(uVar1);
  param_1[1] = iVar2;
  iVar2 = FUN_01b6b0a8(*(undefined4 *)(param_2 + 0x14));
  param_1[2] = iVar2;
  iVar2 = FUN_01b6b0a8(*(undefined4 *)(param_2 + 0x1c));
  param_1[3] = iVar2;
  if ((param_1[1] == 0) || (iVar2 == 0 || param_1[2] == 0)) {
    FUN_01b1fac8(param_1);
    return 0;
  }
  return 1;
}

