// FUN_0173cbcc @ 0173cbcc size=224 calls_out=3 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/evp/digestsign.c

undefined8 FUN_0173cbcc(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined8 uVar3;
  
  iVar1 = (*(int **)(param_1 + 0xc))[2];
  if ((((*(int *)(iVar1 + 4) == 0x3e1) &&
       (puVar2 = *(undefined4 **)(iVar1 + 8), puVar2 != (undefined4 *)0x0)) &&
      (*(int *)*puVar2 - 0x3e2U < 3)) ||
     ((*(int *)(**(int **)(param_1 + 0xc) + 0x24) == 0 ||
      (iVar1 = FUN_0173cab0(param_1), iVar1 != 0)))) {
    FUN_016e9cd0(6,0,0x7d,"/aws-lc/crypto/fipsmodule/evp/digestsign.c",0x8b);
    return 0;
  }
  uVar3 = FUN_0172af78(param_1,param_2,param_3);
  return uVar3;
}

