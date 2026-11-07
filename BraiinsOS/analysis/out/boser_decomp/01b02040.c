// FUN_01b02040 @ 01b02040 size=1852 calls_out=33 calls_in=0
// strings: /aws-lc/crypto/dsa/dsa.c

undefined4
FUN_01b02040(int *param_1,uint param_2,undefined4 param_3,int param_4,uint param_5,int *param_6,
            int *param_7,undefined4 param_8)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 uVar11;
  int iVar12;
  int iVar13;
  char *pcVar14;
  byte *pbVar15;
  uint uVar16;
  char *pcVar17;
  undefined4 uVar18;
  byte *pbVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int local_d4;
  undefined1 auStack_ac [31];
  byte abStack_8d [33];
  char acStack_6c [32];
  byte abStack_4c [32];
  int local_2c;
  
  local_2c = DAT_01d53560;
  if (10000 < param_2) {
    FUN_01b053d4(10,0,0x6b,"/aws-lc/crypto/dsa/dsa.c",0xbe);
LAB_01b020c0:
    uVar18 = 0;
    goto LAB_01b020c4;
  }
  uVar2 = FUN_01b3b6b4(param_3);
  if (param_4 != 0) {
    if (param_5 < uVar2) goto LAB_01b020c0;
    FUN_01b01ed4(auStack_ac,param_4,uVar2);
  }
  iVar3 = FUN_01b2e788();
  if (iVar3 == 0) {
    iVar12 = 0;
    uVar18 = 0;
  }
  else {
    FUN_01b2e894();
    uVar18 = FUN_01b2e970(iVar3);
    uVar4 = FUN_01b2e970(iVar3);
    uVar5 = FUN_01b2e970(iVar3);
    uVar6 = FUN_01b2e970(iVar3);
    uVar7 = FUN_01b2e970(iVar3);
    uVar8 = FUN_01b2e970(iVar3);
    uVar9 = FUN_01b2e970(iVar3);
    iVar10 = FUN_01b2e970(iVar3);
    if (iVar10 == 0) {
LAB_01b02750:
      iVar12 = 0;
      uVar18 = 0;
    }
    else {
      if (param_2 < 0x200) {
        param_2 = 0x200;
      }
      uVar11 = FUN_01b2ae78();
      uVar16 = (param_2 + 0x3f & 0xffffffc0) - 1;
      iVar12 = FUN_01b339cc(iVar10,uVar11,uVar16);
      if (iVar12 == 0) goto LAB_01b02750;
      local_d4 = 0;
      pcVar17 = acStack_6c + uVar2;
      while (iVar12 = FUN_01b337a0(param_8,0,local_d4), iVar12 != 0) {
        if ((param_4 == 0) && (iVar12 = FUN_01b52ea0(auStack_ac,uVar2), iVar12 != 1)) {
                    /* WARNING: Subroutine does not return */
          FUN_01be32a0();
        }
        FUN_01b01ed4(acStack_6c,auStack_ac,uVar2);
        FUN_01b01ed4(abStack_4c,auStack_ac,uVar2);
        pcVar14 = pcVar17;
        for (uVar21 = uVar2 - 1; uVar21 < uVar2; uVar21 = uVar21 - 1) {
          pcVar14 = pcVar14 + -1;
          cVar1 = *pcVar14;
          *pcVar14 = cVar1 + '\x01';
          if ((char)(cVar1 + '\x01') != '\0') break;
        }
        uVar21 = 0;
        iVar12 = FUN_01b4abc4(auStack_ac,uVar2,abStack_8d + 1,0,param_3,0);
        if (iVar12 == 0) break;
        iVar12 = FUN_01b4abc4(acStack_6c,uVar2,abStack_4c,0,param_3,0);
        if (iVar12 == 0) break;
        pbVar15 = abStack_4c;
        pbVar19 = abStack_8d + 1;
        for (; uVar21 != uVar2; uVar21 = uVar21 + 1) {
          *pbVar19 = *pbVar19 ^ *pbVar15;
          pbVar15 = pbVar15 + 1;
          pbVar19 = pbVar19 + 1;
        }
        abStack_8d[1] = ~((byte)~(byte)(((uint)abStack_8d[1] << 0x19) >> 0x18) >> 1);
        abStack_8d[uVar2] = abStack_8d[uVar2] | 1;
        pbVar15 = abStack_8d + 1;
        iVar12 = FUN_01b2ba40(pbVar15,uVar2,uVar6);
        if (iVar12 == 0) break;
        iVar12 = FUN_01b545b8(uVar6,0x32,iVar3,param_4 == 0,param_8);
        if (0 < iVar12) {
          iVar12 = FUN_01b337a0(param_8,2,0);
          if ((iVar12 != 0) && (iVar12 = FUN_01b337a0(param_8,3,0), iVar12 != 0)) {
            iVar20 = 0;
            do {
              iVar12 = 0;
              iVar22 = 0;
              FUN_01b2af70(uVar5);
              do {
                pcVar14 = pcVar17;
                for (uVar21 = uVar2 - 1; uVar21 < uVar2; uVar21 = uVar21 - 1) {
                  pcVar14 = pcVar14 + -1;
                  cVar1 = *pcVar14;
                  *pcVar14 = cVar1 + '\x01';
                  if ((char)(cVar1 + '\x01') != '\0') break;
                }
                iVar13 = FUN_01b4abc4(acStack_6c,uVar2,pbVar15,0,param_3,0);
                if ((((iVar13 == 0) || (iVar13 = FUN_01b2ba40(pbVar15,uVar2,uVar18), iVar13 == 0))
                    || (iVar13 = FUN_01b339cc(uVar18,uVar18,iVar12), iVar13 == 0)) ||
                   (iVar13 = FUN_01b3081c(uVar5,uVar5,uVar18), iVar13 == 0)) goto LAB_01b022a0;
                iVar22 = iVar22 + 1;
                iVar12 = iVar12 + uVar2 * 8;
              } while (iVar22 <= (int)(uVar16 / 0xa0));
              iVar12 = FUN_01b377e0(uVar5,uVar16);
              if (((iVar12 == 0) || (iVar12 = FUN_01b2b33c(uVar7,uVar5), iVar12 == 0)) ||
                 ((iVar12 = FUN_01b3081c(uVar7,uVar7,iVar10), iVar12 == 0 ||
                  ((iVar12 = FUN_01b33afc(uVar18,uVar6), iVar12 == 0 ||
                   (iVar12 = FUN_01b33d3c(0,uVar8,uVar7,uVar18,iVar3), iVar12 == 0)))))) break;
              uVar11 = FUN_01b2ae78();
              iVar12 = FUN_01b30908(uVar18,uVar8,uVar11);
              if ((iVar12 == 0) || (iVar12 = FUN_01b30908(uVar9,uVar7,uVar18), iVar12 == 0)) break;
              iVar12 = FUN_01b2be38(uVar9,iVar10);
              if (-1 < iVar12) {
                iVar12 = FUN_01b545b8(uVar9,0x32,iVar3,1,param_8);
                if (0 < iVar12) {
                  iVar12 = FUN_01b337a0(param_8,2,1);
                  if (iVar12 == 0) goto LAB_01b02750;
                  uVar5 = FUN_01b2ae78();
                  iVar12 = FUN_01b30908(iVar10,uVar9,uVar5);
                  if (((iVar12 == 0) ||
                      (iVar12 = FUN_01b33d3c(uVar18,0,iVar10,uVar6,iVar3), iVar12 == 0)) ||
                     (iVar12 = FUN_01b35574(uVar9,iVar3), iVar12 == 0)) goto LAB_01b02750;
                  iVar22 = FUN_01b2b4cc(iVar10,2);
                  if (iVar22 == 0) goto LAB_01b0269c;
                  iVar22 = 2;
                  goto LAB_01b02628;
                }
                if (iVar12 != 0) break;
              }
              iVar20 = iVar20 + 1;
              if (iVar20 == 0x1000) goto LAB_01b0235c;
              iVar12 = FUN_01b337a0(param_8,0,iVar20);
              if (iVar12 == 0) break;
            } while( true );
          }
          break;
        }
        if (iVar12 != 0) break;
LAB_01b0235c:
        param_4 = 0;
        local_d4 = local_d4 + 1;
      }
LAB_01b022a0:
      iVar12 = 0;
LAB_01b0269c:
      uVar18 = 0;
    }
LAB_01b026a0:
    FUN_01b2ebbc(iVar3);
    FUN_01b2e7c8(iVar3);
  }
  FUN_01b323f0(iVar12);
  FUN_01b6b174(auStack_ac,0x20);
