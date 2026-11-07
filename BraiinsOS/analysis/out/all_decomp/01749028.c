// FUN_01749028 @ 01749028 size=196 calls_out=4 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c

undefined8 FUN_01749028(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_01748f2c(param_2);
  if (iVar1 == 0) {
    FUN_016e9cd0(6,0,0x80,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0xe0);
  }
  else {
    FUN_0173a734(param_1,&DAT_018b6170);
    piVar2 = (int *)FUN_01747da8();
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar1;
      *(int **)(param_1 + 8) = piVar2;
      return 1;
    }
  }
  return 0;
}

