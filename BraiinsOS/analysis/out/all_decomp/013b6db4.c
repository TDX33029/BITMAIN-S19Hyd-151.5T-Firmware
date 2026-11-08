// FUN_013b6db4 @ 013b6db4 size=2672 calls_out=15 calls_in=8
// strings: 

void FUN_013b6db4(uint *param_1,byte **param_2,int param_3,int *param_4,uint param_5)

{
  byte **ppbVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  int *piVar8;
  byte bVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  byte *pbVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  ulonglong uVar20;
  uint local_6c;
  uint local_68;
  uint local_60;
  uint local_58 [4];
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  byte *local_38;
  uint local_34;
  byte **local_30;
  code *local_2c;
  
  uVar19 = param_4[3];
  uVar17 = param_4[5];
  if (uVar17 < uVar19) {
    uVar2 = param_4[1];
    iVar18 = *param_4;
    bVar9 = *(byte *)(param_4[2] + uVar17);
    uVar16 = (uint)bVar9;
    iVar3 = thunk_FUN_016dd50a(param_2 + 0x96,"",0x20);
    if (iVar3 == 0) {
LAB_013b6f1c:
      uVar11 = (uint)*(byte *)((int)param_2 + uVar16 + 0x58);
      uVar16 = uVar11;
      if (iVar18 == 0) goto LAB_013b6f38;
      goto LAB_013b6e7c;
    }
    puVar14 = (uint *)((int)(param_2 + 0x96) + (bVar9 >> 3 & 0xfffffff0));
    local_58[0] = *puVar14;
    local_58[1] = puVar14[1];
    local_58[2] = puVar14[2];
    local_58[3] = puVar14[3];
    uStack_48 = 0;
    local_3c = 0;
    local_40 = 0;
    local_44 = 0;
    if ((local_58[(uVar16 & 0x7f) >> 5] >> (uVar16 & 0x1f) & 1) == 0) goto LAB_013b6f1c;
    local_34 = CONCAT31(local_34._1_3_,bVar9);
    local_38 = &DAT_00000004;
LAB_013b6f70:
    uVar19 = local_34;
    pbVar4 = local_38;
    pbVar15 = &SUB_00000002;
    if (&SUB_00000002 < local_38) {
      pbVar15 = local_38 + -3;
    }
    pbVar5 = (byte *)thunk_FUN_016d4a50(0xc);
    if (pbVar15 == (byte *)0x0) {
      if (pbVar5 != (byte *)0x0) {
        bVar9 = 1;
LAB_013b6fbc:
        *pbVar5 = bVar9;
        *(uint *)(pbVar5 + 4) = uVar17;
        thunk_FUN_016d3fb4();
        param_1[1] = 1;
        param_1[2] = uVar17;
        *param_1 = 2;
        return;
      }
    }
    else if (pbVar15 == &DAT_00000001) {
      if (pbVar5 != (byte *)0x0) {
        pbVar5[1] = (byte)uVar19;
        bVar9 = 0;
        goto LAB_013b6fbc;
      }
    }
    else if (pbVar5 != (byte *)0x0) {
      *(byte **)(pbVar5 + 4) = pbVar4;
      *(uint *)(pbVar5 + 8) = uVar19;
      local_30 = &local_38;
      *pbVar5 = 3;
      local_2c = FUN_013c828c;
      local_38 = pbVar5;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_005733f0,&local_30,&DAT_01892790);
    }
    goto LAB_013b77d0;
  }
  iVar18 = *param_4;
  uVar11 = 2;
  uVar2 = param_4[1];
  uVar16 = uVar11;
  if (iVar18 == 0) {
LAB_013b6f38:
    uVar10 = *(uint *)(param_3 + 0x88);
    uVar11 = uVar16;
    if (uVar10 <= uVar16) goto LAB_013b6f48;
LAB_013b6e94:
    uVar16 = *(uint *)(*(int *)(param_3 + 0x84) + uVar16 * 4);
    if (-1 < (int)uVar16) goto LAB_013b6ea4;
LAB_013b70b0:
    local_30 = param_2;
    local_2c = (code *)param_3;
    FUN_01390a98(&local_38,&local_30,iVar18,uVar2,uVar11);
    if (local_38 != &DAT_00000005) goto LAB_013b6f70;
    uVar11 = param_4[4];
    uVar16 = local_34;
  }
  else {
LAB_013b6e7c:
    if (iVar18 == 1) {
      uVar16 = uVar11 + 6;
      uVar10 = *(uint *)(param_3 + 0x88);
      if (uVar10 <= uVar16) {
LAB_013b6f48:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar16,uVar10,&DAT_01893b00);
      }
      goto LAB_013b6e94;
    }
    if ((*(byte *)((int)param_2 + 0x51) & 1) == 0) {
      local_38 = &SUB_00000002;
      local_34 = uVar2;
      goto LAB_013b6f70;
    }
    if (uVar2 < *(uint *)(param_2[0x9e] + 0x154)) {
      uVar16 = uVar11 + uVar2 * 6 + 0xc;
      uVar10 = *(uint *)(param_3 + 0x88);
      if (uVar10 <= uVar16) goto LAB_013b6f48;
      goto LAB_013b6e94;
    }
    ppbVar1 = (byte **)(1 << ((uint)param_2[0x9f] & 0x1f));
    if (0x1a < ((uint)param_2[0x9f] & 0x1f)) {
      local_2c = (code *)0x0;
      local_30 = ppbVar1;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_01893030,&DAT_01893000);
    }
    uVar16 = (uint)ppbVar1 | 0x40000000;
    if (0x7fffffff < uVar16) goto LAB_013b70b0;
