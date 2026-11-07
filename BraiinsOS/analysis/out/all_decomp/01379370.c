// FUN_01379370 @ 01379370 size=5124 calls_out=16 calls_in=2
// strings: no in-progress search to finish | no in-progress search to update | assertion failed: id.is_match() | no in-progress search to finish | no in-progress search to finish | no quit in start without look-behind

undefined1 * FUN_01379370(uint *param_1,int param_2,int *param_3,int *param_4)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  int iVar5;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  int iVar22;
  uint uVar23;
  bool bVar24;
  bool bVar25;
  ulonglong uVar26;
  uint local_b0 [4];
  undefined4 uStack_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  uint local_90 [4];
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70 [4];
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  uint local_50;
  uint local_4c;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint *local_34;
  code *local_30;
  uint *local_2c;
  undefined1 *local_28;
  
  uVar18 = param_3[4];
  uVar20 = param_3[5];
  *param_4 = 0;
  if (uVar20 < uVar18) {
    return (undefined1 *)0x0;
  }
  iVar10 = *param_3;
  if (1 < iVar10 - 1U) {
    pcVar8 = "";
    if ((char)param_1[0x13] != '\x03') {
      pcVar8 = (char *)(param_1 + 0x10);
    }
    if ((char)*(uint *)((int)pcVar8 + 0xc) != '\x02') {
      uVar6 = param_1[0x9e];
      iVar5 = *(int *)(uVar6 + 0x134);
      if (param_4[3] == 1) {
        uVar9 = param_4[4];
        if (param_4[5] != 0) {
          if ((uVar9 & 0x8000000) == 0) goto LAB_0137a2cc;
          uVar21 = param_1[0x9f];
          uVar16 = *(uint *)(param_2 + 0x94);
          uVar23 = uVar21 & 0x1f;
          uVar18 = (uVar9 & 0x7ffffff) >> uVar23;
          if (uVar16 <= (uVar9 & 0x7ffffff) >> uVar23) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar18,uVar16,&DAT_01893ae0);
          }
          iVar22 = *(int *)(param_2 + 0x90);
          piVar11 = (int *)(iVar22 + uVar18 * 8);
          iVar15 = *piVar11;
          uVar18 = piVar11[1];
          if (uVar18 == 0) goto LAB_0137a710;
          bVar1 = *(byte *)(iVar15 + 8);
          if ((bVar1 & 1) != 0) {
            uVar12 = 1;
            uVar23 = param_4[6];
            if ((bVar1 & 2) != 0) {
              if (uVar18 < 0xd) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(9,0xd,uVar18,&DAT_01894358);
              }
              uVar12 = *(uint *)(iVar15 + 0x11);
            }
            if (uVar23 < uVar12) {
              param_4[5] = 1;
              param_4[6] = uVar23 + 1;
              iVar10 = FUN_0137a834(*(undefined4 *)(uVar6 + 0x154),uVar21,iVar22,uVar16,uVar9,uVar23
                                   );
              *param_4 = 1;
              param_4[1] = iVar10;
              param_4[2] = param_4[7];
              return (undefined1 *)0x0;
            }
          }
        }
        uVar18 = param_4[7] + 1;
        param_4[7] = uVar18;
        if (uVar20 < uVar18) {
          return (undefined1 *)0x0;
        }
      }
      else {
        param_4[7] = uVar18;
        if ((uVar18 != 0) && (uVar18 - 1 < (uint)param_3[3])) {
          iVar22 = param_3[1];
          bVar1 = *(byte *)(param_3[2] + (uVar18 - 1));
          uVar21 = (uint)bVar1;
          iVar15 = thunk_FUN_016dd50a(param_1 + 0x96,"",0x20);
          if (iVar15 == 0) {
LAB_01379bdc:
            uVar21 = (uint)*(byte *)((int)param_1 + uVar21 + 0x58);
            uVar9 = *(uint *)(param_2 + 0x88);
            if (uVar9 <= uVar21) goto LAB_0137a700;
            goto LAB_01379c00;
          }
          puVar14 = (uint *)((int)(param_1 + 0x96) + (bVar1 >> 3 & 0xfffffff0));
          local_70[0] = *puVar14;
          local_70[1] = puVar14[1];
          local_70[2] = puVar14[2];
          local_70[3] = puVar14[3];
          uStack_60 = 0;
          local_54 = 0;
          local_58 = 0;
          local_5c = 0;
          uVar9 = uVar21 & 0x1f;
          if ((local_70[(uVar21 & 0x7f) >> 5] >> uVar9 & 1) == 0) goto LAB_01379bdc;
          local_4c = CONCAT31(local_4c._1_3_,bVar1);
          local_50 = 4;
LAB_01379750:
          iVar10 = 2;
          if (2 < local_50) {
            iVar10 = local_50 - 3;
          }
          if (iVar10 == 0) {
LAB_01379fc8:
            uVar23 = uVar9;
LAB_01379fcc:
            puVar3 = (undefined1 *)FUN_013c723c(uVar18,uVar23);
            return puVar3;
          }
          uVar20 = local_50;
          uVar6 = local_4c;
          if (iVar10 != 1) {
LAB_0137a2ac:
            puVar3 = (undefined1 *)FUN_013c71d0(uVar20,uVar6);
            return puVar3;
          }
          if (uVar18 != 0) {
            uVar23 = uVar18 - 1;
            uVar18 = local_4c;
LAB_0137a190:
            puVar3 = (undefined1 *)FUN_013c7204(uVar18,uVar23);
            return puVar3;
          }
          goto LAB_0137a644;
        }
        iVar22 = param_3[1];
        uVar21 = 2;
        uVar9 = *(uint *)(param_2 + 0x88);
        if (uVar9 < 3) goto LAB_0137a700;
LAB_01379c00:
        uVar9 = *(uint *)(*(int *)(param_2 + 0x84) + uVar21 * 4);
        if ((int)uVar9 < 0) {
          local_34 = param_1;
          local_30 = (code *)param_2;
          FUN_01390a98(&local_50,&local_34,iVar10,iVar22,uVar21);
          uVar9 = extraout_r1_00;
          if (local_50 != 5) goto LAB_01379750;
          uVar9 = local_4c;
        }
      }
      uVar21 = *(uint *)(param_2 + 0xb4);
      uVar23 = *(uint *)(param_2 + 0xb8);
      uVar16 = *(uint *)(param_2 + 0xb0);
      *(undefined4 *)(param_2 + 0xb0) = 0;
      if ((uVar16 & 1) != 0) {
        iVar15 = uVar23 - uVar21;
        if (uVar23 < uVar21) {
          iVar15 = uVar21 - uVar23;
        }
        *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + iVar15;
      }
      uVar16 = param_3[3];
      *(undefined4 *)(param_2 + 0xb0) = 1;
      *(uint *)(param_2 + 0xb4) = uVar18;
      *(uint *)(param_2 + 0xb8) = uVar18;
      if (uVar18 < uVar20) {
        uVar17 = param_3[1];
        uVar7 = param_1[0x9f];
        bVar1 = *(byte *)((int)param_1 + 0x51);
        iVar15 = param_3[2];
        uVar12 = *(uint *)((int)pcVar8 + 4);
        uVar13 = *(uint *)pcVar8;
        uVar23 = uVar18;
        do {
          while( true ) {
            if (uVar16 <= uVar23) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar23,uVar16,&DAT_01892ab0);
            }
            uVar18 = *(uint *)(param_2 + 0x7c);
            uVar21 = (uVar9 & 0x7ffffff) +
                     (uint)*(byte *)((int)param_1 + *(byte *)(iVar15 + uVar23) + 0x158);
            if (uVar18 <= uVar21) goto LAB_0137a6c4;
            uVar18 = *(uint *)(*(int *)(param_2 + 0x78) + uVar21 * 4);
            if ((int)uVar18 < 0) {
              local_34 = param_1;
              local_30 = (code *)param_2;
              uVar26 = FUN_01390198(&local_34,uVar9,(uint)*(byte *)(iVar15 + uVar23) << 8);
              uVar9 = (uint)(uVar26 >> 0x20);
              uVar18 = uVar23;
              if ((uVar26 & 1) != 0) goto LAB_01379fc8;
            }
            else {
              uVar9 = uVar18;
            }
            if (uVar9 < 0x8000000) break;
            param_4[3] = 1;
            param_4[4] = uVar9;
            if ((uVar9 & 0x10000000) == 0) {
              if ((uVar9 & 0x8000000) != 0) {
                param_4[5] = 1;
                param_4[6] = 1;
                iVar10 = FUN_0137a834(*(undefined4 *)(uVar6 + 0x154),uVar7,
                                      *(undefined4 *)(param_2 + 0x90),
                                      *(undefined4 *)(param_2 + 0x94),uVar9,0);
                uVar18 = param_4[7];
                uVar20 = *(uint *)(param_2 + 0xb4);
                uVar6 = *(uint *)(param_2 + 0xb0);
                *param_4 = 1;
                param_4[1] = iVar10;
                param_4[2] = uVar18;
                *(undefined4 *)(param_2 + 0xb0) = 0;
                goto joined_r0x0137a220;
              }
              if ((uVar9 & 0x40000000) != 0) goto LAB_0137a1a4;
              if ((uVar9 & 0x20000000) == 0) goto LAB_0137a69c;
              uVar18 = *(uint *)(param_2 + 0xb0);
              uVar20 = *(uint *)(param_2 + 0xb4);
              *(undefined4 *)(param_2 + 0xb0) = 0;
              if ((uVar18 & 1) == 0) goto LAB_0137a224;
              iVar10 = uVar23 - uVar20;
              if (uVar23 < uVar20) {
                iVar10 = uVar20 - uVar23;
              }
              *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + iVar10;
              uVar18 = (uint)*(byte *)(iVar15 + uVar23);
              goto LAB_0137a190;
            }
            (**(code **)(uVar12 + 0x10))
                      (&local_50,uVar13 + 8 + (*(int *)(uVar12 + 8) - 1U & 0xfffffff8),iVar15,uVar16
                       ,uVar23,uVar20);
            uVar18 = local_4c;
            if (local_50 == 0) {
              return (undefined1 *)0x0;
            }
            if (local_4c <= uVar23) break;
            param_4[7] = local_4c;
            if (iVar5 != 0) {
              bVar25 = uVar16 <= uVar20;
              bVar24 = uVar20 == uVar16;
              uVar21 = extraout_r1;
              if (!bVar25 || bVar24) {
                uVar21 = uVar20 + 1;
              }
              local_40 = local_4c;
              if (!bVar25 || bVar24) {
                bVar25 = uVar21 <= local_4c;
                bVar24 = local_4c == uVar21;
              }
              local_3c = uVar20;
              if (bVar25 && !bVar24) {
                local_30 = FUN_005ffff4;
                local_34 = &local_40;
                local_28 = &LAB_00fac484;
                local_2c = &local_38;
                local_38 = uVar16;
                    /* WARNING: Subroutine does not return */
                FUN_00faa478(&DAT_0057a181,&local_34,&DAT_01893ee0);
              }
              uVar23 = local_4c - 1;
              if (uVar23 < uVar16) {
                bVar2 = *(byte *)(iVar15 + uVar23);
                uVar21 = (uint)bVar2;
                iVar22 = thunk_FUN_016dd50a(param_1 + 0x96,"",0x20);
                if (iVar22 == 0) {
LAB_01379e34:
                  uVar19 = (uint)*(byte *)((int)param_1 + uVar21 + 0x58);
                  goto LAB_01379e90;
                }
                puVar14 = (uint *)((int)(param_1 + 0x96) + (bVar2 >> 3 & 0xfffffff0));
                local_90[3] = puVar14[3];
                local_90[0] = *puVar14;
                local_90[1] = puVar14[1];
                local_90[2] = puVar14[2];
                local_74 = 0;
                local_78 = 0;
                local_7c = 0;
                local_80 = 0;
                if ((local_90[(uVar21 & 0x7f) >> 5] >> (uVar21 & 0x1f) & 1) == 0) goto LAB_01379e34;
                local_3c = CONCAT31(local_3c._1_3_,bVar2);
                local_40 = 4;
              }
              else {
                uVar19 = 2;
LAB_01379e90:
                if (iVar10 == 0) {
                  uVar21 = uVar19;
LAB_01379edc:
                  uVar9 = *(uint *)(param_2 + 0x88);
                  if (uVar9 <= uVar21) goto LAB_0137a700;
                  uVar9 = *(uint *)(*(int *)(param_2 + 0x84) + uVar21 * 4);
                  if (-1 < (int)uVar9) goto LAB_01379efc;
                }
                else {
                  if (iVar10 != 2) {
                    uVar21 = uVar19 + 6;
                    goto LAB_01379edc;
                  }
                  if ((bVar1 & 1) == 0) {
                    local_40 = 2;
                    local_3c = uVar17;
                    goto LAB_0137a270;
                  }
                  if (uVar17 < *(uint *)(uVar6 + 0x154)) {
                    uVar21 = uVar17 * 6 + 0xc + uVar19;
                    goto LAB_01379edc;
                  }
                  uVar9 = FUN_01391aa4(uVar7);
                  if (uVar9 < 0x80000000) goto LAB_01379efc;
                }
                local_34 = param_1;
                local_30 = (code *)param_2;
                FUN_01390a98(&local_40,&local_34,iVar10,uVar17,uVar19);
                uVar9 = local_3c;
                if (local_40 == 5) goto LAB_01379efc;
              }
LAB_0137a270:
              iVar10 = 2;
              if (2 < local_40) {
                iVar10 = local_40 - 3;
              }
              if (iVar10 == 0) goto LAB_01379fcc;
              if (iVar10 != 1) {
                uVar20 = local_40;
                uVar6 = local_3c;
                goto LAB_0137a2ac;
              }
              uVar18 = local_3c;
              goto LAB_0137a190;
            }
LAB_01379efc:
            uVar23 = uVar18;
            if (uVar20 <= uVar18) goto LAB_01379fe0;
          }
          iVar22 = *(int *)(param_2 + 0xb0);
          uVar23 = uVar23 + 1;
          param_4[7] = uVar23;
          if (iVar22 == 0) goto LAB_0137a23c;
          *(uint *)(param_2 + 0xb8) = uVar23;
        } while (uVar23 < uVar20);
      }
