// FUN_013dfef8 @ 013dfef8 size=92 calls_out=2 calls_in=0
// strings: 

void FUN_013dfef8(int *param_1,undefined1 param_2,undefined1 param_3)

{
  undefined1 *puVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  if (iVar2 == *param_1) {
    FUN_014017b4(param_1);
  }
  param_1[2] = iVar2 + 1;
  puVar1 = (undefined1 *)(param_1[1] + iVar2 * 2);
  *puVar1 = param_2;
  puVar1[1] = param_3;
  FUN_013f9740(param_1);
  *(undefined1 *)(param_1 + 3) = 0;
  return;
}

