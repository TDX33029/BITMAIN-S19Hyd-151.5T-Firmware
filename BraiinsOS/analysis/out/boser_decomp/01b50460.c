// FUN_01b50460 @ 01b50460 size=444 calls_out=2 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c

undefined4
FUN_01b50460(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  if (param_2 == 0) {
    uVar4 = 0x94;
    uVar1 = 0x76;
  }
  else {
    iVar3 = **(int **)(param_1 + 0x14);
    if (iVar3 == 0) {
      if (*(int *)(param_1 + 8) == 0) {
        uVar4 = 0x9a;
        uVar1 = 0x7c;
        goto LAB_01b5049c;
      }
      iVar3 = FUN_01b5044c(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
    }
    iVar2 = *(int *)(param_1 + 8);
    if (((iVar2 == 0) || (*(int *)(iVar2 + 8) == 0)) || (*(int *)(iVar2 + 4) != 0x3e1)) {
      uVar4 = 0xa4;
      uVar1 = 0x7e;
    }
    else {
      iVar2 = *(int *)(*(int *)(iVar2 + 8) + 4);
      if (iVar2 == 0) {
        uVar4 = 0xaa;
        uVar1 = 0x78;
      }
      else {
        if (param_6 == 0) {
          if ((*(int *)(iVar3 + 0x18) == param_3) &&
             (iVar3 = (**(code **)(*(int *)(iVar3 + 0x24) + 0x10))
                                (iVar2,param_2,param_3,param_4,param_5,0,0), iVar3 != 0)) {
            return 1;
          }
          uVar4 = 0xbb;
        }
        else {
          if ((*(int *)(iVar3 + 0x18) == param_3) &&
             (iVar3 = (**(code **)(*(int *)(iVar3 + 0x24) + 0x14))
                                (iVar2,param_2,param_3,param_4,param_5), iVar3 != 0)) {
            return 1;
          }
          uVar4 = 0xc3;
        }
        uVar1 = 0x83;
      }
    }
  }
LAB_01b5049c:
  FUN_01b053d4(6,0,uVar1,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",uVar4);
  return 0;
}