LAB_01379fe0:
      if (uVar20 < uVar16) {
        uVar23 = (uint)*(byte *)(param_3[2] + uVar20);
        uVar18 = *(uint *)(param_2 + 0x7c);
        uVar21 = (uVar9 & 0x7ffffff) + (uint)*(byte *)((int)param_1 + uVar23 + 0x158);
        if (uVar18 <= uVar21) goto LAB_0137a6c4;
        uVar18 = *(uint *)(*(int *)(param_2 + 0x78) + uVar21 * 4);
        uVar16 = uVar20;
        if ((int)uVar18 < 0) {
          local_34 = param_1;
          local_30 = (code *)param_2;
          uVar26 = FUN_01390198(&local_34,uVar9,uVar23 << 8);
          uVar18 = (uint)(uVar26 >> 0x20);
          if ((uVar26 & 1) != 0) goto LAB_0137a06c;
        }
        if ((uVar18 & 0x8000000) != 0) goto LAB_0137a58c;
        puVar3 = (undefined1 *)0x0;
        if ((uVar18 & 0x20000000) != 0) {
          puVar3 = (undefined1 *)FUN_013c7204(uVar23,uVar20);
        }
LAB_0137a078:
        param_4[3] = 1;
        param_4[4] = uVar18;
        if (*param_4 != 0) goto LAB_0137a5cc;
      }
      else {
        uVar18 = *(uint *)(param_2 + 0x7c);
        iVar10 = *(byte *)((int)param_1 + 599) + 1;
        uVar21 = iVar10 + (uVar9 & 0x7ffffff);
        if (uVar18 <= uVar21) goto LAB_0137a724;
        uVar18 = *(uint *)(*(int *)(param_2 + 0x78) + uVar21 * 4);
        if ((int)uVar18 < 0) {
          uVar4 = FUN_0138d580(iVar10);
          local_34 = param_1;
          local_30 = (code *)param_2;
          uVar26 = FUN_01390198(&local_34,uVar9,uVar4);
          uVar18 = (uint)(uVar26 >> 0x20);
          if ((uVar26 & 1) != 0) {
LAB_0137a06c:
            puVar3 = (undefined1 *)FUN_013c723c(uVar16);
            uVar18 = uVar9;
            goto LAB_0137a078;
          }
        }
        puVar3 = (undefined1 *)0x0;
        if ((uVar18 & 0x8000000) == 0) goto LAB_0137a078;
LAB_0137a58c:
        puVar3 = (undefined1 *)0x0;
        iVar10 = FUN_0137a834(*(undefined4 *)(uVar6 + 0x154),param_1[0x9f],
                              *(undefined4 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x94),uVar18
                              ,0);
        param_4[1] = iVar10;
        param_4[2] = uVar16;
        *param_4 = 1;
        param_4[3] = 1;
        param_4[4] = uVar18;
LAB_0137a5cc:
        param_4[5] = 1;
        param_4[6] = 1;
      }
      uVar18 = *(uint *)(param_2 + 0xb0);
      uVar6 = *(uint *)(param_2 + 0xb4);
      *(undefined4 *)(param_2 + 0xb0) = 0;
      if ((uVar18 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("no in-progress search to finish",0x1f,&DAT_01892a30);
      }
      iVar10 = uVar20 - uVar6;
      iVar5 = *(int *)(param_2 + 0x70);
      if (uVar20 < uVar6) {
        iVar10 = uVar6 - uVar20;
      }
      goto LAB_0137a5fc;
    }
  }
  uVar6 = param_1[0x9e];
  if (param_4[3] != 1) {
    param_4[7] = uVar18;
    uVar23 = uVar18;
    if ((uVar18 == 0) || ((uint)param_3[3] <= uVar18 - 1)) {
      uVar12 = param_3[1];
      uVar16 = 2;
      uVar21 = uVar16;
      if (iVar10 == 0) goto LAB_0137985c;
LAB_013795a8:
      if (iVar10 == 1) {
        uVar21 = uVar16 + 6;
        uVar9 = *(uint *)(param_2 + 0x88);
        if (uVar9 <= uVar21) goto LAB_0137a700;
        goto LAB_0137986c;
      }
      if ((*(byte *)((int)param_1 + 0x51) & 1) == 0) {
        local_50 = 2;
        local_4c = uVar12;
        goto LAB_013797a4;
      }
      if (uVar12 < *(uint *)(uVar6 + 0x154)) {
        uVar21 = uVar16 + uVar12 * 6 + 0xc;
        uVar9 = *(uint *)(param_2 + 0x88);
        if (uVar9 <= uVar21) goto LAB_0137a700;
        goto LAB_0137986c;
      }
      uVar9 = FUN_01391aa4(param_1[0x9f]);
      if (uVar9 < 0x80000000) goto LAB_0137987c;
LAB_01379b90:
      local_34 = param_1;
      local_30 = (code *)param_2;
      FUN_01390a98(&local_50,&local_34,iVar10,uVar12,uVar16);
      if (local_50 == 5) {
        uVar9 = local_4c;
        goto LAB_0137987c;
      }
    }
    else {
      uVar12 = param_3[1];
      bVar1 = *(byte *)(param_3[2] + (uVar18 - 1));
      uVar21 = (uint)bVar1;
      iVar5 = thunk_FUN_016dd50a(param_1 + 0x96,"",0x20);
      if (iVar5 == 0) {
LAB_0137983c:
        uVar16 = (uint)*(byte *)((int)param_1 + uVar21 + 0x58);
        uVar21 = uVar16;
        if (iVar10 != 0) goto LAB_013795a8;
LAB_0137985c:
        uVar9 = *(uint *)(param_2 + 0x88);
        uVar16 = uVar21;
        if (uVar9 <= uVar21) {
LAB_0137a700:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar21,uVar9,&DAT_01893b00);
        }
LAB_0137986c:
        uVar9 = *(uint *)(*(int *)(param_2 + 0x84) + uVar21 * 4);
        if (-1 < (int)uVar9) goto LAB_0137987c;
        goto LAB_01379b90;
      }
      puVar14 = (uint *)((int)(param_1 + 0x96) + (bVar1 >> 3 & 0xfffffff0));
      local_b0[0] = *puVar14;
      local_b0[1] = puVar14[1];
      local_b0[2] = puVar14[2];
      local_b0[3] = puVar14[3];
      uStack_a0 = 0;
      local_94 = 0;
      local_98 = 0;
      local_9c = 0;
      if ((local_b0[(uVar21 & 0x7f) >> 5] >> (uVar21 & 0x1f) & 1) == 0) goto LAB_0137983c;
      local_4c = CONCAT31(local_4c._1_3_,bVar1);
      local_50 = 4;
    }
