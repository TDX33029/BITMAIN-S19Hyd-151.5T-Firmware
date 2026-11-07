// FUN_01008b30 @ 01008b30 size=264 calls_out=1 calls_in=2
// strings: 

undefined4 FUN_01008b30(char *param_1,uint param_2)

{
  int iVar1;
  undefined4 uVar2;
  bool bVar3;
  
  if (param_2 == 0) {
    return 2;
  }
  if (*param_1 == '.') {
    param_1 = param_1 + 1;
    param_2 = param_2 - 1;
  }
  else {
    if ((param_2 < 3) ||
       ((iVar1 = thunk_FUN_016dd50a(&DAT_00418634,param_1,3), iVar1 != 0 &&
        (iVar1 = thunk_FUN_016dd50a(&DAT_00418631,param_1,3), iVar1 != 0)))) goto LAB_01008bc8;
    param_1 = param_1 + 3;
    param_2 = param_2 - 3;
  }
  if (param_2 == 0) {
    return 0;
  }
LAB_01008bc8:
  if (param_2 == 3) {
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00418634,3);
    if (iVar1 == 0) {
      return 1;
    }
    iVar1 = thunk_FUN_016dd50a(param_1,&DAT_00418631,3);
    bVar3 = iVar1 == 0;
  }
  else {
    if (param_2 != 1) {
      return 2;
    }
    bVar3 = *param_1 == '.';
  }
  uVar2 = 2;
  if (bVar3) {
    uVar2 = 1;
  }
  return uVar2;
}

