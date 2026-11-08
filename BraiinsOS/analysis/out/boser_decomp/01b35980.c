// FUN_01b35980 @ 01b35980 size=1012 calls_out=11 calls_in=2
// strings: aws_lc_0_39_0_bn_mod_exp_mont_small | /aws-lc/crypto/fipsmodule/bn/exponentiation.c | BN_is_odd(&mont->N) | aws_lc_0_39_0_bn_mod_exp_mont_small | /aws-lc/crypto/fipsmodule/bn/exponentiation.c | bits != 0

undefined8
FUN_01b35980(undefined4 param_1,undefined4 param_2,uint param_3,int param_4,uint param_5,
            undefined4 *param_6)

{
  uint uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined1 *puVar10;
  uint uVar11;
  bool bVar12;
  bool bVar13;
  undefined8 uVar14;
  uint local_4c0;
  uint local_4b4;
  undefined1 auStack_4b0 [68];
  undefined1 auStack_46c [68];
  undefined1 auStack_428 [1020];
  int local_2c;
  
  local_4b4 = param_5;
  local_2c = DAT_01d53560;
  if (param_6[6] == param_3) {
    bVar13 = 0x7fffffe < param_5;
    bVar12 = param_5 == 0x7ffffff;
    if (param_5 < 0x8000000) {
      bVar13 = 0x10 < param_3;
      bVar12 = param_3 == 0x11;
    }
    if (!bVar13 || bVar12) {
      iVar2 = FUN_01b2e5fc(param_6 + 5);
      if (iVar2 == 0) {
        uVar5 = 0x29f;
        pcVar3 = "BN_is_odd(&mont->N)";
LAB_01b35a2c:
                    /* WARNING: Subroutine does not return */
        FUN_01be3310(pcVar3,"/aws-lc/crypto/fipsmodule/bn/exponentiation.c",uVar5,
                     "aws_lc_0_39_0_bn_mod_exp_mont_small");
      }
      piVar6 = (int *)(param_4 + param_5 * 4);
LAB_01b35a34:
      if (local_4b4 == 0) {
        if (local_2c == DAT_01d53560) {
          uVar14 = FUN_01b3265c(param_1,param_3,*param_6,param_3);
          return uVar14;
        }
LAB_01b35ab4:
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      piVar6 = piVar6 + -1;
      if (*piVar6 == 0) {
        local_4b4 = local_4b4 - 1;
        goto LAB_01b35a34;
      }
      uVar14 = FUN_01b2aec4(*(undefined4 *)(param_4 + (local_4b4 + 0x3fffffff) * 4));
      iVar2 = (int)uVar14 + (local_4b4 - 1) * 0x20;
      if (iVar2 == 0) {
        uVar5 = 0x2ab;
        pcVar3 = "bits != 0";
        goto LAB_01b35a2c;
      }
      uVar4 = FUN_01b2089c(iVar2,(int)((ulonglong)uVar14 >> 0x20),param_3 << 2);
      if (4 < (int)uVar4) {
        uVar4 = 5;
      }
      FUN_01b26974(auStack_46c,param_2);
      if (uVar4 != 1) {
        FUN_01b33450(auStack_4b0,auStack_46c,auStack_46c,param_3,param_6);
        puVar9 = auStack_428;
        do {
          puVar10 = puVar9 + 0x44;
          FUN_01b33450(puVar9,puVar9 + -0x44,auStack_4b0,param_3,param_6);
          puVar9 = puVar10;
        } while (puVar10 != auStack_46c + (0x44 << (uVar4 - 1 & 0xff)));
      }
      uVar7 = iVar2 - 1;
      bVar12 = true;
      while( true ) {
        while (iVar2 = FUN_01b3594c(param_4,local_4b4,uVar7), iVar2 != 0) {
          uVar8 = 1;
          uVar11 = 0;
          local_4c0 = 1;
          while( true ) {
            uVar1 = uVar7;
            if (uVar8 <= uVar7) {
              uVar1 = uVar4;
            }
            if ((uVar8 > uVar7 || uVar4 < uVar8) || uVar1 == uVar8) break;
            iVar2 = FUN_01b3594c(param_4,local_4b4,uVar7 - uVar8);
            if (iVar2 != 0) {
              local_4c0 = local_4c0 << (uVar8 - uVar11 & 0xff) | 1;
              uVar11 = uVar8;
            }
            uVar8 = uVar8 + 1;
          }
          if (!bVar12) {
            for (uVar8 = 0; uVar8 < uVar11 + 1; uVar8 = uVar8 + 1) {
              FUN_01b33450(param_1,param_1,param_1,param_3,param_6);
            }
          }
          if ((uint)(1 << (uVar4 & 0xff)) <= local_4c0) {
            uVar5 = 0x2e2;
            pcVar3 = "wvalue < (1u << window)";
            goto LAB_01b35a2c;
          }
          if (bVar12) {
            FUN_01b26974(param_1,auStack_46c + (local_4c0 >> 1) * 0x44,param_3 << 2);
          }
          else {
            FUN_01b33450(param_1,param_1,auStack_46c + (local_4c0 >> 1) * 0x44,param_3,param_6);
          }
          if (uVar7 == uVar11) goto LAB_01b35d24;
          bVar12 = false;
          uVar7 = (uVar7 - 1) - uVar11;
        }
        if (!bVar12) {
          FUN_01b33450(param_1,param_1,param_1,param_3,param_6);
        }
        if (uVar7 == 0) break;
        uVar7 = uVar7 - 1;
      }
      if (bVar12) {
        uVar5 = 0x2f0;
        pcVar3 = "!r_is_one";
        goto LAB_01b35a2c;
      }
LAB_01b35d24:
      FUN_01b6b174(auStack_46c,0x440);
      if (local_2c == DAT_01d53560) {
        return 0;
      }
      goto LAB_01b35ab4;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0();
}

