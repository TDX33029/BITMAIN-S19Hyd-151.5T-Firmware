// FUN_01265a8c @ 01265a8c size=260 calls_out=1 calls_in=2
// strings: 

bool FUN_01265a8c(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar2 = *param_2;
  iVar1 = *param_1;
  if ((((iVar1 == iVar2) ||
       ((*(int *)(iVar1 + 0x10) == *(int *)(iVar2 + 0x10) &&
        (iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar2 + 0xc)),
        iVar1 == 0)))) && (param_1[2] == param_2[2])) &&
     (iVar1 = thunk_FUN_016dd50a(param_1[1] + 8,param_2[1] + 8), iVar1 == 0)) {
    param_1 = param_1 + 3;
    param_2 = param_2 + 3;
    if (*param_1 == 0) {
      param_1 = (int *)0x0;
    }
    if (*param_2 == 0) {
      param_2 = (int *)0x0;
    }
    do {
      if (param_1 == (int *)0x0 || param_2 == (int *)0x0) {
        return param_1 == (int *)0x0 && param_2 == (int *)0x0;
      }
      iVar1 = *(int *)(*param_1 + 8);
      iVar2 = *(int *)(*param_2 + 8);
      if (*(int *)(iVar1 + 0x10) != *(int *)(iVar2 + 0x10)) {
        return false;
      }
      param_2 = (int *)(*param_2 + 0xc);
      iVar4 = *param_2;
      param_1 = (int *)(*param_1 + 0xc);
      iVar3 = *param_1;
      iVar1 = thunk_FUN_016dd50a(*(undefined4 *)(iVar1 + 0xc),*(undefined4 *)(iVar2 + 0xc));
      if (iVar3 == 0) {
        param_1 = (int *)0x0;
      }
      if (iVar4 == 0) {
        param_2 = (int *)0x0;
      }
    } while (iVar1 == 0);
  }
  return false;
}

