// FUN_01748344 @ 01748344 size=336 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c

undefined8 FUN_01748344(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == 0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0x25);
  }
  else if (*(int **)(param_1 + 0x14) == (int *)0x0) {
    FUN_016e9cd0(0xe,0,0x43,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0x27);
  }
  else {
    iVar3 = **(int **)(param_1 + 0x14);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        FUN_016e9cd0(6,0,0x7c,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",0x2b);
        return 0;
      }
      iVar3 = FUN_01747f5c(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
    }
    iVar1 = FUN_01747da8();
    if ((((iVar1 != 0) && (iVar2 = FUN_01747dc0(iVar1,iVar3), iVar2 != 0)) &&
        (iVar3 = (*(code *)**(undefined4 **)(iVar3 + 0x24))
                           (*(undefined4 *)(iVar1 + 4),*(undefined4 *)(iVar1 + 8),
                            *(undefined4 *)(iVar1 + 0xc)), iVar3 != 0)) &&
       (iVar3 = FUN_0173aef0(param_2,0x3e1,iVar1), iVar3 != 0)) {
      return 1;
    }
    FUN_01747ef4(iVar1);
  }
  return 0;
}

