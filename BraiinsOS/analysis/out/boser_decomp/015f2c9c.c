// FUN_015f2c9c @ 015f2c9c size=212 calls_out=2 calls_in=1
// strings: 

void FUN_015f2c9c(undefined4 *param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 int param_5,int param_6)

{
  int iVar1;
  undefined8 uVar2;
  int local_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  if (param_6 != 0) {
    uVar2 = (**(code **)(*(int *)(param_5 + 0x14) + 0x1c))(*(undefined4 *)(param_5 + 0x10));
    iVar1 = (int)uVar2;
    (**(code **)((int)((ulonglong)uVar2 >> 0x20) + 0xc))(&local_30,iVar1);
    if ((((local_30 == -0x3ec88446 && iStack_28 == -0x249b249d) &&
          (iStack_2c == 0x60d24636 && iStack_24 == 0x7ab693b4)) &&
        (*(int *)(iVar1 + 0x48) == param_2[1])) &&
       (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(iVar1 + 0x44),*param_2), iVar1 == 0)) {
      FUN_006666fc(param_1,param_3,param_4);
      return;
    }
  }
  *param_1 = 0x80000000;
  return;
}