LAB_013b6ea4:
    uVar11 = param_4[4];
  }
  if (uVar11 != uVar17) {
    pbVar4 = param_2[0x9e];
    pbVar15 = param_2[0x9f];
    iVar18 = param_4[2];
    uVar17 = uVar17 - 1;
    uVar2 = (uint)pbVar15 & 0x1f;
    local_60 = 0;
    do {
      if (uVar19 <= uVar17) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar17,uVar19,&DAT_01893ab0);
      }
      uVar12 = *(uint *)(param_3 + 0x7c);
      uVar10 = (uVar16 & 0x7ffffff) +
               (uint)*(byte *)((int)param_2 + *(byte *)(iVar18 + uVar17) + 0x158);
      if (uVar12 <= uVar10) {
LAB_013b7714:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar10,uVar12,&DAT_01893ad0);
      }
      uVar13 = *(uint *)(*(int *)(param_3 + 0x78) + uVar10 * 4);
      if ((int)uVar13 < 0) {
        local_30 = param_2;
        local_2c = (code *)param_3;
        uVar20 = FUN_01390198(&local_30,uVar16,(uint)*(byte *)(iVar18 + uVar17) << 8);
        uVar13 = (uint)(uVar20 >> 0x20);
        if ((uVar20 & 1) != 0) {
          *param_1 = 2;
          param_1[1] = 1;
          param_1[2] = uVar17;
          return;
        }
      }
      if (0x7ffffff < uVar13) {
        if ((uVar13 & 0x8000000) == 0) {
          if ((uVar13 & 0x40000000) != 0) {
            *param_1 = local_60;
            param_1[1] = local_68;
            param_1[2] = local_6c;
            return;
          }
          if ((uVar13 & 0x20000000) != 0) {
            FUN_013c7204(*(undefined1 *)(iVar18 + uVar17),uVar17);
            uVar17 = FUN_0136e76c();
            *param_1 = 2;
            param_1[1] = 1;
            param_1[2] = uVar17;
            return;
          }
        }
        else {
          local_68 = 0;
          if (*(int *)(pbVar4 + 0x154) != 1) {
            uVar16 = (uVar13 & 0x7ffffff) >> uVar2;
            if (*(uint *)(param_3 + 0x94) <= (uVar13 & 0x7ffffff) >> uVar2) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(uVar16,*(uint *)(param_3 + 0x94),&DAT_01893ae0);
            }
            piVar8 = (int *)(*(int *)(param_3 + 0x90) + uVar16 * 8);
            iVar3 = *piVar8;
            uVar16 = piVar8[1];
            if (uVar16 == 0) goto LAB_013b7738;
            if ((*(byte *)(iVar3 + 8) & 2) != 0) {
              if (uVar16 < 0xd) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(0xd,uVar16,uVar16,&DAT_018942f8);
              }
              uVar16 = uVar16 - 0xd;
              if (uVar16 < 4) goto LAB_013b7550;
              local_68 = *(uint *)(iVar3 + 0x15);
            }
          }
          local_6c = uVar17 + 1;
          local_60 = 1;
        }
      }
      if (uVar11 == uVar17) {
        if (uVar11 == 0) {
          uVar2 = *(uint *)(param_3 + 0x7c);
          uVar19 = *(byte *)((int)param_2 + 599) + 1 + (uVar13 & 0x7ffffff);
          if (uVar2 <= uVar19) goto LAB_013b77dc;
          uVar17 = *(uint *)(*(int *)(param_3 + 0x78) + uVar19 * 4);
          if ((int)uVar17 < 0) {
            uVar7 = FUN_0138d580();
            local_30 = param_2;
            local_2c = (code *)param_3;
            uVar20 = FUN_01390198(&local_30,uVar13,uVar7);
            uVar17 = (uint)(uVar20 >> 0x20);
            if ((uVar20 & 1) != 0) {
              local_38 = (byte *)FUN_013c723c(0);
              goto LAB_013b75b4;
            }
          }
          if ((uVar17 & 0x8000000) != 0) {
            uVar11 = 0;
            goto LAB_013b76b4;
          }
        }
        else {
          uVar12 = *(uint *)(param_3 + 0x7c);
          uVar19 = (uint)*(byte *)(iVar18 + (uVar11 - 1));
          uVar10 = (uVar13 & 0x7ffffff) + (uint)*(byte *)((int)param_2 + uVar19 + 0x158);
          if (uVar12 <= uVar10) goto LAB_013b7714;
          uVar17 = *(uint *)(*(int *)(param_3 + 0x78) + uVar10 * 4);
          if ((int)uVar17 < 0) {
            local_30 = param_2;
            local_2c = (code *)param_3;
            uVar20 = FUN_01390198(&local_30,uVar13,uVar19 << 8);
            uVar17 = (uint)(uVar20 >> 0x20);
            if ((uVar20 & 1) != 0) {
              puVar6 = (undefined1 *)thunk_FUN_016d4a50(0xc);
              if (puVar6 != (undefined1 *)0x0) {
                *(uint *)(puVar6 + 4) = uVar11;
                *puVar6 = 1;
                goto LAB_013b75c8;
              }
              goto LAB_013b77d0;
            }
          }
          if ((uVar17 & 0x8000000) != 0) {
LAB_013b76b4:
            local_68 = FUN_013b78b0(*(undefined4 *)(pbVar4 + 0x154),pbVar15,
                                    *(undefined4 *)(param_3 + 0x90),*(undefined4 *)(param_3 + 0x94),
                                    uVar17);
            goto LAB_013b76dc;
          }
          if ((uVar17 & 0x20000000) != 0) {
            local_38 = (byte *)FUN_013c7204(uVar19,uVar11 - 1);
LAB_013b75b4:
            if (1 < *local_38) {
              local_30 = &local_38;
              local_2c = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_005733f0,&local_30,&DAT_01892790);
            }
            uVar11 = *(uint *)(local_38 + 4);
LAB_013b75c8:
            thunk_FUN_016d3fb4();
            *param_1 = 2;
            param_1[1] = 1;
            param_1[2] = uVar11;
            return;
          }
        }
        if ((~local_60 & 1) != 0 || local_6c <= uVar11) {
          *param_1 = local_60;
          param_1[1] = local_68;
          param_1[2] = local_6c;
          return;
        }
        uVar11 = local_6c;
        if ((uVar13 & 0x40000000) != 0) {
LAB_013b76dc:
          *param_1 = 1;
          param_1[1] = local_68;
          param_1[2] = uVar11;
          return;
        }
        goto LAB_013b7698;
      }
      uVar17 = uVar17 - 1;
      uVar16 = uVar13;
      if (uVar17 < param_5) {
LAB_013b7698:
        *param_1 = 2;
        param_1[1] = 0;
        return;
      }
    } while( true );
  }
  if (uVar17 == 0) {
    uVar2 = *(uint *)(param_3 + 0x7c);
    uVar19 = *(byte *)((int)param_2 + 599) + 1 + (uVar16 & 0x7ffffff);
    if (uVar2 <= uVar19) {
LAB_013b77dc:
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar19,uVar2,&DAT_01893af0);
    }
    uVar19 = *(uint *)(*(int *)(param_3 + 0x78) + uVar19 * 4);
    if ((int)uVar19 < 0) {
      uVar7 = FUN_0138d580();
      local_30 = param_2;
      local_2c = (code *)param_3;
      uVar20 = FUN_01390198(&local_30,uVar16,uVar7);
      uVar19 = (uint)(uVar20 >> 0x20);
      if ((uVar20 & 1) != 0) {
        pbVar4 = (byte *)thunk_FUN_016d4a50(0xc);
        if (pbVar4 == (byte *)0x0) goto LAB_013b77d0;
        uVar17 = 0;
        goto LAB_013b7060;
      }
    }
    if ((uVar19 & 0x8000000) != 0) {
      if (*(int *)(param_2[0x9e] + 0x154) == 1) {
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = 0;
        return;
      }
      uVar11 = *(uint *)(param_3 + 0x94);
      uVar16 = (uVar19 & 0x7ffffff) >> ((uint)param_2[0x9f] & 0x1f);
      if (uVar11 <= (uVar19 & 0x7ffffff) >> ((uint)param_2[0x9f] & 0x1f)) goto LAB_013b7824;
      iVar18 = *(int *)(param_3 + 0x90);
      uVar17 = 0;
      goto LAB_013b74f8;
    }
  }
  else {
    uVar11 = uVar17 - 1;
    if (uVar19 <= uVar11) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar11,uVar19,&DAT_01893a90);
    }
    uVar2 = (uint)*(byte *)(param_4[2] + uVar11);
    uVar19 = (uVar16 & 0x7ffffff) + (uint)*(byte *)((int)param_2 + uVar2 + 0x158);
    if (*(uint *)(param_3 + 0x7c) <= uVar19) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar19,*(uint *)(param_3 + 0x7c),&DAT_01893ad0);
    }
    uVar19 = *(uint *)(*(int *)(param_3 + 0x78) + uVar19 * 4);
    if ((int)uVar19 < 0) {
      local_30 = param_2;
      local_2c = (code *)param_3;
      uVar20 = FUN_01390198(&local_30,uVar16,uVar2 << 8);
      uVar19 = (uint)(uVar20 >> 0x20);
      if ((uVar20 & 1) != 0) {
        pbVar4 = (byte *)thunk_FUN_016d4a50(0xc);
        if (pbVar4 == (byte *)0x0) {
LAB_013b77d0:
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0xc);
        }
LAB_013b7060:
        *(uint *)(pbVar4 + 4) = uVar17;
        *pbVar4 = 1;
        goto LAB_013b706c;
      }
    }
    if ((uVar19 & 0x8000000) != 0) {
      if (*(int *)(param_2[0x9e] + 0x154) == 1) {
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = uVar17;
        return;
      }
      uVar11 = *(uint *)(param_3 + 0x94);
      uVar16 = (uVar19 & 0x7ffffff) >> ((uint)param_2[0x9f] & 0x1f);
      if (uVar11 <= (uVar19 & 0x7ffffff) >> ((uint)param_2[0x9f] & 0x1f)) {
LAB_013b7824:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar16,uVar11,&DAT_01893ae0);
      }
      iVar18 = *(int *)(param_3 + 0x90);
