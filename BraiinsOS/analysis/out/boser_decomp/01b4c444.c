// FUN_01b4c444 @ 01b4c444 size=164 calls_out=2 calls_in=2
// strings: 

undefined8 FUN_01b4c444(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0 || param_1 == (int *)0x0) {
    return 0;
  }
  FUN_01b1fa80();
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  *param_1 = param_2;
  iVar2 = FUN_01b6ad8c(uVar1);
  param_1[1] = iVar2;
  iVar2 = FUN_01b6ad8c(*(undefined4 *)(param_2 + 0x14));
  param_1[2] = iVar2;
  if (iVar2 == 0 || param_1[1] == 0) {
    FUN_01b1fa80(param_1);
    return 0;
  }
  return 1;
}

