// FUN_0127e498 @ 0127e498 size=128 calls_out=1 calls_in=1
// strings: 

void FUN_0127e498(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 4) {
    if (*param_2 == 0x72657469) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_0127e4e8;
    }
    if (*param_2 == 0x70696863) {
      param_1[1] = 1;
      uVar1 = 0;
      goto LAB_0127e4e8;
    }
    param_3 = 4;
  }
  uVar2 = FUN_0127b554(param_2,param_3,&DAT_01c25910);
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar1 = 1;
LAB_0127e4e8:
  *param_1 = uVar1;
  return;
}