LAB_013b74f8:
      piVar8 = (int *)(iVar18 + uVar16 * 8);
      uVar16 = piVar8[1];
      if (uVar16 == 0) {
LAB_013b7738:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(0,0,&DAT_018942e8);
      }
      iVar18 = *piVar8;
      if ((*(byte *)(iVar18 + 8) & 2) == 0) {
        *param_1 = 1;
        param_1[1] = 0;
        param_1[2] = uVar17;
        return;
      }
      if (uVar16 < 0xd) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0xd,uVar16,uVar16,&DAT_018942f8);
      }
      uVar16 = uVar16 - 0xd;
      if (3 < uVar16) {
        uVar19 = *(uint *)(iVar18 + 0x15);
        *param_1 = 1;
        param_1[1] = uVar19;
        param_1[2] = uVar17;
        return;
      }
LAB_013b7550:
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,4,uVar16,&DAT_01892db0);
    }
    if ((uVar19 & 0x20000000) != 0) {
      pbVar4 = (byte *)FUN_013c7204(uVar2,uVar11);
      local_38 = pbVar4;
      if (1 < *pbVar4) {
        local_30 = &local_38;
        local_2c = FUN_013c828c;
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_005733f0,&local_30,&DAT_01892790);
      }
LAB_013b706c:
      uVar17 = *(uint *)(pbVar4 + 4);
      thunk_FUN_016d3fb4();
      *param_1 = 2;
      param_1[1] = 1;
      param_1[2] = uVar17;
      return;
    }
  }
  *param_1 = 0;
  param_1[1] = uVar19;
  param_1[2] = uVar17;
  return;
}

