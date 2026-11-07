// FUN_012922a4 @ 012922a4 size=1924 calls_out=6 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012922a4(uint *param_1,uint param_2,undefined4 *param_3)

{
  longlong lVar1;
  char cVar2;
  undefined2 uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  undefined *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint *puVar13;
  uint unaff_r9;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  uint local_98;
  uint local_94;
  uint local_90;
  uint **local_8c;
  uint local_88;
  uint local_6c;
  uint *local_68;
  uint local_64;
  uint local_60;
  uint **local_5c;
  uint *local_58;
  uint local_54;
  uint local_50;
  uint uStack_4c;
  uint *local_48;
  int local_44;
  uint local_40;
  uint *local_38;
  int iStack_34;
  uint local_30;
  uint uStack_2c;
  uint *puStack_28;
  
  iVar4 = FUN_012920c0(*param_3);
  uVar9 = param_3[1];
  FUN_01292a40(&local_68,param_2);
  lVar1 = (longlong)iVar4 * 0x15180 + (ulonglong)uVar9;
  uVar10 = (uint)lVar1;
  iVar4 = 0;
  puVar13 = (uint *)(uVar10 + 0x886cb780);
  uVar14 = (int)((ulonglong)lVar1 >> 0x20) - ((uVar10 < 0x77934880) + 0xe);
  uVar15 = local_64 + 1;
  uVar9 = 599;
  puVar12 = param_1;
  if (local_64 != 0xffffffff) {
    local_8c = &local_48;
    uVar9 = uVar15 >> 1;
    local_6c = (int)local_58 + local_54;
    do {
      local_88 = param_2;
      if (uVar9 == 0) {
        if (local_64 != 0) {
          iVar5 = local_68[1] +
                  ((int)local_58 >> 0x1f) + ((int)local_54 >> 0x1f) +
                  (uint)CARRY4((uint)local_58,local_54) + (uint)CARRY4(*local_68,local_6c);
          bVar16 = puVar13 < (uint *)(*local_68 + local_6c);
          bVar17 = SBORROW4(uVar14,iVar5) != SBORROW4(uVar14 - iVar5,(uint)bVar16);
          iVar5 = iVar5 + (uint)bVar16;
LAB_0129240c:
          cVar2 = '\0';
          if ((int)(uVar14 - iVar5) < 0 == bVar17) {
            cVar2 = -1;
          }
          goto LAB_0129241c;
        }
        local_8c = local_5c;
LAB_012926cc:
        uVar14 = param_2 & 0xffff;
        uVar9 = 0x255;
        uVar10 = local_54;
        puVar12 = local_58;
        unaff_r9 = local_60;
        goto LAB_012926d4;
      }
      uVar10 = uVar9 - 1;
      if (local_64 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar10,local_64,&DAT_01ce21fc);
      }
      puVar6 = local_68 + uVar10 * 6;
      unaff_r9 = puVar6[1];
      uVar11 = puVar6[4];
      uVar10 = puVar6[5];
      uVar8 = uVar10 + uVar11;
      uVar10 = ((int)uVar10 >> 0x1f) + ((int)uVar11 >> 0x1f) + (uint)CARRY4(uVar10,uVar11);
      puVar12 = (uint *)(uVar8 + *puVar6);
      iVar5 = uVar10 + unaff_r9 + (uint)CARRY4(uVar8,*puVar6);
      if (uVar9 == local_64) {
        cVar2 = (int)(uVar14 - (iVar5 + (uint)(puVar13 < puVar12))) < 0 !=
                (SBORROW4(uVar14,iVar5) != SBORROW4(uVar14 - iVar5,(uint)(puVar13 < puVar12)));
LAB_0129241c:
        if (cVar2 == '\x01') goto LAB_01292438;
        if (cVar2 != -1) {
          if (uVar9 == 0) {
            FUN_01297b18(&local_50,&local_68,1);
            if ((local_50 & 1) == 0) {
              if ((local_40 &
                  (int)(uVar14 - (iStack_34 + (uint)(puVar13 < local_38))) < 0 ==
                  (SBORROW4(uVar14,iStack_34) !=
                  SBORROW4(uVar14 - iStack_34,(uint)(puVar13 < local_38)))) != 0) goto LAB_012925e0;
            }
            else if (local_40 == 0) {
              if ((int)(uVar14 - (local_44 + (uint)(puVar13 < local_48))) < 0 !=
                  (SBORROW4(uVar14,local_44) !=
                  SBORROW4(uVar14 - local_44,(uint)(puVar13 < local_48)))) goto LAB_012925e0;
            }
            else if (((int)(uVar14 - (local_44 + (uint)(puVar13 < local_48))) < 0 !=
                      (SBORROW4(uVar14,local_44) !=
                      SBORROW4(uVar14 - local_44,(uint)(puVar13 < local_48)))) ||
                    ((int)(uVar14 - (iStack_34 + (uint)(puVar13 < local_38))) < 0 ==
                     (SBORROW4(uVar14,iStack_34) !=
                     SBORROW4(uVar14 - iStack_34,(uint)(puVar13 < local_38))))) {
LAB_012925e0:
              local_8c = local_5c;
              goto LAB_012926cc;
            }
            puVar13 = local_68 + 5;
            local_8c = local_5c;
            puVar6 = local_68 + 4;
            puVar12 = local_68 + 2;
          }
          else {
            uVar10 = uVar9 - 1;
            FUN_01297b18(&local_50,&local_68,uVar10);
            if ((local_50 & 1) == 0) {
              if ((local_40 &
                  (int)(uVar14 - (iStack_34 + (uint)(puVar13 < local_38))) < 0 ==
                  (SBORROW4(uVar14,iStack_34) !=
                  SBORROW4(uVar14 - iStack_34,(uint)(puVar13 < local_38)))) != 0) goto LAB_01292550;
            }
            else if (local_40 == 0) {
              if ((int)(uVar14 - (local_44 + (uint)(puVar13 < local_48))) < 0 !=
                  (SBORROW4(uVar14,local_44) !=
                  SBORROW4(uVar14 - local_44,(uint)(puVar13 < local_48)))) goto LAB_01292550;
            }
            else if (((int)(uVar14 - (local_44 + (uint)(puVar13 < local_48))) < 0 !=
                      (SBORROW4(uVar14,local_44) !=
                      SBORROW4(uVar14 - local_44,(uint)(puVar13 < local_48)))) ||
                    ((int)(uVar14 - (iStack_34 + (uint)(puVar13 < local_38))) < 0 ==
                     (SBORROW4(uVar14,iStack_34) !=
                     SBORROW4(uVar14 - iStack_34,(uint)(puVar13 < local_38))))) {
LAB_01292550:
              if (uVar9 == local_64) {
LAB_012926ac:
                local_8c = (uint **)local_68[uVar10 * 6 + 3];
                local_60 = local_68[uVar10 * 6 + 2];
                local_58 = (uint *)local_68[uVar10 * 6 + 4];
                local_54 = local_68[uVar10 * 6 + 5];
                goto LAB_012926cc;
              }
              local_6c = uVar9 + 1;
              FUN_01297b18(&local_50,&local_68);
              if ((local_50 & 1) == 0) {
                if ((local_40 &
                    (int)(uVar14 - (iStack_34 + (uint)(puVar13 < local_38))) < 0 ==
                    (SBORROW4(uVar14,iStack_34) !=
                    SBORROW4(uVar14 - iStack_34,(uint)(puVar13 < local_38)))) != 0)
                goto LAB_012926a4;
              }
              else if (local_40 == 0) {
                if ((int)(uVar14 - (local_44 + (uint)(puVar13 < local_48))) < 0 !=
                    (SBORROW4(uVar14,local_44) !=
                    SBORROW4(uVar14 - local_44,(uint)(puVar13 < local_48)))) goto LAB_012926a4;
              }
              else if (((int)(uVar14 - (local_44 + (uint)(puVar13 < local_48))) < 0 !=
                        (SBORROW4(uVar14,local_44) !=
                        SBORROW4(uVar14 - local_44,(uint)(puVar13 < local_48)))) ||
                      ((int)(uVar14 - (iStack_34 + (uint)(puVar13 < local_38))) < 0 ==
                       (SBORROW4(uVar14,iStack_34) !=
                       SBORROW4(uVar14 - iStack_34,(uint)(puVar13 < local_38))))) {
LAB_012926a4:
                if (local_64 <= uVar10) goto LAB_01292a08;
                goto LAB_012926ac;
              }
              if (local_64 <= uVar10) {
LAB_01292a08:
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar10,local_64,&DAT_01ce05d0);
              }
              if (local_6c == 0) {
                puVar12 = &local_60;
              }
              else {
                if (local_64 <= uVar9) {
                  puVar7 = &DAT_01ce05d0;
LAB_012929ec:
                    /* WARNING: Subroutine does not return */
                  FUN_012fb12c(uVar9,local_64,puVar7);
                }
                puVar12 = local_68 + uVar9 * 6 + 2;
              }
              local_8c = (uint **)local_68[uVar10 * 6 + 3];
              local_60 = local_68[uVar10 * 6 + 2];
              local_58 = (uint *)local_68[uVar10 * 6 + 4];
              local_54 = local_68[uVar10 * 6 + 5];
              puVar13 = puVar12 + 3;
              puVar6 = puVar12 + 2;
              goto LAB_0129297c;
            }
            if (uVar10 == 0) {
              puVar12 = &local_60;
            }
            else {
              uVar9 = uVar9 - 2;
              if (local_64 <= uVar9) goto LAB_012929f8;
              puVar12 = local_68 + uVar9 * 6 + 2;
            }
            uVar9 = uVar10;
            if (local_64 <= uVar10) {
LAB_012929f8:
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar9,local_64,&DAT_01ce05d0);
            }
            local_8c = (uint **)puVar12[1];
            local_60 = *puVar12;
            local_58 = (uint *)puVar12[2];
            puVar13 = local_68 + uVar10 * 6 + 5;
            local_54 = puVar12[3];
            puVar6 = local_68 + uVar10 * 6 + 4;
            puVar12 = local_68 + uVar10 * 6 + 2;
          }
LAB_0129297c:
          local_94 = *puVar12;
          local_98 = puVar12[1];
          uVar9 = param_2 & 0xffff;
          local_88 = *puVar13;
          local_6c = *puVar6;
          uVar10 = local_54;
          puVar12 = local_58;
          unaff_r9 = local_60;
          uVar14 = uVar9;
          if (uVar9 < 0x255) goto LAB_012926f4;
          goto LAB_012926e0;
        }
        iVar4 = uVar9 + 1;
      }
      else {
        if (local_64 <= uVar9) {
          puVar7 = &DAT_01ce220c;
          goto LAB_012929ec;
        }
        uVar11 = local_68[uVar9 * 6];
        uVar10 = uVar10 + (local_68 + uVar9 * 6)[1] + (uint)CARRY4(uVar8,uVar11);
        if ((int)(uVar14 - (iVar5 + (uint)(puVar13 < puVar12))) < 0 ==
            (SBORROW4(uVar14,iVar5) != SBORROW4(uVar14 - iVar5,(uint)(puVar13 < puVar12)))) {
          bVar16 = puVar13 < (uint *)(uVar8 + uVar11);
          bVar17 = SBORROW4(uVar14,uVar10) != SBORROW4(uVar14 - uVar10,(uint)bVar16);
          iVar5 = uVar10 + bVar16;
          goto LAB_0129240c;
        }
LAB_01292438:
        uVar15 = uVar9;
      }
      uVar9 = iVar4 + (uVar15 - iVar4 >> 1);
    } while (uVar9 != uVar15);
    uVar9 = 599;
  }
