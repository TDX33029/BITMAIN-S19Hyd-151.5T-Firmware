// FUN_01b8bc68 @ 01b8bc68 size=200 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_01b8bc68(int param_1,int param_2,int param_3,int param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x974) != 0) {
    return 0xffffffc4;
  }
  FUN_01b8bb30();
  uVar2 = 0;
  if (param_3 == 0 || param_2 == 0) {
    return 0;
  }
  if (param_4 == 1) {
LAB_01b8bd10:
    *(int *)(param_1 + 0x994) = param_2;
    *(int *)(param_1 + 0x998) = param_3;
    *(undefined4 *)(param_1 + 0x99c) = param_5;
  }
  else {
    if (*(int *)(param_1 + 0x2d8) == 0) {
      if (*(code **)(param_1 + 0x2c8) == (code *)0x0) {
        iVar1 = thunk_FUN_01be5118(param_3);
      }
      else {
        iVar1 = (**(code **)(param_1 + 0x2c8))(*(undefined4 *)(param_1 + 0x2d0),param_3);
      }
      if (iVar1 != 0) {
        param_2 = FUN_01bed4e2(iVar1,param_2,param_3);
        *(int *)(param_1 + 0x990) = param_2;
        goto LAB_01b8bd10;
      }
    }
    uVar2 = 0xffffffc0;
  }
  return uVar2;
}

