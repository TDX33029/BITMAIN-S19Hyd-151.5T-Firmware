// FUN_0128c688 @ 0128c688 size=1476 calls_out=5 calls_in=2
// strings: i64 is out of range for i32 | out of range operation | out of range date time

void FUN_0128c688(int *param_1,uint *param_2,uint param_3,uint param_4)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint *puVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint *puVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined4 local_38 [2];
  undefined4 local_30;
  undefined4 local_2c;
  
  if (*(char *)((int)param_2 + 0x2d) == '\x02') {
    *param_1 = (int)param_2;
LAB_0128c6a4:
    iVar3 = 0x3b9aca10;
  }
  else {
    uVar4 = param_2[1];
    uVar17 = *param_2;
    uVar9 = param_2[8];
    puVar8 = param_2 + 4;
    uVar14 = *puVar8;
    uVar5 = uVar4 - uVar9;
    iVar20 = ((int)uVar4 >> 0x1f) - (((int)uVar9 >> 0x1f) + (uint)(uVar4 < uVar9));
    uVar4 = uVar17 - uVar14;
    iVar3 = ((int)uVar17 >> 0x1f) - (((int)uVar14 >> 0x1f) + (uint)(uVar17 < uVar14));
    uVar9 = param_4 - (param_3 < 0x38bc5d80);
    if ((int)(param_4 & (param_4 ^ uVar9)) < 0) {
      iVar20 = 0x16;
      pcVar10 = "out of range operation";
    }
    else {
      uVar19 = 0;
      uVar22 = FUN_01bf0fb0(param_3 + 0xc743a280,uVar9,0x15180,0);
      lVar1 = (uVar22 & 0xffffffff) * 0x15180;
      iVar12 = (int)(uVar9 - ((int)(uVar22 >> 0x20) * 0x15180 + (int)((ulonglong)lVar1 >> 0x20) +
                             (uint)(param_3 + 0xc743a280 < (uint)lVar1))) >> 0x1f;
      lVar1 = uVar22 + CONCAT44(iVar12,iVar12);
      uVar17 = (uint)lVar1;
      iVar11 = (int)((ulonglong)lVar1 >> 0x20);
      uVar22 = FUN_01bf0fb0(uVar17,iVar11,0x23ab1,0);
      lVar1 = (uVar22 & 0xffffffff) * 0x23ab1;
      uVar9 = (uint)lVar1;
      uVar14 = uVar17 - uVar9;
      iVar11 = iVar11 - ((int)(uVar22 >> 0x20) * 0x23ab1 + (int)((ulonglong)lVar1 >> 0x20) +
                        (uint)(uVar17 < uVar9));
      iVar12 = iVar11 + (uint)(0xfffdc54e < uVar14);
      uVar9 = uVar14 + 0x23ab1;
      if (-1 < iVar11) {
        iVar12 = iVar11;
        uVar9 = uVar14;
      }
      uVar23 = FUN_01bf0ff0(uVar9,iVar12,0x8eac,0);
      uVar14 = (uint)uVar23;
      if (2 < uVar14) {
        uVar14 = 3;
      }
      if ((int)((ulonglong)uVar23 >> 0x20) != 0) {
        uVar14 = 3;
      }
      uVar6 = (uint)((ulonglong)uVar14 * 0xffff7154);
      iVar7 = uVar6 + uVar9;
      uVar17 = iVar7 / 0x5b5;
      if (0x17 < (int)uVar17) {
        uVar17 = 0x18;
      }
      lVar1 = (longlong)(int)uVar17 * -0x5b5 +
              CONCAT44(((int)((ulonglong)uVar14 * 0xffff7154 >> 0x20) - uVar14) + iVar12 +
                       (uint)CARRY4(uVar6,uVar9),iVar7);
      iVar12 = (int)((ulonglong)((lVar1 << 0x20) + (longlong)(int)lVar1 * -0x4c73064f) >> 0x20);
      uVar6 = (iVar12 >> 8) - (iVar12 >> 0x1f);
      uVar9 = 3;
      if ((int)uVar6 < 3) {
        uVar9 = uVar6;
      }
      lVar1 = (longlong)(int)uVar9 * -0x16d + lVar1;
      puVar13 = &DAT_00404a08;
      do {
        iVar12 = (int)((ulonglong)lVar1 >> 0x20);
        uVar6 = (uint)lVar1;
        uVar18 = *puVar13;
        uVar16 = puVar13[1];
        if ((int)(iVar12 - (uVar16 + (uVar6 < uVar18))) < 0 !=
            (SBORROW4(iVar12,uVar16) != SBORROW4(iVar12 - uVar16,(uint)(uVar6 < uVar18))))
        goto LAB_0128c8a4;
        puVar13 = puVar13 + 2;
        lVar1 = CONCAT44(iVar12 - (uVar16 + (uVar6 < uVar18)),uVar6 - uVar18);
        uVar19 = uVar19 + 1;
      } while (uVar19 != 0xc);
      uVar19 = 0xc;
LAB_0128c8a4:
      lVar1 = (ulonglong)uVar14 * 100 + (uVar22 + CONCAT44(iVar11 >> 0x1f,iVar11 >> 0x1f)) * 400 +
              CONCAT44(((int)uVar17 >> 0x1f) << 2 | uVar17 >> 0x1e,uVar17 * 4);
      uVar14 = (uint)lVar1;
      uVar17 = uVar14 + uVar9;
      uVar6 = 2000;
      if (9 < uVar19) {
        uVar6 = 0x7d1;
      }
      uVar19 = uVar17 + uVar6;
      if ((int)((ulonglong)lVar1 >> 0x20) + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar14,uVar9) +
          (uint)CARRY4(uVar17,uVar6) + (uint)(0x7fffffff < uVar19) == 0) {
        if (0xfffffffb < uVar19 + 0x7ffffffe) {
          *param_1 = (int)"out of range date time";
          param_1[1] = 0x16;
          iVar3 = 0x3b9aca07;
          goto LAB_0128ca70;
        }
        puVar13 = param_2 + 2;
        FUN_0128cc5c(local_38,puVar13,uVar19);
        uVar22 = FUN_0128cfc4(uVar19,local_38[0],local_30,local_2c);
        puVar15 = param_2 + 3;
        FUN_0128cc5c(local_38,puVar15,uVar19);
        lVar1 = (uVar22 & 0xffffffff) * 0x15180;
        uVar17 = (uint)lVar1;
        uVar24 = FUN_0128cfc4(uVar19,local_38[0],local_30,local_2c);
        lVar2 = (uVar24 & 0xffffffff) * 0x15180;
        uVar14 = (uint)lVar2;
        uVar9 = uVar17 + uVar4;
        iVar12 = (int)(uVar22 >> 0x20) * 0x15180 + (int)((ulonglong)lVar1 >> 0x20) + iVar3 +
                 (uint)CARRY4(uVar17,uVar4);
        uVar17 = uVar14 + uVar5;
        iVar11 = (int)(uVar24 >> 0x20) * 0x15180 + (int)((ulonglong)lVar2 >> 0x20) + iVar20 +
                 (uint)CARRY4(uVar14,uVar5);
        if ((int)(iVar11 - (iVar12 + (uint)(uVar17 < uVar9))) < 0 ==
            (SBORROW4(iVar11,iVar12) != SBORROW4(iVar11 - iVar12,(uint)(uVar17 < uVar9)))) {
          if ((int)(param_4 - (iVar12 + (uint)(param_3 < uVar9))) < 0 ==
              (SBORROW4(param_4,iVar12) != SBORROW4(param_4 - iVar12,(uint)(param_3 < uVar9)))) {
            if ((int)(param_4 - (iVar11 + (uint)(param_3 < uVar17))) < 0 !=
                (SBORROW4(param_4,iVar11) != SBORROW4(param_4 - iVar11,(uint)(param_3 < uVar17))))
            goto LAB_0128cc20;
            iVar12 = uVar19 + 1;
            FUN_0128cc5c(local_38,puVar13,iVar12);
            uVar22 = FUN_0128cfc4(iVar12,local_38[0],local_30,local_2c);
            lVar1 = (uVar22 & 0xffffffff) * 0x15180;
            uVar9 = (uint)lVar1;
            iVar3 = (int)(uVar22 >> 0x20) * 0x15180 + (int)((ulonglong)lVar1 >> 0x20) + iVar3 +
                    (uint)CARRY4(uVar9,uVar4);
            bVar21 = param_3 < uVar9 + uVar4;
            if ((int)(param_4 - (iVar3 + (uint)bVar21)) < 0 ==
                (SBORROW4(param_4,iVar3) != SBORROW4(param_4 - iVar3,(uint)bVar21))) {
              uVar23 = FUN_0128d1b8(puVar15,iVar12,uVar5,iVar20);
              goto LAB_0128cc14;
            }
          }
          else {
            iVar12 = uVar19 - 1;
            FUN_0128cc5c(local_38,puVar15,iVar12);
            uVar22 = FUN_0128cfc4(iVar12,local_38[0],local_30,local_2c);
            lVar1 = (uVar22 & 0xffffffff) * 0x15180;
            uVar9 = (uint)lVar1;
            iVar20 = (int)(uVar22 >> 0x20) * 0x15180 + (int)((ulonglong)lVar1 >> 0x20) + iVar20 +
                     (uint)CARRY4(uVar9,uVar5);
            bVar21 = param_3 < uVar9 + uVar5;
            if ((int)(param_4 - (iVar20 + (uint)bVar21)) < 0 !=
                (SBORROW4(param_4,iVar20) != SBORROW4(param_4 - iVar20,(uint)bVar21))) {
              FUN_0128cc5c(local_38,puVar13,iVar12);
              uVar22 = FUN_0128cfc4(iVar12,local_38[0],local_30,local_2c);
              lVar1 = (uVar22 & 0xffffffff) * 0x15180;
              uVar5 = (uint)lVar1;
              uVar23 = CONCAT44((int)(uVar22 >> 0x20) * 0x15180 + (int)((ulonglong)lVar1 >> 0x20) +
                                iVar3 + (uint)CARRY4(uVar5,uVar4),uVar5 + uVar4);
LAB_0128cb94:
              iVar20 = (int)((ulonglong)uVar23 >> 0x20);
              bVar21 = param_3 < (uint)uVar23;
              if ((int)(param_4 - (iVar20 + (uint)bVar21)) < 0 ==
                  (SBORROW4(param_4,iVar20) != SBORROW4(param_4 - iVar20,(uint)bVar21)))
              goto LAB_0128cc20;
            }
          }
        }
        else {
          if ((int)(param_4 - (iVar11 + (uint)(param_3 < uVar17))) < 0 ==
              (SBORROW4(param_4,iVar11) != SBORROW4(param_4 - iVar11,(uint)(param_3 < uVar17)))) {
            if ((int)(param_4 - (iVar12 + (uint)(param_3 < uVar9))) < 0 !=
                (SBORROW4(param_4,iVar12) != SBORROW4(param_4 - iVar12,(uint)(param_3 < uVar9))))
            goto LAB_0128cc34;
            iVar12 = uVar19 + 1;
            FUN_0128cc5c(local_38,puVar15,iVar12,param_3 - uVar17);
            uVar22 = FUN_0128cfc4(iVar12,local_38[0],local_30,local_2c);
            lVar1 = (uVar22 & 0xffffffff) * 0x15180;
            uVar9 = (uint)lVar1;
            iVar20 = (int)(uVar22 >> 0x20) * 0x15180 + (int)((ulonglong)lVar1 >> 0x20) + iVar20 +
                     (uint)CARRY4(uVar9,uVar5);
            bVar21 = param_3 < uVar9 + uVar5;
            if ((int)(param_4 - (iVar20 + (uint)bVar21)) < 0 ==
                (SBORROW4(param_4,iVar20) != SBORROW4(param_4 - iVar20,(uint)bVar21))) {
              uVar23 = FUN_0128d1b8(puVar13,iVar12,uVar4,iVar3);
              goto LAB_0128cb94;
            }
          }
          else {
            iVar12 = uVar19 - 1;
            FUN_0128cc5c(local_38,puVar13,iVar12,param_3 - uVar17);
            uVar22 = FUN_0128cfc4(iVar12,local_38[0],local_30,local_2c);
            lVar1 = (uVar22 & 0xffffffff) * 0x15180;
            uVar9 = (uint)lVar1;
            iVar3 = (int)(uVar22 >> 0x20) * 0x15180 + (int)((ulonglong)lVar1 >> 0x20) + iVar3 +
                    (uint)CARRY4(uVar9,uVar4);
            bVar21 = param_3 < uVar9 + uVar4;
            if ((int)(param_4 - (iVar3 + (uint)bVar21)) < 0 !=
                (SBORROW4(param_4,iVar3) != SBORROW4(param_4 - iVar3,(uint)bVar21))) {
              FUN_0128cc5c(local_38,puVar15,iVar12);
              uVar22 = FUN_0128cfc4(iVar12,local_38[0],local_30,local_2c);
              lVar1 = (uVar22 & 0xffffffff) * 0x15180;
              uVar4 = (uint)lVar1;
              uVar23 = CONCAT44((int)(uVar22 >> 0x20) * 0x15180 + (int)((ulonglong)lVar1 >> 0x20) +
                                iVar20 + (uint)CARRY4(uVar4,uVar5),uVar4 + uVar5);
LAB_0128cc14:
              iVar20 = (int)((ulonglong)uVar23 >> 0x20);
              bVar21 = param_3 < (uint)uVar23;
              if ((int)(param_4 - (iVar20 + (uint)bVar21)) < 0 ==
                  (SBORROW4(param_4,iVar20) != SBORROW4(param_4 - iVar20,(uint)bVar21)))
              goto LAB_0128cc34;
            }
          }
LAB_0128cc20:
          puVar8 = param_2 + 8;
        }
LAB_0128cc34:
        *param_1 = (int)puVar8;
        goto LAB_0128c6a4;
      }
      iVar20 = 0x1b;
      pcVar10 = "i64 is out of range for i32";
    }
    iVar3 = 0x3b9aca07;
    *param_1 = (int)pcVar10;
    param_1[1] = iVar20;
  }
LAB_0128ca70:
  param_1[2] = iVar3;
  return;
}