LAB_013797a4:
    uVar6 = local_4c;
    uVar20 = local_50;
    iVar10 = 2;
    if (2 < local_50) {
      iVar10 = local_50 - 3;
    }
    if (iVar10 == 0) {
LAB_013799a4:
      puVar3 = (undefined1 *)thunk_FUN_016d4a50(0xc);
      if (puVar3 != (undefined1 *)0x0) {
        *(uint *)(puVar3 + 4) = uVar18;
        *puVar3 = 1;
        return puVar3;
      }
    }
    else if (iVar10 == 1) {
      if (uVar18 == 0) {
LAB_0137a644:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("no quit in start without look-behind",0x24,&DAT_01892a10);
      }
      puVar3 = (undefined1 *)thunk_FUN_016d4a50(0xc);
      if (puVar3 != (undefined1 *)0x0) {
        *(uint *)(puVar3 + 4) = uVar18 - 1;
        puVar3[1] = (char)uVar6;
        *puVar3 = 0;
        return puVar3;
      }
    }
    else {
      puVar3 = (undefined1 *)thunk_FUN_016d4a50(0xc);
      if (puVar3 != (undefined1 *)0x0) {
        *(uint *)(puVar3 + 4) = uVar20;
        *(uint *)(puVar3 + 8) = uVar6;
        *puVar3 = 3;
        return puVar3;
      }
    }
