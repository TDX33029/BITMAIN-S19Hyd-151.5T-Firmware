// FUN_01b58abc @ 01b58abc size=388 calls_out=7 calls_in=0
// strings: /aws-lc/crypto/fipsmodule/evp/p_rsa.c

undefined4 FUN_01b58abc(int param_1,int param_2,uint *param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  uint local_30;
  int local_2c;
  
  iVar5 = *(int *)(param_1 + 0x14);
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 8) + 8);
  local_2c = DAT_01d53560;
  uVar1 = FUN_01b47374();
  if (param_2 == 0) {
    uVar6 = 1;
    *param_3 = uVar1;
  }
  else {
    uVar3 = *param_3;
    if (uVar3 < uVar1) {
      FUN_01b053d4(6,0,100,"/aws-lc/crypto/fipsmodule/evp/p_rsa.c",0xe5);
    }
    else {
      iVar4 = *(int *)(iVar5 + 8);
      if (*(int *)(iVar5 + 0xc) == 0) {
        uVar6 = FUN_01b587ac(uVar6,param_3,param_2,uVar3,param_4,param_5,iVar4);
        goto LAB_01b58b50;
      }
      if (iVar4 == 1) {
        uVar2 = FUN_01b3b4c8();
        iVar5 = FUN_01b58aa8(uVar2,param_4,param_5,param_2,&local_30,uVar6);
        if (iVar5 != 0) {
          *param_3 = local_30;
          uVar6 = 1;
          goto LAB_01b58b50;
        }
      }
      else if (iVar4 == 6) {
        uVar6 = FUN_01b587c0(uVar6,param_3,param_2,uVar3,param_4,param_5,*(int *)(iVar5 + 0xc),
                             *(undefined4 *)(iVar5 + 0x10),*(undefined4 *)(iVar5 + 0x14));
        goto LAB_01b58b50;
      }
    }
    uVar6 = 0;
  }
LAB_01b58b50:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar6;
}

