// FUN_01b506c4 @ 01b506c4 size=476 calls_out=2 calls_in=2
// strings: /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c | /aws-lc/crypto/fipsmodule/evp/p_pqdsa.c

undefined4
FUN_01b506c4(int param_1,int param_2,int *param_3,undefined4 param_4,undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  
  if (param_3 == (int *)0x0) {
    uVar5 = 0x3f;
    uVar3 = 0x43;
    uVar1 = 0xe;
    goto LAB_01b50708;
  }
  iVar4 = **(int **)(param_1 + 0x14);
  if (iVar4 == 0) {
    if (*(int *)(param_1 + 8) != 0) {
      iVar4 = FUN_01b5044c(*(undefined4 *)(*(int *)(param_1 + 8) + 8));
      goto LAB_01b50778;
    }
    uVar5 = 0x45;
    uVar3 = 0x7c;
  }
  else {
LAB_01b50778:
    if (param_2 == 0) {
      *param_3 = *(int *)(iVar4 + 0x18);
      return 1;
    }
    if (*(int *)(iVar4 + 0x18) == *param_3) {
      iVar2 = *(int *)(param_1 + 8);
      if (((iVar2 == 0) || (*(int *)(iVar2 + 8) == 0)) || (*(int *)(iVar2 + 4) != 0x3e1)) {
        uVar5 = 0x5a;
        uVar3 = 0x7e;
      }
      else {
        iVar2 = *(int *)(*(int *)(iVar2 + 8) + 8);
        if (iVar2 == 0) {
          uVar5 = 0x60;
          uVar3 = 0x78;
        }
        else if (param_6 == 0) {
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x24) + 8))
                            (iVar2,param_2,param_3,param_4,param_5,0,0);
          if (iVar4 != 0) {
            return 1;
          }
          uVar5 = 0x70;
          uVar3 = 0x44;
        }
        else {
          iVar4 = (**(code **)(*(int *)(iVar4 + 0x24) + 0xc))(iVar2,param_2,param_3,param_4,param_5)
          ;
          if (iVar4 != 0) {
            return 1;
          }
          uVar5 = 0x77;
          uVar3 = 0x44;
        }
      }
    }
    else {
      uVar5 = 0x52;
      uVar3 = 100;
    }
  }
  uVar1 = 6;
LAB_01b50708:
  FUN_01b053d4(uVar1,0,uVar3,"/aws-lc/crypto/fipsmodule/evp/p_pqdsa.c",uVar5);
  return 0;
}

