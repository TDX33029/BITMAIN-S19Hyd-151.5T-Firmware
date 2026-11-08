// FUN_00b8c800 @ 00b8c800 size=1600 calls_out=4 calls_in=2
// strings: 

void FUN_00b8c800(int param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  char cVar4;
  char cVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  undefined4 *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  int iVar21;
  int *piVar22;
  uint uVar23;
  ulonglong uVar24;
  uint local_1c8;
  uint local_1a4 [66];
  byte abStack_9b [67];
  
  uVar24 = FUN_01846088(0,0x40000000,param_2,0);
  lVar1 = (ulonglong)param_2 * (uVar24 & 0xffffffff);
  uVar2 = uVar24 + 1;
  if ((int)lVar1 == 0 &&
      (int)(uVar24 >> 0x20) * param_2 + (int)((ulonglong)lVar1 >> 0x20) == 0x40000000) {
    uVar2 = uVar24;
  }
  if (param_2 < 0x1001) {
    uVar6 = param_2 - (param_2 >> 1);
    if (0x3f < uVar6) {
      uVar6 = 0x40;
    }
  }
  else {
    uVar6 = LZCOUNT(param_2 | 1) ^ 0x1f;
    iVar21 = (uVar6 & 1) + (uVar6 >> 1);
    uVar6 = (1 << iVar21) + (param_2 >> iVar21) >> 1;
  }
  uVar14 = 0;
  uVar17 = 0;
  uVar23 = 1;
  do {
    uVar10 = 0;
    local_1c8 = 1;
    if (uVar14 < param_2) {
      iVar21 = param_1 + uVar14 * 0x38;
      local_1c8 = param_2 - uVar14;
      if (local_1c8 < uVar6) {
LAB_00b8c924:
        if (param_5 == 0) {
          if (uVar6 <= local_1c8) {
            local_1c8 = uVar6;
          }
          local_1c8 = local_1c8 << 1;
        }
        else {
          if (0x1f < local_1c8) {
            local_1c8 = 0x20;
          }
          FUN_00b8d1e8(iVar21,local_1c8,param_3,param_4,0,0);
          local_1c8 = local_1c8 << 1 | 1;
        }
      }
      else {
        if (local_1c8 < 2) {
          uVar10 = local_1c8;
        }
        else {
          cVar4 = FUN_010e1310(iVar21 + 0x38,iVar21);
          if (cVar4 == -1) {
            if (local_1c8 != 2) {
              uVar10 = 2;
              iVar8 = param_1 + 0x38 + uVar14 * 0x38;
              do {
                iVar8 = iVar8 + 0x38;
                cVar5 = FUN_010e1310(iVar8);
                if (cVar5 != -1) goto LAB_00b8ca3c;
                uVar10 = uVar10 + 1;
              } while (local_1c8 != uVar10);
              goto LAB_00b8ca38;
            }
            uVar10 = 2;
            uVar12 = 1;
LAB_00b8ca5c:
            iVar21 = uVar14 * 0x38;
            iVar9 = param_1 + -0x1c + uVar10 * 0x38;
            iVar8 = param_1;
            do {
              iVar16 = iVar9 + iVar21;
              puVar15 = (undefined4 *)(iVar8 + iVar21);
              uVar11 = *puVar15;
              iVar8 = iVar8 + 0x38;
              uVar12 = uVar12 - 1;
              *puVar15 = *(undefined4 *)(iVar16 + -0x1c);
              *(undefined4 *)(iVar16 + -0x1c) = uVar11;
              uVar11 = puVar15[1];
              puVar15[1] = *(undefined4 *)(iVar16 + -0x18);
              *(undefined4 *)(iVar16 + -0x18) = uVar11;
              uVar11 = puVar15[2];
              puVar15[2] = *(undefined4 *)(iVar16 + -0x14);
              *(undefined4 *)(iVar16 + -0x14) = uVar11;
              uVar11 = puVar15[3];
              puVar15[3] = *(undefined4 *)(iVar16 + -0x10);
              *(undefined4 *)(iVar16 + -0x10) = uVar11;
              uVar11 = puVar15[4];
              puVar15[4] = *(undefined4 *)(iVar16 + -0xc);
              *(undefined4 *)(iVar16 + -0xc) = uVar11;
              uVar11 = puVar15[5];
              puVar15[5] = *(undefined4 *)(iVar16 + -8);
              *(undefined4 *)(iVar16 + -8) = uVar11;
              uVar11 = puVar15[6];
              puVar15[6] = *(undefined4 *)(iVar16 + -4);
              *(undefined4 *)(iVar16 + -4) = uVar11;
              uVar11 = *(undefined4 *)(iVar9 + iVar21);
              *(undefined4 *)(iVar9 + iVar21) = puVar15[7];
              iVar9 = iVar9 + -0x38;
              puVar15[7] = uVar11;
              uVar11 = *(undefined4 *)(iVar16 + 4);
              *(undefined4 *)(iVar16 + 4) = puVar15[8];
              puVar15[8] = uVar11;
              uVar11 = puVar15[9];
              puVar15[9] = *(undefined4 *)(iVar16 + 8);
              *(undefined4 *)(iVar16 + 8) = uVar11;
              uVar11 = *(undefined4 *)(iVar16 + 0xc);
              *(undefined4 *)(iVar16 + 0xc) = puVar15[10];
              puVar15[10] = uVar11;
              uVar11 = puVar15[0xb];
              puVar15[0xb] = *(undefined4 *)(iVar16 + 0x10);
              *(undefined4 *)(iVar16 + 0x10) = uVar11;
              uVar11 = *(undefined4 *)(iVar16 + 0x14);
              *(undefined4 *)(iVar16 + 0x14) = puVar15[0xc];
              puVar15[0xc] = uVar11;
              uVar11 = puVar15[0xd];
              puVar15[0xd] = *(undefined4 *)(iVar16 + 0x18);
              *(undefined4 *)(iVar16 + 0x18) = uVar11;
            } while (uVar12 != 0);
          }
          else {
            uVar10 = 2;
            if (local_1c8 != 2) {
              iVar8 = param_1 + 0x38 + uVar14 * 0x38;
              do {
                iVar8 = iVar8 + 0x38;
                cVar5 = FUN_010e1310(iVar8);
                if (cVar5 == -1) goto LAB_00b8ca3c;
                uVar10 = uVar10 + 1;
              } while (local_1c8 != uVar10);
LAB_00b8ca38:
              uVar10 = local_1c8;
LAB_00b8ca3c:
              if (uVar10 < uVar6) goto LAB_00b8c924;
              if (cVar4 == -1) {
                uVar12 = uVar10 >> 1;
                if (uVar12 != 0) goto LAB_00b8ca5c;
                uVar10 = 1;
              }
            }
          }
        }
        local_1c8 = uVar10 << 1 | 1;
      }
      uVar10 = uVar14 - (uVar23 >> 1);
      uVar12 = uVar14 + (local_1c8 >> 1);
      uVar13 = uVar12 + uVar14;
      lVar1 = (uVar2 & 0xffffffff) * (ulonglong)uVar13;
      lVar3 = uVar2 * CONCAT14(CARRY4(uVar10,uVar14),uVar10 + uVar14);
      uVar12 = (uint)CARRY4(uVar12,uVar14) * (int)uVar2 +
               uVar13 * (int)(uVar2 >> 0x20) + (int)((ulonglong)lVar1 >> 0x20) ^
               (uint)((ulonglong)lVar3 >> 0x20);
      uVar10 = LZCOUNT((uint)lVar1 ^ (uint)lVar3) + 0x20;
      if (uVar12 != 0) {
        uVar10 = LZCOUNT(uVar12);
      }
    }
    if (1 < uVar17) {
      do {
        while( true ) {
          uVar12 = uVar17 - 1;
          if (abStack_9b[uVar17] < uVar10) goto LAB_00b8d178;
          uVar20 = local_1a4[uVar12];
          uVar13 = uVar20 >> 1;
          uVar18 = uVar13 + (uVar23 >> 1);
          uVar17 = uVar12;
          if ((uVar18 <= param_4) && (((uVar20 | uVar23) & 1) == 0)) break;
          piVar7 = (int *)(param_1 + (uVar14 - uVar18) * 0x38);
          if ((uVar20 & 1) == 0) {
            FUN_00b8d1e8(piVar7,uVar13,param_3,param_4,LZCOUNT(uVar13 | 1) << 1 ^ 0x3e,0);
          }
          if ((uVar23 & 1) == 0) {
            FUN_00b8d1e8(piVar7 + uVar13 * 0xe,uVar23 >> 1,param_3,param_4,
                         LZCOUNT(uVar23 >> 1 | 1) << 1 ^ 0x3e,0);
          }
          uVar19 = uVar23 >> 1;
          if (1 < uVar20 && 1 < uVar23) {
            uVar23 = uVar13;
            if (uVar19 < uVar13) {
              uVar23 = uVar19;
            }
            if (uVar23 <= param_4) {
              piVar22 = piVar7 + uVar13 * 0xe;
              if (uVar19 < uVar13) {
                piVar7 = piVar22;
              }
              FUN_016dd1aa(param_3,piVar7,uVar23 * 0x38);
              if (uVar19 < uVar13) {
                    /* WARNING: Could not recover jumptable at 0x00b8cdb8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
                (*(code *)(&LAB_00b8cdbc +
                          *(int *)(&LAB_00b8cdbc + *(int *)(param_3 + uVar23 * 0x38 + -0x38) * 4)))
                          ();
                return;
              }
                    /* WARNING: Could not recover jumptable at 0x00b8d078. Too many branches */
                    /* WARNING: Treating indirect jump as call */
              (*(code *)(&LAB_00b8d07c + *(int *)(&LAB_00b8d07c + *piVar22 * 4)))(piVar22 + 2);
              return;
            }
          }
          uVar23 = uVar18 * 2 | 1;
          if (uVar12 < 2) goto LAB_00b8d170;
        }
        uVar23 = uVar18 * 2;
      } while (1 < uVar12);
LAB_00b8d170:
      uVar17 = 1;
    }
LAB_00b8d178:
    abStack_9b[uVar17 + 1] = (byte)uVar10;
    local_1a4[uVar17] = uVar23;
    if (param_2 <= uVar14) {
      if ((uVar23 & 1) == 0) {
        FUN_00b8d1e8(param_1,param_2,param_3,param_4,LZCOUNT(param_2 | 1) << 1 ^ 0x3e,0);
      }
      return;
    }
    uVar17 = uVar17 + 1;
    uVar14 = uVar14 + (local_1c8 >> 1);
    uVar23 = local_1c8;
  } while( true );
}

