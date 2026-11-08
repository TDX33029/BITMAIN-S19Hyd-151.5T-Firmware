// FUN_0117b004 @ 0117b004 size=2040 calls_out=9 calls_in=2
// strings: 

void FUN_0117b004(uint param_1,uint param_2,uint param_3,uint param_4,int param_5,int param_6)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  bool bVar17;
  undefined1 auStack_78 [8];
  int local_70 [19];
  
  if (param_2 < 0x21) {
LAB_0117b028:
    if (param_2 < 2) {
      return;
    }
    if (param_2 + 0x10 <= param_4) {
      uVar3 = param_2 >> 1;
      uVar10 = param_3 + uVar3 * 0x50;
      iVar11 = param_1 + uVar3 * 0x50;
      if (param_2 < 8) {
        FUN_01bed4e2(param_3,param_1,0x50);
        FUN_01bed4e2(uVar10,iVar11,0x50);
        uVar5 = 1;
      }
      else {
        FUN_01014a94(param_1,param_3);
        FUN_01014a94(iVar11,uVar10);
        uVar5 = 4;
      }
      local_70[1] = uVar3;
      local_70[0] = 0;
      iVar11 = 0;
      do {
        iVar2 = local_70[iVar11];
        uVar4 = uVar3;
        if (iVar2 != 0) {
          uVar4 = param_2 - uVar3;
        }
        if (uVar5 < uVar4) {
          iVar15 = uVar4 - uVar5;
          iVar14 = param_1 + uVar5 * 0x50 + iVar2 * 0x50;
          iVar12 = param_3 + uVar5 * 0x50 + iVar2 * 0x50;
          do {
            FUN_01bed4e2(iVar12,iVar14,0x50);
            FUN_01013534(param_3 + iVar2 * 0x50,iVar12);
            iVar14 = iVar14 + 0x50;
            iVar12 = iVar12 + 0x50;
            iVar15 = iVar15 + -1;
          } while (iVar15 != 0);
        }
        bVar16 = iVar11 == 0;
        iVar11 = 1;
      } while (bVar16);
      iVar2 = 0;
      iVar12 = uVar10 - 0x50;
      iVar11 = param_3 + param_2 * 0x50 + -0x50;
      do {
        uVar5 = *(uint *)(param_3 + 0x2c);
        uVar6 = *(uint *)(uVar10 + 0x2c);
        uVar4 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
        uVar7 = (uint)((int)uVar6 >> 0x1f) >> 1 ^ uVar6;
        bVar16 = (((uint)((byte)((int)uVar6 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar6 >> 0x1f) >> 1)
                 ^ *(uint *)(uVar10 + 0x28)) <
                 (((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar5 >> 0x1f) >> 1)
                 ^ *(uint *)(param_3 + 0x28));
        bVar17 = SBORROW4(uVar7,uVar4) != SBORROW4(uVar7 - uVar4,(uint)bVar16);
        bVar16 = (int)(uVar7 - (uVar4 + bVar16)) < 0;
        uVar6 = (uint)(bVar16 != bVar17);
        uVar4 = (uint)(bVar16 == bVar17);
        uVar5 = param_3;
        if (uVar6 != 0) {
          uVar5 = uVar10;
        }
        FUN_01bed4e2(param_1 + iVar2,uVar5,0x50);
        uVar5 = *(uint *)(iVar12 + 0x2c);
        uVar8 = *(uint *)(iVar11 + 0x2c);
        uVar7 = (uint)((int)uVar5 >> 0x1f) >> 1 ^ uVar5;
        uVar9 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
        bVar16 = (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1)
                 ^ *(uint *)(iVar11 + 0x28)) <
                 (((uint)((byte)((int)uVar5 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar5 >> 0x1f) >> 1)
                 ^ *(uint *)(iVar12 + 0x28));
        bVar17 = SBORROW4(uVar9,uVar7) != SBORROW4(uVar9 - uVar7,(uint)bVar16);
        bVar16 = (int)(uVar9 - (uVar7 + bVar16)) < 0;
        iVar14 = iVar11;
        if (bVar16 != bVar17) {
          iVar14 = iVar12;
        }
        FUN_01bed4e2((param_1 + param_2 * 0x50 + -0x50) - iVar2,iVar14,0x50);
        iVar14 = 0;
        if (bVar16 == bVar17) {
          iVar14 = -1;
        }
        iVar15 = 0;
        if (bVar16 != bVar17) {
          iVar15 = -1;
        }
        iVar2 = iVar2 + 0x50;
        iVar11 = iVar11 + iVar14 * 0x50;
        iVar12 = iVar12 + iVar15 * 0x50;
        param_3 = param_3 + (uVar4 | uVar4 << 2) * 0x10;
        uVar10 = uVar10 + (uVar6 | uVar6 << 2) * 0x10;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      uVar3 = iVar12 + 0x50;
      if ((param_2 & 1) == 0) {
        uVar4 = 0;
        uVar5 = uVar10;
      }
      else {
        bVar16 = uVar3 <= param_3;
        uVar5 = uVar10 + ((uint)bVar16 | (uint)bVar16 << 2) * 0x10;
        if (!bVar16) {
          uVar10 = param_3;
        }
        FUN_01bed4e2(param_1 + iVar2,uVar10,0x50);
        uVar4 = (uint)!bVar16 | (uint)!bVar16 << 2;
        param_3 = param_3 + uVar4 * 0x10;
      }
      if (param_3 == uVar3) {
        uVar4 = iVar11 + 0x50;
      }
      if (param_3 == uVar3 && uVar5 == uVar4) {
        return;
      }
      FUN_01307140();
    }
LAB_0117b7e0:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x117b7e0);
    (*pcVar1)();
  }
LAB_0117b090:
  uVar3 = param_2;
  do {
    if (param_5 == 0) {
      FUN_0117a924(param_1,uVar3,param_3,param_4,1);
      return;
    }
    uVar10 = (uVar3 >> 3) * 0x230 + param_1;
    uVar5 = param_1 + (uVar3 >> 3) * 0x140;
    if (uVar3 < 0x40) {
      uVar6 = *(uint *)(uVar10 + 0x2c);
      uVar8 = *(uint *)(uVar5 + 0x2c);
      uVar7 = *(uint *)(param_1 + 0x2c);
      uVar4 = ((uint)((byte)((int)uVar7 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar7 >> 0x1f) >> 1) ^
              *(uint *)(param_1 + 0x28);
      uVar7 = (uint)((int)uVar7 >> 0x1f) >> 1 ^ uVar7;
      uVar13 = (uint)((int)uVar6 >> 0x1f) >> 1 ^ uVar6;
      uVar9 = ((uint)((byte)((int)uVar6 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar6 >> 0x1f) >> 1) ^
              *(uint *)(uVar10 + 0x28);
      uVar6 = ((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1) ^
              *(uint *)(uVar5 + 0x28);
      uVar8 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
      bVar16 = (int)(uVar7 - (uVar8 + (uVar4 < uVar6))) < 0 !=
               (SBORROW4(uVar7,uVar8) != SBORROW4(uVar7 - uVar8,(uint)(uVar4 < uVar6)));
      if (bVar16 == ((int)(uVar8 - (uVar13 + (uVar6 < uVar9))) < 0 !=
                    (SBORROW4(uVar8,uVar13) != SBORROW4(uVar8 - uVar13,(uint)(uVar6 < uVar9))))) {
        uVar10 = uVar5;
      }
      if (bVar16 != ((int)(uVar7 - (uVar13 + (uVar4 < uVar9))) < 0 !=
                    (SBORROW4(uVar7,uVar13) != SBORROW4(uVar7 - uVar13,(uint)(uVar4 < uVar9))))) {
        uVar10 = param_1;
      }
    }
    else {
      uVar10 = FUN_005fd58c(param_1,uVar5,uVar10);
    }
    param_5 = param_5 + -1;
    FUN_01bed4e2(auStack_78,uVar10,0x50);
    uVar5 = uVar10 - param_1 >> 4;
    if (param_6 != 0) {
      uVar4 = *(uint *)(uVar10 + 0x2c);
      uVar8 = *(uint *)(param_6 + 0x2c);
      uVar6 = (uint)((int)uVar4 >> 0x1f) >> 1 ^ uVar4;
      uVar7 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
      bVar16 = (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1) ^
               *(uint *)(param_6 + 0x28)) <
               (((uint)((byte)((int)uVar4 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar4 >> 0x1f) >> 1) ^
               *(uint *)(uVar10 + 0x28));
      if ((int)(uVar7 - (uVar6 + bVar16)) < 0 ==
          (SBORROW4(uVar7,uVar6) != SBORROW4(uVar7 - uVar6,(uint)bVar16))) break;
    }
    if (param_4 < uVar3) goto LAB_0117b7e0;
    param_2 = 0;
    uVar4 = param_3 + uVar3 * 0x50;
    iVar11 = param_1 + uVar5 * 0x10;
    uVar10 = param_1;
    uVar6 = uVar5 * -0x33333333;
    while( true ) {
      for (; uVar10 < param_1 + uVar6 * 0x50; uVar10 = uVar10 + 0x50) {
        uVar7 = *(uint *)(iVar11 + 0x2c);
        uVar4 = uVar4 - 0x50;
        uVar8 = *(uint *)(uVar10 + 0x2c);
        uVar9 = (uint)((int)uVar7 >> 0x1f) >> 1 ^ uVar7;
        uVar13 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
        bVar16 = (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1)
                 ^ *(uint *)(uVar10 + 0x28)) <
                 (((uint)((byte)((int)uVar7 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar7 >> 0x1f) >> 1)
                 ^ *(uint *)(iVar11 + 0x28));
        uVar8 = param_2;
        uVar7 = uVar4;
        if ((int)(uVar13 - (uVar9 + bVar16)) < 0 !=
            (SBORROW4(uVar13,uVar9) != SBORROW4(uVar13 - uVar9,(uint)bVar16))) {
          uVar8 = param_2 + 1;
          uVar7 = param_3;
        }
        FUN_01bed4e2(uVar7 + param_2 * 0x50,uVar10,0x50);
        param_2 = uVar8;
      }
      if (uVar6 == uVar3) break;
      uVar4 = uVar4 - 0x50;
      FUN_01bed4e2(uVar4 + param_2 * 0x50,uVar10,0x50);
      uVar10 = uVar10 + 0x50;
      uVar6 = uVar3;
    }
    FUN_01bed4e2(param_1,param_3,param_2 * 0x50);
    iVar11 = uVar3 - param_2;
    if (iVar11 != 0) {
      iVar12 = param_1 + param_2 * 0x50;
      iVar14 = (param_3 - 0x50) + uVar3 * 0x50;
      iVar2 = iVar11;
      do {
        FUN_01bed4e2(iVar12,iVar14,0x50);
        iVar14 = iVar14 + -0x50;
        iVar12 = iVar12 + 0x50;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    if (param_2 == 0) break;
    if (uVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_0053349c,0x13,&DAT_01d30588);
    }
    FUN_0117b004(param_1 + param_2 * 0x50,iVar11,param_3,param_4,param_5,auStack_78);
    uVar3 = param_2;
    if (param_2 < 0x21) goto LAB_0117b028;
  } while( true );
  if (param_4 < uVar3) goto LAB_0117b7e0;
  uVar4 = param_3 + uVar3 * 0x50;
  uVar6 = 0;
  iVar11 = param_1 + uVar5 * 0x10;
  uVar5 = uVar5 * -0x33333333;
  uVar10 = param_1;
  while( true ) {
    for (; uVar10 < param_1 + uVar5 * 0x50; uVar10 = uVar10 + 0x50) {
      uVar7 = *(uint *)(uVar10 + 0x2c);
      uVar4 = uVar4 - 0x50;
      uVar8 = *(uint *)(iVar11 + 0x2c);
      uVar9 = (uint)((int)uVar7 >> 0x1f) >> 1 ^ uVar7;
      uVar13 = (uint)((int)uVar8 >> 0x1f) >> 1 ^ uVar8;
      bVar16 = (((uint)((byte)((int)uVar8 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar8 >> 0x1f) >> 1) ^
               *(uint *)(iVar11 + 0x28)) <
               (((uint)((byte)((int)uVar7 >> 0x1f) & 1) << 0x1f | (uint)((int)uVar7 >> 0x1f) >> 1) ^
               *(uint *)(uVar10 + 0x28));
      uVar8 = uVar6;
      uVar7 = uVar4;
      if ((int)(uVar13 - (uVar9 + bVar16)) < 0 ==
          (SBORROW4(uVar13,uVar9) != SBORROW4(uVar13 - uVar9,(uint)bVar16))) {
        uVar8 = uVar6 + 1;
        uVar7 = param_3;
      }
      FUN_01bed4e2(uVar7 + uVar6 * 0x50,uVar10,0x50);
      uVar6 = uVar8;
    }
    if (uVar5 == uVar3) break;
    FUN_01bed4e2(param_3 + uVar6 * 0x50,uVar10,0x50);
    uVar10 = uVar10 + 0x50;
    uVar6 = uVar6 + 1;
    uVar4 = uVar4 - 0x50;
    uVar5 = uVar3;
  }
  FUN_01bed4e2(param_1,param_3,uVar6 * 0x50);
  param_2 = uVar3 - uVar6;
  if (param_2 == 0) {
    return;
  }
  param_1 = param_1 + uVar6 * 0x50;
  iVar11 = (param_3 - 0x50) + uVar3 * 0x50;
  uVar10 = param_2;
  uVar5 = param_1;
  do {
    FUN_01bed4e2(uVar5,iVar11,0x50);
    iVar11 = iVar11 + -0x50;
    uVar5 = uVar5 + 0x50;
    uVar10 = uVar10 - 1;
  } while (uVar10 != 0);
  if (uVar3 < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar6,uVar3,uVar3,&DAT_01d30598);
  }
  param_6 = 0;
  if (param_2 < 0x21) goto LAB_0117b028;
  goto LAB_0117b090;
}

