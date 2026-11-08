// FUN_01a51920 @ 01a51920 size=1960 calls_out=10 calls_in=2
// strings: 

void FUN_01a51920(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  code *pcVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  bool bVar19;
  int local_10c;
  undefined1 auStack_e8 [8];
  int local_e0 [47];
  
  if (0x20 < param_2) {
    local_10c = param_6;
    uVar8 = param_2;
    do {
      while( true ) {
        if (param_5 == 0) {
          FUN_01a520f4(param_1,uVar8,param_3,param_4,1);
          return;
        }
        uVar9 = (uVar8 >> 3) * 0x540 + param_1;
        uVar11 = param_1 + (uVar8 >> 3) * 0x300;
        if (uVar8 < 0x40) {
          uVar17 = *(uint *)(uVar11 + 0x78);
          uVar14 = *(uint *)(param_1 + 0x78);
          uVar5 = *(undefined4 *)(uVar11 + 0x74);
          uVar2 = *(undefined4 *)(param_1 + 0x74);
          uVar7 = uVar17;
          if (uVar14 < uVar17) {
            uVar7 = uVar14;
          }
          uVar18 = FUN_01bed842(uVar2,uVar5,uVar7);
          uVar16 = *(uint *)(uVar9 + 0x78);
          uVar6 = *(undefined4 *)(uVar9 + 0x74);
          if (uVar18 == 0) {
            uVar18 = uVar14 - uVar17;
          }
          uVar7 = uVar16;
          if (uVar14 < uVar16) {
            uVar7 = uVar14;
          }
          uVar3 = FUN_01bed842(uVar2,uVar6,uVar7);
          if (uVar3 == 0) {
            uVar3 = uVar14 - uVar16;
          }
          uVar7 = param_1;
          if (-1 < (int)(uVar18 ^ uVar3)) {
            uVar7 = uVar16;
            if (uVar17 < uVar16) {
              uVar7 = uVar17;
            }
            uVar14 = FUN_01bed842(uVar5,uVar6,uVar7);
            if (uVar14 == 0) {
              uVar14 = uVar17 - uVar16;
            }
            uVar7 = uVar11;
            if ((int)(uVar18 ^ uVar14) < 0) {
              uVar7 = uVar9;
            }
          }
        }
        else {
          uVar7 = FUN_01a54990(param_1,uVar11,uVar9);
        }
        param_5 = param_5 + -1;
        FUN_01bed4e2(auStack_e8,uVar7,0xc0);
        uVar11 = uVar7 - param_1 >> 6;
        if (local_10c == 0) break;
        uVar14 = *(uint *)(uVar7 + 0x78);
        uVar17 = *(uint *)(local_10c + 0x78);
        uVar9 = uVar14;
        if (uVar17 < uVar14) {
          uVar9 = uVar17;
        }
        uVar9 = FUN_01bed842(*(undefined4 *)(local_10c + 0x74),*(undefined4 *)(uVar7 + 0x74),uVar9);
        if (uVar9 == 0) {
          uVar9 = uVar17 - uVar14;
        }
        if (0x7fffffff < uVar9) break;
LAB_01a51c94:
        if (param_4 < uVar8) goto LAB_01a520b0;
        uVar7 = param_3 + uVar8 * 0xc0;
        uVar14 = 0;
        iVar10 = param_1 + uVar11 * 0x40;
        uVar9 = param_1;
        uVar11 = uVar11 * -0x55555555;
        while( true ) {
          for (; uVar9 < param_1 + uVar11 * 0xc0; uVar9 = uVar9 + 0xc0) {
            uVar18 = *(uint *)(uVar9 + 0x78);
            uVar16 = *(uint *)(iVar10 + 0x78);
            uVar17 = uVar18;
            if (uVar16 < uVar18) {
              uVar17 = uVar16;
            }
            uVar17 = FUN_01bed842(*(undefined4 *)(iVar10 + 0x74),*(undefined4 *)(uVar9 + 0x74),
                                  uVar17);
            uVar7 = uVar7 - 0xc0;
            if (uVar17 == 0) {
              uVar17 = uVar16 - uVar18;
            }
            uVar18 = uVar7;
            if (uVar17 < 0x80000000) {
              uVar18 = param_3;
            }
            iVar4 = uVar14 * 0xc0;
            if (uVar17 < 0x80000000) {
              uVar14 = uVar14 + 1;
            }
            FUN_01bed4e2(uVar18 + iVar4,uVar9,0xc0);
          }
          if (uVar11 == uVar8) break;
          FUN_01bed4e2(param_3 + uVar14 * 0xc0,uVar9,0xc0);
          uVar9 = uVar9 + 0xc0;
          uVar14 = uVar14 + 1;
          uVar7 = uVar7 - 0xc0;
          uVar11 = uVar8;
        }
        FUN_01bed4e2(param_1,param_3,uVar14 * 0xc0);
        param_2 = uVar8 - uVar14;
        if (param_2 == 0) {
          return;
        }
        iVar4 = param_1 + uVar14 * 0xc0;
        iVar10 = (param_3 - 0xc0) + uVar8 * 0xc0;
        uVar11 = param_2;
        do {
          FUN_01bed4e2(iVar4,iVar10,0xc0);
          iVar10 = iVar10 + -0xc0;
          iVar4 = iVar4 + 0xc0;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        if (uVar8 < uVar14) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar14,uVar8,uVar8,&DAT_01d30598);
        }
        param_1 = param_1 + uVar14 * 0xc0;
        local_10c = 0;
        uVar8 = param_2;
        if (param_2 < 0x21) goto LAB_01a51944;
      }
      if (param_4 < uVar8) goto LAB_01a520b0;
      param_2 = 0;
      uVar7 = param_3 + uVar8 * 0xc0;
      iVar10 = param_1 + uVar11 * 0x40;
      uVar14 = uVar11 * -0x55555555;
      uVar9 = param_1;
      while( true ) {
        for (; uVar9 < param_1 + uVar14 * 0xc0; uVar9 = uVar9 + 0xc0) {
          uVar16 = *(uint *)(iVar10 + 0x78);
          uVar18 = *(uint *)(uVar9 + 0x78);
          uVar17 = uVar16;
          if (uVar18 < uVar16) {
            uVar17 = uVar18;
          }
          iVar4 = FUN_01bed842(*(undefined4 *)(uVar9 + 0x74),*(undefined4 *)(iVar10 + 0x74),uVar17);
          uVar7 = uVar7 - 0xc0;
          if (iVar4 == 0) {
            iVar4 = uVar18 - uVar16;
          }
          uVar17 = uVar7;
          if (iVar4 < 0) {
            uVar17 = param_3;
          }
          FUN_01bed4e2(uVar17 + param_2 * 0xc0,uVar9,0xc0);
          param_2 = param_2 - (iVar4 >> 0x1f);
        }
        if (uVar14 == uVar8) break;
        uVar7 = uVar7 - 0xc0;
        FUN_01bed4e2(uVar7 + param_2 * 0xc0,uVar9,0xc0);
        uVar9 = uVar9 + 0xc0;
        uVar14 = uVar8;
      }
      FUN_01bed4e2(param_1,param_3,param_2 * 0xc0);
      iVar10 = uVar8 - param_2;
      if (iVar10 != 0) {
        iVar12 = param_1 + param_2 * 0xc0;
        iVar13 = (param_3 - 0xc0) + uVar8 * 0xc0;
        iVar4 = iVar10;
        do {
          FUN_01bed4e2(iVar12,iVar13,0xc0);
          iVar13 = iVar13 + -0xc0;
          iVar12 = iVar12 + 0xc0;
          iVar4 = iVar4 + -1;
        } while (iVar4 != 0);
      }
      if (param_2 == 0) goto LAB_01a51c94;
      if (uVar8 < param_2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
      }
      FUN_01a51920(param_1 + param_2 * 0xc0,iVar10,param_3,param_4,param_5,auStack_e8);
      uVar8 = param_2;
    } while (0x20 < param_2);
  }
