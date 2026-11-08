// FUN_00fe9870 @ 00fe9870 size=5116 calls_out=21 calls_in=1
// strings: any valid TOML valuea string key

void FUN_00fe9870(undefined4 *param_1,uint *param_2,uint *param_3,int param_4)

{
  undefined1 uVar1;
  undefined2 *puVar2;
  undefined4 *puVar3;
  byte *pbVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 uVar7;
  uint *extraout_r2;
  uint *extraout_r2_00;
  uint uVar8;
  undefined4 **ppuVar10;
  undefined4 *puVar9;
  int iVar11;
  char *pcVar12;
  uint *unaff_r6;
  uint *puVar13;
  uint *unaff_r7;
  uint *puVar14;
  byte bVar15;
  uint *puVar16;
  uint *puVar17;
  uint uVar18;
  uint *puVar19;
  uint *puVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  undefined8 uVar24;
  char *pcVar25;
  uint *local_88;
  uint *local_84;
  byte local_80;
  uint3 local_7f;
  uint *local_7c;
  undefined4 local_78;
  uint *local_74;
  uint *local_70;
  uint *local_6c;
  uint *local_68;
  undefined4 local_64;
  uint *local_60;
  uint *local_5c;
  uint *local_58;
  uint *local_54;
  uint *local_50;
  uint *local_4c;
  uint local_48;
  undefined4 local_44;
  undefined8 local_40;
  int local_38;
  uint *local_34;
  undefined4 *local_30;
  undefined4 **local_2c;
  undefined4 *local_28;
  
  puVar19 = (uint *)param_2[5];
  puVar17 = (uint *)((int)param_3 + 1);
  if (puVar19 <= puVar17) {
    uVar7 = 4;
    param_1[5] = param_3;
    goto LAB_00fe9930;
  }
  uVar21 = param_2[4];
  puVar14 = (uint *)(uint)*(byte *)(uVar21 + (int)puVar17);
  if ((char)*(byte *)(uVar21 + (int)puVar17) < '\0') {
    iVar5 = 4;
    if (puVar14 < &DAT_000000f0) {
      iVar5 = 3;
    }
    if (puVar14 < &DAT_000000e0) {
      iVar5 = 2;
    }
    puVar20 = (uint *)(iVar5 + (int)puVar17);
LAB_00fe9960:
    switch((uint)puVar14 | 0x20) {
    case 100:
    case 0x73:
    case 0x77:
      if (puVar20 < param_3) goto LAB_00fe9ba8;
      if (param_3 != (uint *)0x0) {
        if (param_3 < puVar19) {
          if (*(char *)(uVar21 + (int)param_3) < -0x40) goto LAB_00fe9ba8;
        }
        else if (param_3 != puVar19) goto LAB_00fe9ba8;
      }
      if (puVar20 != (uint *)0x0) {
        if (puVar20 < puVar19) {
          if (*(char *)(uVar21 + (int)puVar20) < -0x40) goto LAB_00fe9ba8;
        }
        else if (puVar20 != puVar19) {
LAB_00fe9ba8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(uVar21,puVar19,param_3,puVar20,&DAT_018818d8);
        }
      }
      puVar14 = (uint *)((int)puVar20 - (int)param_3);
      if ((int)puVar14 < 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,puVar14);
      }
      puVar19 = (uint *)&DAT_00000001;
      if (puVar14 == (uint *)0x0) {
        puVar16 = (uint *)0x0;
        puVar13 = (uint *)&DAT_00000001;
      }
      else {
        puVar13 = (uint *)thunk_FUN_016d4a50(puVar14);
        puVar16 = puVar14;
        if (puVar13 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,puVar14);
        }
      }
      FUN_016dd1aa(puVar13,(undefined1 *)(uVar21 + (int)param_3),puVar14);
      puVar17 = param_2 + 0xe;
      param_2 = (uint *)((uint)puVar14 >> 8);
      param_3 = (uint *)(*puVar17 & 1);
      break;
    default:
      if (puVar14 == (uint *)&DAT_00000055) {
        FUN_00fe7e50(&local_60,param_2,puVar20);
        if (local_60 != (uint *)&DAT_00000012) {
LAB_00fe9d3c:
          *param_1 = 1;
          param_1[1] = local_60;
          param_1[2] = local_5c;
          param_1[3] = local_58;
          param_1[4] = local_54;
          param_1[5] = local_50;
          return;
        }
        iVar5 = 8;
        puVar19 = local_5c;
LAB_00feaf38:
        puVar17 = (uint *)param_2[5];
        if (puVar17 <= puVar19) {
          *param_1 = 1;
          param_1[5] = puVar19;
          param_1[1] = 7;
          return;
        }
        local_48 = param_2[4];
        puVar14 = (uint *)(iVar5 + (int)puVar19);
        puVar20 = (uint *)(local_48 + (int)puVar19);
        local_4c = param_1;
        if (puVar14 <= puVar17) {
          if (puVar14 < puVar19) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(puVar19,puVar14,puVar17,&DAT_01881a28);
          }
          iVar11 = 0;
          do {
            if (iVar5 == iVar11) {
              if (((puVar19 != (uint *)0x0) && ((char)*puVar20 < -0x40)) ||
                 ((puVar14 != (uint *)0x0 &&
                  ((puVar14 < puVar17 && (*(char *)(local_48 + (int)puVar14) < -0x40)))))) {
                local_58 = (uint *)&DAT_01881a18;
                    /* WARNING: Subroutine does not return */
                FUN_00faa8ac(local_48,puVar17,puVar19);
              }
              local_58 = puVar20;
              local_54 = (uint *)iVar5;
              FUN_00feb2f4(param_1,param_2[0xe],puVar19);
              return;
            }
            pbVar4 = (byte *)((int)puVar20 + iVar11);
            iVar11 = iVar11 + 1;
          } while ((*pbVar4 - 0x30 < 10) || ((*pbVar4 | 0x20) - 0x61 < 6));
        }
        if ((char)*puVar20 == '{') {
          local_40._4_4_ = (uint *)0x0;
          local_40._0_4_ = (uint *)&DAT_00000001;
          local_44 = 0;
          if ((uint *)((int)puVar19 + 1) < puVar17) {
            local_50 = (uint *)&DAT_00000001;
            do {
              puVar14 = local_40._4_4_;
              FUN_00fe7e50(&local_38,param_2);
              puVar20 = local_34;
              if (local_38 != 0x12) {
                local_4c[3] = (uint)local_30;
                local_4c[4] = (uint)local_2c;
                local_4c[5] = (uint)local_28;
                iVar5 = 8;
LAB_00feb19c:
                local_4c[1] = local_38;
                *(uint **)((int)local_4c + iVar5) = local_34;
                *local_4c = 1;
LAB_00feb1ac:
                if (local_44 == 0) {
                  return;
                }
                thunk_FUN_016d3fb4((uint *)local_40);
                return;
              }
              iVar5 = 0x14;
              if (puVar17 <= local_34) {
LAB_00feb194:
                local_38 = 7;
                local_34 = puVar19;
                goto LAB_00feb19c;
              }
              bVar15 = *(byte *)(local_48 + (int)local_34);
              uVar21 = (uint)bVar15;
              if (uVar21 == 0x7d) {
                if (puVar14 != (uint *)0x0) {
                  local_58 = (uint *)local_40;
                  local_54 = puVar14;
                  FUN_00feb2f4(local_4c,param_2[0xe],puVar19,(undefined1 *)((int)local_34 + 1));
                  goto LAB_00feb1ac;
                }
                goto LAB_00feb194;
              }
              if (((9 < uVar21 - 0x30) && (5 < (uVar21 | 0x20) - 0x61)) || (&DAT_00000007 < puVar14)
                 ) goto LAB_00feb194;
              uVar21 = 2;
              if ((uint)(int)(char)bVar15 < 0x80000000) {
                uVar21 = 1;
              }
              if (local_44 - (int)puVar14 < uVar21) {
                local_58 = (uint *)&DAT_00000001;
                FUN_010007c0(&local_44,puVar14,uVar21,1);
                pbVar4 = (byte *)((int)(uint *)local_40 + (int)local_40._4_4_);
                local_50 = (uint *)local_40;
              }
              else {
                pbVar4 = (byte *)((int)local_50 + (int)puVar14);
              }
              if (0x7fffffff < (uint)(int)(char)bVar15) {
                pbVar4[1] = bVar15 & 0xbf;
                bVar15 = bVar15 >> 6 | 0xc0;
              }
              local_40._4_4_ = (uint *)((int)puVar14 + uVar21);
              *pbVar4 = bVar15;
            } while ((uint *)((int)puVar20 + 1) < puVar17);
            if (local_44 != 0) {
              thunk_FUN_016d3fb4((uint *)local_40);
            }
          }
        }
        local_4c[5] = (uint)puVar19;
        *local_4c = 1;
        local_4c[1] = 7;
        return;
      }
      if (puVar14 == (uint *)0x75) {
        FUN_00fe7e50(&local_60,param_2,puVar20);
        if (local_60 != (uint *)&DAT_00000012) goto LAB_00fe9d3c;
        iVar5 = 4;
        puVar19 = local_5c;
        goto LAB_00feaf38;
      }
      if (puVar14 == (uint *)&DAT_00000078) {
        FUN_00fe7e50(&local_60,param_2,puVar20);
        if (local_60 != (uint *)&DAT_00000012) goto LAB_00fe9d3c;
        iVar5 = 2;
        puVar19 = local_5c;
        goto LAB_00feaf38;
      }
      if ((((uint)puVar14 | 0x20) == 0x70) && (puVar20 != puVar19)) {
        if (puVar19 <= puVar20) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(puVar20,puVar19,&DAT_018818e8);
        }
        bVar15 = *(byte *)(uVar21 + (int)puVar20);
        if ((char)bVar15 < '\0') {
          iVar5 = 4;
          if (bVar15 < 0xf0) {
            iVar5 = 3;
          }
          if (bVar15 < 0xe0) {
            iVar5 = 2;
          }
          puVar20 = (uint *)(iVar5 + (int)puVar20);
        }
        else {
          puVar20 = (uint *)((int)puVar20 + 1);
          if (bVar15 == 0x7b) {
            for (; puVar20 != puVar19; puVar20 = (uint *)(iVar5 + (int)puVar20)) {
              if (puVar19 <= puVar20) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa4a4(puVar20,puVar19,&DAT_018818f8);
              }
              bVar15 = *(byte *)(uVar21 + (int)puVar20);
              if (bVar15 == 0x7d) {
                puVar20 = (uint *)((int)puVar20 + 1);
                goto LAB_00fea168;
              }
              iVar5 = 1;
              if (((0x7fffffff < (uint)(int)(char)bVar15) && (iVar5 = 2, 0xdf < bVar15)) &&
                 (iVar5 = 4, bVar15 < 0xf0)) {
                iVar5 = 3;
              }
            }
            param_1[5] = param_3;
            uVar7 = 6;
LAB_00fe9930:
            *param_1 = 1;
            param_1[1] = uVar7;
            return;
          }
        }
