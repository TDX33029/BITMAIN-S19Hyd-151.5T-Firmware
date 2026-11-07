// FUN_0171ead4 @ 0171ead4 size=1196 calls_out=15 calls_in=7
// strings: /aws-lc/crypto/fipsmodule/bn/div.c | /aws-lc/crypto/fipsmodule/bn/div.c

undefined4 FUN_0171ead4(int *param_1,int param_2,int *param_3,int *param_4,undefined4 param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  int iVar21;
  uint *puVar22;
  bool bVar23;
  int local_4c;
  int local_2c;
  
  iVar2 = FUN_01714e64(param_3);
  iVar3 = FUN_01714e64(param_4);
  if (((0 < iVar2) && (*(int *)(*param_3 + (iVar2 + 0x3fffffff) * 4) == 0)) ||
     ((0 < iVar3 && (*(int *)(*param_4 + (iVar3 + 0x3fffffff) * 4) == 0)))) {
    FUN_016e9cd0(3,0,0x6f,"/aws-lc/crypto/fipsmodule/bn/div.c",0x9f);
    return 0;
  }
  iVar2 = FUN_01717e5c(param_4);
  if (iVar2 != 0) {
    FUN_016e9cd0(3,0,0x69,"/aws-lc/crypto/fipsmodule/bn/div.c",0xa4);
    return 0;
  }
  FUN_017185b4(param_5);
  piVar4 = (int *)FUN_017186b0(param_5);
  piVar5 = (int *)FUN_017186b0(param_5);
  piVar6 = (int *)FUN_017186b0(param_5);
  if (param_1 == (int *)0x0) {
    param_1 = (int *)FUN_017186b0(param_5);
  }
  uVar8 = (uint)(param_1 == (int *)0x0 || piVar6 == (int *)0x0);
  if (param_1 != (int *)0x0 && piVar6 != (int *)0x0) {
    uVar7 = FUN_01714eb4(param_4);
    iVar2 = FUN_0171e6a8(piVar6,param_4,0x20 - (uVar7 & 0x1f));
    if (iVar2 != 0) {
      FUN_01714f48(piVar6);
      piVar6[3] = uVar8;
      iVar2 = FUN_0171e6a8(piVar5,param_3);
      if (iVar2 != 0) {
        FUN_01714f48(piVar5);
        iVar2 = piVar6[1];
        piVar5[3] = uVar8;
        if (iVar2 + 1 < piVar5[1]) {
          iVar2 = FUN_0171464c(piVar5,piVar5[1] + 1);
          if (iVar2 == 0) goto LAB_0171eba8;
          local_4c = *piVar5;
          *(uint *)(local_4c + piVar5[1] * 4) = uVar8;
          iVar2 = piVar5[1] + 1;
        }
        else {
          iVar2 = FUN_0171464c(piVar5,iVar2 + 2);
          if (iVar2 == 0) goto LAB_0171eba8;
          iVar3 = piVar5[1];
          local_4c = *piVar5;
          iVar2 = piVar6[1] + 2;
          if (iVar3 < iVar2) {
            puVar22 = (uint *)(local_4c + iVar3 * 4);
            do {
              *puVar22 = uVar8;
              iVar3 = iVar3 + 1;
              iVar2 = piVar6[1] + 2;
              puVar22 = puVar22 + 1;
            } while (iVar3 < iVar2);
          }
        }
        uVar20 = param_3[3];
        piVar5[1] = iVar2;
        iVar15 = piVar6[1];
        iVar21 = iVar2 - iVar15;
        iVar3 = (iVar15 + 0x3fffffff) * 4;
        uVar8 = *(uint *)(*piVar6 + (iVar15 + 0x3fffffff) * 4);
        if (iVar15 == 1) {
          uVar11 = 0;
        }
        else {
          uVar11 = *(uint *)(*piVar6 + iVar3 + -4);
        }
        param_1[3] = param_4[3] ^ uVar20;
        iVar9 = FUN_0171464c(param_1,iVar21 + 1);
        if (iVar9 != 0) {
          iVar16 = iVar21 + -1;
          param_1[1] = iVar16;
          iVar19 = *param_1;
          iVar9 = FUN_0171464c(piVar4);
          if (iVar9 != 0) {
            iVar21 = (iVar21 + 0x3fffffff) * 4;
            if (param_1[1] == 0) {
              param_1[3] = 0;
            }
            puVar22 = (uint *)(iVar19 + iVar21);
            if (param_1[1] != 0) {
              puVar22 = puVar22 + -1;
            }
            if (0 < iVar16) {
              iVar21 = local_4c + iVar21 + 4;
              puVar13 = (uint *)(local_4c + (iVar2 + 0x3fffffff) * 4);
              local_2c = 0;
              do {
                if (uVar8 == *puVar13) {
                  uVar17 = 0xffffffff;
                }
                else {
                  uVar18 = puVar13[-1];
                  uVar17 = FUN_01846088(uVar18,*puVar13,uVar8,0);
                  uVar18 = uVar18 - uVar8 * uVar17;
                  lVar1 = (ulonglong)uVar17 * (ulonglong)uVar11;
                  uVar12 = (uint)((ulonglong)lVar1 >> 0x20);
                  if (uVar18 <= uVar12 && (uint)((uint)lVar1 <= puVar13[-2]) <= uVar18 - uVar12) {
                    do {
                      bVar23 = CARRY4(uVar8,uVar18);
                      uVar18 = uVar8 + uVar18;
                      uVar17 = uVar17 - 1;
                      if (bVar23) break;
                      uVar14 = (uint)lVar1 - uVar11;
                      uVar12 = (int)((ulonglong)lVar1 >> 0x20) - (uint)((uint)lVar1 < uVar11);
                      lVar1 = CONCAT44(uVar12,uVar14);
                    } while (uVar18 <= uVar12 && (uint)(uVar14 <= puVar13[-2]) <= uVar18 - uVar12);
                  }
                }
                iVar21 = iVar21 + -4;
                uVar10 = FUN_01718cb4(*piVar4,*piVar6,iVar15,uVar17);
                iVar2 = *piVar4;
                *(undefined4 *)(iVar2 + iVar3 + 4) = uVar10;
                iVar2 = FUN_0171a550(iVar21,iVar21,iVar2,iVar15 + 1);
                if (iVar2 != 0) {
                  uVar17 = uVar17 - 1;
                  iVar2 = FUN_0171a054(iVar21,iVar21,*piVar6,iVar15);
                  if (iVar2 != 0) {
                    *puVar13 = *puVar13 + 1;
                  }
                }
                puVar13 = puVar13 + -1;
                *puVar22 = uVar17;
                local_2c = local_2c + 1;
                puVar22 = puVar22 + -1;
              } while (iVar16 != local_2c);
            }
            FUN_01714f48(piVar5);
            if (param_2 != 0) {
              iVar2 = FUN_0171ea08(param_2,piVar5,0x40 - (uVar7 & 0x1f));
              if (iVar2 == 0) goto LAB_0171eba8;
              iVar2 = FUN_01717e5c(param_2);
              if (iVar2 == 0) {
                *(uint *)(param_2 + 0xc) = uVar20;
              }
            }
            FUN_01714f48(param_1);
            FUN_01718904(param_5);
            return 1;
          }
        }
      }
    }
  }
LAB_0171eba8:
  FUN_01718904(param_5);
  return 0;
}

