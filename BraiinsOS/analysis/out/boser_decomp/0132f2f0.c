// FUN_0132f2f0 @ 0132f2f0 size=4644 calls_out=23 calls_in=1
// strings: MissingSlashMissingEqualMissingQuote | MissingSlashMissingEqualMissingQuote | start

void FUN_0132f2f0(undefined4 *param_1,undefined4 *param_2,char *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  byte *pbVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined4 *puVar10;
  undefined4 **ppuVar11;
  undefined4 *unaff_r6;
  undefined4 *unaff_r7;
  byte bVar12;
  uint uVar13;
  undefined4 *puVar14;
  int iVar15;
  undefined4 *puVar16;
  undefined4 *puVar17;
  bool bVar18;
  bool bVar19;
  undefined8 uVar20;
  char *pcVar21;
  undefined4 *local_88;
  undefined4 *local_84;
  byte local_80;
  uint3 local_7f;
  undefined4 *local_7c;
  byte local_78;
  undefined2 local_77;
  undefined1 local_75;
  undefined4 *local_74;
  undefined4 *local_70;
  byte local_6c;
  uint3 local_6b;
  undefined4 *local_68;
  byte local_64;
  undefined2 local_63;
  undefined1 local_61;
  undefined4 *local_60;
  undefined4 *local_5c;
  char *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined8 local_40;
  undefined4 *local_38;
  undefined4 *local_34;
  undefined4 local_30;
  undefined4 **local_2c;
  undefined1 *local_28;
  
  puVar10 = (undefined4 *)param_2[5];
  puVar16 = (undefined4 *)((int)param_3 + 1);
  if (puVar10 <= puVar16) {
    uVar2 = 4;
    param_1[5] = param_3;
    goto LAB_0132f39c;
  }
  puVar14 = (undefined4 *)param_2[4];
  uVar13 = (uint)*(byte *)((int)puVar14 + (int)puVar16);
  if (-1 < (char)*(byte *)((int)puVar14 + (int)puVar16)) {
    puVar1 = (undefined4 *)(uVar13 - 0x30);
    if (puVar1 < &DAT_0000000a) {
      FUN_0132b9b0(&local_60,puVar14,puVar10,puVar16);
      if ((local_60 == (undefined4 *)&DAT_00000001) &&
         (param_3 = local_58, local_58 < (undefined4 *)((uint)puVar10 >> 1))) {
        *(undefined1 *)(param_2 + 0x10) = 1;
        FUN_0133f3b4(param_2,local_58);
        *(byte *)(param_1 + 4) = *(byte *)(param_2 + 0xe) & 1;
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
        param_1[4] = 0;
        param_1[5] = puVar16;
        local_5c = (undefined4 *)&DAT_0000000c;
        local_58 = param_3;
      }
      *param_1 = uVar2;
      param_1[1] = local_5c;
      param_1[2] = 0x8000000a;
      param_1[3] = local_58;
      return;
    }
    puVar8 = (undefined4 *)((int)param_3 + 2);
    if (param_4 == 0 && uVar13 == 0x6b) {
      if ((puVar8 < puVar10) && (*(char *)((int)puVar14 + (int)puVar8) == '\'')) {
        pcVar9 = &DAT_0052d60c;
        pcVar21 = &DAT_0052d60c;
      }
      else {
        pcVar9 = "<";
        pcVar21 = ">";
      }
      FUN_0132e238(param_1,param_2,puVar8,pcVar9,1,pcVar21,1,1);
      return;
    }
    puVar17 = (undefined4 *)0x80000002;
    if (param_4 == 0 && uVar13 == 0x41) {
      puVar16 = (undefined4 *)0x0;
      goto LAB_0132f6e8;
    }
    if (param_4 == 0 && uVar13 == 0x7a) {
      puVar16 = (undefined4 *)&DAT_00000001;
      goto LAB_0132f6e8;
    }
    if (param_4 == 0 && uVar13 == 0x5a) {
      FUN_0166b924(&local_60,&DAT_0056f9c0,4);
      puVar10 = (undefined4 *)0x0;
      local_50 = (undefined4 *)((uint)local_50 & 0xffffff00);
      local_54 = (undefined4 *)0x0;
      puVar1 = (undefined4 *)FUN_0132f2d0();
      puVar17 = (undefined4 *)0x80000007;
      *puVar1 = local_60;
      puVar1[1] = local_5c;
      puVar1[2] = local_58;
      puVar1[3] = local_54;
      puVar1[4] = local_50;
      param_2 = local_60;
      puVar16 = puVar1;
      goto LAB_0132f6e8;
    }
    if (uVar13 == 0x62) {
      if (param_4 == 0) goto LAB_0132f878;
      uVar20 = 0x100522132;
      local_40 = CONCAT44(local_40._4_4_,(undefined4 *)local_40);
      goto switchD_0132fc80_caseD_61;
    }
    if (param_4 == 0 && uVar13 == 0x42) {
LAB_0132f878:
      FUN_0132dba0(&local_60,param_2,puVar8);
      if (local_60 != (undefined4 *)&DAT_00000012) {
LAB_0132f90c:
        param_1[3] = local_58;
        param_1[4] = local_54;
        param_1[5] = local_50;
        *param_1 = 1;
        param_1[1] = local_60;
        param_1[2] = local_5c;
        return;
      }
      puVar17 = (undefined4 *)&DAT_00000012;
      if ((puVar10 <= local_5c) ||
         (puVar17 = (undefined4 *)(uint)*(byte *)((int)puVar14 + (int)local_5c),
         puVar17 != (undefined4 *)0x7b)) {
LAB_0132f95c:
        puVar16 = (undefined4 *)&DAT_00000009;
        if (uVar13 == 0x62) {
          puVar16 = (undefined4 *)&DAT_00000008;
        }
        puVar1 = local_5c;
        param_2 = puVar17;
        puVar17 = (undefined4 *)0x80000002;
        goto LAB_0132f6e8;
      }
      FUN_0132dba0(&local_60,param_2,(int)local_5c + 1);
      if (local_60 != (undefined4 *)&DAT_00000012) goto LAB_0132f90c;
      if (local_5c < puVar10) {
        local_5c = (undefined4 *)(uint)*(byte *)((int)puVar14 + (int)local_5c);
        puVar17 = (undefined4 *)&DAT_00000012;
        if ((local_5c == (undefined4 *)&DAT_0000002c) ||
           (local_5c = local_5c + -0xc, local_5c < &DAT_0000000a)) goto LAB_0132f95c;
      }
      bVar19 = (undefined4 *)0xfffffffc < param_3;
      bVar18 = param_3 == (char *)0xfffffffd;
      if (param_3 < (undefined4 *)0xfffffffe) {
        unaff_r7 = (undefined4 *)param_2[5];
        bVar19 = unaff_r7 <= (undefined4 *)((int)param_3 + 2);
        bVar18 = (undefined4 *)((int)param_3 + 2) == unaff_r7;
        unaff_r6 = param_2;
      }
      if (bVar19 && !bVar18) {
LAB_013300c0:
        puVar16 = (undefined4 *)thunk_FUN_01be5118(7);
        if (puVar16 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620(1,7);
        }
        *param_1 = 1;
        *(undefined4 *)((int)puVar16 + 3) = 0x7d2e2e2e;
        param_1[2] = 7;
        *puVar16 = 0x2e7b625c;
        param_1[1] = 5;
        param_1[3] = puVar16;
        param_1[4] = 7;
        param_1[5] = param_3;
        return;
      }
      iVar15 = unaff_r6[4];
      if ((*(char *)(iVar15 + (int)param_3) != '\\') ||
         ((byte)(((char *)(iVar15 + (int)param_3))[1] | 0x20U) != 0x62)) goto LAB_013300c0;
      FUN_0132dba0(&local_40,unaff_r6);
      if ((undefined4 *)local_40 != (undefined4 *)0x12) {
        param_1[3] = local_38;
        param_1[4] = local_34;
        param_1[5] = local_30;
        *param_1 = 1;
        param_1[1] = (undefined4 *)local_40;
        param_1[2] = local_40._4_4_;
        return;
      }
      if ((unaff_r7 <= local_40._4_4_) || (*(char *)(iVar15 + (int)local_40._4_4_) != '{'))
      goto LAB_013300c0;
      puVar10 = (undefined4 *)((int)local_40._4_4_ + 1);
      local_48 = (undefined4 *)&DAT_00000001;
      local_44 = 0;
      local_50 = (undefined4 *)0x0;
      local_4c = (undefined4 *)0x0;
      puVar16 = puVar10;
      if (puVar10 < unaff_r7) {
        local_50 = (undefined4 *)0x0;
        local_58 = &DAT_01ce636c;
        local_54 = (undefined4 *)&DAT_00000001;
        do {
          puVar16 = puVar10;
          if (*(char *)(iVar15 + (int)puVar10) == '}') break;
          FUN_0132dba0(&local_40,unaff_r6,puVar10);
          if ((undefined4 *)local_40 != (undefined4 *)0x12) {
            param_1[3] = local_38;
            param_1[4] = local_34;
            param_1[5] = local_30;
            iVar15 = 8;
            param_3 = (char *)local_40._4_4_;
            goto LAB_01330318;
          }
          if ((puVar10 < local_40._4_4_) &&
             ((unaff_r7 <= local_40._4_4_ ||
              (puVar10 = local_40._4_4_, *(char *)(iVar15 + (int)local_40._4_4_) == '}')))) {
            puVar16 = local_40._4_4_;
            break;
          }
          if (unaff_r7 <= puVar10) goto LAB_01330380;
          bVar12 = *(byte *)(iVar15 + (int)puVar10);
          if (bVar12 != 0x7d) {
            uVar13 = 2;
            if ((uint)(int)(char)bVar12 < 0x80000000) {
              uVar13 = 1;
            }
            puVar16 = local_50;
            if ((uint)((int)local_4c - (int)local_50) < uVar13) {
              local_60 = (undefined4 *)&DAT_00000001;
              FUN_006520b4(&local_4c,local_50,uVar13,1);
              local_54 = local_48;
              puVar16 = (undefined4 *)local_44;
            }
            pbVar3 = (byte *)((int)local_54 + (int)puVar16);
            if ((char)bVar12 < 0) {
              *pbVar3 = bVar12 >> 6 | 0xc0;
              pbVar3[1] = bVar12 & 0xbf;
              local_44 = (int)local_50 + 2;
              iVar4 = 2;
              if ((0xdf < bVar12) && (iVar4 = 4, bVar12 < 0xf0)) {
                iVar4 = 3;
              }
            }
            else {
              *pbVar3 = bVar12;
              local_44 = (int)local_50 + 1;
              iVar4 = 1;
            }
            puVar10 = (undefined4 *)(iVar4 + (int)puVar10);
            local_50 = (undefined4 *)local_44;
          }
          puVar16 = puVar10;
        } while (puVar10 < unaff_r7);
      }
      puVar14 = local_48;
      if ((puVar16 < unaff_r7) && (*(char *)(iVar15 + (int)puVar16) == '}')) {
        puVar10 = (undefined4 *)((int)param_3 + 1);
        if (unaff_r7 <= puVar10) {
          local_58 = &DAT_01ce637c;
LAB_01330380:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(puVar10,unaff_r7,local_58);
        }
        if (*(char *)(iVar15 + (int)puVar10) == 'B') {
          local_28 = &LAB_00632348;
          local_2c = &local_4c;
          FUN_01a8da38(&local_40,&DAT_0057ef06,&local_2c);
        }
        else {
          switch(local_50) {
          case (undefined4 *)0x3:
            iVar15 = thunk_FUN_01bed842(local_48,"end",3);
            if (iVar15 == 0) {
              uVar5 = 6;
LAB_01330340:
              *(undefined1 *)(param_1 + 3) = uVar5;
              param_1[2] = 0x80000002;
              *param_1 = 0;
              param_1[1] = (int)puVar16 + 1;
              goto LAB_01330334;
            }
            break;
          case (undefined4 *)0x5:
            iVar15 = thunk_FUN_01bed842(local_48,"start",5);
            if (iVar15 == 0) {
              uVar5 = 4;
              goto LAB_01330340;
            }
            break;
          case (undefined4 *)0x8:
            iVar15 = thunk_FUN_01bed842(local_48,&DAT_005710f8,8);
            if (iVar15 == 0) {
              uVar5 = 7;
              goto LAB_01330340;
            }
            break;
          case (undefined4 *)0xa:
            iVar15 = thunk_FUN_01bed842(local_48,&DAT_004cfe7c,10);
            if (iVar15 == 0) {
              uVar5 = 5;
              goto LAB_01330340;
            }
          }
          local_28 = &LAB_00632348;
          local_2c = &local_4c;
          FUN_01a8da38(&local_40,&DAT_0057c44d,&local_2c);
        }
        param_1[2] = (undefined4 *)local_40;
        param_1[3] = local_40._4_4_;
        param_1[4] = local_38;
        iVar15 = 0x14;
        local_40._0_4_ = (undefined4 *)0x5;
LAB_01330318:
        iVar4 = 4;
        puVar16 = (undefined4 *)local_40;
      }
      else {
        puVar16 = (undefined4 *)0x7;
        puVar10 = (undefined4 *)thunk_FUN_01be5118(7);
        if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00664620();
        }
        param_1[2] = 7;
        param_1[3] = puVar10;
        *(undefined4 *)((int)puVar10 + 3) = 0x7d2e2e2e;
        iVar4 = 0x10;
        *puVar10 = 0x2e7b625c;
        param_1[1] = 5;
        iVar15 = 0x14;
      }
      *(undefined4 **)((int)param_1 + iVar4) = puVar16;
      *(char **)((int)param_1 + iVar15) = param_3;
      *param_1 = 1;
      puVar14 = local_48;
LAB_01330334:
      FUN_0134bd64(local_4c,puVar14);
      return;
    }
    if (param_4 == 0 && uVar13 == 0x3c) {
      if ((*(byte *)(param_2 + 0xe) & 0x40) == 0) {
        puVar1 = (undefined4 *)&SUB_00000004;
        local_84 = (undefined4 *)CONCAT31(local_84._1_3_,4);
        local_68 = puVar14;
        local_74 = puVar17;
      }
      else {
        FUN_013303e4(&local_88,"<",1);
        param_2 = (undefined4 *)(uint)local_78;
        puVar1 = (undefined4 *)(uint)local_7f;
        puVar10 = (undefined4 *)(uint)local_80;
        local_68 = local_7c;
        local_74 = local_88;
      }
      local_70 = local_84;
      local_63 = local_77;
      local_61 = local_75;
    }
    else {
      if (param_4 != 0 || uVar13 != 0x3e) goto LAB_0132f3c4;
      if ((*(byte *)(param_2 + 0xe) & 0x40) == 0) {
        puVar1 = (undefined4 *)&DAT_00000006;
        local_70 = (undefined4 *)CONCAT31(local_70._1_3_,6);
        local_68 = puVar14;
        local_74 = puVar17;
      }
      else {
        FUN_013303e4(&local_74,">",1);
        param_2 = (undefined4 *)(uint)local_64;
        puVar1 = (undefined4 *)(uint)local_6b;
        puVar10 = (undefined4 *)(uint)local_6c;
      }
    }
LAB_0132fbf0:
    local_44 = (uint)CONCAT12(local_61,local_63);
    puVar14 = local_68;
    puVar16 = local_70;
    puVar17 = local_74;
    goto LAB_0132f6e8;
  }
  iVar15 = 4;
  if (uVar13 < 0xf0) {
    iVar15 = 3;
  }
  if (uVar13 < 0xe0) {
    iVar15 = 2;
  }
  puVar8 = (undefined4 *)(iVar15 + (int)puVar16);
