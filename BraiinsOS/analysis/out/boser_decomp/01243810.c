// FUN_01243810 @ 01243810 size=68 calls_out=2 calls_in=1
// strings: 

void FUN_01243810(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined1 uStack_9;
  
  if (*param_2 == -0x80000000) {
    iVar1 = param_2[1];
    *param_1 = 2;
    *(char *)(param_1 + 1) = (char)iVar1;
    FUN_012222e0(param_2);
    return;
  }
  FUN_012223f8(param_1,param_2,&uStack_9,&DAT_01d064d8);
  return;
}

