// FUN_01b6f740 @ 01b6f740 size=692 calls_out=10 calls_in=2
// strings: /aws-lc/crypto/rsa_extra/rsa_crypt.c | /aws-lc/crypto/rsa_extra/rsa_crypt.c

void FUN_01b6f740(undefined4 param_1,uint *param_2,uint param_3,byte *param_4,uint param_5,
                 undefined4 param_6,undefined4 param_7,int param_8,int param_9)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  uint uVar13;
  uint uVar14;
  byte local_ac [64];
  undefined1 auStack_6c [64];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  if (param_8 == 0) {
    param_8 = FUN_01b3be88();
  }
  if (param_9 == 0) {
    param_9 = param_8;
  }
  uVar2 = FUN_01b3b6b4(param_8);
  if (param_5 < (uVar2 + 1) * 2) {
    pbVar12 = (byte *)0x0;
LAB_01b6f9bc:
    uVar4 = 0xcd;
    uVar7 = 0x85;
LAB_01b6f908:
    FUN_01b053d4(4,0,uVar7,"/aws-lc/crypto/rsa_extra/rsa_crypt.c",uVar4);
  }
  else {
    uVar11 = (param_5 - 1) - uVar2;
    pbVar12 = (byte *)FUN_01b6ad8c(uVar11);
    if (pbVar12 != (byte *)0x0) {
      iVar3 = FUN_01b5558c(local_ac,uVar2,param_4 + uVar2 + 1,uVar11,param_9);
      if (iVar3 != 0) {
        pbVar8 = param_4;
        pbVar9 = local_ac;
        while (pbVar8 != param_4 + uVar2) {
          pbVar8 = pbVar8 + 1;
          *pbVar9 = *pbVar9 ^ *pbVar8;
          pbVar9 = pbVar9 + 1;
        }
        iVar3 = FUN_01b5558c(pbVar12,uVar11,local_ac,uVar2,param_9);
        if (iVar3 != 0) {
          pbVar9 = param_4 + uVar2 + 1 + -1;
          for (pbVar8 = pbVar12; pbVar8 != pbVar12 + uVar11; pbVar8 = pbVar8 + 1) {
            pbVar9 = pbVar9 + 1;
            *pbVar8 = *pbVar8 ^ *pbVar9;
          }
          uVar13 = 0;
          iVar3 = FUN_01b4abc4(param_6,param_7,auStack_6c,0,param_8,0);
          if (iVar3 != 0) {
            uVar5 = FUN_01b6b750(pbVar12,auStack_6c,uVar2);
            uVar6 = 0xffffffff;
            uVar5 = ~((int)(*param_4 - 1 & ~(uint)*param_4 & ~uVar5 & uVar5 - 1) >> 0x1f);
            for (; uVar2 < uVar11; uVar2 = uVar2 + 1) {
              uVar14 = (uint)pbVar12[uVar2];
              uVar1 = (int)((uVar14 ^ 1) - 1 & ~(uVar14 ^ 1)) >> 0x1f;
              uVar10 = uVar6 & uVar1;
              uVar13 = uVar10 & uVar2 | ~uVar10 & uVar13;
              uVar6 = uVar6 & ~uVar1;
              uVar5 = uVar5 | uVar6 & ~((int)(uVar14 - 1 & ~uVar14) >> 0x1f);
            }
            if (uVar5 != 0 || uVar6 != 0) goto LAB_01b6f9bc;
            uVar11 = uVar11 - (uVar13 + 1);
            if (uVar11 <= param_3) {
              FUN_01b6f438(param_1,pbVar12 + uVar13 + 1,uVar11);
              *param_2 = uVar11;
              FUN_01b6b1c4(pbVar12);
              uVar4 = 1;
              uVar7 = extraout_r1_00;
              goto LAB_01b6f994;
            }
            uVar4 = 0xc1;
            uVar7 = 0x71;
            goto LAB_01b6f908;
          }
        }
      }
    }
  }
  FUN_01b6b1c4(pbVar12);
  uVar4 = 0;
  uVar7 = extraout_r1;
LAB_01b6f994:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar4,uVar7,local_2c ^ DAT_01d53560,0);
  }
  return;
}

