// FUN_01752e24 @ 01752e24 size=404 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_rsa.c

undefined4 FUN_01752e24(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint local_28;
  int local_24;
  
  iVar6 = *(int *)(param_1 + 0x14);
  local_24 = DAT_018ddaf8;
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  uVar1 = FUN_0173a338(*(int *)(param_1 + 8));
  if (param_2 == 0) {
    *param_3 = uVar1;
    uVar3 = 1;
  }
  else {
    uVar4 = *param_3;
    if (uVar4 < uVar1) {
      uVar3 = 0;
      FUN_016e9cd0(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0xe5);
    }
    else {
      iVar7 = *(int *)(iVar6 + 0xc);
      iVar5 = *(int *)(iVar6 + 8);
      if (iVar7 == 0) {
        uVar3 = FUN_01752c0c(uVar3,param_3,param_2,uVar4,param_4,param_5,iVar5);
      }
      else {
        if (iVar5 == 1) {
          uVar2 = FUN_0172a6f0(iVar7);
          iVar6 = FUN_01752bf8(uVar2,param_4,param_5,param_2,&local_28,uVar3);
          if (iVar6 != 0) {
            *param_3 = local_28;
            uVar3 = 1;
            goto LAB_01752ebc;
          }
        }
        else if (iVar5 == 6) {
          uVar3 = FUN_01752cf8(uVar3,param_3,param_2,uVar4,param_4,param_5,iVar7,
                               *(undefined4 *)(iVar6 + 0x10),*(undefined4 *)(iVar6 + 0x14));
          goto LAB_01752ebc;
        }
        uVar3 = 0;
      }
    }
  }
LAB_01752ebc:
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return uVar3;
}

