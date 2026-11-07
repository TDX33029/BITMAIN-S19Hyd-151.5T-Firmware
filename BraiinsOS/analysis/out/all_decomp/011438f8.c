// FUN_011438f8 @ 011438f8 size=120 calls_out=1 calls_in=1
// strings: 

void FUN_011438f8(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 uVar2;
  
  uVar2 = 2;
  if (param_3 == 7) {
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_00410ff9,7);
    if (iVar1 == 0) {
      param_1[1] = 0;
      *param_1 = 9;
      return;
    }
    iVar1 = thunk_FUN_016dd50a(param_2,&DAT_00411190,7);
    uVar2 = 2;
    if (iVar1 == 0) {
      uVar2 = 1;
    }
  }
  param_1[1] = uVar2;
  *param_1 = 9;
  return;
}