LAB_0137a2c0:
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  uVar9 = param_4[4];
  if (param_4[5] != 0) {
    if ((uVar9 & 0x8000000) == 0) {
LAB_0137a2cc:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("assertion failed: id.is_match()",0x1f,&DAT_01892a20);
    }
    uVar18 = (uVar9 & 0x7ffffff) >> (param_1[0x9f] & 0x1f);
    if (*(uint *)(param_2 + 0x94) <= (uVar9 & 0x7ffffff) >> (param_1[0x9f] & 0x1f)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar18,*(uint *)(param_2 + 0x94),&DAT_01893ae0);
    }
    piVar11 = (int *)(*(int *)(param_2 + 0x90) + uVar18 * 8);
    uVar18 = piVar11[1];
    if (uVar18 == 0) {
LAB_0137a710:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(0,0,&DAT_01894308);
    }
    bVar1 = *(byte *)(*piVar11 + 8);
    if ((bVar1 & 1) != 0) {
      uVar21 = param_4[6];
      uVar23 = 1;
      if ((bVar1 & 2) != 0) {
        if (uVar18 < 0xd) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(9,0xd,uVar18,&DAT_01894358);
        }
        uVar23 = *(uint *)(*piVar11 + 0x11);
      }
      if (uVar21 < uVar23) {
        param_4[5] = 1;
        param_4[6] = uVar21 + 1;
        iVar10 = 0;
        if (*(int *)(uVar6 + 0x154) == 1) {
LAB_013794c8:
          *param_4 = 1;
          param_4[1] = iVar10;
          param_4[2] = param_4[7];
          return (undefined1 *)0x0;
        }
        uVar18 = piVar11[1];
        if (uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(0,0,&DAT_018942e8);
        }
        iVar10 = 0;
        if ((*(byte *)(*piVar11 + 8) & 2) == 0) goto LAB_013794c8;
        uVar20 = uVar21 * 4 + 0xd;
        if (uVar18 < uVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(uVar20,uVar18,uVar18,&DAT_018942f8);
        }
        uVar18 = uVar18 - uVar20;
        if (3 < uVar18) {
          iVar10 = *(int *)((byte *)(*piVar11 + 8) + uVar20);
          goto LAB_013794c8;
        }
        goto LAB_0137a65c;
      }
    }
  }
  uVar23 = param_4[7] + 1;
  param_4[7] = uVar23;
  if (uVar20 < uVar23) {
    return (undefined1 *)0x0;
  }
