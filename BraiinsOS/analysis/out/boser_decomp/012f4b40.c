// FUN_012f4b40 @ 012f4b40 size=1352 calls_out=8 calls_in=1
// strings: 

void FUN_012f4b40(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  undefined *puVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int *piVar6;
  uint uVar7;
  byte *pbVar8;
  int *piVar9;
  byte *pbVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  ulonglong uVar18;
  undefined8 uVar19;
  longlong lVar20;
  undefined4 local_d8;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  int local_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  int local_68;
  undefined4 local_64;
  undefined4 local_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar16 = param_2[1];
  uVar14 = param_2[2];
  uVar12 = param_2[3];
  do {
    uVar17 = uVar12;
    if (uVar14 <= uVar17) {
      param_1[3] = 3;
      return;
    }
    if ((uVar17 != 0) && (*(char *)(iVar16 + uVar17) < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(iVar16,uVar14,uVar17,uVar14,&DAT_01ce4264);
    }
    pbVar10 = (byte *)(iVar16 + uVar17);
    uVar12 = uVar14 - uVar17;
    uVar15 = 0;
    do {
      uVar7 = uVar12 - uVar15;
      if (uVar7 < 8) {
        uVar3 = 0;
        if (uVar7 == 0) {
          uVar18 = 0;
        }
        else {
          do {
            if ((pbVar10 + uVar15)[uVar3] == 0x3b) {
              uVar18 = CONCAT44(uVar3,1);
              goto LAB_012f4be8;
            }
            uVar3 = uVar3 + 1;
          } while (uVar7 != uVar3);
          uVar18 = (ulonglong)uVar7 << 0x20;
        }
      }
      else {
        uVar18 = FUN_01307168(0x3b,pbVar10 + uVar15);
      }
LAB_012f4be8:
      if ((uVar18 & 1) == 0) break;
      uVar15 = (int)(uVar18 >> 0x20) + uVar15;
      if ((uVar15 < uVar12) && (pbVar10[uVar15] == 0x3b)) {
        uVar15 = uVar15 + uVar17;
        goto LAB_012f4c18;
      }
      uVar15 = uVar15 + 1;
    } while (uVar15 <= uVar12);
    uVar15 = uVar14;
LAB_012f4c18:
    uVar12 = uVar15 + 1;
    param_2[3] = uVar12;
    if ((uVar15 < uVar17) || ((uVar17 != 0 && ((char)*pbVar10 < -0x40)))) goto LAB_012f504c;
    if (uVar15 != 0) {
      if (uVar15 < uVar14) {
        if (*(char *)(iVar16 + uVar15) < -0x40) goto LAB_012f504c;
      }
      else if (uVar15 != uVar14) {
LAB_012f504c:
        puVar2 = &DAT_01ce4274;
LAB_012f5054:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(iVar16,uVar14,uVar17,uVar15,puVar2);
      }
    }
    pbVar8 = (byte *)(iVar16 + uVar15);
    if (uVar15 != uVar17) {
      pbVar4 = pbVar10;
      do {
        pbVar5 = pbVar4 + 1;
        puVar13 = (undefined1 *)(uint)*pbVar4;
        if (0x7fffffff < (uint)(int)(char)*pbVar4) {
          if (puVar13 < (undefined1 *)0xe0) {
            puVar13 = (undefined1 *)(pbVar4[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
            pbVar5 = pbVar4 + 2;
          }
          else {
            uVar7 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
            if (puVar13 < (undefined1 *)0xf0) {
              puVar13 = (undefined1 *)(uVar7 | ((uint)puVar13 & 0x1f) << 0xc);
              pbVar5 = pbVar4 + 3;
            }
            else {
              puVar13 = (undefined1 *)(pbVar4[3] & 0x3f | uVar7 << 6 | ((uint)puVar13 & 7) << 0x12);
              pbVar5 = pbVar4 + 4;
              if (puVar13 == &DAT_00110000) break;
            }
          }
        }
        if ((&SUB_00000004 < puVar13 + -9) && (puVar13 != (undefined1 *)0x20)) {
          if ((undefined1 *)0x7f < puVar13) {
            uVar7 = (uint)puVar13 >> 8;
            if (uVar7 < 0x20) {
              if (uVar7 == 0) {
                bVar1 = (&DAT_00533bcd)[(uint)puVar13 & 0xff] & 1;
                goto joined_r0x012f4d84;
              }
              if ((uVar7 == 0x16) && (puVar13 == (undefined1 *)0x1680)) goto LAB_012f4cf8;
            }
            else if (uVar7 == 0x20) {
              bVar1 = (&DAT_00533bcd)[(uint)puVar13 & 0xff] & 2;
joined_r0x012f4d84:
              if (bVar1 != 0) goto LAB_012f4cf8;
            }
            else if (uVar7 == 0x30 && puVar13 == (undefined1 *)0x3000) goto LAB_012f4cf8;
          }
          if (*param_2 == -0x80000000) {
            if ((uVar17 != 0) && ((char)*pbVar10 < -0x40)) goto LAB_012f4de0;
            if (uVar15 != 0) {
              if (uVar15 < uVar14) {
                if ((char)*pbVar8 < -0x40) goto LAB_012f4de0;
              }
              else if (uVar15 != uVar14) {
LAB_012f4de0:
                puVar2 = &DAT_01ce4284;
                goto LAB_012f5054;
              }
            }
            uVar19 = FUN_013245a0(pbVar10,uVar15 - uVar17);
            local_d8 = FUN_012f50bc(&local_88,(int)uVar19,(int)((ulonglong)uVar19 >> 0x20),
                                    (char)param_2[4]);
            if (local_7c != 2) {
              local_d8 = local_80;
              local_98 = local_78;
              uStack_94 = uStack_74;
              uStack_90 = uStack_70;
              uStack_8c = uStack_6c;
              local_d0 = local_5c;
              uStack_cc = uStack_58;
              uStack_c8 = uStack_54;
              uStack_c4 = uStack_50;
              local_c0 = local_4c;
              uStack_bc = uStack_48;
              uStack_b8 = uStack_44;
              uStack_b4 = uStack_40;
              local_b0 = local_3c;
              uStack_ac = uStack_38;
              uStack_a8 = uStack_34;
              uStack_a4 = uStack_30;
              uStack_a0 = uStack_2c;
              piVar9 = (int *)&DAT_80000000;
              if (-0x7fffffff < local_68) {
                FUN_0134bd64(local_68,local_64);
              }
              goto LAB_012f4ffc;
            }
          }
          else {
            if ((uVar17 != 0) && ((char)*pbVar10 < -0x40)) goto LAB_012f4e1c;
            if (uVar15 != 0) {
              if (uVar15 < uVar14) {
                if ((char)*pbVar8 < -0x40) goto LAB_012f4e1c;
              }
              else if (uVar15 != uVar14) {
LAB_012f4e1c:
                puVar2 = &DAT_01ce4294;
                goto LAB_012f5054;
              }
            }
            lVar20 = FUN_013245a0(pbVar10,uVar15 - uVar17);
            piVar6 = (int *)((ulonglong)lVar20 >> 0x20);
            uVar11 = 0;
            if (lVar20 < 0) {
LAB_012f4eec:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar11,piVar6);
            }
            if (piVar6 == (int *)0x0) {
              piVar9 = (int *)0x0;
              iVar16 = 1;
            }
            else {
              uVar11 = 1;
              iVar16 = FUN_01298504(piVar6,1);
              piVar9 = piVar6;
              if (iVar16 == 0) goto LAB_012f4eec;
            }
            uVar19 = CONCAT44(piVar6,iVar16);
            FUN_01bed4e2(iVar16,(int)lVar20,piVar6);
            FUN_012f50bc(&local_88,iVar16,piVar6,(char)param_2[4]);
            if (local_7c != 2) {
              local_d8 = local_80;
              local_98 = local_78;
              uStack_94 = uStack_74;
              uStack_90 = uStack_70;
              uStack_8c = uStack_6c;
              local_d0 = local_5c;
              uStack_cc = uStack_58;
              uStack_c8 = uStack_54;
              uStack_c4 = uStack_50;
              local_c0 = local_4c;
              uStack_bc = uStack_48;
              uStack_b8 = uStack_44;
              uStack_b4 = uStack_40;
              local_b0 = local_3c;
              uStack_ac = uStack_38;
              uStack_a8 = uStack_34;
              uStack_a4 = uStack_30;
              uStack_a0 = uStack_2c;
              if (-0x7fffffff < local_68) {
                FUN_0134bd64(local_68,local_64);
              }
              goto LAB_012f4ffc;
            }
            local_d8 = FUN_0134bd64(piVar9,iVar16);
            param_2 = piVar9;
          }
          local_7c = 2;
          piVar9 = param_2;
LAB_012f4ffc:
          param_1[2] = local_d8;
          *param_1 = local_88;
          param_1[1] = local_84;
          param_1[3] = local_7c;
          param_1[4] = local_98;
          param_1[5] = uStack_94;
          param_1[6] = uStack_90;
          param_1[7] = uStack_8c;
          param_1[8] = piVar9;
          *(undefined8 *)(param_1 + 9) = uVar19;
          param_1[0xb] = local_d0;
          param_1[0xc] = uStack_cc;
          param_1[0xd] = uStack_c8;
          param_1[0xe] = uStack_c4;
          param_1[0xf] = local_c0;
          param_1[0x10] = uStack_bc;
          param_1[0x11] = uStack_b8;
          param_1[0x12] = uStack_b4;
          param_1[0x13] = local_b0;
          param_1[0x14] = uStack_ac;
          param_1[0x15] = uStack_a8;
          param_1[0x16] = uStack_a4;
          param_1[0x17] = uStack_a0;
          return;
        }
LAB_012f4cf8:
        pbVar4 = pbVar5;
      } while (pbVar5 != pbVar8);
    }
  } while( true );
}

