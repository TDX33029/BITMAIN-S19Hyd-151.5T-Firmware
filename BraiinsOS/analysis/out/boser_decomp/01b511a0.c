// FUN_01b511a0 @ 01b511a0 size=168 calls_out=4 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c

undefined4 FUN_01b511a0(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_01b510a4(param_2);
  if (iVar1 == 0) {
    FUN_01b053d4(6,0,0x80,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0xe0);
  }
  else {
    FUN_01b4777c(param_1,&DAT_01d35188);
    piVar2 = (int *)FUN_01b50344();
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar1;
      *(int **)(param_1 + 8) = piVar2;
      return 1;
    }
  }
  return 0;
}

