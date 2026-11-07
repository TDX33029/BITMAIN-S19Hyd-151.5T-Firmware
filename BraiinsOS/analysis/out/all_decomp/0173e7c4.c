// FUN_0173e7c4 @ 0173e7c4 size=392 calls_out=7 calls_in=4
// strings: /aws-lc/crypto/fipsmodule/evp/digestsign.c

undefined8
FUN_0173e7c4(int param_1,undefined4 *param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_0173b2c8(param_5,param_4);
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == 0) {
      return 0;
    }
  }
  FUN_01781ff4(&DAT_018dedfc,&LAB_01701cac);
  *(undefined4 **)(param_1 + 0x10) = &DAT_018dee00;
  iVar1 = FUN_0173b7a0(*(undefined4 *)(param_1 + 0xc));
  if ((iVar1 != 0) &&
     ((param_3 == 0 || (iVar1 = FUN_0173b454(*(undefined4 *)(param_1 + 0xc),param_3), iVar1 != 0))))
  {
    iVar1 = (*(int **)(param_1 + 0xc))[2];
    if ((((*(int *)(iVar1 + 4) == 0x3e1) &&
         ((puVar2 = *(undefined4 **)(iVar1 + 8), puVar2 != (undefined4 *)0x0 &&
          (*(int *)*puVar2 - 0x3e2U < 3)))) || (*(int *)(**(int **)(param_1 + 0xc) + 0x24) == 0)) &&
       (iVar1 = FUN_0173cab0(param_1), iVar1 == 0)) {
LAB_0173e88c:
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = *(undefined4 *)(param_1 + 0xc);
      }
      return 1;
    }
    if (param_3 == 0) {
      FUN_016e9cd0(6,0,0x77,"/aws-lc/crypto/fipsmodule/evp/digestsign.c",100);
    }
    else {
      iVar1 = FUN_0173e2d8(param_1,param_3,param_4);
      if (iVar1 != 0) goto LAB_0173e88c;
    }
  }
  return 0;
}

