// FUN_016c29d4 @ 016c29d4 size=104 calls_out=1 calls_in=4
// strings: 

void FUN_016c29d4(int *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < param_2) {
    FUN_006520b4(param_1,iVar2,param_2,4,4);
    iVar2 = param_1[2];
  }
  iVar1 = param_1[1];
  do {
    *(undefined4 *)(iVar1 + iVar2 * 4) = 0x80000000;
    iVar2 = iVar2 + 1;
    param_2 = param_2 - 1;
  } while (param_2 != 0);
  param_1[2] = iVar2;
  return;
}

