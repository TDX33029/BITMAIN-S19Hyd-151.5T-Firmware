// FUN_00a9ca18 @ 00a9ca18 size=1380 calls_out=11 calls_in=0
// strings: assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements

void FUN_00a9ca18(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  undefined2 uVar2;
  ulonglong uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  uint *puVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined *puVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  uint uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  uint uVar24;
  undefined4 *puVar25;
  uint unaff_r9;
  int iVar26;
  int iVar27;
  int unaff_r11;
  int iVar28;
  bool bVar29;
  bool bVar30;
  ulonglong uVar31;
  int local_3c;
  undefined4 local_2c;
  
  if (*param_2 == 3 && param_2[1] == 0) {
    (**(code **)(param_2[3] + 0xc))(param_1,param_2[2]);
    return;
  }
  uVar22 = *(undefined4 *)(param_2[0x15] + 4);
  uVar12 = *(undefined4 *)(param_2[0x15] + 8);
  if (param_2[0x12] == -0x80000000) {
    uVar21 = 0;
    local_3c = -0x80000000;
  }
  else {
    uVar18 = 0;
    uVar23 = param_2[0x14];
    bVar30 = 0x1ffffffe < uVar23;
    bVar29 = uVar23 == 0x1fffffff;
    uVar24 = uVar23 * 8;
    if (uVar23 < 0x20000000) {
      bVar30 = 0x7ffffffb < uVar24;
      bVar29 = uVar24 == 0x7ffffffc;
    }
    if (bVar30 && !bVar29) {
LAB_00a9caa0:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar18,uVar24);
    }
    uVar17 = param_2[0x13];
    if (uVar24 == 0) {
      puVar4 = (uint *)&SUB_00000004;
      uVar20 = 0;
    }
    else {
      uVar18 = 4;
      puVar4 = (uint *)FUN_01298504(uVar24,4);
      uVar20 = uVar23;
      if (puVar4 == (uint *)0x0) goto LAB_00a9caa0;
    }
    if (uVar23 != 0) {
      puVar5 = (uint *)(uVar17 + 4);
      uVar8 = 0;
      do {
        uVar15 = puVar5[1];
        iVar19 = uVar8 * 2;
        puVar4[iVar19] = *puVar5;
        uVar8 = uVar8 + 1;
        puVar5 = puVar5 + 3;
        (puVar4 + iVar19)[1] = uVar15;
      } while (uVar23 != uVar8);
      if (uVar23 == 1) {
LAB_00a9cb1c:
        unaff_r9 = FUN_006c8e68();
        uVar3 = (ulonglong)unaff_r9;
        bVar29 = false;
        *(undefined2 *)(unaff_r9 + 0x5e) = 0;
        *(undefined4 *)(unaff_r9 + 0x58) = 0;
        local_3c = 0;
        puVar5 = puVar4;
        do {
          unaff_r11 = (int)(uVar3 >> 0x20);
          iVar19 = (int)uVar3;
          do {
            if (bVar29) {
              uVar24 = uVar18;
              uVar8 = uVar17;
              if (uVar17 == 0) goto LAB_00a9cce4;
            }
            else {
              if (puVar5 == puVar4 + uVar23 * 2) {
LAB_00a9cce4:
                FUN_0134aee0(uVar20,puVar4,4,8);
                if (unaff_r11 != 0) {
                  iVar19 = unaff_r11;
                  uVar24 = unaff_r9;
                  goto LAB_00a9cd0c;
                }
                uVar21 = 1;
                goto LAB_00a9ca60;
              }
              uVar8 = *puVar5;
              uVar24 = puVar5[1];
              puVar5 = puVar5 + 2;
            }
            if (puVar5 == puVar4 + uVar23 * 2) {
              uVar17 = 0;
              break;
            }
            uVar17 = *puVar5;
            puVar9 = puVar5 + 1;
            puVar5 = puVar5 + 2;
            uVar18 = *puVar9;
            if (uVar24 != *puVar9) break;
            iVar6 = thunk_FUN_01bed842(uVar8,uVar17,uVar24);
            bVar29 = true;
            uVar18 = uVar24;
          } while (iVar6 == 0);
          uVar1 = *(ushort *)(iVar19 + 0x5e);
          if (uVar1 < 0xb) {
            *(ushort *)(iVar19 + 0x5e) = uVar1 + 1;
            puVar9 = (uint *)(iVar19 + (uint)uVar1 * 8);
            *puVar9 = uVar8;
            puVar9[1] = uVar24;
          }
          else {
            iVar6 = 0;
            do {
              iVar19 = *(int *)(iVar19 + 0x58);
              uVar3 = CONCAT44(unaff_r11,iVar19);
              if (iVar19 == 0) {
                uVar31 = FUN_007b20ec(unaff_r9,unaff_r11);
                uVar3 = uVar31;
                break;
              }
              iVar6 = iVar6 + 1;
              uVar31 = CONCAT44(iVar6,unaff_r9);
            } while (10 < *(ushort *)(iVar19 + 0x5e));
            local_2c = (undefined4)(uVar3 >> 0x20);
            iVar6 = (int)uVar3;
            iVar13 = (int)(uVar31 >> 0x20);
            unaff_r9 = (uint)uVar31;
            uVar15 = FUN_006c8e68();
            uVar31 = (ulonglong)uVar15;
            *(undefined2 *)(uVar15 + 0x5e) = 0;
            *(undefined4 *)(uVar15 + 0x58) = 0;
            iVar19 = iVar13 + -1;
            while( true ) {
              iVar26 = (int)uVar31;
              if (iVar19 == 0) break;
              uVar31 = FUN_007b20ec();
              iVar19 = iVar19 + -1;
            }
            if ((int)(uVar31 >> 0x20) != iVar13 + -1) {
              uVar12 = 0x30;
              puVar14 = &DAT_01d305c8;
              pcVar7 = &DAT_00533a41;
              goto LAB_00a9cf28;
            }
            uVar15 = (uint)*(ushort *)(iVar6 + 0x5e);
            if (10 < uVar15) {
              uVar12 = 0x20;
              pcVar7 = "assertion failed: idx < CAPACITYstruct ApiSensor with 3 elements";
              puVar14 = &DAT_01d305d8;
LAB_00a9cf28:
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(pcVar7,uVar12,puVar14);
            }
            uVar2 = (undefined2)(uVar15 + 1);
            *(undefined2 *)(iVar6 + 0x5e) = uVar2;
            puVar9 = (uint *)(iVar6 + uVar15 * 8);
            *puVar9 = uVar8;
            puVar9[1] = uVar24;
            *(int *)(iVar6 + (uVar15 + 1) * 4 + 0x60) = iVar26;
            *(undefined2 *)(iVar26 + 0x5c) = uVar2;
            *(int *)(iVar26 + 0x58) = iVar6;
            for (; iVar13 != 0; iVar13 = iVar13 + -1) {
              iVar6 = *(int *)(iVar6 + (uint)*(ushort *)(iVar6 + 0x5e) * 4 + 0x60);
              uVar3 = CONCAT44(local_2c,iVar6);
            }
          }
          local_3c = local_3c + 1;
          bVar29 = true;
        } while( true );
      }
      if (uVar23 != 0) {
        if (uVar23 < 0x15) {
          uVar17 = 8;
          do {
            FUN_007b0bd0(puVar4,(undefined1 *)((int)puVar4 + uVar17));
            uVar17 = uVar17 + 8;
          } while (uVar24 != uVar17);
        }
        else {
          FUN_007b1980(puVar4,uVar23);
        }
        goto LAB_00a9cb1c;
      }
    }
    FUN_0134aee0(uVar20,puVar4,4,8);
    uVar21 = 1;
    local_3c = 0;
    unaff_r9 = 0;
  }
  goto LAB_00a9ca60;
