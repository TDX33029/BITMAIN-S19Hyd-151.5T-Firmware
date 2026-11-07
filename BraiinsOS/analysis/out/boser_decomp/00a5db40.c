// FUN_00a5db40 @ 00a5db40 size=1868 calls_out=8 calls_in=1
// strings: 

void FUN_00a5db40(int *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  byte *pbVar8;
  byte bVar9;
  uint uVar10;
  int iVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  int unaff_r10;
  undefined4 *puVar17;
  int local_7c;
  int local_78;
  int local_68;
  undefined4 local_5c;
  undefined4 *local_58;
  uint local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined1 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined2 local_2c;
  uint local_28;
  
  iVar1 = FUN_014afb6c(param_2,param_3);
  local_2c = 1;
  local_38 = 1;
  uVar10 = 3;
  if (iVar1 != 0) {
    uVar10 = 6;
  }
  local_34 = 0;
  if (param_4 != 0) {
    uVar10 = 6;
  }
  local_44 = 0;
  local_3c = 0x2c;
  local_50 = 0x2c;
  local_4c = param_2;
  local_48 = param_3;
  local_40 = param_3;
  local_30 = param_3;
  local_28 = uVar10;
  FUN_00b225c4(&local_5c,&local_50);
  if (local_54 == uVar10) {
    if (param_4 == 0) {
      if (iVar1 == 0) {
        bVar7 = true;
        iVar1 = 0;
        iVar16 = 0;
        puVar17 = local_58;
      }
      else {
        uVar2 = local_58[3];
        if (uVar2 == 0) goto LAB_00a5de3c;
        pbVar8 = (byte *)local_58[2];
        if (uVar2 == 1) {
          bVar9 = *pbVar8;
          if (bVar9 == 0x2b || bVar9 == 0x2d) goto LAB_00a5de3c;
        }
        else {
          bVar9 = *pbVar8;
        }
        if (bVar9 == 0x2d) {
          iVar1 = uVar2 - 1;
          pbVar8 = pbVar8 + 1;
          if (uVar2 < 9) {
            if (iVar1 == 0) goto LAB_00a5deec;
            iVar16 = 0;
            do {
              bVar9 = *pbVar8;
              if (9 < bVar9 - 0x30) goto LAB_00a5de3c;
              pbVar8 = pbVar8 + 1;
              iVar1 = iVar1 + -1;
              iVar16 = iVar16 * 10 - (bVar9 - 0x30);
            } while (iVar1 != 0);
          }
          else {
            iVar16 = 0;
            do {
              iVar3 = (int)((longlong)iVar16 * 10);
              if ((((int)((ulonglong)((longlong)iVar16 * 10) >> 0x20) != iVar3 >> 0x1f) ||
                  (uVar2 = *pbVar8 - 0x30, 9 < uVar2)) ||
                 (iVar16 = iVar3 - uVar2, SBORROW4(iVar3,uVar2))) goto LAB_00a5de3c;
              iVar1 = iVar1 + -1;
              pbVar8 = pbVar8 + 1;
            } while (iVar1 != 0);
          }
        }
        else {
          if (bVar9 == 0x2b) {
            uVar2 = uVar2 - 1;
            pbVar8 = pbVar8 + 1;
          }
          if (uVar2 < 8) {
            if (uVar2 == 0) {
LAB_00a5deec:
              iVar16 = 0;
            }
            else {
              iVar16 = 0;
              do {
                bVar9 = *pbVar8;
                if (9 < bVar9 - 0x30) goto LAB_00a5de3c;
                pbVar8 = pbVar8 + 1;
                uVar2 = uVar2 - 1;
                iVar16 = (bVar9 - 0x30) + iVar16 * 10;
              } while (uVar2 != 0);
            }
          }
          else {
            iVar16 = 0;
            do {
              iVar1 = (int)((longlong)iVar16 * 10);
              if ((((int)((ulonglong)((longlong)iVar16 * 10) >> 0x20) != iVar1 >> 0x1f) ||
                  (uVar15 = *pbVar8 - 0x30, 9 < uVar15)) ||
                 (iVar16 = iVar1 + uVar15, SCARRY4(iVar1,uVar15))) goto LAB_00a5de3c;
              uVar2 = uVar2 - 1;
              pbVar8 = pbVar8 + 1;
            } while (uVar2 != 0);
          }
        }
        iVar3 = local_58[5];
        iVar1 = 0;
LAB_00a5e018:
        bVar7 = false;
        if (iVar3 == 4) {
          bVar7 = *(int *)local_58[4] == 0x65757274;
        }
        uVar10 = uVar10 - 3;
        puVar17 = local_58 + 6;
        if (uVar10 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(0,0,&DAT_01c0ef00);
        }
      }
      iVar3 = puVar17[1];
      if (iVar3 < 0) {
        uVar12 = 0;
LAB_00a5e054:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar12,iVar3);
      }
      uVar13 = *puVar17;
      if (iVar3 == 0) {
        local_68 = 0;
        iVar4 = 1;
      }
      else {
        uVar12 = 1;
        iVar4 = FUN_01298504(iVar3,1);
        if (iVar4 == 0) goto LAB_00a5e054;
        local_68 = iVar3;
      }
      FUN_01bed4e2(iVar4,uVar13,iVar3);
      if (uVar10 == 1) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(1,1,&DAT_01c0ef10);
      }
      iVar14 = puVar17[3];
      if (iVar14 < 0) {
        uVar12 = 0;
LAB_00a5e0c8:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar12,iVar14);
      }
      uVar13 = puVar17[2];
      if (iVar14 == 0) {
        local_78 = 0;
        iVar5 = 1;
      }
      else {
        uVar12 = 1;
        iVar5 = FUN_01298504(iVar14,1);
        if (iVar5 == 0) goto LAB_00a5e0c8;
        local_78 = iVar14;
      }
      FUN_01bed4e2(iVar5,uVar13,iVar14);
      if (uVar10 < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(2,2,&DAT_01c0ef20);
      }
      iVar11 = puVar17[5];
      if (iVar11 < 0) {
        uVar12 = 0;
LAB_00a5e138:
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar12,iVar11);
      }
      uVar13 = puVar17[4];
      if (iVar11 == 0) {
        iVar6 = 1;
        local_7c = 0;
      }
      else {
        uVar12 = 1;
        iVar6 = FUN_01298504(iVar11,1);
        if (iVar6 == 0) goto LAB_00a5e138;
        local_7c = iVar11;
      }
      FUN_01bed4e2(iVar6,uVar13,iVar11);
      if (iVar3 == 0 || iVar14 == 0) {
        param_1[0xb] = 2;
        FUN_019bb7e0(local_7c,iVar6);
        FUN_019bb7e0(local_78,iVar5);
        iVar6 = iVar4;
      }
      else {
        *param_1 = local_68;
        param_1[5] = iVar14;
        param_1[1] = iVar4;
        param_1[2] = iVar3;
        param_1[3] = local_78;
        param_1[4] = iVar5;
        if (iVar11 != 0) {
          param_1[0xb] = iVar1;
          *(bool *)(param_1 + 9) = bVar7;
          param_1[10] = iVar16;
          param_1[0xc] = unaff_r10;
          param_1[6] = local_7c;
          param_1[7] = iVar6;
          param_1[8] = iVar11;
          goto LAB_00a5de40;
        }
        param_1[0xb] = iVar1;
        *(bool *)(param_1 + 9) = bVar7;
        param_1[6] = -0x80000000;
        param_1[10] = iVar16;
        param_1[0xc] = unaff_r10;
        local_68 = local_7c;
      }
      FUN_019bb7e0(local_68,iVar6);
      goto LAB_00a5de40;
    }
    uVar2 = local_58[1];
    if (uVar2 != 0) {
      pbVar8 = (byte *)*local_58;
      if (uVar2 == 1) {
        bVar9 = *pbVar8;
        if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_00a5de3c;
      }
      else {
        bVar9 = *pbVar8;
      }
      if (bVar9 == 0x2d) {
        iVar1 = uVar2 - 1;
        pbVar8 = pbVar8 + 1;
        if (uVar2 < 9) {
          if (iVar1 == 0) goto LAB_00a5dd88;
          iVar16 = 0;
          do {
            bVar9 = *pbVar8;
            if (9 < bVar9 - 0x30) goto LAB_00a5de3c;
            pbVar8 = pbVar8 + 1;
            iVar1 = iVar1 + -1;
            iVar16 = iVar16 * 10 - (bVar9 - 0x30);
          } while (iVar1 != 0);
        }
        else {
          iVar16 = 0;
          do {
            iVar3 = (int)((longlong)iVar16 * 10);
            if ((((int)((ulonglong)((longlong)iVar16 * 10) >> 0x20) != iVar3 >> 0x1f) ||
                (uVar2 = *pbVar8 - 0x30, 9 < uVar2)) ||
               (iVar16 = iVar3 - uVar2, SBORROW4(iVar3,uVar2))) goto LAB_00a5de3c;
            iVar1 = iVar1 + -1;
            pbVar8 = pbVar8 + 1;
          } while (iVar1 != 0);
        }
      }
      else {
        if (bVar9 == 0x2b) {
          uVar2 = uVar2 - 1;
          pbVar8 = pbVar8 + 1;
        }
        if (uVar2 < 8) {
          if (uVar2 == 0) {
LAB_00a5dd88:
            iVar16 = 0;
          }
          else {
            iVar16 = 0;
            do {
              bVar9 = *pbVar8;
              if (9 < bVar9 - 0x30) goto LAB_00a5de3c;
              pbVar8 = pbVar8 + 1;
              uVar2 = uVar2 - 1;
              iVar16 = (bVar9 - 0x30) + iVar16 * 10;
            } while (uVar2 != 0);
          }
        }
        else {
          iVar16 = 0;
          do {
            iVar1 = (int)((longlong)iVar16 * 10);
            if ((((int)((ulonglong)((longlong)iVar16 * 10) >> 0x20) != iVar1 >> 0x1f) ||
                (uVar15 = *pbVar8 - 0x30, 9 < uVar15)) ||
               (iVar16 = iVar1 + uVar15, SCARRY4(iVar1,uVar15))) goto LAB_00a5de3c;
            uVar2 = uVar2 - 1;
            pbVar8 = pbVar8 + 1;
          } while (uVar2 != 0);
        }
      }
      uVar2 = local_58[3];
      if (uVar2 != 0) {
        pbVar8 = (byte *)local_58[2];
        if (uVar2 == 1) {
          bVar9 = *pbVar8;
          if ((bVar9 == 0x2b) || (bVar9 == 0x2d)) goto LAB_00a5de3c;
        }
        else {
          bVar9 = *pbVar8;
        }
        if (bVar9 == 0x2d) {
          iVar1 = uVar2 - 1;
          pbVar8 = pbVar8 + 1;
          if (uVar2 < 9) {
            if (iVar1 == 0) goto LAB_00a5dfc4;
            unaff_r10 = 0;
            do {
              bVar9 = *pbVar8;
              if (9 < bVar9 - 0x30) goto LAB_00a5de3c;
              pbVar8 = pbVar8 + 1;
              iVar1 = iVar1 + -1;
              unaff_r10 = unaff_r10 * 10 - (bVar9 - 0x30);
            } while (iVar1 != 0);
          }
          else {
            unaff_r10 = 0;
            do {
              iVar3 = (int)((longlong)unaff_r10 * 10);
              if ((((int)((ulonglong)((longlong)unaff_r10 * 10) >> 0x20) != iVar3 >> 0x1f) ||
                  (uVar2 = *pbVar8 - 0x30, 9 < uVar2)) ||
                 (unaff_r10 = iVar3 - uVar2, SBORROW4(iVar3,uVar2))) goto LAB_00a5de3c;
              iVar1 = iVar1 + -1;
              pbVar8 = pbVar8 + 1;
            } while (iVar1 != 0);
          }
        }
        else {
          if (bVar9 == 0x2b) {
            uVar2 = uVar2 - 1;
            pbVar8 = pbVar8 + 1;
          }
          if (uVar2 < 8) {
            if (uVar2 == 0) {
LAB_00a5dfc4:
              unaff_r10 = 0;
            }
            else {
              unaff_r10 = 0;
              do {
                bVar9 = *pbVar8;
                if (9 < bVar9 - 0x30) goto LAB_00a5de3c;
                pbVar8 = pbVar8 + 1;
                uVar2 = uVar2 - 1;
                unaff_r10 = (bVar9 - 0x30) + unaff_r10 * 10;
              } while (uVar2 != 0);
            }
          }
          else {
            unaff_r10 = 0;
            do {
              iVar1 = (int)((longlong)unaff_r10 * 10);
              if ((((int)((ulonglong)((longlong)unaff_r10 * 10) >> 0x20) != iVar1 >> 0x1f) ||
                  (uVar15 = *pbVar8 - 0x30, 9 < uVar15)) ||
                 (unaff_r10 = iVar1 + uVar15, SCARRY4(iVar1,uVar15))) goto LAB_00a5de3c;
              uVar2 = uVar2 - 1;
              pbVar8 = pbVar8 + 1;
            } while (uVar2 != 0);
          }
        }
        iVar3 = local_58[5];
        iVar1 = 1;
        goto LAB_00a5e018;
      }
    }
  }
LAB_00a5de3c:
  param_1[0xb] = 2;
LAB_00a5de40:
  FUN_0134aee0(local_5c,local_58,4,8);
  return;
}