LAB_00fea168:
        uVar24 = FUN_00feaeb8(param_3,puVar20,uVar21,puVar19);
        puVar14 = (uint *)((ulonglong)uVar24 >> 0x20);
        if ((int)uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(uVar21,puVar19,param_3,puVar20,&DAT_01881908);
        }
        puVar19 = (uint *)&DAT_00000001;
        FUN_010006c4(&local_60,puVar14,1,1);
        if (local_60 != (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(local_5c,local_58);
        }
        FUN_016dd1aa(local_58,(int)uVar24,puVar14);
        puVar17 = param_2 + 0xe;
        param_2 = (uint *)((uint)puVar14 >> 8);
        param_3 = (uint *)(*puVar17 & 1);
        puVar13 = local_58;
        puVar16 = local_5c;
        break;
      }
LAB_00fe9dfc:
      puVar13 = &switchD_00fe9e20::switchdataD_00fe9e24;
      switch((int)((int)puVar14 + -0x47) * 0x40 & 0xffU | ((uint)((int)puVar14 + -0x47) & 0xff) >> 2
            ) {
      case 0:
        if (param_4 == 0) {
          puVar16 = (uint *)0x8000000e;
          goto LAB_00fea550;
        }
        break;
      case 1:
        if (param_4 == 0) {
          puVar16 = (uint *)&DAT_8000000d;
          goto LAB_00fea550;
        }
        break;
      case 2:
        if (param_4 == 0) {
          puVar13 = (uint *)&DAT_00000001;
          puVar16 = (uint *)0x80000001;
          goto LAB_00fea550;
        }
        break;
      case 8:
        if (param_4 == 0) {
          if (puVar20 == puVar19) {
            puVar2 = (undefined2 *)thunk_FUN_016d4a50(2);
            if (puVar2 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,2);
            }
            *puVar2 = 0x675c;
            *param_1 = 1;
            param_1[1] = 5;
            param_1[2] = 2;
            param_1[3] = puVar2;
            param_1[4] = 2;
            param_1[5] = param_3;
            return;
          }
          if (puVar19 <= puVar20) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(puVar20,puVar19,&DAT_01881918);
          }
          if (*(byte *)(uVar21 + (int)puVar20) - 0x30 < 10) {
            FUN_00feb25c(&local_60,param_2,puVar20);
            param_2 = (uint *)((uint)local_50 >> 8);
            if (local_60 != (uint *)0x0) {
              *(undefined1 *)(param_1 + 4) = local_50._0_1_;
              param_1[5] = local_4c;
              *(short *)((int)param_1 + 0x11) = (short)((uint)local_50 >> 8);
              *param_1 = 1;
              param_1[1] = local_5c;
              param_1[2] = local_58;
              param_1[3] = local_54;
              *(char *)((int)param_1 + 0x13) = (char)((uint)local_50 >> 0x18);
              return;
            }
            param_3 = (uint *)(local_48 & 0xff);
            local_44 = local_48 >> 8;
            puVar13 = local_54;
            puVar14 = (uint *)((uint)local_50 & 0xff);
            puVar16 = local_58;
            puVar19 = local_4c;
            puVar20 = local_5c;
          }
          else {
            if (*(byte *)(uVar21 + (int)puVar20) == 0x27) {
              pcVar12 = &DAT_004144fe;
              pcVar25 = &DAT_004144fe;
            }
            else {
              pcVar12 = "<";
              pcVar25 = ">";
            }
            FUN_00fe8c98(&local_60,param_2,puVar20,pcVar12,1,pcVar25,1);
            param_2 = (uint *)((uint)local_50 >> 8);
            if (local_60 != (uint *)0x0) {
              *(undefined1 *)(param_1 + 4) = local_50._0_1_;
              param_1[5] = local_4c;
              *(short *)((int)param_1 + 0x11) = (short)((uint)local_50 >> 8);
              *param_1 = 1;
              param_1[1] = local_5c;
              param_1[2] = local_58;
              param_1[3] = local_54;
              *(char *)((int)param_1 + 0x13) = (char)((uint)local_50 >> 0x18);
              return;
            }
            param_3 = (uint *)(local_48 & 0xff);
            local_44 = local_48 >> 8;
            puVar13 = local_54;
            puVar14 = (uint *)((uint)local_50 & 0xff);
            puVar16 = local_58;
            puVar19 = local_4c;
            puVar20 = local_5c;
          }
          goto LAB_00fea550;
        }
      }
      uVar24 = 0x10040c2b4;
      local_40 = CONCAT44(local_40._4_4_,(uint *)local_40);
      switch(puVar14) {
      case (uint *)0x20:
        uVar24 = 0x10041545b;
        local_40 = CONCAT44(local_40._4_4_,(uint *)local_40);
        break;
      default:
        uVar24 = FUN_00feaeb8(puVar17,puVar20,uVar21,puVar19);
        if ((int)uVar24 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(uVar21,puVar19,puVar17,puVar20,&DAT_01881928);
        }
        local_40 = uVar24;
        if ((((uint)puVar14 & 0xdf) - 0x41 & 0xff) < 0x1a) {
          switch(puVar14) {
          case (uint *)0x41:
          case (uint *)0x42:
          case (uint *)0x47:
          case (uint *)0x4b:
          case (uint *)0x6b:
          case (uint *)0x7a:
            break;
          default:
            local_28 = &DAT_0157d360;
            local_2c = (undefined4 **)&local_40;
            FUN_00600d2c(&local_38,&DAT_0057c678,&local_2c);
            *param_1 = 1;
            param_1[1] = 5;
            param_1[2] = local_38;
            param_1[3] = local_34;
            param_1[4] = local_30;
            param_1[5] = param_3;
            return;
          }
        }
        break;
      case (uint *)0x61:
        break;
      case (uint *)0x62:
        uVar24 = 0x10040c22f;
        local_40 = CONCAT44(local_40._4_4_,(uint *)local_40);
        break;
      case (uint *)0x65:
        uVar24 = 0x100377a73;
        local_40 = CONCAT44(local_40._4_4_,(uint *)local_40);
        break;
      case (uint *)0x66:
        uVar24 = 0x100377a71;
        local_40 = CONCAT44(local_40._4_4_,(uint *)local_40);
        break;
      case (uint *)0x6e:
        uVar24 = 0x10041950e;
        local_40 = CONCAT44(local_40._4_4_,(uint *)local_40);
        break;
      case (uint *)0x72:
        uVar24 = 0x10041409d;
        local_40 = CONCAT44(local_40._4_4_,(uint *)local_40);
        break;
      case (uint *)0x74:
        uVar24 = 0x10040c271;
        local_40 = CONCAT44(local_40._4_4_,(uint *)local_40);
        break;
      case (uint *)0x76:
        uVar24 = 0x100377a72;
        local_40 = CONCAT44(local_40._4_4_,(uint *)local_40);
      }
      FUN_00feae38(&local_60,(int)uVar24,(int)((ulonglong)uVar24 >> 0x20));
      param_2 = (uint *)((uint)local_58 >> 8);
      local_44 = (uint)local_50 >> 8;
      param_3 = (uint *)((uint)local_50 & 0xff);
      puVar13 = local_5c;
      puVar14 = (uint *)((uint)local_58 & 0xff);
      puVar16 = local_60;
      puVar19 = local_54;
      break;
    case 0x68:
      puVar16 = (uint *)&DAT_0000000c;
      if (puVar14 == (uint *)&DAT_00000068) {
        puVar16 = (uint *)&DAT_0000000b;
      }
      puVar13 = (uint *)thunk_FUN_016d4a50(puVar16);
      if (puVar13 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,puVar16);
      }
      puVar6 = &DAT_00377a5a;
      if (puVar14 != (uint *)&DAT_00000068) {
        puVar6 = &DAT_00377a65;
      }
      FUN_016dd1aa(puVar13,puVar6,puVar16);
      param_3 = (uint *)0x0;
      puVar19 = (uint *)&DAT_00000001;
      param_2 = (uint *)0x0;
      puVar14 = puVar16;
    }
    goto LAB_00fea550;
  }
  if (((uint)(puVar14 + -0xc) & 0xff) < 10) {
    FUN_00fe53bc(&local_60,uVar21,puVar19,puVar17);
    if ((local_60 == (uint *)&DAT_00000001) && (local_58 < (uint *)((uint)puVar19 >> 1))) {
      *(undefined1 *)(param_2 + 0x10) = 1;
      FUN_0100406c(param_2,local_58);
      uVar21 = param_2[0xe];
      param_1[2] = 0x8000000a;
      *(byte *)(param_1 + 4) = (byte)uVar21 & 1;
      param_1[3] = local_58;
      *param_1 = 0;
      param_1[1] = local_5c;
      return;
    }
    param_1[4] = 0;
    param_1[5] = puVar17;
    *param_1 = 1;
    param_1[1] = 0xc;
    return;
  }
  puVar20 = (uint *)((int)param_3 + 2);
  if (param_4 == 0 && puVar14 == (uint *)0x6b) {
    if ((puVar20 < puVar19) && (*(char *)(uVar21 + (int)puVar20) == '\'')) {
      FUN_00fe8190(param_1,param_2,puVar20,&DAT_004144fe,1,&DAT_004144fe,1,1);
      return;
    }
    FUN_00fe8190(param_1,param_2,puVar20,"<",1,">",1,1);
    return;
  }
  puVar16 = (uint *)0x80000002;
  if (param_4 == 0 && puVar14 == (uint *)&DAT_00000041) {
    puVar13 = (uint *)0x0;
    goto LAB_00fea550;
  }
  if (param_4 == 0 && puVar14 == (uint *)0x7a) {
    puVar13 = (uint *)&DAT_00000001;
    goto LAB_00fea550;
  }
  if (param_4 == 0 && puVar14 == (uint *)&DAT_0000005a) {
    local_5c = (uint *)thunk_FUN_016d4a50(4);
    if (local_5c == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,4);
    }
    local_50 = (uint *)((uint)local_50 & 0xffffff00);
    *local_5c = 0x242a6e5c;
    local_58 = (uint *)0x4;
    local_54 = (uint *)0x0;
    local_60 = (uint *)0x4;
    param_2 = (uint *)FUN_00fe9850();
    puVar16 = (uint *)0x80000007;
    *param_2 = (uint)local_60;
    param_2[1] = (uint)local_5c;
    param_2[2] = (uint)local_58;
    param_2[3] = (uint)local_54;
    param_2[4] = (uint)local_50;
    param_3 = local_5c;
    puVar13 = param_2;
    puVar14 = (uint *)0x0;
    goto LAB_00fea550;
  }
  if (puVar14 == (uint *)0x62) {
    if (param_4 != 0) goto LAB_00fe9dfc;
  }
  else if (param_4 != 0 || puVar14 != (uint *)&DAT_00000042) {
    if (param_4 == 0 && puVar14 == (uint *)&DAT_0000003c) {
      if ((param_2[0xe] & 0x40) == 0) {
        param_2 = (uint *)&DAT_00000004;
        local_84 = (uint *)CONCAT31(local_84._1_3_,4);
        local_74 = puVar16;
        local_68 = puVar19;
      }
      else {
        FUN_00feae38(&local_88,"<",1);
        param_3 = (uint *)(local_78 & 0xff);
        param_2 = (uint *)(uint)local_7f;
        puVar14 = (uint *)(uint)local_80;
        local_74 = local_88;
        local_68 = local_7c;
      }
      local_70 = local_84;
      local_64._1_2_ = local_78._1_2_;
      local_64._3_1_ = local_78._3_1_;
    }
    else {
      if (param_4 != 0 || puVar14 != (uint *)&DAT_0000003e) goto LAB_00fe9960;
      if ((param_2[0xe] & 0x40) == 0) {
        param_2 = (uint *)&DAT_00000006;
        local_70 = (uint *)CONCAT31(local_70._1_3_,6);
        local_74 = puVar16;
        local_68 = puVar19;
      }
      else {
        FUN_00feae38(&local_74,">",1);
        param_2 = (uint *)((uint)local_6c >> 8);
        param_3 = (uint *)(local_64 & 0xff);
        puVar14 = (uint *)((uint)local_6c & 0xff);
      }
    }
    local_44 = (uint)CONCAT12(local_64._3_1_,local_64._1_2_);
    puVar13 = local_70;
    puVar16 = local_74;
    puVar19 = local_68;
    goto LAB_00fea550;
  }
  FUN_00fe7e50(&local_60,param_2,puVar20);
  if (local_60 != (uint *)&DAT_00000012) {
LAB_00fe9f30:
    *param_1 = 1;
    param_1[1] = local_60;
    param_1[2] = local_5c;
    param_1[3] = local_58;
    param_1[4] = local_54;
    param_1[5] = local_50;
    return;
  }
  puVar17 = extraout_r2;
  if ((puVar19 <= local_5c) ||
     (puVar17 = (uint *)(uint)*(byte *)(uVar21 + (int)local_5c),
     (uint *)(uint)*(byte *)(uVar21 + (int)local_5c) != (uint *)0x7b)) goto LAB_00fe9f60;
  FUN_00fe7e50(&local_60,param_2,(undefined1 *)((int)local_5c + 1));
  if (local_60 != (uint *)&DAT_00000012) goto LAB_00fe9f30;
  if (local_5c < puVar19) {
    local_5c = (uint *)(uint)*(byte *)(uVar21 + (int)local_5c);
    puVar17 = extraout_r2_00;
    if (local_5c != (uint *)&DAT_0000002c) {
      local_5c = local_5c + -0xc;
      puVar17 = extraout_r2_00;
      if (&DAT_00000009 < local_5c) goto LAB_00fea8f8;
    }
LAB_00fe9f60:
    param_3 = puVar17;
    puVar13 = (uint *)&DAT_00000009;
    param_2 = local_5c;
    if (puVar14 == (uint *)0x62) {
      puVar13 = (uint *)&DAT_00000008;
    }
LAB_00fea550:
    *(char *)(param_1 + 6) = (char)param_3;
    *(char *)(param_1 + 4) = (char)puVar14;
    param_1[5] = puVar19;
    *(undefined2 *)((int)param_1 + 0x19) = (undefined2)local_44;
    *(undefined1 *)((int)param_1 + 0x1b) = local_44._2_1_;
    *param_1 = 0;
    param_1[1] = puVar20;
    param_1[2] = puVar16;
    param_1[3] = puVar13;
    *(short *)((int)param_1 + 0x11) = (short)param_2;
    *(char *)((int)param_1 + 0x13) = (char)((uint)param_2 >> 0x10);
    return;
  }