LAB_0132f3c4:
  puVar1 = (undefined4 *)(uVar13 | 0x20);
  if (puVar1 < (undefined4 *)0x73) {
    if (puVar1 == (undefined4 *)&DAT_00000064) goto LAB_0132f508;
    if (puVar1 == (undefined4 *)&DAT_00000068) {
      puVar10 = (undefined4 *)&DAT_0000000c;
      if (uVar13 == 0x68) {
        puVar10 = (undefined4 *)&DAT_0000000b;
      }
      puVar14 = (undefined4 *)&DAT_00000001;
      puVar16 = (undefined4 *)FUN_01298504(puVar10,1);
      if (puVar16 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(1,puVar10);
      }
      puVar7 = &DAT_00450812;
      if (uVar13 != 0x68) {
        puVar7 = &DAT_0045081d;
      }
      FUN_01bed4e2(puVar16,puVar7,puVar10);
      puVar1 = (undefined4 *)0x0;
      param_2 = (undefined4 *)0x0;
      puVar17 = puVar10;
      goto LAB_0132f6e8;
    }
  }
  else if (puVar1 == (undefined4 *)0x73 || puVar1 == (undefined4 *)0x77) {
LAB_0132f508:
    if (puVar8 < param_3) goto LAB_0132f608;
    if (param_3 != (char *)0x0) {
      if (param_3 < puVar10) {
        if (*(char *)((int)puVar14 + (int)param_3) < -0x40) goto LAB_0132f608;
      }
      else if (param_3 != (char *)puVar10) goto LAB_0132f608;
    }
    if (puVar8 != (undefined4 *)0x0) {
      if (puVar8 < puVar10) {
        if (*(char *)((int)puVar14 + (int)puVar8) < -0x40) goto LAB_0132f608;
      }
      else if (puVar8 != puVar10) {
LAB_0132f608:
                    /* WARNING: Subroutine does not return */
        FUN_012fb514(puVar14,puVar10,param_3,puVar8,&DAT_01ce627c);
      }
    }
    puVar10 = (undefined4 *)((int)puVar8 - (int)param_3);
    uVar2 = 0;
    if ((int)puVar10 < 0) {
LAB_0132f638:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar2,puVar10);
    }
    puVar16 = (undefined4 *)&DAT_00000001;
    puVar17 = (undefined4 *)0x0;
    if ((char *)puVar8 != param_3) {
      uVar2 = 1;
      puVar16 = (undefined4 *)FUN_01298504(puVar10,1);
      puVar17 = puVar10;
      if (puVar16 == (undefined4 *)0x0) goto LAB_0132f638;
    }
    FUN_01bed4e2(puVar16,(int)puVar14 + (int)param_3,puVar10);
    puVar1 = (undefined4 *)((uint)puVar10 >> 8);
    puVar14 = (undefined4 *)&DAT_00000001;
    param_2 = (undefined4 *)(param_2[0xe] & 1);
    goto LAB_0132f6e8;
  }
  if (uVar13 == 0x55) {
    FUN_0132dba0(&local_60,param_2,puVar8);
    if (local_60 == (undefined4 *)&DAT_00000012) {
      iVar15 = 8;
LAB_0132f78c:
      puVar10 = (undefined4 *)param_2[5];
      puVar16 = local_5c;
      if (local_5c < puVar10) {
        iVar4 = param_2[4];
        puVar14 = (undefined4 *)(iVar15 + (int)local_5c);
        pcVar9 = (char *)(iVar4 + (int)local_5c);
        if (puVar14 <= puVar10) {
          if (puVar14 < local_5c) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(local_5c,puVar14,puVar10,&DAT_01ce63cc);
          }
          iVar6 = 0;
          do {
            if (iVar15 == iVar6) {
              if (((local_5c != (undefined4 *)0x0) && (*pcVar9 < -0x40)) ||
                 ((puVar14 != (undefined4 *)0x0 &&
                  ((puVar14 < puVar10 && (*(char *)(iVar4 + (int)puVar14) < -0x40)))))) {
                local_58 = &DAT_01ce63dc;
                    /* WARNING: Subroutine does not return */
                FUN_012fb514(iVar4,puVar10,local_5c);
              }
              local_58 = pcVar9;
              local_54 = (undefined4 *)iVar15;
              FUN_01330858(param_1,param_2[0xe],local_5c);
              return;
            }
            pbVar3 = (byte *)(pcVar9 + iVar6);
            iVar6 = iVar6 + 1;
          } while (*pbVar3 - 0x30 < 10 || (*pbVar3 | 0x20) - 0x61 < 6);
        }
        if (*pcVar9 == '{') {
          local_40._4_4_ = (undefined4 *)0x0;
          local_40._0_4_ = (undefined4 *)&DAT_00000001;
          local_44 = 0;
          if ((undefined4 *)((int)local_5c + 1) < puVar10) {
            puVar16 = (undefined4 *)&DAT_00000001;
            local_50 = local_5c;
            local_4c = param_1;
            local_48 = param_2;
            do {
              puVar14 = local_40._4_4_;
              FUN_0132dba0(&local_38,local_48);
              puVar8 = local_34;
              if (local_38 != (undefined4 *)0x12) {
                iVar15 = 8;
                local_4c[3] = local_30;
                local_4c[4] = local_2c;
                local_4c[5] = local_28;
                local_50 = local_34;
LAB_013306fc:
                local_4c[1] = local_38;
                *(undefined4 **)((int)local_4c + iVar15) = local_50;
                *local_4c = 1;
LAB_0133072c:
                FUN_0134bd64(local_44,puVar16);
                return;
              }
              iVar15 = 0x14;
              if (puVar10 <= local_34) {
LAB_013306cc:
                local_38 = (undefined4 *)0x7;
                goto LAB_013306fc;
              }
              bVar12 = *(byte *)(iVar4 + (int)local_34);
              uVar13 = (uint)bVar12;
              if ((uVar13 == 0x7d) && (puVar14 != (undefined4 *)0x0)) {
                local_58 = (char *)puVar16;
                local_54 = puVar14;
                FUN_01330858(local_4c,local_48[0xe],local_50,(int)local_34 + 1);
                goto LAB_0133072c;
              }
              if ((9 < uVar13 - 0x30 && 5 < (uVar13 | 0x20) - 0x61) || (&DAT_00000007 < puVar14))
              goto LAB_013306cc;
              uVar13 = 2;
              if ((uint)(int)(char)bVar12 < 0x80000000) {
                uVar13 = 1;
              }
              puVar1 = puVar14;
              if (local_44 - (int)puVar14 < uVar13) {
                local_58 = &DAT_00000001;
                FUN_006520b4(&local_44,puVar14,uVar13,1);
                puVar1 = local_40._4_4_;
                puVar16 = (undefined4 *)local_40;
              }
              if (0x7fffffff < (uint)(int)(char)bVar12) {
                ((byte *)((int)puVar16 + (int)puVar1))[1] = bVar12 & 0xbf;
                bVar12 = bVar12 >> 6 | 0xc0;
              }
              local_40._4_4_ = (undefined4 *)((int)puVar14 + uVar13);
              *(byte *)((int)puVar16 + (int)puVar1) = bVar12;
            } while ((undefined4 *)((int)puVar8 + 1) < puVar10);
            puVar16 = local_50;
            param_1 = local_4c;
          }
          FUN_0134bd64(local_44,(undefined4 *)local_40);
        }
      }
      param_1[5] = puVar16;
      *param_1 = 1;
      param_1[1] = 7;
      return;
    }