LAB_0137987c:
  uVar18 = *(uint *)(param_2 + 0xb4);
  uVar21 = *(uint *)(param_2 + 0xb8);
  uVar16 = *(uint *)(param_2 + 0xb0);
  *(undefined4 *)(param_2 + 0xb0) = 0;
  if ((uVar16 & 1) != 0) {
    iVar10 = uVar21 - uVar18;
    if (uVar21 < uVar18) {
      iVar10 = uVar18 - uVar21;
    }
    *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + iVar10;
  }
  uVar16 = param_3[3];
  *(undefined4 *)(param_2 + 0xb0) = 1;
  *(uint *)(param_2 + 0xb4) = uVar23;
  *(uint *)(param_2 + 0xb8) = uVar23;
  if (uVar23 < uVar20) {
    iVar10 = param_3[2];
    uVar12 = uVar9;
    uVar7 = uVar16;
    if (uVar16 < uVar23) {
      uVar7 = uVar23;
    }
    do {
      if (uVar7 == uVar23) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar7,uVar16,&DAT_01892ab0);
      }
      uVar13 = (uint)*(byte *)(iVar10 + uVar23);
      uVar18 = *(uint *)(param_2 + 0x7c);
      uVar21 = (uVar12 & 0x7ffffff) + (uint)*(byte *)((int)param_1 + uVar13 + 0x158);
      if (uVar18 <= uVar21) goto LAB_0137a6c4;
      uVar9 = *(uint *)(*(int *)(param_2 + 0x78) + uVar21 * 4);
      if ((int)uVar9 < 0) {
        local_34 = param_1;
        local_30 = (code *)param_2;
        uVar26 = FUN_01390198(&local_34,uVar12,uVar13 << 8);
        uVar9 = (uint)(uVar26 >> 0x20);
        uVar18 = uVar23;
        if ((uVar26 & 1) != 0) goto LAB_013799a4;
      }
      if (0x7ffffff < uVar9) {
        param_4[3] = 1;
        param_4[4] = uVar9;
        if ((uVar9 & 0x10000000) == 0) {
          if ((uVar9 & 0x8000000) != 0) {
            uVar18 = param_1[0x9f];
            param_4[5] = 1;
            param_4[6] = 1;
            iVar10 = FUN_0137a834(*(undefined4 *)(uVar6 + 0x154),uVar18,
                                  *(undefined4 *)(param_2 + 0x90),*(undefined4 *)(param_2 + 0x94),
                                  uVar9,0);
            uVar18 = param_4[7];
            uVar20 = *(uint *)(param_2 + 0xb4);
            uVar6 = *(uint *)(param_2 + 0xb0);
            *param_4 = 1;
            param_4[1] = iVar10;
            param_4[2] = uVar18;
            *(undefined4 *)(param_2 + 0xb0) = 0;
joined_r0x0137a220:
            if ((uVar6 & 1) != 0) {
              iVar10 = uVar18 - uVar20;
              if (uVar18 < uVar20) {
                iVar10 = uVar20 - uVar18;
              }
              *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + iVar10;
              return (undefined1 *)0x0;
            }
            goto LAB_0137a224;
          }
          if ((uVar9 & 0x40000000) != 0) goto LAB_0137a1a4;
          if ((uVar9 & 0x20000000) == 0) {
LAB_0137a69c:
                    /* WARNING: Subroutine does not return */
            FUN_00faa478("internal error: entered unreachable code: sid being unknown is a bug",0x89
                         ,&DAT_01892ac0);
          }
          uVar18 = *(uint *)(param_2 + 0xb0);
          uVar20 = *(uint *)(param_2 + 0xb4);
          *(undefined4 *)(param_2 + 0xb0) = 0;
          if ((uVar18 & 1) != 0) {
            iVar5 = uVar23 - uVar20;
            if (uVar23 < uVar20) {
              iVar5 = uVar20 - uVar23;
            }
            *(int *)(param_2 + 0x70) = *(int *)(param_2 + 0x70) + iVar5;
            puVar3 = (undefined1 *)FUN_013c7204(*(undefined1 *)(iVar10 + uVar23),uVar23);
            return puVar3;
          }
          goto LAB_0137a224;
        }
      }
      iVar5 = *(int *)(param_2 + 0xb0);
      uVar23 = uVar23 + 1;
      param_4[7] = uVar23;
      if (iVar5 == 0) {
LAB_0137a23c:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("no in-progress search to update",0x1f,&DAT_01892a40);
      }
      *(uint *)(param_2 + 0xb8) = uVar23;
      uVar12 = uVar9;
    } while (uVar20 != uVar23);
  }
  if (uVar20 < uVar16) {
    uVar23 = (uint)*(byte *)(param_3[2] + uVar20);
    uVar18 = *(uint *)(param_2 + 0x7c);
    uVar21 = (uVar9 & 0x7ffffff) + (uint)*(byte *)((int)param_1 + uVar23 + 0x158);
    if (uVar18 <= uVar21) {
LAB_0137a6c4:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar21,uVar18,&DAT_01893ad0);
    }
    uVar18 = *(uint *)(*(int *)(param_2 + 0x78) + uVar21 * 4);
    if ((int)uVar18 < 0) {
      local_34 = param_1;
      local_30 = (code *)param_2;
      uVar26 = FUN_01390198(&local_34,uVar9,uVar23 << 8);
      uVar18 = (uint)(uVar26 >> 0x20);
      if ((uVar26 & 1) != 0) {
        puVar3 = (undefined1 *)thunk_FUN_016d4a50(0xc);
        if (puVar3 == (undefined1 *)0x0) goto LAB_0137a2c0;
        *(uint *)(puVar3 + 4) = uVar20;
        *puVar3 = 1;
        goto LAB_0137a3a8;
      }
    }
    uVar9 = uVar18;
    if ((uVar9 & 0x8000000) != 0) {
      uVar16 = uVar20;
      goto LAB_0137a3c0;
    }
    puVar3 = (undefined1 *)0x0;
    if ((uVar9 & 0x20000000) != 0) {
      puVar3 = (undefined1 *)FUN_013c7204(uVar23,uVar20);
    }
