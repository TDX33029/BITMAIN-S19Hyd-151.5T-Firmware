// FUN_01b6fa08 @ 01b6fa08 size=984 calls_out=20 calls_in=1
// strings: /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c

undefined4
FUN_01b6fa08(int *param_1,uint *param_2,undefined4 param_3,uint param_4,undefined4 param_5,
            uint param_6,int param_7)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined4 uVar7;
  char *pcVar8;
  code *pcVar9;
  int iVar10;
  undefined4 uVar11;
  
  if ((*param_1 != 0) && (pcVar9 = *(code **)(*param_1 + 0x20), pcVar9 != (code *)0x0)) {
    if ((int)param_4 < 0) {
      FUN_01b053d4(4,0,0x45,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x156);
    }
    else {
      uVar1 = (*pcVar9)(param_4,param_5,param_3,param_1,param_7);
      if (-1 < (int)uVar1) {
        *param_2 = uVar1;
        return 1;
      }
    }
    *param_2 = 0;
    return 0;
  }
  if ((param_1[1] == 0) || (param_1[2] == 0)) {
    uVar11 = 0x164;
    uVar7 = 0x90;
LAB_01b6faf4:
    FUN_01b053d4(4,0,uVar7,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",uVar11);
    return 0;
  }
  iVar2 = FUN_01b55940(param_1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar1 = FUN_01b565f4(param_1);
  if (param_4 < uVar1) {
    uVar11 = 0x173;
    uVar7 = 0x87;
    goto LAB_01b6faf4;
  }
  iVar2 = FUN_01b2e788();
  if (iVar2 == 0) {
    puVar5 = (undefined1 *)0x0;
    uVar7 = 0;
    goto LAB_01b6fbec;
  }
  FUN_01b2e894();
  iVar3 = FUN_01b2e970(iVar2);
  iVar4 = FUN_01b2e970(iVar2);
  puVar5 = (undefined1 *)FUN_01b6ad8c(uVar1);
  if (puVar5 == (undefined1 *)0x0 || (iVar4 == 0 || iVar3 == 0)) goto LAB_01b6fbd4;
  if (param_7 != 3) {
    if (param_7 == 4) {
      iVar6 = FUN_01b6f49c(puVar5,uVar1,param_5,param_6,0,0,0,0);
      goto LAB_01b6fd28;
    }
    if (param_7 == 1) {
      if (uVar1 < 0xb) {
        uVar11 = 0xd7;
        uVar7 = 0x7e;
        goto LAB_01b6fbcc;
      }
      if (uVar1 - 0xb < param_6) {
        uVar11 = 0xdc;
        uVar7 = 0x72;
        goto LAB_01b6fbcc;
      }
      *puVar5 = 0;
      puVar5[1] = 2;
      iVar10 = uVar1 - param_6;
      pcVar8 = puVar5 + 2;
      iVar6 = FUN_01b52ea0(pcVar8,iVar10 + -3);
      if (iVar6 != 1) {
LAB_01b6fccc:
                    /* WARNING: Subroutine does not return */
        FUN_01be32a0();
      }
      for (; pcVar8 != puVar5 + iVar10 + -1; pcVar8 = pcVar8 + 1) {
        while (*pcVar8 == '\0') {
          iVar6 = FUN_01b52ea0(pcVar8,1);
          if (iVar6 != 1) goto LAB_01b6fccc;
        }
      }
      puVar5[iVar10 + -1] = 0;
      FUN_01b6f438(puVar5 + iVar10,param_5,param_6);
      goto LAB_01b6fc88;
    }
    uVar11 = 0x191;
    uVar7 = 0x8f;
    goto LAB_01b6fbcc;
  }
  iVar6 = FUN_01b554f4(puVar5,uVar1,param_5,param_6);
LAB_01b6fd28:
  if (iVar6 < 1) {
LAB_01b6fbd4:
    uVar7 = 0;
  }
  else {
LAB_01b6fc88:
    iVar6 = FUN_01b2ba40(puVar5,uVar1,iVar3);
    if (iVar6 == 0) goto LAB_01b6fbd4;
    iVar6 = FUN_01b2be1c(iVar3,param_1[1]);
    if (-1 < iVar6) {
      uVar11 = 0x19f;
      uVar7 = 0x73;
LAB_01b6fbcc:
      FUN_01b053d4(4,0,uVar7,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",uVar11);
      goto LAB_01b6fbd4;
    }
    iVar6 = FUN_01b355d8(param_1 + 0x15,param_1 + 0xd,param_1[1],iVar2);
    if ((iVar6 == 0) ||
       (iVar3 = FUN_01b35f88(iVar4,iVar3,param_1[2],param_1[0x15] + 0x14,iVar2,param_1[0x15]),
       iVar3 == 0)) goto LAB_01b6fbd4;
    iVar3 = FUN_01b2bdb4(param_3,uVar1,iVar4);
    if (iVar3 == 0) {
      uVar11 = 0x1ab;
      uVar7 = 0x44;
      goto LAB_01b6fbcc;
    }
    uVar7 = 1;
    *param_2 = uVar1;
  }
  FUN_01b2ebbc(iVar2);
  FUN_01b2e7c8(iVar2);
LAB_01b6fbec:
  FUN_01b6b1c4(puVar5);
  return uVar7;
}