LAB_0132f798:
    param_1[3] = local_58;
    param_1[4] = local_54;
    param_1[5] = local_50;
    *param_1 = 1;
    param_1[1] = local_60;
    param_1[2] = local_5c;
    return;
  }
  if (uVar13 == 0x75) {
    FUN_0132dba0(&local_60,param_2,puVar8);
    if (local_60 == (undefined4 *)&DAT_00000012) {
      iVar15 = 4;
      goto LAB_0132f78c;
    }
    goto LAB_0132f798;
  }
  if (uVar13 == 0x78) {
    FUN_0132dba0(&local_60,param_2,puVar8);
    if (local_60 == (undefined4 *)&DAT_00000012) {
      iVar15 = 2;
      goto LAB_0132f78c;
    }
    goto LAB_0132f798;
  }
  if ((puVar1 == (undefined4 *)&DAT_00000070) && (puVar8 != puVar10)) {
    if (puVar10 <= puVar8) {
      puVar7 = &DAT_01ce628c;
LAB_0132fdd0:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(puVar8,puVar10,puVar7);
    }
    bVar12 = *(byte *)((int)puVar14 + (int)puVar8);
    if ((char)bVar12 < '\0') {
      iVar15 = 4;
      if (bVar12 < 0xf0) {
        iVar15 = 3;
      }
      if (bVar12 < 0xe0) {
        iVar15 = 2;
      }
      puVar8 = (undefined4 *)(iVar15 + (int)puVar8);
    }
    else {
      puVar8 = (undefined4 *)((int)puVar8 + 1);
      if (bVar12 == 0x7b) {
        for (; puVar8 != puVar10; puVar8 = (undefined4 *)(iVar15 + (int)puVar8)) {
          if (puVar10 <= puVar8) {
            puVar7 = &DAT_01ce629c;
            goto LAB_0132fdd0;
          }
          bVar12 = *(byte *)((int)puVar14 + (int)puVar8);
          if (bVar12 == 0x7d) {
            puVar8 = (undefined4 *)((int)puVar8 + 1);
            goto LAB_0132f9a0;
          }
          iVar15 = 1;
          if (((0x7fffffff < (uint)(int)(char)bVar12) && (iVar15 = 2, 0xdf < bVar12)) &&
             (iVar15 = 4, bVar12 < 0xf0)) {
            iVar15 = 3;
          }
        }
        param_1[5] = param_3;
        uVar2 = 6;
LAB_0132f39c:
        *param_1 = 1;
        param_1[1] = uVar2;
        return;
      }
    }
LAB_0132f9a0:
    uVar20 = FUN_01330468(puVar14,puVar10,param_3,puVar8,&DAT_01ce62ac);
    FUN_01446110(&local_60,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
    puVar14 = (undefined4 *)&DAT_00000001;
    puVar1 = (undefined4 *)((uint)local_58 >> 8);
    param_2 = (undefined4 *)(param_2[0xe] & 1);
    puVar10 = (undefined4 *)((uint)local_58 & 0xff);
    puVar16 = local_5c;
    puVar17 = local_60;
    goto LAB_0132f6e8;
  }
  if (uVar13 == 0x47) {
    if (param_4 == 0) {
      puVar17 = (undefined4 *)0x8000000e;
      goto LAB_0132f6e8;
    }
switchD_0132fae0_caseD_6f:
    uVar20 = FUN_01330468(puVar14,puVar10,puVar16,puVar8,&DAT_01ce62cc);
    local_40 = uVar20;
    if ((((uVar13 & 0xdf) - 0x41 < 0x1a) &&
        ((0xf < uVar13 - 0x3c || ((1 << (uVar13 - 0x3c & 0xff) & 0x8865U) == 0)))) &&
       (uVar13 != 0x7a && uVar13 != 0x6b)) {
      ppuVar11 = &local_38;
      local_28 = &LAB_018a13b8;
      local_2c = (undefined4 **)&local_40;
      FUN_01a8da38(ppuVar11,&DAT_0057edd8,&local_2c);
LAB_0132fb88:
      param_1[1] = 5;
      puVar16 = ppuVar11[1];
      puVar10 = ppuVar11[2];
      param_1[2] = *ppuVar11;
      param_1[3] = puVar16;
      param_1[4] = puVar10;
      *param_1 = 1;
      param_1[5] = param_3;
      return;
    }
  }
  else {
    if (uVar13 == 0x4b) {
      if (param_4 == 0) {
        puVar17 = (undefined4 *)0x8000000d;
        goto LAB_0132f6e8;
      }
      goto switchD_0132fae0_caseD_6f;
    }
    if (uVar13 == 0x4f) {
      if (param_4 == 0) {
        puVar16 = (undefined4 *)&DAT_00000001;
        puVar17 = (undefined4 *)&DAT_80000001;
        goto LAB_0132f6e8;
      }
      goto switchD_0132fae0_caseD_6f;
    }
    if (param_4 == 0 && uVar13 == 0x67) {
      if (puVar8 == puVar10) {
        ppuVar11 = &local_60;
        FUN_0166b924(ppuVar11,&DAT_00450829,2);
        goto LAB_0132fb88;
      }
      if (puVar10 <= puVar8) {
        puVar7 = &DAT_01ce62bc;
        goto LAB_0132fdd0;
      }
      if (*(byte *)((int)puVar14 + (int)puVar8) - 0x30 < 10) {
        FUN_013307c8(&local_60,param_2,puVar8);
        local_68 = local_4c;
        local_70 = local_54;
        local_74 = (undefined4 *)local_58;
        if (local_60 != (undefined4 *)0x0) {
          param_1[5] = local_4c;
          *(byte *)(param_1 + 4) = (byte)local_50;
          *(short *)((int)param_1 + 0x11) = (short)((uint)local_50 >> 8);
          *param_1 = 1;
          param_1[1] = local_5c;
          param_1[2] = local_58;
          param_1[3] = local_54;
          *(char *)((int)param_1 + 0x13) = (char)((uint)local_50 >> 0x18);
          return;
        }
      }
      else {
        if (*(byte *)((int)puVar14 + (int)puVar8) == 0x27) {
          pcVar9 = &DAT_0052d60c;
          pcVar21 = &DAT_0052d60c;
        }
        else {
          pcVar9 = "<";
          pcVar21 = ">";
        }
        FUN_0132ed10(&local_60,param_2,puVar8,pcVar9,1,pcVar21,1);
        local_68 = local_4c;
        local_70 = local_54;
        local_74 = (undefined4 *)local_58;
        if (local_60 != (undefined4 *)0x0) {
          param_1[5] = local_4c;
          *(byte *)(param_1 + 4) = (byte)local_50;
          *(short *)((int)param_1 + 0x11) = (short)((uint)local_50 >> 8);
          *param_1 = 1;
          param_1[1] = local_5c;
          param_1[2] = local_58;
          param_1[3] = local_54;
          *(char *)((int)param_1 + 0x13) = (char)((uint)local_50 >> 0x18);
          return;
        }
      }
      puVar10 = (undefined4 *)(uint)(byte)local_50;
      puVar1 = (undefined4 *)(uint)local_50._1_3_;
      param_2 = (undefined4 *)((uint)local_48 & 0xff);
      puVar8 = local_5c;
      local_63 = local_48._1_2_;
      local_61 = local_48._3_1_;
      goto LAB_0132fbf0;
    }
    uVar20 = 0x100522135;
    local_40 = CONCAT44(local_40._4_4_,(undefined4 *)local_40);
    switch(uVar13) {
    case 0x61:
      break;
    case 0x62:
      uVar20 = 0x100522132;
      local_40 = CONCAT44(local_40._4_4_,(undefined4 *)local_40);
      break;
    case 99:
    case 100:
      goto switchD_0132fae0_caseD_6f;
    case 0x65:
      uVar20 = 0x10045082c;
      local_40 = CONCAT44(local_40._4_4_,(undefined4 *)local_40);
      break;
    case 0x66:
      uVar20 = 0x1004d0693;
      local_40 = CONCAT44(local_40._4_4_,(undefined4 *)local_40);
      break;
    default:
      switch(uVar13) {
      case 0x6e:
        uVar20 = 0x100533bb6;
        local_40 = CONCAT44(local_40._4_4_,(undefined4 *)local_40);
        break;
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x73:
      case 0x75:
        goto switchD_0132fae0_caseD_6f;
      case 0x72:
        uVar20 = 0x1004bb568;
        local_40 = CONCAT44(local_40._4_4_,(undefined4 *)local_40);
        break;
      case 0x74:
        uVar20 = 0x100522133;
        local_40 = CONCAT44(local_40._4_4_,(undefined4 *)local_40);
        break;
      case 0x76:
        uVar20 = 0x10045082b;
        local_40 = CONCAT44(local_40._4_4_,(undefined4 *)local_40);
        break;
      default:
        if (uVar13 != 0x20) goto switchD_0132fae0_caseD_6f;
        uVar20 = 0x1005319c3;
        local_40 = CONCAT44(local_40._4_4_,(undefined4 *)local_40);
      }
    }
  }
switchD_0132fc80_caseD_61:
  FUN_013303e4(&local_60,(int)uVar20,(int)((ulonglong)uVar20 >> 0x20));
  puVar10 = (undefined4 *)((uint)local_58 & 0xff);
  local_44 = (uint)local_50 >> 8;
  puVar1 = (undefined4 *)((uint)local_58 >> 8);
  param_2 = (undefined4 *)((uint)local_50 & 0xff);
  puVar14 = local_54;
  puVar16 = local_5c;
  puVar17 = local_60;
LAB_0132f6e8:
  *(short *)((int)param_1 + 0x11) = (short)puVar1;
  *(char *)(param_1 + 6) = (char)param_2;
  *(char *)(param_1 + 4) = (char)puVar10;
  param_1[5] = puVar14;
  *(undefined2 *)((int)param_1 + 0x19) = (undefined2)local_44;
  *(undefined1 *)((int)param_1 + 0x1b) = local_44._2_1_;
  *param_1 = 0;
  param_1[1] = puVar8;
  param_1[2] = puVar17;
  param_1[3] = puVar16;
  *(char *)((int)param_1 + 0x13) = (char)((uint)puVar1 >> 0x10);
  return;
}

