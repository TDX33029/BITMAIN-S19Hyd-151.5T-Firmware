// FUN_016b9818 @ 016b9818 size=3556 calls_out=12 calls_in=1
// strings: 

void FUN_016b9818(int *param_1,uint *param_2,byte *param_3,byte *param_4,undefined4 param_5,
                 int *param_6)

{
  undefined2 uVar1;
  undefined2 uVar2;
  code *pcVar3;
  byte bVar4;
  bool bVar5;
  byte *pbVar6;
  char cVar7;
  undefined1 *puVar8;
  undefined4 *puVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  int unaff_r4;
  byte *pbVar13;
  undefined4 uVar14;
  undefined1 *puVar15;
  uint uVar16;
  int iVar17;
  int iVar18;
  byte *pbVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  int iVar23;
  uint uVar24;
  int iVar25;
  byte *pbVar26;
  int iVar27;
  uint *puVar28;
  int iVar29;
  undefined8 uVar30;
  byte *local_48;
  byte *local_44;
  byte *local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  uint uStack_28;
  
  pbVar26 = param_3;
LAB_016b984c:
  do {
    if (pbVar26 == param_4) {
LAB_016b9bd0:
      if (param_6[2] == 1) {
        uVar24 = param_6[3];
        iVar17 = param_6[5];
        if (uVar24 == 0) {
          uVar24 = 0;
          goto LAB_016ba190;
        }
        uVar10 = param_6[6];
        if (uVar24 < uVar10) {
          if (*(char *)(iVar17 + uVar24) < -0x40) goto LAB_016ba5e4;
        }
        else if (uVar24 != uVar10) {
LAB_016ba5e4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(iVar17,uVar10,0,uVar24,&DAT_018aeeb8);
        }
      }
      else {
        iVar17 = param_6[5];
        uVar24 = param_6[6];
      }
      if (*param_2 - param_2[2] < uVar24) {
        FUN_016bd7fc(param_2,param_2[2],uVar24,1,1);
      }
LAB_016ba190:
      uVar16 = param_2[2];
      FUN_016dd1aa(param_2[1] + uVar16,iVar17,uVar24);
      uVar10 = param_2[1];
      uVar16 = uVar16 + uVar24;
      param_1[4] = *param_2;
      param_1[5] = uVar10;
      param_2[2] = uVar16;
      param_1[6] = uVar16;
      iVar27 = param_6[8];
      iVar29 = param_6[9];
      iVar25 = param_6[10];
      iVar20 = param_6[0xb];
      iVar17 = param_6[0xe];
      iVar12 = param_6[0xf];
      iVar18 = param_6[0x10];
      param_1[0xd] = param_6[0xd];
      param_1[0xe] = iVar17;
      param_1[0xf] = iVar12;
      param_1[0x10] = iVar18;
      iVar12 = *param_6;
      iVar18 = param_6[1];
      param_1[0xb] = iVar20;
      iVar23 = param_6[7];
      iVar20 = param_6[0xc];
      iVar17 = param_6[0x11];
      param_1[10] = iVar25;
      param_1[9] = iVar29;
      param_1[8] = iVar27;
      *(char *)(param_1 + 0x11) = (char)iVar17;
      param_1[0xc] = iVar20;
      param_1[7] = iVar23;
      *param_1 = iVar12;
      param_1[1] = iVar18;
      param_1[2] = 0;
      return;
    }
    pbVar13 = pbVar26 + 1;
    puVar15 = (undefined1 *)(uint)*pbVar26;
    if ((char)*pbVar26 < '\0') {
      if (puVar15 < (undefined1 *)0xe0) {
        puVar15 = (undefined1 *)(pbVar26[1] & 0x3f | ((uint)puVar15 & 0x1f) << 6);
        pbVar26 = pbVar26 + 2;
        if (&DAT_0000000e <= puVar15) goto LAB_016b98f0;
      }
      else {
        uVar24 = pbVar26[2] & 0x3f | (pbVar26[1] & 0x3f) << 6;
        if (puVar15 < (undefined1 *)0xf0) {
          puVar15 = (undefined1 *)(uVar24 | ((uint)puVar15 & 0x1f) << 0xc);
          pbVar26 = pbVar26 + 3;
          if (&DAT_0000000e <= puVar15) goto LAB_016b98f0;
        }
        else {
          puVar15 = (undefined1 *)(pbVar26[3] & 0x3f | uVar24 << 6 | ((uint)puVar15 & 7) << 0x12);
          if (puVar15 == &DAT_00110000) goto LAB_016b9bd0;
          pbVar26 = pbVar26 + 4;
          if (&DAT_0000000e <= puVar15) goto LAB_016b98f0;
        }
      }
LAB_016b9870:
      puVar8 = &DAT_00110000;
      if ((1 << ((uint)puVar15 & 0xff) & 0x2600U) == 0) {
        puVar8 = puVar15;
      }
      puVar15 = puVar8;
      if (puVar8 != &DAT_00110000) break;
      goto LAB_016b984c;
    }
    pbVar26 = pbVar13;
    if (puVar15 <= &DAT_0000000d) goto LAB_016b9870;
LAB_016b98f0:
  } while (puVar15 == &DAT_00110000);
  if (puVar15 < (undefined1 *)0x3f) {
    if (puVar15 == (undefined1 *)0x23) {
      local_48 = (byte *)*param_2;
      local_44 = (byte *)param_2[1];
      local_40 = (byte *)param_2[2];
      local_3c = param_2[3];
      local_38 = param_2[4];
      uStack_34 = param_2[5];
      uStack_30 = param_2[6];
      uStack_2c = param_2[7];
      uStack_28 = param_2[8];
      FUN_016ba67c(param_1,&local_48,param_6,param_3,param_4);
      return;
    }
    if (puVar15 == (undefined1 *)0x2f) {
LAB_016b9960:
      uVar24 = 0;
      pbVar13 = param_3;
      pbVar11 = param_3;
      while (pbVar13 != param_4) {
        puVar15 = (undefined1 *)(uint)*pbVar13;
        pbVar19 = pbVar13 + 1;
        if ((char)*pbVar13 < '\0') {
          if (puVar15 < (undefined1 *)0xe0) {
            puVar15 = (undefined1 *)(pbVar13[1] & 0x3f | ((uint)puVar15 & 0x1f) << 6);
            pbVar19 = pbVar13 + 2;
            goto joined_r0x016b9a1c;
          }
          uVar10 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
          if (&DAT_000000f0 <= puVar15) {
            puVar15 = (undefined1 *)(pbVar13[3] & 0x3f | uVar10 << 6 | ((uint)puVar15 & 7) << 0x12);
            if (puVar15 != &DAT_00110000) {
              pbVar13 = pbVar13 + 4;
              puVar8 = puVar15;
              if (&DAT_0000000d < puVar15) goto LAB_016b9a20;
              goto LAB_016b99a0;
            }
            break;
          }
          puVar15 = (undefined1 *)(uVar10 | ((uint)puVar15 & 0x1f) << 0xc);
          pbVar13 = pbVar13 + 3;
          puVar8 = puVar15;
          if (puVar15 < &DAT_0000000e) goto LAB_016b99a0;
LAB_016b9a20:
          if (puVar8 != &DAT_00110000) goto LAB_016b9a48;
        }
        else {
joined_r0x016b9a1c:
          pbVar13 = pbVar19;
          puVar8 = puVar15;
          if ((undefined1 *)0xd < puVar15) goto LAB_016b9a20;
LAB_016b99a0:
          puVar8 = &DAT_00110000;
          if ((1 << ((uint)puVar15 & 0xff) & 0x2600U) == 0) {
            puVar8 = puVar15;
          }
          if (puVar8 != &DAT_00110000) {
LAB_016b9a48:
            if (puVar8 != (undefined1 *)0x5c && puVar8 != (undefined1 *)0x2f) break;
            uVar24 = uVar24 + 1;
            pbVar11 = pbVar13;
          }
        }
      }
      if (1 < uVar24) {
        uVar24 = param_2[6];
        if (uVar24 != 0) {
          pbVar19 = (byte *)0x0;
          pbVar13 = &DAT_00000001;
          local_44 = &DAT_00000001;
          uVar10 = param_2[7];
          local_48 = (byte *)0x0;
          pbVar26 = param_3;
          while (local_40 = pbVar19, pbVar26 != param_4) {
            puVar15 = (undefined1 *)(uint)*pbVar26;
            pbVar6 = pbVar26 + 1;
            if ((char)*pbVar26 < '\0') {
              if (puVar15 < (undefined1 *)0xe0) {
                puVar15 = (undefined1 *)(pbVar26[1] & 0x3f | ((uint)puVar15 & 0x1f) << 6);
                pbVar6 = pbVar26 + 2;
                goto joined_r0x016b9b50;
              }
              uVar16 = pbVar26[2] & 0x3f | (pbVar26[1] & 0x3f) << 6;
              if (&DAT_000000f0 <= puVar15) {
                puVar15 = (undefined1 *)
                          (pbVar26[3] & 0x3f | uVar16 << 6 | ((uint)puVar15 & 7) << 0x12);
                if (puVar15 != &DAT_00110000) {
                  pbVar26 = pbVar26 + 4;
                  if (&DAT_0000000d < puVar15) goto LAB_016b9b54;
                  goto LAB_016b9ad4;
                }
                break;
              }
              puVar15 = (undefined1 *)(uVar16 | ((uint)puVar15 & 0x1f) << 0xc);
              pbVar26 = pbVar26 + 3;
              if (puVar15 < &DAT_0000000e) goto LAB_016b9ad4;
LAB_016b9b54:
              puVar8 = puVar15;
              if (puVar15 != &DAT_00110000) goto LAB_016b9b7c;
            }
            else {
joined_r0x016b9b50:
              pbVar26 = pbVar6;
              if ((undefined1 *)0xd < puVar15) goto LAB_016b9b54;
LAB_016b9ad4:
              puVar8 = &DAT_00110000;
              if ((1 << ((uint)puVar15 & 0xff) & 0x2600U) == 0) {
                puVar8 = puVar15;
              }
              if (puVar8 != &DAT_00110000) {
LAB_016b9b7c:
                if (puVar8 != (undefined1 *)0x5c && puVar8 != (undefined1 *)0x2f) break;
                if (local_48 == pbVar19) {
                  FUN_016bd7fc(&local_48,pbVar19,1,1,1);
                  pbVar13 = local_44;
                }
                *(byte *)((int)pbVar13 + (int)local_40) = (byte)puVar8;
                pbVar19 = pbVar19 + 1;
              }
            }
          }
          bVar5 = true;
          if ((pbVar19 == (byte *)0x2) && (bVar5 = false, *(short *)local_44 != 0x2f2f)) {
            bVar5 = true;
          }
          if (local_48 != (byte *)0x0) {
            thunk_FUN_016d3fb4();
          }
          if (bVar5) {
            (**(code **)(uVar10 + 0x14))(uVar24,3);
          }
        }
        iVar12 = param_6[8];
        iVar17 = param_6[5];
        uVar24 = iVar12 + 1;
        if (iVar12 == -1) {
LAB_016b9ebc:
          uVar10 = param_2[2];
          if (*param_2 - uVar10 < uVar24) {
            FUN_016bd7fc(param_2,uVar10,uVar24,1,1);
            uVar10 = param_2[2];
          }
          FUN_016dd1aa(param_2[1] + uVar10,iVar17,uVar24);
          param_2[2] = uVar10 + uVar24;
          local_48 = param_3;
          local_44 = param_4;
          iVar17 = FUN_016b5984(&DAT_00418640,2,&local_48);
          pbVar13 = local_44;
          pbVar26 = local_48;
          if (iVar17 == 0) {
            local_48 = (byte *)*param_2;
            local_44 = (byte *)param_2[1];
            local_40 = (byte *)param_2[2];
            local_3c = param_2[3];
            local_38 = param_2[4];
            uStack_34 = param_2[5];
            uStack_30 = param_2[6];
            uStack_2c = param_2[7];
            uStack_28 = param_2[8];
            FUN_016b5b04(param_1,&local_48,pbVar11,param_4,param_5,iVar12);
            return;
          }
          local_48 = (byte *)*param_2;
          local_44 = (byte *)param_2[1];
          local_40 = (byte *)param_2[2];
          local_3c = param_2[3];
          local_38 = param_2[4];
          uStack_34 = param_2[5];
          uStack_30 = param_2[6];
          uStack_2c = param_2[7];
          uStack_28 = param_2[8];
          FUN_016b5b04(param_1,&local_48,pbVar26,pbVar13,param_5,iVar12);
          return;
        }
        uVar10 = param_6[6];
        if (uVar24 < uVar10) {
          if (-0x41 < *(char *)(iVar17 + uVar24)) goto LAB_016b9ebc;
        }
        else if (uVar24 == uVar10) goto LAB_016b9ebc;
        goto LAB_016ba5c4;
      }
      uVar24 = param_6[0xc];
      iVar17 = param_6[5];
      if (uVar24 != 0) {
        uVar10 = param_6[6];
        if (uVar24 < uVar10) {
          if (*(char *)(iVar17 + uVar24) < -0x40) goto LAB_016ba5c4;
        }
        else if (uVar24 != uVar10) goto LAB_016ba5c4;
      }
      uVar10 = *param_2;
      uVar16 = param_2[2];
      if (uVar10 - uVar16 < uVar24) {
        FUN_016bd7fc(param_2,uVar16,uVar24,1,1);
        uVar10 = *param_2;
        uVar16 = param_2[2];
      }
      uVar21 = param_2[1];
      FUN_016dd1aa(uVar21 + uVar16,iVar17,uVar24);
      uVar16 = uVar16 + uVar24;
      param_2[2] = uVar16;
      uVar22 = uVar16;
      if (uVar10 == uVar16) {
        FUN_016bd7fc(param_2,uVar10,1,1,1);
        uVar21 = param_2[1];
        uVar22 = param_2[2];
      }
      *(undefined1 *)(uVar21 + uVar22) = 0x2f;
      param_2[2] = uVar16 + 1;
      local_48 = (byte *)CONCAT31(local_48._1_3_,1);
      uVar30 = FUN_016b3bfc(param_2,param_5,&local_48,uVar24,pbVar26,param_4);
      local_48 = (byte *)*param_2;
      local_44 = (byte *)param_2[1];
      local_40 = (byte *)param_2[2];
      local_3c = param_2[3];
      local_38 = param_2[4];
      uStack_34 = param_2[5];
      uStack_30 = param_2[6];
      uStack_2c = param_2[7];
      uStack_28 = param_2[8];
      iVar17 = param_6[9];
      iVar12 = param_6[8];
      iVar20 = param_6[10];
      iVar18 = param_6[0xb];
      uVar2 = (undefined2)param_6[7];
      uVar1 = *(undefined2 *)((int)param_6 + 0x1e);
      goto LAB_016ba4b0;
    }
  }
  else {
    if (puVar15 == (undefined1 *)0x3f) {
      if (*param_6 == 0) {
        if (param_6[2] != 0) {
          uVar24 = param_6[3];
          iVar17 = param_6[5];
          goto joined_r0x016b9dac;
        }
        iVar17 = param_6[5];
        uVar24 = param_6[6];
      }
      else {
        uVar24 = param_6[1];
        iVar17 = param_6[5];
joined_r0x016b9dac:
        if (uVar24 == 0) {
          uVar24 = 0;
          goto LAB_016ba05c;
        }
        uVar10 = param_6[6];
        if (uVar24 < uVar10) {
          if (*(char *)(iVar17 + uVar24) < -0x40) goto LAB_016ba5c4;
        }
        else if (uVar24 != uVar10) goto LAB_016ba5c4;
      }
      if (*param_2 - param_2[2] < uVar24) {
        FUN_016bd7fc(param_2,param_2[2],uVar24,1,1);
      }
LAB_016ba05c:
      uVar10 = param_2[2];
      FUN_016dd1aa(param_2[1] + uVar10,iVar17,uVar24);
      param_2[2] = uVar10 + uVar24;
      iVar17 = param_6[8];
      FUN_016baa30(&local_48,param_2,param_5,iVar17,param_3,param_4);
      if (local_48 == (byte *)0x2) {
        *param_1 = 2;
        uVar24 = *param_2;
        *(undefined1 *)(param_1 + 1) = local_44._0_1_;
        if (uVar24 != 0) {
          uVar24 = param_2[1];
          if (uVar24 == 0) {
            return;
          }
          iVar17 = FUN_016d3bc8();
          uVar10 = *(byte *)(uVar24 - 3) & 0x1f;
          if (((*(byte *)(iVar17 + 0x14) & 0x1f) != 0) ||
             (uVar16 = *(uint *)(iVar17 + 0x14) & 0xfffff000, iVar12 = uVar16 - 0x10, uVar16 == 0))
          {
            iVar12 = (uint)*(ushort *)
                            (&DAT_0042567c + ((*(ushort *)(iVar17 + 0x14) & 0xfff) >> 6) * 2) << 4;
          }
          uVar16 = (uint)(*(byte *)(uVar24 - 3) >> 5);
          iVar20 = *(int *)(iVar17 + 8) + 0x10;
          iVar18 = iVar12 * uVar10 + iVar12 + -4;
          iVar12 = iVar20 + iVar18;
          if (4 < uVar16) {
            if (uVar16 != 5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4018);
              (*pcVar3)();
            }
            uVar16 = *(uint *)(iVar12 + -4);
            if (uVar16 < 5) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4022);
              (*pcVar3)();
            }
            if (*(char *)(iVar12 + -5) != '\0') {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d402a);
              (*pcVar3)();
            }
          }
          if (iVar12 - uVar24 < uVar16) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4032);
            (*pcVar3)();
          }
          if (*(char *)(iVar12 - uVar16) != '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d403a);
            (*pcVar3)();
          }
          if (*(char *)(iVar20 + iVar18) != '\0') {
                    /* WARNING: Does not return */
            pcVar3 = (code *)software_udf(0xff,0x16d4040);
            (*pcVar3)();
          }
          bVar4 = *(byte *)(iVar17 + 0x14);
          uVar16 = 1 << uVar10;
          *(undefined1 *)(uVar24 - 3) = 0xff;
          *(undefined2 *)(uVar24 - 2) = 0;
          do {
            uVar22 = *(uint *)(iVar17 + 0x10);
            uVar24 = *(uint *)(iVar17 + 0xc) | uVar22;
            if ((uVar16 & uVar24) != 0) {
                    /* WARNING: Does not return */
              pcVar3 = (code *)software_udf(0xff,0x16d4074);
              (*pcVar3)();
            }
            if ((uVar22 == 0) || (uVar24 + uVar16 == (2 << (bVar4 & 0x1f)) + -1)) {
              if (DAT_018ddb0b != '\0') {
                FUN_016ddcc0(&DAT_018ddd48);
              }
              FUN_016d3ca8(&uStack_28,iVar17,uVar10);
              FUN_016dddc0(&DAT_018ddd48);
              if (unaff_r4 == 0) {
                return;
              }
              puVar9 = (undefined4 *)FUN_016d2bc8();
              uVar14 = *puVar9;
              FUN_016d6ac4(uStack_28,unaff_r4);
              *puVar9 = uVar14;
              return;
            }
            if (DAT_018ddb0b == '\0') {
              *(uint *)(iVar17 + 0x10) = uVar16 + uVar22;
              return;
            }
            puVar28 = (uint *)(iVar17 + 0x10);
            DataMemoryBarrier(0x1b);
            do {
              ExclusiveAccess(puVar28);
              uVar24 = *puVar28;
              if (uVar22 != uVar24) goto LAB_016d409c;
              bVar5 = (bool)hasExclusiveAccess(puVar28);
            } while (!bVar5);
            *puVar28 = uVar16 + uVar22;
LAB_016d409c:
            DataMemoryBarrier(0x1b);
            if (uVar22 == uVar24) {
              return;
            }
          } while( true );
        }
      }
      else {
        uVar10 = param_2[1];
        uVar24 = param_2[2];
        param_1[4] = *param_2;
        param_1[6] = uVar24;
        param_1[5] = uVar10;
        iVar27 = param_6[9];
        iVar25 = param_6[10];
        iVar23 = param_6[0xb];
        iVar12 = param_6[0xe];
        iVar18 = param_6[0xf];
        iVar20 = param_6[0x10];
        param_1[0xd] = param_6[0xd];
        param_1[0xe] = iVar12;
        param_1[0xf] = iVar18;
        param_1[0x10] = iVar20;
        iVar20 = param_6[0xc];
        iVar18 = param_6[7];
        param_1[2] = (int)local_40;
        iVar12 = param_6[0x11];
        *param_1 = (int)local_48;
        param_1[3] = local_3c;
        param_1[1] = (int)local_44;
        *(char *)(param_1 + 0x11) = (char)iVar12;
        param_1[10] = iVar25;
        param_1[0xb] = iVar23;
        param_1[0xc] = iVar20;
        param_1[7] = iVar18;
        param_1[8] = iVar17;
        param_1[9] = iVar27;
      }
      return;
    }
    if (puVar15 == (undefined1 *)0x5c) goto LAB_016b9960;
  }
  if (*param_6 == 0) {
    if (param_6[2] != 0) {
      puVar28 = (uint *)(param_6 + 3);
      goto LAB_016b9d58;
    }
    uVar24 = param_6[6];
    iVar17 = param_6[5];
    uVar16 = uVar24;
LAB_016b9fa4:
    uVar10 = uVar16;
    if (*param_2 - param_2[2] < uVar24) {
      FUN_016bd7fc(param_2,param_2[2],uVar24,1,1);
    }
  }
  else {
    puVar28 = (uint *)(param_6 + 1);
LAB_016b9d58:
    uVar24 = *puVar28;
    iVar17 = param_6[5];
    uVar10 = param_6[6];
    if (uVar24 != 0) {
      if (uVar24 < uVar10) {
        uVar16 = uVar10;
        if (*(char *)(iVar17 + uVar24) < -0x40) goto LAB_016ba5c4;
      }
      else {
        uVar16 = uVar24;
        if (uVar24 != uVar10) goto LAB_016ba5c4;
      }
      goto LAB_016b9fa4;
    }
    uVar24 = 0;
  }
  uVar16 = param_2[2];
  FUN_016dd1aa(param_2[1] + uVar16,iVar17,uVar24);
  uVar22 = param_6[0xc];
  param_2[2] = uVar16 + uVar24;
  FUN_016b5290(param_2,param_5,uVar22);
  pbVar26 = param_3;
  if (param_2[2] == uVar22) {
    uVar24 = param_6[8];
    if (uVar24 != 0) {
      if (uVar24 < uVar10) {
        if (*(char *)(iVar17 + uVar24) < -0x40) goto LAB_016ba5c4;
      }
      else if (uVar24 != uVar10) {
LAB_016ba5c4:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(iVar17,uVar10,0,uVar24,&DAT_018af070);
      }
    }
    cVar7 = FUN_016ba950(iVar17,uVar24);
    if (cVar7 == '\x02') {
      if (param_3 != param_4) {
        pbVar13 = param_3;
        do {
          pbVar11 = pbVar13 + 1;
          puVar15 = (undefined1 *)(uint)*pbVar13;
          if (0x7fffffff < (uint)(int)(char)*pbVar13) {
            if (puVar15 < (undefined1 *)0xe0) {
              puVar15 = (undefined1 *)(pbVar13[1] & 0x3f | ((uint)puVar15 & 0x1f) << 6);
              pbVar11 = pbVar13 + 2;
            }
            else {
              uVar24 = pbVar13[2] & 0x3f | (pbVar13[1] & 0x3f) << 6;
              if (puVar15 < (undefined1 *)0xf0) {
                puVar15 = (undefined1 *)(uVar24 | ((uint)puVar15 & 0x1f) << 0xc);
                pbVar11 = pbVar13 + 3;
              }
              else {
                puVar15 = (undefined1 *)
                          (pbVar13[3] & 0x3f | uVar24 << 6 | ((uint)puVar15 & 7) << 0x12);
                if (puVar15 == &DAT_00110000) break;
                pbVar11 = pbVar13 + 4;
              }
            }
          }
          if ((((undefined1 *)0xd < puVar15) || ((1 << ((uint)puVar15 & 0xff) & 0x2600U) == 0)) &&
             (puVar15 != &DAT_00110000)) goto LAB_016ba2f8;
          pbVar13 = pbVar11;
        } while (pbVar11 != param_4);
      }
    }
    else {
LAB_016ba2f8:
      uVar24 = uVar22;
      if (*param_2 == uVar22) {
        FUN_016bd7fc(param_2,uVar22,1,1,1);
        uVar24 = param_2[2];
      }
      *(undefined1 *)(param_2[1] + uVar24) = 0x2f;
      param_2[2] = uVar22 + 1;
    }
  }
