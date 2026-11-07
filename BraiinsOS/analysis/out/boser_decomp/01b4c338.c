// FUN_01b4c338 @ 01b4c338 size=168 calls_out=4 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/p_kem.c

undefined4 FUN_01b4c338(int param_1,undefined4 param_2)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = FUN_01b4c154(param_2);
  if (iVar1 == 0) {
    FUN_01b053d4(6,0,0x80,"/aws-lc/crypto/fipsmodule/evp/p_kem.c",0x16d);
  }
  else {
    FUN_01b4777c(param_1,&DAT_01d350f4);
    piVar2 = (int *)FUN_01b4c320();
    if (piVar2 != (int *)0x0) {
      *piVar2 = iVar1;
      *(int **)(param_1 + 8) = piVar2;
      return 1;
    }
  }
  return 0;
}

