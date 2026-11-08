// FUN_01b567f8 @ 01b567f8 size=872 calls_out=14 calls_in=1
// strings: /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c | /aws-lc/crypto/fipsmodule/rsa/padding.c

undefined4
FUN_01b567f8(int param_1,undefined4 param_2,int param_3,int param_4,byte *param_5,int param_6)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  undefined4 local_8c;
  undefined1 auStack_84 [24];
  undefined1 auStack_6c [64];
  int local_2c;
  
  local_2c = DAT_01d53560;
  if (param_4 == 0) {
    param_4 = param_3;
  }
  FUN_01b3b838(auStack_84);
  iVar1 = FUN_01b3b6b4(param_3);
  iVar5 = iVar1;
  if (((param_6 == -1) || (iVar5 = param_6, param_6 == -2)) || (-3 < param_6)) {
    iVar2 = FUN_01b2b8d0(*(undefined4 *)(param_1 + 4));
    uVar10 = iVar2 - 1U & 7;
    uVar3 = FUN_01b565f4(param_1);
    if (((uint)*param_5 & 0xff << uVar10) != 0) {
      uVar11 = 0xc1;
      uVar6 = 0x7a;
      goto LAB_01b5688c;
    }
    if (uVar10 == 0) {
      uVar3 = uVar3 - 1;
      param_5 = param_5 + 1;
    }
    if ((uVar3 < iVar1 + 2U) || ((-1 < iVar5 && (uVar3 < iVar5 + iVar1 + 2U)))) {
      uVar11 = 0xcb;
      uVar6 = 0x71;
      goto LAB_01b5688c;
    }
    if (param_5[uVar3 - 1] != 0xbc) {
      uVar11 = 0xcf;
      uVar6 = 0x7f;
      goto LAB_01b5688c;
    }
    iVar2 = (uVar3 - iVar1) + -1;
    pbVar8 = (byte *)FUN_01b6ad8c(iVar2);
    if (pbVar8 != (byte *)0x0) {
      iVar4 = FUN_01b5558c(pbVar8,iVar2,param_5 + iVar2,iVar1,param_4);
      local_8c = 0;
      if (iVar4 == 0) goto LAB_01b56a00;
      uVar3 = (uVar3 - iVar1) - 2;
      pbVar7 = pbVar8 + -1;
      pbVar9 = param_5 + -1;
      while (pbVar7 != pbVar8 + uVar3) {
        pbVar7 = pbVar7 + 1;
        pbVar9 = pbVar9 + 1;
        *pbVar7 = *pbVar7 ^ *pbVar9;
      }
      if (uVar10 != 0) {
        *pbVar8 = *pbVar8 & (byte)(0xff >> (8 - uVar10 & 0xff));
      }
      for (uVar10 = 0; pbVar8[uVar10] == 0; uVar10 = uVar10 + 1) {
        if (uVar3 <= uVar10) goto LAB_01b569e0;
      }
      if (pbVar8[uVar10] == 1) {
        iVar4 = uVar10 + 1;
        if ((iVar5 < 0) || (iVar2 - iVar4 == iVar5)) {
          iVar5 = FUN_01b4aa54(auStack_84,param_3,0);
          if (((iVar5 == 0) ||
              (((iVar5 = FUN_01b3bc2c(auStack_84,&DAT_0053ab40,8), iVar5 == 0 ||
                (iVar5 = FUN_01b3bc2c(auStack_84,param_2,iVar1), iVar5 == 0)) ||
               (iVar5 = FUN_01b3bc2c(auStack_84,pbVar8 + iVar4,iVar2 - iVar4), iVar5 == 0)))) ||
             (iVar5 = FUN_01b3bc6c(auStack_84,auStack_6c,0), iVar5 == 0)) goto LAB_01b56a00;
          iVar5 = FUN_01b20118(auStack_6c,param_5 + iVar2,iVar1);
          if (iVar5 == 0) {
            local_8c = 1;
            goto LAB_01b56a00;
          }
          uVar11 = 0xfe;
          uVar6 = 0x69;
        }
        else {
          uVar11 = 0xf2;
          uVar6 = 0x8a;
        }
      }
      else {
LAB_01b569e0:
        uVar11 = 0xec;
        uVar6 = 0x8b;
      }
      FUN_01b053d4(4,0,uVar6,"/aws-lc/crypto/fipsmodule/rsa/padding.c",uVar11);
      goto LAB_01b56a00;
    }
  }
  else {
    uVar11 = 0xba;
    uVar6 = 0x8a;
LAB_01b5688c:
    FUN_01b053d4(4,0,uVar6,"/aws-lc/crypto/fipsmodule/rsa/padding.c",uVar11);
  }
  pbVar8 = (byte *)0x0;
  local_8c = 0;
LAB_01b56a00:
  FUN_01b6b1c4(pbVar8);
  FUN_01b3b854(auStack_84);
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return local_8c;
}