LAB_00a9cd0c:
  do {
    if (*(ushort *)(uVar24 + 0x5e) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec(&DAT_00533a28,0x19,&DAT_01d305a8);
    }
    iVar13 = *(ushort *)(uVar24 + 0x5e) - 1;
    iVar19 = iVar19 + -1;
    iVar6 = uVar24 + iVar13 * 4;
    uVar23 = *(uint *)(iVar6 + 100);
    uVar18 = (uint)*(ushort *)(uVar23 + 0x5e);
    if (uVar18 < 5) {
      iVar6 = *(int *)(iVar6 + 0x60);
      uVar17 = -uVar18 + 5;
      uVar20 = (uint)*(ushort *)(iVar6 + 0x5e);
      if (uVar20 < uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00533acc,0x27,&DAT_01d30618);
      }
      iVar28 = uVar20 - uVar17;
      *(short *)(iVar6 + 0x5e) = (short)iVar28;
      *(undefined2 *)(uVar23 + 0x5e) = 5;
      FUN_01bed864(uVar23 + uVar17 * 8,uVar23,uVar18 << 3);
      iVar27 = iVar28 + 1;
      iVar26 = uVar20 - iVar27;
      if (iVar26 != -uVar18 + 4) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
      }
      FUN_01bed4e2(uVar23,iVar6 + iVar27 * 8,iVar26 * 8);
      puVar10 = (undefined4 *)(iVar6 + iVar28 * 8);
      puVar25 = (undefined4 *)(uVar24 + iVar13 * 8);
      uVar21 = *puVar25;
      uVar11 = puVar10[1];
      uVar16 = puVar25[1];
      *puVar25 = *puVar10;
      puVar25[1] = uVar11;
      puVar10 = (undefined4 *)(uVar23 + iVar26 * 8);
      *puVar10 = uVar21;
      puVar10[1] = uVar16;
      if (iVar19 == 0) break;
      iVar13 = uVar23 + 0x60;
      FUN_01bed864(iVar13 + uVar17 * 4,iVar13,uVar18 * 4 + 4);
      FUN_01bed4e2(iVar13,iVar6 + iVar27 * 4 + 0x60,uVar17 * 4);
      iVar6 = 0;
      do {
        iVar13 = *(int *)(uVar23 + iVar6 * 4 + 0x60);
        *(short *)(iVar13 + 0x5c) = (short)iVar6;
        iVar6 = iVar6 + 1;
        *(uint *)(iVar13 + 0x58) = uVar23;
      } while (iVar6 != 6);
    }
    uVar24 = uVar23;
  } while (iVar19 != 0);
  uVar21 = 1;
LAB_00a9ca60:
  param_1[6] = local_3c;
  *param_1 = 0;
  param_1[1] = uVar22;
  param_1[2] = uVar12;
  param_1[3] = uVar21;
  param_1[4] = unaff_r9;
  param_1[5] = unaff_r11;
  return;
}