LAB_0137a3a8:
    param_4[3] = 1;
    param_4[4] = uVar9;
    if (*param_4 != 0) goto LAB_0137a440;
  }
  else {
    uVar18 = *(uint *)(param_2 + 0x7c);
    iVar10 = *(byte *)((int)param_1 + 599) + 1;
    uVar21 = iVar10 + (uVar9 & 0x7ffffff);
    if (uVar18 <= uVar21) {
LAB_0137a724:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar21,uVar18,&DAT_01893af0);
    }
    uVar18 = *(uint *)(*(int *)(param_2 + 0x78) + uVar21 * 4);
    if ((int)uVar18 < 0) {
      uVar4 = FUN_0138d580(iVar10);
      local_34 = param_1;
      local_30 = (code *)param_2;
      uVar26 = FUN_01390198(&local_34,uVar9,uVar4);
      uVar18 = (uint)(uVar26 >> 0x20);
      if ((uVar26 & 1) != 0) {
        puVar3 = (undefined1 *)thunk_FUN_016d4a50(0xc);
        if (puVar3 == (undefined1 *)0x0) goto LAB_0137a2c0;
        *(uint *)(puVar3 + 4) = uVar16;
        *puVar3 = 1;
        goto LAB_0137a3a8;
      }
    }
    uVar9 = uVar18;
    puVar3 = (undefined1 *)0x0;
    if ((uVar9 & 0x8000000) == 0) goto LAB_0137a3a8;
