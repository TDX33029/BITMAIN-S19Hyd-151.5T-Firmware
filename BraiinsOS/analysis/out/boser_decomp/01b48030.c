// FUN_01b48030 @ 01b48030 size=276 calls_out=1 calls_in=16
// strings: /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c | /aws-lc/crypto/fipsmodule/evp/evp_ctx.c

undefined8
FUN_01b48030(int *param_1,int param_2,uint param_3,undefined4 param_4,undefined4 param_5,
            undefined4 param_6)

{
  undefined4 uVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if (((param_1 == (int *)0x0) || (piVar2 = (int *)*param_1, piVar2 == (int *)0x0)) ||
     ((code *)piVar2[0x10] == (code *)0x0)) {
    uVar4 = 0xa1;
    uVar1 = 0x65;
  }
  else if ((param_2 == -1) || (*piVar2 == param_2)) {
    if (param_1[4] == 0) {
      uVar4 = 0xaa;
      uVar1 = 0x7b;
    }
    else {
      if ((param_3 == 0xffffffff) || ((param_1[4] & param_3) != 0)) {
                    /* WARNING: Could not recover jumptable at 0x01b48140. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        uVar3 = (*(code *)piVar2[0x10])(param_1,param_4,param_5,param_6);
        return uVar3;
      }
      uVar4 = 0xaf;
      uVar1 = 0x72;
    }
  }
  else {
    uVar4 = 0xa5;
    uVar1 = 0x7d;
  }
  FUN_01b053d4(6,0,uVar1,"/aws-lc/crypto/fipsmodule/evp/evp_ctx.c",uVar4);
  return 0;
}

