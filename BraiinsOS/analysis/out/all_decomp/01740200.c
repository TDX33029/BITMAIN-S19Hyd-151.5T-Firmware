// FUN_01740200 @ 01740200 size=196 calls_out=4 calls_in=3
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c

undefined8 FUN_01740200(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_01740000(param_2);
  if (iVar1 == 0) {
    FUN_016e9cd0(6,0,0x80,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x16d);
  }
  else {
    FUN_0173a734(param_1,&DAT_018b60dc);
    piVar2 = (int *)FUN_017401e8();
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar1;
      *(int **)(param_1 + 8) = piVar2;
      return 1;
    }
  }
  return 0;
}

