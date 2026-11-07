// FUN_01b33d3c @ 01b33d3c size=1116 calls_out=15 calls_in=7
// strings: /aws-lc/crypto/fipsmodule/bn/div.c | /aws-lc/crypto/fipsmodule/bn/div.c

undefined4 FUN_01b33d3c(int *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  bool bVar22;
  undefined4 uVar23;
  int local_3c;
  uint *local_30;
  
  iVar2 = FUN_01b2b88c(param_3);
  iVar3 = FUN_01b2b88c(param_4);
  if (((iVar2 < 1) || (*(int *)(*param_3 + (iVar2 + 0x3fffffff) * 4) != 0)) &&
     ((iVar3 < 1 || (*(int *)(*param_4 + (iVar3 + 0x3fffffff) * 4) != 0)))) {
    iVar2 = FUN_01b2e300(param_4);
    if (iVar2 == 0) {
      FUN_01b2e894(param_5);
      piVar4 = (int *)FUN_01b2e970(param_5);
      piVar5 = (int *)FUN_01b2e970(param_5);
      piVar6 = (int *)FUN_01b2e970(param_5);
      if (param_1 == (int *)0x0) {
        param_1 = (int *)FUN_01b2e970(param_5);
      }
      if (param_1 != (int *)0x0 && piVar6 != (int *)0x0) {
        uVar7 = FUN_01b2b8d0(param_4);
        iVar2 = FUN_01b339cc(piVar6,param_4,0x20 - (uVar7 & 0x1f));
        if (iVar2 != 0) {
          FUN_01b2b964(piVar6);
          iVar3 = 0x40 - (uVar7 & 0x1f);
          piVar6[3] = 0;
          iVar2 = FUN_01b339cc(piVar5,param_3,iVar3);
          if (iVar2 != 0) {
            FUN_01b2b964(piVar5);
            iVar2 = piVar6[1];
            piVar5[3] = 0;
            if (iVar2 + 1 < piVar5[1]) {
              iVar2 = FUN_01b2b248(piVar5,piVar5[1] + 1);
              if (iVar2 == 0) goto LAB_01b33ef8;
              *(undefined4 *)(*piVar5 + piVar5[1] * 4) = 0;
              iVar2 = piVar5[1] + 1;
            }
            else {
              iVar2 = FUN_01b2b248(piVar5,iVar2 + 2);
              if (iVar2 == 0) goto LAB_01b33ef8;
              for (iVar11 = piVar5[1]; iVar2 = piVar6[1] + 2, iVar11 < iVar2; iVar11 = iVar11 + 1) {
                *(undefined4 *)(*piVar5 + iVar11 * 4) = 0;
              }
            }
            piVar5[1] = iVar2;
            iVar12 = piVar6[1];
            iVar18 = iVar2 - iVar12;
            iVar13 = *piVar5;
            iVar11 = (iVar12 + 0x3fffffff) * 4;
            uVar7 = *(uint *)(*piVar6 + (iVar12 + 0x3fffffff) * 4);
            if (iVar12 == 1) {
              uVar14 = 0;
            }
            else {
              uVar14 = *(uint *)(*piVar6 + iVar11 + -4);
            }
            uVar15 = param_3[3];
            param_1[3] = param_4[3] ^ uVar15;
            iVar8 = FUN_01b2b248(param_1,iVar18 + 1);
            if (iVar8 != 0) {
              param_1[1] = iVar18 + -1;
              iVar20 = *param_1;
              iVar8 = FUN_01b2b248(piVar4,iVar12 + 1);
              if (iVar8 != 0) {
                iVar20 = iVar20 + iVar18 * 4;
                iVar8 = iVar13 + iVar18 * 4;
                puVar17 = (uint *)(iVar13 + (iVar2 + 0x3fffffff) * 4);
                local_30 = (uint *)(iVar20 + -4);
                if (param_1[1] == 0) {
                  param_1[3] = 0;
                }
                else {
                  local_30 = (uint *)(iVar20 + -8);
                }
                for (local_3c = 0; local_3c < iVar18 + -1; local_3c = local_3c + 1) {
                  if (uVar7 == *puVar17) {
                    uVar19 = 0xffffffff;
                  }
                  else {
                    uVar21 = puVar17[-1];
                    uVar19 = FUN_01bf0ff0(uVar21,*puVar17,uVar7,0);
                    uVar21 = uVar21 - uVar7 * uVar19;
                    lVar1 = (ulonglong)uVar19 * (ulonglong)uVar14;
                    while( true ) {
                      uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
                      uVar16 = (uint)lVar1;
                      if (uVar10 < uVar21 || uVar21 - uVar10 < (uint)(uVar16 <= puVar17[-2])) break;
                      uVar19 = uVar19 - 1;
                      bVar22 = CARRY4(uVar7,uVar21);
                      uVar21 = uVar7 + uVar21;
                      if (bVar22) break;
                      lVar1 = CONCAT44(uVar10 - (uVar16 < uVar14),uVar16 - uVar14);
                    }
                  }
                  iVar8 = iVar8 + -4;
                  uVar9 = FUN_01b2ef2c(*piVar4,*piVar6,iVar12,uVar19);
                  iVar2 = *piVar4;
                  *(undefined4 *)(iVar2 + iVar11 + 4) = uVar9;
                  iVar2 = FUN_01b30578(iVar8,iVar8,iVar2,iVar12 + 1);
                  if (iVar2 != 0) {
                    iVar2 = FUN_01b30190(iVar8,iVar8,*piVar6,iVar12);
                    uVar19 = uVar19 - 1;
                    if (iVar2 != 0) {
                      *puVar17 = *puVar17 + 1;
                    }
                  }
                  puVar17 = puVar17 + -1;
                  *local_30 = uVar19;
                  local_30 = local_30 + -1;
                }
                FUN_01b2b964(piVar5);
                if (param_2 != 0) {
                  iVar2 = FUN_01b33c8c(param_2,piVar5,iVar3);
                  if (iVar2 == 0) goto LAB_01b33ef8;
                  iVar2 = FUN_01b2e300(param_2);
                  if (iVar2 == 0) {
                    *(uint *)(param_2 + 0xc) = uVar15;
                  }
                }
                FUN_01b2b964(param_1);
                FUN_01b2ebbc(param_5);
                return 1;
              }
            }
          }
        }
      }
LAB_01b33ef8:
      FUN_01b2ebbc(param_5);
      return 0;
    }
    uVar23 = 0xa4;
    uVar9 = 0x69;
  }
  else {
    uVar23 = 0x9f;
    uVar9 = 0x6f;
  }
  FUN_01b053d4(3,0,uVar9,"/aws-lc/crypto/fipsmodule/bn/div.c",uVar23);
  return 0;
}