LAB_0137a3c0:
    puVar3 = (undefined1 *)0x0;
    iVar10 = 0;
    if (*(int *)(uVar6 + 0x154) != 1) {
      uVar18 = (uVar9 & 0x7ffffff) >> (param_1[0x9f] & 0x1f);
      if (*(uint *)(param_2 + 0x94) <= (uVar9 & 0x7ffffff) >> (param_1[0x9f] & 0x1f)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar18,*(uint *)(param_2 + 0x94),&DAT_01893ae0);
      }
      piVar11 = (int *)(*(int *)(param_2 + 0x90) + uVar18 * 8);
      iVar5 = *piVar11;
      uVar18 = piVar11[1];
      if (uVar18 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(0,0,&DAT_018942e8);
      }
      iVar10 = 0;
      if ((*(byte *)(iVar5 + 8) & 2) != 0) {
        if (uVar18 < 0xd) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0xd,uVar18,uVar18,&DAT_018942f8);
        }
        uVar18 = uVar18 - 0xd;
        if (uVar18 < 4) {
LAB_0137a65c:
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,4,uVar18,&DAT_01892db0);
        }
        iVar10 = *(int *)(iVar5 + 0x15);
      }
    }
    param_4[4] = uVar9;
    *param_4 = 1;
    param_4[1] = iVar10;
    param_4[2] = uVar16;
    param_4[3] = 1;
