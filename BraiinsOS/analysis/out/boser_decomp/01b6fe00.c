// FUN_01b6fe00 @ 01b6fe00 size=820 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c

int FUN_01b6fe00(int *param_1,uint *param_2,byte *param_3,uint param_4,undefined4 param_5,
                uint param_6,int param_7)

{
  uint uVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  code *pcVar8;
  uint uVar9;
  uint uVar10;
  undefined4 uVar11;
  
  if ((*param_1 != 0) && (pcVar8 = *(code **)(*param_1 + 0x1c), pcVar8 != (code *)0x0)) {
    if ((int)param_4 < 0) {
      FUN_01b053d4(4,0,0x45,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x207);
    }
    else {
      uVar2 = (*pcVar8)(param_4,param_5,param_3,param_1,param_7);
      if (-1 < (int)uVar2) {
LAB_01b6feb4:
        *param_2 = uVar2;
        return 1;
      }
    }
    *param_2 = 0;
    return 0;
  }
  uVar2 = FUN_01b565f4(param_1);
  if (param_4 < uVar2) {
    FUN_01b053d4(4,0,0x87,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x1c4);
    return 0;
  }
  pbVar3 = param_3;
  if ((param_7 != 3) && (pbVar3 = (byte *)FUN_01b6ad8c(), pbVar3 == (byte *)0x0)) {
    iVar7 = 0;
    goto LAB_01b700c4;
  }
  if (param_6 == uVar2) {
    iVar7 = FUN_01b58590(param_1,pbVar3,param_5,param_6);
    if (iVar7 == 0) goto LAB_01b6ff3c;
    if (param_7 == 3) goto LAB_01b6feb4;
    if (param_7 == 4) {
      iVar7 = FUN_01b6f740(param_3,param_2,param_6,pbVar3,param_6,0,0,0,0);
      if (iVar7 != 0) goto LAB_01b700c4;
LAB_01b70070:
      uVar11 = 0x1f0;
      uVar5 = 0x88;
    }
    else {
      if (param_7 == 1) {
        if (param_6 == 0) {
          uVar11 = 0xee;
          uVar5 = 0x78;
        }
        else if (param_6 < 0xb) {
          uVar11 = 0xf7;
          uVar5 = 0x7e;
        }
        else {
          uVar10 = 0xffffffff;
          uVar6 = 0;
          uVar1 = 2;
          do {
            uVar9 = uVar1;
            uVar1 = (int)(pbVar3[uVar9] - 1 & ~(uint)pbVar3[uVar9]) >> 0x1f;
            uVar4 = uVar10 & uVar1;
            uVar10 = uVar10 & ~uVar1;
            uVar6 = uVar4 & uVar9 | ~uVar4 & uVar6;
            uVar1 = uVar9 + 1;
          } while (uVar2 != uVar9 + 1);
          if ((~uVar10 & (int)(*pbVar3 - 1 & ~(uint)*pbVar3 & ~(pbVar3[1] ^ 2) & (pbVar3[1] ^ 2) - 1
                              ) >> 0x1f &
              ~((int)((uVar6 - 10 ^ uVar6 | uVar6 ^ 10) ^ uVar6) >> 0x1f)) == 0) {
            uVar11 = 0x11c;
            uVar5 = 0x89;
          }
          else {
            uVar9 = uVar9 - uVar6;
            if (uVar9 <= uVar2) {
              FUN_01b6f438(param_3,pbVar3 + uVar6 + 1,uVar9);
              *param_2 = uVar9;
              iVar7 = 1;
              goto LAB_01b700c4;
            }
            uVar11 = 0x124;
            uVar5 = 0x89;
          }
        }
        FUN_01b053d4(4,0,uVar5,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",uVar11);
        goto LAB_01b70070;
      }
      uVar11 = 0x1ea;
      uVar5 = 0x8f;
    }
    FUN_01b053d4(4,0,uVar5,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",uVar11);
  }
  else {
    FUN_01b053d4(4,0,0x70,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x1d3);
LAB_01b6ff3c:
    if (param_7 == 3) {
      return 0;
    }
  }
  iVar7 = 0;
LAB_01b700c4:
  FUN_01b6b1c4(pbVar3);
  return iVar7;
}

