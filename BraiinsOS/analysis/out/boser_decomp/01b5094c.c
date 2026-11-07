// FUN_01b5094c @ 01b5094c size=296 calls_out=6 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c

undefined4 FUN_01b5094c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  if (param_1 == 0) {
    uVar6 = 0x25;
  }
  else {
    if (*(int **)(param_1 + 0x14) != (int *)0x0) {
      iVar5 = **(int **)(param_1 + 0x14);
      if (iVar5 != 0) {
LAB_01b50a14:
        iVar2 = FUN_01b50344();
        if ((((iVar2 == 0) || (iVar3 = FUN_01b5035c(iVar2,iVar5), iVar3 == 0)) ||
            (iVar5 = (*(code *)**(undefined4 **)(iVar5 + 0x24))
                               (*(undefined4 *)(iVar2 + 4),*(undefined4 *)(iVar2 + 8),
                                *(undefined4 *)(iVar2 + 0xc)), iVar5 == 0)) ||
           (iVar5 = FUN_01b47c44(param_2,0x3e1,iVar2), iVar5 == 0)) {
          FUN_01b50418(iVar2);
          return 0;
        }
        return 1;
      }
      if (*(int *)(param_1 + 8) != 0) {
        iVar5 = FUN_01b5044c(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
        goto LAB_01b50a14;
      }
      uVar6 = 0x2b;
      uVar4 = 0x7c;
      uVar1 = 6;
      goto LAB_01b50988;
    }
    uVar6 = 0x27;
  }
  uVar4 = 0x43;
  uVar1 = 0xe;
LAB_01b50988:
  FUN_01b053d4(uVar1,0,uVar4,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",uVar6);
  return 0;
}