LAB_01a51944:
  if (param_2 < 2) {
    return;
  }
  if (param_2 + 0x10 <= param_4) {
    uVar8 = param_2 >> 1;
    uVar11 = param_3 + uVar8 * 0xc0;
    iVar10 = param_1 + uVar8 * 0xc0;
    if (param_2 < 8) {
      FUN_01bed4e2(param_3,param_1,0xc0);
      FUN_01bed4e2(uVar11,iVar10,0xc0);
      uVar9 = 1;
    }
    else {
      FUN_01a4cc20(param_1,param_3);
      FUN_01a4cc20(iVar10,uVar11);
      uVar9 = 4;
    }
    local_e0[0] = 0;
    iVar10 = 0;
    local_e0[1] = uVar8;
    do {
      iVar4 = local_e0[iVar10];
      uVar7 = uVar8;
      if (iVar4 != 0) {
        uVar7 = param_2 - uVar8;
      }
      if (uVar9 < uVar7) {
        iVar15 = uVar7 - uVar9;
        iVar13 = param_1 + uVar9 * 0xc0 + iVar4 * 0xc0;
        iVar12 = param_3 + uVar9 * 0xc0 + iVar4 * 0xc0;
        do {
          FUN_01bed4e2(iVar12,iVar13,0xc0);
          FUN_01a4cb48(param_3 + iVar4 * 0xc0,iVar12);
          iVar13 = iVar13 + 0xc0;
          iVar12 = iVar12 + 0xc0;
          iVar15 = iVar15 + -1;
        } while (iVar15 != 0);
      }
      bVar19 = iVar10 == 0;
      iVar10 = 1;
    } while (bVar19);
    iVar10 = param_3 + param_2 * 0xc0 + -0xc0;
    iVar4 = uVar11 - 0xc0;
    uVar9 = 0;
    do {
      uVar17 = *(uint *)(param_3 + 0x78);
      uVar14 = *(uint *)(uVar11 + 0x78);
      uVar7 = uVar17;
      if (uVar14 < uVar17) {
        uVar7 = uVar14;
      }
      uVar7 = FUN_01bed842(*(undefined4 *)(uVar11 + 0x74),*(undefined4 *)(param_3 + 0x74),uVar7);
      if (uVar7 == 0) {
        uVar7 = uVar14 - uVar17;
      }
      uVar14 = uVar11;
      if (uVar7 < 0x80000000) {
        uVar14 = param_3;
      }
      FUN_01bed4e2(param_1 + uVar9,uVar14,0xc0);
      uVar17 = *(uint *)(iVar4 + 0x78);
      uVar18 = *(uint *)(iVar10 + 0x78);
      uVar14 = uVar17;
      if (uVar18 < uVar17) {
        uVar14 = uVar18;
      }
      uVar14 = FUN_01bed842(*(undefined4 *)(iVar10 + 0x74),*(undefined4 *)(iVar4 + 0x74),uVar14);
      if (uVar14 == 0) {
        uVar14 = uVar18 - uVar17;
      }
      iVar12 = iVar4;
      if (uVar14 < 0x80000000) {
        iVar12 = iVar10;
      }
      FUN_01bed4e2((param_1 + param_2 * 0xc0 + -0xc0) - uVar9,iVar12,0xc0);
      uVar8 = uVar8 - 1;
      uVar11 = uVar11 + (uVar7 >> 0x1f | (uVar7 >> 0x1f) << 1) * 0x40;
      uVar7 = uVar7 >> 0x1f ^ 1;
      param_3 = param_3 + (uVar7 | uVar7 << 1) * 0x40;
      iVar4 = iVar4 + ((int)uVar14 >> 0x1f) * 0xc0;
      iVar10 = iVar10 + ~((int)uVar14 >> 0x1f) * 0xc0;
      uVar9 = uVar9 + 0xc0;
    } while (uVar8 != 0);
    uVar8 = iVar4 + 0xc0;
    if ((param_2 & 1) == 0) {
      uVar7 = uVar11;
    }
    else {
      bVar19 = uVar8 <= param_3;
      uVar7 = uVar11 + ((uint)bVar19 | (uint)bVar19 << 1) * 0x40;
      if (!bVar19) {
        uVar11 = param_3;
      }
      FUN_01bed4e2(param_1 + uVar9,uVar11,0xc0);
      uVar9 = (uint)!bVar19 | (uint)!bVar19 << 1;
      param_3 = param_3 + uVar9 * 0x40;
    }
    if (param_3 == uVar8) {
      uVar9 = iVar10 + 0xc0;
    }
    if (param_3 == uVar8 && uVar7 == uVar9) {
      return;
    }
    FUN_01307140();
  }
LAB_01a520b0:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x1a520b0);
  (*pcVar1)();
}

