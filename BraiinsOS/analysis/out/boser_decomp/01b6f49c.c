// FUN_01b6f49c @ 01b6f49c size=652 calls_out=12 calls_in=2
// strings: /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c

undefined4
FUN_01b6f49c(byte *param_1,uint param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            undefined4 param_6,int param_7,int param_8)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  byte abStack_6c [64];
  int local_2c;
  
  local_2c = DAT_01d53560;
  if (param_7 == 0) {
    param_7 = FUN_01b3be88();
  }
  if (param_8 == 0) {
    param_8 = param_7;
  }
  iVar1 = FUN_01b3b6b4(param_7);
  if (param_2 < (uint)((iVar1 + 1) * 2)) {
    uVar10 = 0x2f;
LAB_01b6f528:
    uVar6 = 0x7e;
  }
  else {
    if (param_4 <= (param_2 - 2) + iVar1 * -2) {
      param_2 = param_2 - 1;
      if (param_2 < iVar1 * 2 + 1U) {
        uVar10 = 0x3a;
        goto LAB_01b6f528;
      }
      pbVar8 = param_1 + iVar1 + 1;
      *param_1 = 0;
      iVar2 = FUN_01b4abc4(param_5,param_6,pbVar8,0,param_7,0);
      if (iVar2 == 0) {
LAB_01b6f5ec:
        uVar9 = 0;
        iVar2 = 0;
      }
      else {
        if ((param_2 - param_4) + -1 + iVar1 * -2 != 0) {
          FUN_01bed93e(pbVar8 + iVar1,0);
        }
        (pbVar8 + ((param_2 - param_4) - iVar1))[-1] = 1;
        FUN_01b6f438(pbVar8 + ((param_2 - param_4) - iVar1),param_3,param_4);
        iVar2 = FUN_01b52ea0(param_1 + 1,iVar1);
        if (iVar2 != 1) {
                    /* WARNING: Subroutine does not return */
          FUN_01be32a0();
        }
        iVar5 = param_2 - iVar1;
        iVar2 = FUN_01b6ad8c(iVar5);
        if (iVar2 == 0) goto LAB_01b6f5ec;
        iVar3 = FUN_01b5558c(iVar2,iVar5,param_1 + 1,iVar1,param_8);
        if (iVar3 == 0) {
LAB_01b6f6d0:
          uVar9 = 0;
        }
        else {
          pbVar4 = (byte *)(iVar2 + -1);
          for (pbVar7 = pbVar8; pbVar7 != pbVar8 + iVar5; pbVar7 = pbVar7 + 1) {
            pbVar4 = pbVar4 + 1;
            *pbVar7 = *pbVar7 ^ *pbVar4;
          }
          iVar5 = FUN_01b5558c(abStack_6c,iVar1,pbVar8,iVar5,param_8);
          if (iVar5 == 0) goto LAB_01b6f6d0;
          pbVar7 = param_1 + iVar1;
          pbVar8 = abStack_6c;
          while (param_1 != pbVar7) {
            param_1 = param_1 + 1;
            *param_1 = *pbVar8 ^ *param_1;
            pbVar8 = pbVar8 + 1;
          }
          uVar9 = 1;
        }
      }
      FUN_01b6b1c4(iVar2);
      goto LAB_01b6f570;
    }
    uVar10 = 0x35;
    uVar6 = 0x72;
  }
  uVar9 = 0;
  FUN_01b053d4(4,0,uVar6,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",uVar10);
LAB_01b6f570:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar9;
}