LAB_01b020c4:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return uVar18;
LAB_01b02628:
  iVar13 = FUN_01b35f88(uVar4,iVar10,uVar18,uVar9,iVar3,iVar12);
  if (iVar13 == 0) goto LAB_01b0269c;
  iVar13 = FUN_01b2e54c(uVar4);
  if (iVar13 == 0) {
    iVar10 = FUN_01b337a0(param_8,3,1);
    if (iVar10 != 0) {
      FUN_01b1f904(*param_1);
      FUN_01b1f904(param_1[1]);
      FUN_01b1f904(param_1[2]);
      iVar10 = FUN_01b2b3b0(uVar9);
      *param_1 = iVar10;
      iVar10 = FUN_01b2b3b0(uVar6);
      param_1[1] = iVar10;
      iVar10 = FUN_01b2b3b0(uVar4);
      param_1[2] = iVar10;
      uVar18 = 0;
      if (*param_1 == 0) goto LAB_01b026a0;
      if (iVar10 != 0 && param_1[1] != 0) {
        uVar18 = 1;
        if (param_6 != (int *)0x0) {
          *param_6 = iVar20;
        }
        if (param_7 != (int *)0x0) {
          *param_7 = iVar22;
        }
        goto LAB_01b026a0;
      }
    }
    goto LAB_01b0269c;
  }
  uVar5 = FUN_01b2ae78();
  iVar13 = FUN_01b3081c(iVar10,iVar10,uVar5);
  if (iVar13 == 0) goto LAB_01b0269c;
  iVar22 = iVar22 + 1;
  goto LAB_01b02628;
}