LAB_012926d4:
  param_2 = uVar9;
  uVar9 = param_2;
LAB_012926e0:
  uVar15 = param_2 - 0x255 & 0xffff;
  if (uVar15 == 0) {
    if (0x2a2fe < (int)puVar12 + uVar10 + 0x1517f) goto LAB_012929c8;
    FUN_0128f7dc(&local_50,param_3);
    if (local_50 == 0) {
      uVar3 = 599;
    }
    else {
      uVar3 = 599;
      if ((uVar14 & 0xffff) != 0x255) {
        *param_1 = local_50;
        param_1[1] = uStack_4c;
        param_1[2] = (uint)local_48;
        param_1[3] = unaff_r9;
        param_1[4] = (uint)local_8c;
        uVar3 = 0x255;
        param_1[5] = (uint)puVar12;
        *(short *)((int)param_1 + 0x1e) = (short)(uVar14 >> 0x10);
        *(short *)(param_1 + 7) = (short)uVar14;
        param_1[6] = uVar10;
      }
    }
    *(undefined2 *)(param_1 + 0xf) = uVar3;
  }
  else {
    if (uVar15 == 1) {
LAB_012926f4:
      if ((int)puVar12 + uVar10 + 0x1517f < 0x2a2ff) {
        FUN_0128f7dc(&local_50,param_3);
        if (local_50 == 0) {
          uVar15 = 0x255;
          uVar14 = uVar10;
        }
        else {
          uVar15 = uVar14 & 0xffff;
          local_30 = local_50;
          uStack_2c = uStack_4c;
          puStack_28 = local_48;
          uVar14 = uVar14 >> 0x10;
          local_90 = unaff_r9;
        }
        if (local_88 + local_6c + 0x1517f < 0x2a2ff) {
          FUN_0128f7dc(&local_50,param_3);
          if ((local_50 == 0) || (uVar3 = 599, uVar15 == 0x255)) {
            uVar3 = 599;
          }
          else if (uVar9 != 0x255) {
            *param_1 = local_30;
            param_1[1] = uStack_2c;
            param_1[2] = (uint)puStack_28;
            param_1[8] = local_50;
            param_1[9] = uStack_4c;
            param_1[10] = (uint)local_48;
            param_1[3] = local_90;
            param_1[4] = (uint)local_8c;
            param_1[0xb] = local_94;
            param_1[0xc] = local_98;
            param_1[5] = (uint)puVar12;
            param_1[6] = uVar10;
            *(undefined2 *)((int)param_1 + 0x3e) = 0;
            param_1[0xd] = local_6c;
            uVar3 = (undefined2)param_2;
            *(short *)((int)param_1 + 0x1e) = (short)uVar14;
            *(short *)(param_1 + 7) = (short)uVar15;
            param_1[0xe] = local_88;
          }
          *(undefined2 *)(param_1 + 0xf) = uVar3;
          return;
        }
      }
LAB_012929c8:
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01ce21ec);
    }
    *(undefined2 *)(param_1 + 0xf) = 599;
  }
  return;
}

