// FUN_01781404 @ 01781404 size=1036 calls_out=7 calls_in=1
// strings: /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c

int FUN_01781404(int *param_1,uint *param_2,byte *param_3,uint param_4,undefined4 param_5,
                uint param_6,int param_7)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  byte *pbVar8;
  code *pcVar9;
  uint uVar10;
  uint uVar11;
  
  if ((*param_1 != 0) && (pcVar9 = *(code **)(*param_1 + 0x1c), pcVar9 != (code *)0x0)) {
    if ((int)param_4 < 0) {
      FUN_016e9cd0(4,0,0x45,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x207);
      *param_2 = 0;
      return 0;
    }
    uVar3 = (*pcVar9)(param_4,param_5,param_3,param_1,param_7);
    if ((int)uVar3 < 0) {
      *param_2 = 0;
      return 0;
    }
LAB_01781470:
    *param_2 = uVar3;
    return 1;
  }
  uVar3 = FUN_0175009c(param_1);
  if (param_4 < uVar3) {
    FUN_016e9cd0(4,0,0x87,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x1c4);
    return 0;
  }
  if (param_7 == 3) {
    pbVar7 = param_3;
  }
  else {
    pbVar7 = (byte *)FUN_0177a6c0();
    if (pbVar7 == (byte *)0x0) {
      iVar4 = 0;
      goto LAB_01781608;
    }
  }
  if (param_6 == uVar3) {
    iVar4 = FUN_017526c4(param_1,pbVar7,param_5);
    if (iVar4 == 0) goto LAB_01781694;
    if (param_7 == 3) goto LAB_01781470;
    if (param_7 == 4) {
      iVar4 = FUN_01780968(param_3,param_2,param_6,pbVar7,param_6,0,0,0,0);
      if (iVar4 != 0) goto LAB_01781608;
LAB_0178174c:
      FUN_016e9cd0(4,0,0x88,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x1f0);
    }
    else {
      if (param_7 == 1) {
        if (param_6 == 0) {
          FUN_016e9cd0(4,0,0x78,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0xee);
        }
        else if (param_6 < 0xb) {
          FUN_016e9cd0(4,0,0x7e,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0xf7);
        }
        else {
          uVar10 = 0;
          uVar11 = 0xffffffff;
          pbVar5 = pbVar7 + 1;
          bVar2 = *pbVar5;
          do {
            pbVar8 = pbVar5 + (1 - (int)pbVar7);
            pbVar5 = pbVar5 + 1;
            uVar1 = (int)(*pbVar5 - 1 & ~(uint)*pbVar5) >> 0x1f;
            uVar6 = uVar11 & uVar1;
            uVar10 = uVar6 & (uint)pbVar8 | uVar10 & ~uVar6;
            uVar11 = uVar11 & ~uVar1;
          } while (pbVar7 + (uVar3 - 1) != pbVar5);
          if ((~uVar11 & (int)(*pbVar7 - 1 & ~(uint)*pbVar7 & ~(bVar2 ^ 2) & (bVar2 ^ 2) - 1) >>
                         0x1f & ~((int)((uVar10 - 10 ^ uVar10 | uVar10 ^ 10) ^ uVar10) >> 0x1f)) ==
              0) {
            FUN_016e9cd0(4,0,0x89,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x11c);
          }
          else {
            uVar10 = uVar10 + 1;
            uVar11 = uVar3 - uVar10;
            if (uVar10 <= uVar3) {
              if (uVar11 != 0) {
                pbVar5 = pbVar7 + uVar10;
                if (param_3 < pbVar5) {
                  if (pbVar5 < param_3 + uVar11) {
LAB_017817c8:
                    /* WARNING: Does not return */
                    pcVar9 = (code *)software_udf(0,0x17817c8);
                    (*pcVar9)();
                  }
                }
                else if ((param_3 != pbVar5) && (param_3 < pbVar7 + uVar3)) goto LAB_017817c8;
                FUN_016dd1aa(param_3,pbVar5,uVar11);
              }
              iVar4 = 1;
              *param_2 = uVar11;
              goto LAB_01781608;
            }
            FUN_016e9cd0(4,0,0x89,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x124);
          }
        }
        goto LAB_0178174c;
      }
      FUN_016e9cd0(4,0,0x8f,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x1ea);
    }
  }
  else {
    FUN_016e9cd0(4,0,0x70,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",0x1d3);
LAB_01781694:
    if (param_7 == 3) {
      return 0;
    }
  }
  iVar4 = 0;
LAB_01781608:
  FUN_0177aafc(pbVar7);
  return iVar4;
}