LAB_0137a440:
    param_4[5] = 1;
    param_4[6] = 1;
  }
  uVar18 = *(uint *)(param_2 + 0xb0);
  uVar6 = *(uint *)(param_2 + 0xb4);
  *(undefined4 *)(param_2 + 0xb0) = 0;
  if ((uVar18 & 1) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("no in-progress search to finish",0x1f,&DAT_01892a30);
  }
  iVar10 = uVar20 - uVar6;
  iVar5 = *(int *)(param_2 + 0x70);
  if (uVar20 < uVar6) {
    iVar10 = uVar6 - uVar20;
  }
LAB_0137a5fc:
  *(int *)(param_2 + 0x70) = iVar5 + iVar10;
  return puVar3;
LAB_0137a1a4:
  uVar18 = *(uint *)(param_2 + 0xb0);
  uVar20 = *(uint *)(param_2 + 0xb4);
  puVar3 = (undefined1 *)0x0;
  *(undefined4 *)(param_2 + 0xb0) = 0;
  if ((uVar18 & 1) == 0) {
LAB_0137a224:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("no in-progress search to finish",0x1f,&DAT_01892a30);
  }
  iVar10 = uVar23 - uVar20;
  iVar5 = *(int *)(param_2 + 0x70);
  if (uVar23 < uVar20) {
    iVar10 = uVar20 - uVar23;
  }
  goto LAB_0137a5fc;
}

