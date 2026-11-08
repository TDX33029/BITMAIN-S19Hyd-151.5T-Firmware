// FUN_017a1d00 @ 017a1d00 size=308 calls_out=4 calls_in=1
// strings: 

undefined4 FUN_017a1d00(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x974) == 0) {
    if (*(int *)(param_1 + 0x990) != 0) {
      if (*(code **)(param_1 + 0x2cc) == (code *)0x0) {
        thunk_FUN_016d3fb4(*(int *)(param_1 + 0x990));
      }
      else {
        (**(code **)(param_1 + 0x2cc))(*(undefined4 *)(param_1 + 0x2d0));
      }
    }
    FUN_017a0cdc(*(undefined4 *)(param_1 + 0x9a0));
    *(undefined4 *)(param_1 + 0x990) = 0;
    *(undefined4 *)(param_1 + 0x994) = 0;
    *(undefined4 *)(param_1 + 0x998) = 0;
    *(undefined4 *)(param_1 + 0x99c) = 0;
    *(undefined4 *)(param_1 + 0x9a0) = 0;
    *(undefined4 *)(param_1 + 0x9a8) = 0;
    *(undefined4 *)(param_1 + 0x9ac) = 0;
    *(undefined4 *)(param_1 + 0x9b0) = 0;
    *(undefined4 *)(param_1 + 0x9a4) = 0;
    uVar2 = 0;
    if (param_3 != 0 && param_2 != 0) {
      if (*(int *)(param_1 + 0x2d8) == 0) {
        if (*(code **)(param_1 + 0x2c8) == (code *)0x0) {
          iVar1 = thunk_FUN_016d4a50(param_3);
        }
        else {
          iVar1 = (**(code **)(param_1 + 0x2c8))(*(undefined4 *)(param_1 + 0x2d0),param_3);
        }
        if (iVar1 != 0) {
          uVar2 = FUN_016dd1aa(iVar1,param_2,param_3);
          *(undefined4 *)(param_1 + 0x990) = uVar2;
          *(undefined4 *)(param_1 + 0x994) = uVar2;
          *(int *)(param_1 + 0x998) = param_3;
          *(undefined4 *)(param_1 + 0x99c) = 0;
          return 0;
        }
      }
      return 0xffffffc0;
    }
  }
  else {
    uVar2 = 0xffffffc4;
  }
  return uVar2;
}

