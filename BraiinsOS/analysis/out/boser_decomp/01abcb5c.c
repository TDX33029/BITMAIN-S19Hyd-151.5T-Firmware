// FUN_01abcb5c @ 01abcb5c size=160 calls_out=2 calls_in=2
// strings: 

void FUN_01abcb5c(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int *local_20;
  undefined *local_1c;
  undefined1 local_18;
  undefined2 local_14;
  
  iVar2 = param_1[2];
  if (iVar2 != 0) {
    iVar1 = iVar2;
    if (*param_1 == iVar2) {
      FUN_006520b4(param_1,iVar2,1,1,1);
      iVar1 = param_1[2];
    }
    *(undefined1 *)(param_1[1] + iVar1) = 0x20;
    param_1[2] = iVar2 + 1;
  }
  local_18 = (undefined1)param_1[3];
  local_1c = &DAT_01d2f100;
  local_14 = 1;
  local_20 = param_1;
  FUN_01aacd68(param_2,&local_20,&DAT_01d2f1d8);
  return;
}

