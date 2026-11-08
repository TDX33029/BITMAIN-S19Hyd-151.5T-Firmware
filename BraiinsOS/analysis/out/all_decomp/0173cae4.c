// FUN_0173cae4 @ 0173cae4 size=228 calls_out=3 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/digestsign.c

undefined4 FUN_0173cae4(int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar2 = (*(int **)(param_1 + 0xc))[2];
  if ((((*(int *)(iVar2 + 4) == 0x3e1) &&
       (puVar3 = *(undefined4 **)(iVar2 + 8), puVar3 != (undefined4 *)0x0)) &&
      (*(int *)*puVar3 - 0x3e2U < 3)) || (*(int *)(**(int **)(param_1 + 0xc) + 0x18) == 0)) {
    iVar2 = FUN_0173cab0(param_1);
    if (iVar2 == 0) {
      FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/digestsign.c",0x81);
      return 0;
    }
  }
  uVar1 = FUN_0172af78(param_1,param_2,param_3);
  return uVar1;
}

