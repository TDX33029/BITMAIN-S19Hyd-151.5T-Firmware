// FUN_01747dc0 @ 01747dc0 size=308 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_01747dc0(int *param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_2 == 0 || param_1 == (int *)0x0) {
    return 0;
  }
  *param_1 = 0;
  FUN_0177aafc(param_1[1]);
  FUN_0177aafc(param_1[2]);
  FUN_0177aafc(param_1[3]);
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = param_2;
  iVar2 = FUN_0177a9c0(uVar1);
  uVar1 = *(undefined4 *)(param_2 + 0x14);
  param_1[1] = iVar2;
  iVar2 = FUN_0177a9c0(uVar1);
  uVar1 = *(undefined4 *)(param_2 + 0x1c);
  param_1[2] = iVar2;
  iVar2 = FUN_0177a9c0(uVar1);
  param_1[3] = iVar2;
  if ((param_1[1] == 0) || (iVar2 == 0 || param_1[2] == 0)) {
    *param_1 = 0;
    FUN_0177aafc(param_1[1]);
    FUN_0177aafc(param_1[2]);
    FUN_0177aafc(param_1[3]);
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
    return 0;
  }
  return 1;
}

