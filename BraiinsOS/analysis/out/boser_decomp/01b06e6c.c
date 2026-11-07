// FUN_01b06e6c @ 01b06e6c size=448 calls_out=8 calls_in=0
// strings: /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c | /aws-lc/crypto/evp_extra/p_dsa.c

bool FUN_01b06e6c(int param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  bool bVar5;
  int iVar6;
  undefined4 uVar7;
  undefined1 auStack_2c [8];
  int local_24;
  
  local_24 = DAT_01d53560;
  if (*(int *)(param_1 + 8) == 0) {
    uVar7 = 0xb3;
LAB_01b06ef8:
    uVar4 = 0x43;
    uVar1 = 0xe;
  }
  else {
    iVar6 = *(int *)(*(int *)(param_1 + 8) + 8);
    if (iVar6 == 0) {
      uVar7 = 0xb4;
      goto LAB_01b06ef8;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      uVar7 = 0xb5;
      goto LAB_01b06ef8;
    }
    if (param_4 == 0) {
      uVar7 = 0xb6;
      goto LAB_01b06ef8;
    }
    if ((*(int *)(*(int *)(param_1 + 0x14) + 0xc) == 0) ||
       (iVar2 = FUN_01b3b6b4(), iVar2 == param_5)) {
      FUN_01afd61c(auStack_2c,param_2,param_3);
      iVar2 = FUN_01b0350c(auStack_2c);
      if ((iVar2 == 0) || (iVar3 = FUN_01afd684(auStack_2c), iVar3 != 0)) {
        bVar5 = false;
      }
      else {
        iVar6 = FUN_01b0303c(param_4,param_5,iVar2,iVar6);
        bVar5 = iVar6 == 1;
      }
      FUN_01b028d4(iVar2);
      goto LAB_01b06f04;
    }
    uVar7 = 0xbc;
    uVar4 = 0x85;
    uVar1 = 6;
  }
  bVar5 = false;
  FUN_01b053d4(uVar1,0,uVar4,"/aws-lc/crypto/evp_extra/p_dsa.c",uVar7);
LAB_01b06f04:
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return bVar5;
}