LAB_016ba348:
  do {
    if (pbVar26 == param_4) goto LAB_016ba438;
    pbVar13 = pbVar26 + 1;
    puVar15 = (undefined1 *)(uint)*pbVar26;
    if (-1 < (char)*pbVar26) {
      if (&DAT_0000000e <= puVar15) goto LAB_016ba338;
LAB_016ba36c:
      puVar8 = &DAT_00110000;
      if ((1 << ((uint)puVar15 & 0xff) & 0x2600U) == 0) {
        puVar8 = puVar15;
      }
      pbVar26 = pbVar13;
      if (puVar8 != &DAT_00110000) break;
      goto LAB_016ba348;
    }
    if (puVar15 < (undefined1 *)0xe0) {
      puVar15 = (undefined1 *)(pbVar26[1] & 0x3f | ((uint)puVar15 & 0x1f) << 6);
      pbVar13 = pbVar26 + 2;
      if (&DAT_0000000e <= puVar15) goto LAB_016ba338;
      goto LAB_016ba36c;
    }
    uVar24 = pbVar26[2] & 0x3f | (pbVar26[1] & 0x3f) << 6;
    if (puVar15 < (undefined1 *)0xf0) {
      puVar15 = (undefined1 *)(uVar24 | ((uint)puVar15 & 0x1f) << 0xc);
      pbVar13 = pbVar26 + 3;
      if (&DAT_0000000e <= puVar15) goto LAB_016ba338;
      goto LAB_016ba36c;
    }
    puVar15 = (undefined1 *)(pbVar26[3] & 0x3f | uVar24 << 6 | ((uint)puVar15 & 7) << 0x12);
    if (puVar15 == &DAT_00110000) goto LAB_016ba438;
    pbVar13 = pbVar26 + 4;
    if (puVar15 <= &DAT_0000000d) goto LAB_016ba36c;
LAB_016ba338:
    pbVar26 = pbVar13;
    puVar8 = puVar15;
  } while (puVar15 == &DAT_00110000);
  if (puVar8 == (undefined1 *)0x2f) {
    local_48 = (byte *)CONCAT31(local_48._1_3_,1);
    uVar30 = FUN_016b3bfc(param_2,param_5,&local_48,uVar22,pbVar13,param_4);
  }
  else {
LAB_016ba438:
    local_48 = (byte *)CONCAT31(local_48._1_3_,1);
    uVar30 = FUN_016b3bfc(param_2,param_5,&local_48,uVar22,param_3,param_4);
  }
  local_48 = (byte *)*param_2;
  local_44 = (byte *)param_2[1];
  local_40 = (byte *)param_2[2];
  local_3c = param_2[3];
  local_38 = param_2[4];
  uStack_34 = param_2[5];
  uStack_30 = param_2[6];
  uStack_2c = param_2[7];
  uStack_28 = param_2[8];
  iVar17 = param_6[9];
  iVar12 = param_6[8];
  iVar20 = param_6[10];
  iVar18 = param_6[0xb];
  uVar2 = (undefined2)param_6[7];
  uVar1 = *(undefined2 *)((int)param_6 + 0x1e);
  uVar24 = uVar22;
LAB_016ba4b0:
  FUN_016b7738(param_1,&local_48,param_5,iVar12,iVar17,iVar20,iVar18,param_6 + 0xd,uVar2,uVar1,
               uVar24,uVar30);
  return;
}

