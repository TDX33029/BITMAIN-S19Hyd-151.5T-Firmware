// FUN_01b31a04 @ 01b31a04 size=1064 calls_out=11 calls_in=2
// strings: bn_mul_part_recursive | /aws-lc/crypto/fipsmodule/bn/mul.c | n != 0 && (n & (n - 1)) == 0 | bn_mul_part_recursive | /aws-lc/crypto/fipsmodule/bn/mul.c | 0 <= tna && tna < n

undefined4
FUN_01b31a04(int param_1,int param_2,int param_3,uint param_4,uint param_5,uint param_6,int param_7)

{
  char *pcVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  
  if ((param_4 == 0) || ((param_4 - 1 & param_4) != 0)) {
    uVar6 = 0x102;
    pcVar1 = "n != 0 && (n & (n - 1)) == 0";
  }
  else {
    bVar15 = param_5 == 0;
    if (-1 < (int)param_5) {
      bVar15 = param_4 == param_5;
    }
    if (!bVar15 && (-1 < (int)param_5 && (int)param_5 <= (int)param_4)) {
      bVar15 = param_6 == 0;
      if (-1 < (int)param_6) {
        bVar15 = param_4 == param_6;
      }
      if (!bVar15 && (-1 < (int)param_6 && (int)param_6 <= (int)param_4)) {
        if ((param_5 - param_6) + 1 < 3) {
          iVar4 = param_4 * 2;
          if ((int)param_4 < 8) {
            FUN_01b2f018(param_1,param_2,param_4 + param_5,param_3,param_4 + param_6);
            uVar6 = FUN_01b257dc(param_1 + (param_5 + param_6 + iVar4) * 4,0,
                                 iVar4 - (param_5 + param_6));
            return uVar6;
          }
          iVar8 = param_2 + param_4 * 4;
          iVar13 = param_7 + param_4 * 8;
          uVar2 = FUN_01b315d4(param_7,param_2,iVar8,param_5,param_4 - param_5,iVar13);
          iVar9 = param_7 + param_4 * 4;
          iVar10 = param_3 + param_4 * 4;
          uVar3 = FUN_01b315d4(iVar9,iVar10,param_3,param_6,param_6 - param_4,iVar13);
          iVar11 = param_1 + param_4 * 8;
          iVar14 = param_4 * 0xc + iVar9;
          if (param_4 == 8) {
            FUN_01b2f234(iVar13,param_7);
            FUN_01b2f234(param_1,param_2,param_3);
            FUN_01b2f018(param_1 + 0x40,iVar8,param_5,iVar10,param_6);
            FUN_01b257dc(param_1 + (param_6 + 0x10 + param_5) * 4,0,((0x10 - param_6) - param_5) * 4
                        );
          }
          else {
            FUN_01b31670(iVar13,param_7,iVar9,param_4,0,0,iVar14);
            FUN_01b31670(param_1,param_2,param_3,param_4,0,0,iVar14);
            FUN_01b257dc(iVar11,0,param_4 << 3);
            uVar12 = param_5;
            if ((int)param_5 < 0x10) {
              uVar12 = param_6;
            }
            if ((int)uVar12 < 0x10) {
              FUN_01b2f018(iVar11,iVar8,param_5,iVar10,param_6);
            }
            else {
              uVar12 = param_4;
              if ((int)param_5 < (int)param_6) {
                uVar5 = param_6;
              }
              else {
                uVar5 = param_5;
              }
              do {
                uVar12 = (int)uVar12 / 2;
                if ((int)uVar12 < (int)uVar5) {
                  FUN_01b31a04(iVar11,iVar8,iVar10,uVar12,param_5 - uVar12,param_6 - uVar12,iVar14);
                  goto LAB_01b31c24;
                }
              } while (param_6 != uVar12 && param_5 != uVar12);
              FUN_01b31670(iVar11,iVar8,iVar10,uVar12,param_5 - uVar12,param_6 - uVar12,iVar14);
            }
          }
LAB_01b31c24:
          iVar8 = FUN_01b30190(param_7,param_1,iVar11,iVar4);
          iVar9 = FUN_01b30578(iVar14,param_7,iVar13,iVar4);
          iVar10 = FUN_01b30190(iVar13,param_7,iVar13,iVar4);
          FUN_01b2b82c(iVar13,uVar2 ^ uVar3,iVar14,iVar13,iVar4);
          iVar8 = FUN_01b0c6a4(uVar2 ^ uVar3,iVar8 - iVar9,iVar10 + iVar8);
          iVar9 = param_1 + param_4 * 4;
          iVar4 = FUN_01b30190(iVar9,iVar9,iVar13,iVar4);
          uVar2 = iVar8 + iVar4;
          puVar7 = (uint *)(param_1 + param_4 * 0xc);
          for (iVar4 = param_4 * 3; iVar4 < (int)(param_4 * 4); iVar4 = iVar4 + 1) {
            uVar3 = *puVar7;
            *puVar7 = uVar2 + uVar3;
            uVar2 = (uint)CARRY4(uVar2,uVar3);
            puVar7 = puVar7 + 1;
          }
          if (uVar2 == 0) {
            return 0;
          }
          uVar6 = 0x165;
          pcVar1 = "constant_time_declassify_int(c == 0)";
        }
        else {
          uVar6 = 0x106;
          pcVar1 = "-1 <= tna - tnb && tna - tnb <= 1";
        }
      }
      else {
        uVar6 = 0x105;
        pcVar1 = "0 <= tnb && tnb < n";
      }
    }
    else {
      uVar6 = 0x104;
      pcVar1 = "0 <= tna && tna < n";
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_01be3310(pcVar1,"/aws-lc/crypto/fipsmodule/bn/mul.c",uVar6,"bn_mul_part_recursive");
}

