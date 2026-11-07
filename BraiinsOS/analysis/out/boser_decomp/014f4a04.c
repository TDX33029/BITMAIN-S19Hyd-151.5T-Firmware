// FUN_014f4a04 @ 014f4a04 size=100 calls_out=2 calls_in=2
// strings: 

void FUN_014f4a04(undefined1 *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 uStack_9;
  
  if (*param_2 == -0x80000000) {
    iVar1 = param_2[1];
    *param_1 = 0;
    param_1[1] = (char)iVar1;
    FUN_014c81b0(param_2);
    return;
  }
  uVar2 = FUN_014c8278(param_2,&uStack_9,&DAT_01cf9cb4);
  *(undefined4 *)(param_1 + 4) = uVar2;
  *param_1 = 1;
  return;
}