LAB_00fea8f8:
  bVar23 = (uint *)0xfffffffc < param_3;
  bVar22 = param_3 == (uint *)0xfffffffd;
  if (param_3 < (uint *)0xfffffffe) {
    unaff_r7 = (uint *)param_2[5];
    bVar23 = unaff_r7 <= (uint *)((int)param_3 + 2);
    bVar22 = (uint *)((int)param_3 + 2) == unaff_r7;
    unaff_r6 = param_2;
  }
  if (!bVar23 || bVar22) {
    uVar21 = unaff_r6[4];
    if ((*(char *)(uVar21 + (int)param_3) == '\\') &&
       ((byte)(((char *)(uVar21 + (int)param_3))[1] | 0x20U) == 0x62)) {
      FUN_00fe7e50(&local_58,unaff_r6);
      if (local_58 != (uint *)&DAT_00000012) {
        param_1[1] = local_58;
        *param_1 = 1;
        param_1[2] = local_54;
        param_1[3] = local_50;
        param_1[4] = local_4c;
        param_1[5] = local_48;
        return;
      }
      if ((local_54 < unaff_r7) && (*(char *)(uVar21 + (int)local_54) == '{')) {
        puVar17 = (uint *)((int)local_54 + 1);
        local_60 = (uint *)0x1;
        local_5c = (uint *)0x0;
        local_68 = (uint *)0x0;
        local_64 = 0;
        puVar19 = puVar17;
        if (puVar17 < unaff_r7) {
          local_68 = (uint *)0x0;
          local_70 = (uint *)&DAT_018819b8;
          local_6c = (uint *)0x1;
          while (puVar19 = puVar17, *(char *)(uVar21 + (int)puVar17) != '}') {
            FUN_00fe7e50(&local_58,unaff_r6,puVar17);
            if (local_58 != (uint *)&DAT_00000012) {
              param_1[3] = local_50;
              param_1[4] = local_4c;
              param_1[5] = local_48;
              iVar5 = 8;
              param_3 = local_54;
              puVar19 = local_58;
              goto LAB_00fead54;
            }
            if ((puVar17 < local_54) &&
               ((puVar19 = local_54, unaff_r7 <= local_54 ||
                (puVar17 = local_54, *(char *)(uVar21 + (int)local_54) == '}')))) break;
            if (unaff_r7 <= puVar17) goto LAB_00feadcc;
            bVar15 = *(byte *)(uVar21 + (int)puVar17);
            if (bVar15 != 0x7d) {
              uVar18 = (uint)(char)bVar15;
              uVar8 = 2;
              if (uVar18 < 0x80000000) {
                uVar8 = 1;
              }
              if (local_64 - (int)local_68 < uVar8) {
                local_78 = 1;
                FUN_010007c0(&local_64,local_68,uVar8,1);
                local_6c = local_60;
                pbVar4 = (byte *)((int)local_60 + (int)local_5c);
                if (-1 < (int)uVar18) goto LAB_00feaa3c;
LAB_00feaaf8:
                *pbVar4 = bVar15 >> 6 | 0xc0;
                pbVar4[1] = bVar15 & 0xbf;
                local_5c = (uint *)((int)local_68 + 2);
                iVar5 = 2;
                if ((0xdf < bVar15) && (iVar5 = 4, bVar15 < 0xf0)) {
                  iVar5 = 3;
                }
              }
              else {
                pbVar4 = (byte *)((int)local_6c + (int)local_68);
                if ((int)uVar18 < 0) goto LAB_00feaaf8;
LAB_00feaa3c:
                *pbVar4 = bVar15;
                local_5c = (uint *)((int)local_68 + 1);
                iVar5 = 1;
              }
              puVar17 = (uint *)(iVar5 + (int)puVar17);
              local_68 = local_5c;
            }
            puVar19 = puVar17;
            if (unaff_r7 <= puVar17) break;
          }
        }
        puVar14 = local_60;
        if ((puVar19 < unaff_r7) && (*(char *)(uVar21 + (int)puVar19) == '}')) {
          puVar17 = (uint *)((int)param_3 + 1);
          if (unaff_r7 <= puVar17) {
            local_70 = (uint *)&DAT_018819c8;
LAB_00feadcc:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(puVar17,unaff_r7,local_70);
          }
          if (*(char *)(uVar21 + (int)puVar17) == 'B') {
            local_58 = &local_64;
            local_54 = &DAT_006043a8;
            FUN_00600d2c(&local_40,&DAT_0057c8d8,&local_58);
            ppuVar10 = (undefined4 **)&local_40;
          }
          else {
            switch(local_68) {
            case (uint *)0x3:
              iVar5 = thunk_FUN_016dd50a(local_60,&DAT_003cf225,3);
              if (iVar5 == 0) {
                uVar1 = 6;
LAB_00fead88:
                *(undefined1 *)(param_1 + 3) = uVar1;
                *param_1 = 0;
                param_1[1] = (undefined1 *)((int)puVar19 + 1);
                param_1[2] = 0x80000002;
                if (local_64 == 0) {
                  return;
                }
                thunk_FUN_016d3fb4(puVar14);
                return;
              }
              break;
            case (uint *)0x5:
              iVar5 = thunk_FUN_016dd50a(local_60,&DAT_003cf220,5);
              if (iVar5 == 0) {
                uVar1 = 4;
                goto LAB_00fead88;
              }
              break;
            case (uint *)0x8:
              iVar5 = thunk_FUN_016dd50a(local_60,&DAT_0056aa68,8);
              if (iVar5 == 0) {
                uVar1 = 7;
                goto LAB_00fead88;
              }
              break;
            case (uint *)0xa:
              iVar5 = thunk_FUN_016dd50a(local_60,&DAT_003cef44,10);
              if (iVar5 == 0) {
                uVar1 = 5;
                goto LAB_00fead88;
              }
            }
            local_58 = &local_64;
            local_54 = &DAT_006043a8;
            FUN_00600d2c(&local_30,&DAT_0057948d,&local_58);
            ppuVar10 = &local_30;
          }
          puVar3 = ppuVar10[1];
          puVar9 = ppuVar10[2];
          param_1[2] = *ppuVar10;
          param_1[3] = puVar3;
          iVar5 = 0x14;
          param_1[4] = puVar9;
          puVar19 = (uint *)&DAT_00000005;
LAB_00fead54:
          iVar11 = 4;
        }
        else {
          puVar19 = (uint *)&DAT_00000007;
          puVar3 = (undefined4 *)thunk_FUN_016d4a50(7);
          if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4();
          }
          param_1[2] = 7;
          param_1[3] = puVar3;
          *(undefined4 *)((int)puVar3 + 3) = 0x7d2e2e2e;
          *puVar3 = 0x2e7b625c;
          param_1[1] = 5;
          iVar5 = 0x14;
          iVar11 = 0x10;
        }
        *(uint **)((int)param_1 + iVar11) = puVar19;
        *(uint **)((int)param_1 + iVar5) = param_3;
        *param_1 = 1;
        if (local_64 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(local_60);
        return;
      }
    }
  }
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(7);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,7);
  }
  *param_1 = 1;
  *(undefined4 *)((int)puVar3 + 3) = 0x7d2e2e2e;
  param_1[2] = 7;
  *puVar3 = 0x2e7b625c;
  param_1[1] = 5;
  param_1[3] = puVar3;
  param_1[4] = 7;
  param_1[5] = param_3;
  return;
}

