// FUN_01acd02c @ 01acd02c size=4420 calls_out=26 calls_in=1
// strings: 

void FUN_01acd02c(int *param_1,int *param_2,byte *param_3,byte *param_4,int *param_5)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined *puVar5;
  uint *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  byte *pbVar10;
  byte *pbVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  undefined1 uVar18;
  char cVar19;
  int iVar20;
  byte *pbVar21;
  bool bVar22;
  int iVar23;
  int iVar24;
  ulonglong uVar25;
  undefined8 uVar26;
  undefined1 local_88;
  uint local_84;
  uint local_80;
  byte *local_7c;
  byte *local_78;
  undefined4 local_70;
  undefined4 local_6c;
  uint local_68;
  uint local_64;
  uint local_60;
  int local_5c;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  undefined1 auStack_48 [20];
  undefined2 local_34;
  undefined1 local_32;
  char local_30;
  undefined2 uStack_2f;
  undefined4 uStack_2d;
  undefined1 uStack_29;
  undefined1 uStack_25;
  
  local_70 = param_3;
  local_6c = param_4;
  puVar2 = (undefined1 *)FUN_01ac9ff4(&local_70);
  pbVar11 = local_6c;
  pbVar10 = local_70;
  if (puVar2 == (undefined1 *)0x2f || puVar2 == (undefined1 *)0x5c) {
    if ((puVar2 == (undefined1 *)0x5c) && (param_2[6] != 0)) {
      (**(code **)(param_2[7] + 0x14))(param_2[6],0);
    }
    local_70 = pbVar10;
    local_6c = pbVar11;
    iVar3 = FUN_01ac9ff4(&local_70);
    pbVar21 = local_6c;
    local_78 = local_70;
    local_7c = param_4;
    if (iVar3 == 0x2f || iVar3 == 0x5c) {
      if ((iVar3 == 0x5c) && (param_2[6] != 0)) {
        (**(code **)(param_2[7] + 0x14))(param_2[6],0);
      }
      iVar3 = param_2[2];
      if ((uint)(*param_2 - iVar3) < 7) {
        FUN_01af7b44(param_2,iVar3,7,1,1);
        iVar3 = param_2[2];
      }
      iVar4 = param_2[1];
      uVar16 = (int)pbVar21 - (int)local_78;
      *(undefined4 *)(iVar4 + iVar3) = 0x656c6966;
      *(undefined4 *)(iVar4 + iVar3 + 3) = 0x2f2f3a65;
      param_2[2] = param_2[2] + 7;
      uStack_29 = (undefined1)((uint)pbVar21 >> 0x18);
      local_30 = (char)local_78;
      uStack_2d._0_1_ = (undefined1)((uint)local_78 >> 0x18);
      uStack_2f = (undefined2)((uint)local_78 >> 8);
      if (uVar16 == 0) {
        iVar3 = 0;
        uVar15 = 0;
LAB_01acd2d4:
        uStack_2d = CONCAT31((int3)pbVar21,(undefined1)uStack_2d);
        iVar3 = iVar3 + 1;
        do {
          iVar3 = iVar3 + -1;
          if (iVar3 == 0) break;
          puVar2 = (undefined1 *)FUN_01ac9ff4(&local_30);
        } while (puVar2 != &DAT_00110000);
        if (uVar15 != 0) {
          puVar5 = &DAT_01d2fcd8;
          pbVar10 = local_78;
          if (uVar15 < uVar16) {
            if ((char)local_78[uVar15] < -0x40) goto LAB_01acdd34;
            bVar22 = false;
            uVar16 = uVar15;
          }
          else {
            if (uVar15 != uVar16) {
LAB_01acdd34:
                    /* WARNING: Subroutine does not return */
              FUN_012fb514(local_78,uVar16,0,uVar15,puVar5);
            }
            bVar22 = false;
          }
          goto LAB_01acd600;
        }
        local_78 = (byte *)CONCAT13((undefined1)uStack_2d,CONCAT21(uStack_2f,local_30));
        pbVar21 = (byte *)CONCAT13(uStack_29,uStack_2d._1_3_);
LAB_01acd7c8:
        uVar16 = 0;
        iVar3 = 1;
        cVar19 = '\0';
        bVar22 = false;
      }
      else {
        bVar22 = false;
        iVar3 = 0;
        uVar15 = 0;
        pbVar10 = local_78;
        do {
          pbVar11 = pbVar10 + 1;
          puVar2 = (undefined1 *)(uint)*pbVar10;
          if (0x7fffffff < (uint)(int)(char)*pbVar10) {
            if (puVar2 < (undefined1 *)0xe0) {
              puVar2 = (undefined1 *)(pbVar10[1] & 0x3f | ((uint)puVar2 & 0x1f) << 6);
              pbVar11 = pbVar10 + 2;
            }
            else {
              uVar12 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
              if (puVar2 < (undefined1 *)0xf0) {
                puVar2 = (undefined1 *)(uVar12 | ((uint)puVar2 & 0x1f) << 0xc);
                pbVar11 = pbVar10 + 3;
              }
              else {
                pbVar11 = pbVar10 + 4;
                puVar2 = (undefined1 *)
                         (pbVar10[3] & 0x3f | uVar12 << 6 | ((uint)puVar2 & 7) << 0x12);
              }
            }
          }
          iVar4 = 1;
          if (puVar2 < (undefined1 *)0xd) {
            if ((undefined1 *)0x1 < puVar2 + -9) goto LAB_01acd208;
LAB_01acd1d4:
            bVar22 = true;
          }
          else {
            if (puVar2 < (undefined1 *)0x23) {
              if (puVar2 == (undefined1 *)0xd) goto LAB_01acd1d4;
            }
            else if (puVar2 < (undefined1 *)0x3f) {
              if (puVar2 == (undefined1 *)0x23 || puVar2 == (undefined1 *)0x2f) break;
            }
            else if ((puVar2 == (undefined1 *)0x3f) ||
                    (puVar2 == (undefined1 *)0x5c || puVar2 == &DAT_00110000)) break;
LAB_01acd208:
            iVar3 = iVar3 + 1;
            if ((undefined1 *)0x7f < puVar2) {
              iVar4 = 2;
            }
            if (((undefined1 *)0x7ff < puVar2) && (iVar4 = 4, puVar2 < (undefined1 *)0x10000)) {
              iVar4 = 3;
            }
          }
          uVar15 = iVar4 + uVar15;
          pbVar10 = pbVar11;
        } while (pbVar11 != pbVar21);
        uStack_2d = CONCAT31((int3)pbVar21,(undefined1)uStack_2d);
        if (!bVar22) goto LAB_01acd2d4;
        FUN_01ad0838(&local_70,&local_30);
        bVar22 = true;
        pbVar10 = local_6c;
        uVar16 = local_68;
LAB_01acd600:
        if (uVar16 == 2) {
          uVar16 = 2;
          if ((0x19 < (*pbVar10 & 0xdf) - 0x41) || (pbVar10[1] != 0x3a && pbVar10[1] != 0x7c)) {
LAB_01acdd54:
            uVar9 = 1;
            iVar3 = FUN_01298504(uVar16,1);
            if (iVar3 == 0) {
LAB_01acd650:
                    /* WARNING: Subroutine does not return */
              FUN_00664620(uVar9,uVar16);
            }
            goto LAB_01acdd70;
          }
          if (!bVar22) goto LAB_01acd7c8;
          uVar16 = 0;
          iVar3 = 1;
LAB_01acdd94:
          FUN_019bb7e0(local_70,pbVar10);
        }
        else {
          if ((int)uVar16 < 0) {
            uVar9 = 0;
            goto LAB_01acd650;
          }
          if (uVar16 != 0) goto LAB_01acdd54;
          iVar3 = 1;
          uVar16 = 0;
LAB_01acdd70:
          FUN_01bed4e2(iVar3,pbVar10,uVar16);
          pbVar21 = (byte *)CONCAT13(uStack_29,uStack_2d._1_3_);
          local_78 = (byte *)CONCAT13((undefined1)uStack_2d,CONCAT21(uStack_2f,local_30));
          if (bVar22) goto LAB_01acdd94;
        }
        if (uVar16 == 0) {
LAB_01acdeec:
          cVar19 = '\0';
          bVar22 = false;
        }
        else {
          FUN_01acf8a4(&local_70,iVar3,uVar16);
          uVar7 = local_60;
          uVar12 = local_64;
          uVar15 = local_68;
          pbVar11 = local_6c;
          pbVar10 = local_70;
          uVar18 = local_70._1_1_;
          if (((uint)local_70 & 0xff) == 3) {
            FUN_019bb7e0(uVar16,iVar3);
            *param_1 = 2;
            *(undefined1 *)(param_1 + 1) = uVar18;
            goto LAB_01ace050;
          }
          uVar1 = (uint)local_70 >> 0x10;
          if (((uint)local_70 & 0xff) == 0 && local_64 == 9) {
            local_80 = local_68;
            local_7c = local_6c;
            iVar4 = thunk_FUN_01bed842(local_68,&DAT_005327b6,9);
            local_84 = uVar1;
            if (iVar4 == 0) {
              FUN_019bb7e0(pbVar11,uVar15);
              goto LAB_01acdeec;
            }
          }
          uStack_29 = 1;
          local_30 = (char)&local_70;
          uStack_2f = (undefined2)((uint)&local_70 >> 8);
          uStack_2d._0_1_ = (undefined1)((uint)&local_70 >> 0x18);
          uStack_2d = CONCAT31(0xad0118,(undefined1)uStack_2d);
          local_70 = pbVar10;
          local_6c = pbVar11;
          local_68 = uVar15;
          local_64 = uVar12;
          local_60 = uVar7;
          iVar4 = FUN_012fa178(param_2,&DAT_01d2fdf8,&DAT_00590e5f,&local_30);
          uVar15 = local_64;
          if (iVar4 != 0) {
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533467,0x2b,&uStack_25,&DAT_01d2fce8,&DAT_01d2fb78);
          }
          puVar8 = (undefined4 *)((uint)&local_70 | 1);
          uVar9 = *puVar8;
          uStack_2d = *(undefined4 *)((int)puVar8 + 3);
          local_30 = (char)uVar9;
          uStack_2f = (undefined2)((uint)uVar9 >> 8);
          if (((uint)local_70 & 0xff) == 0) {
            FUN_019bb7e0(uStack_2d);
            cVar19 = '\0';
            if (uVar15 != 0) {
              cVar19 = '\x01';
            }
          }
          else if (((uint)local_70 & 0xff) == 1) {
            local_7c = (byte *)CONCAT13((undefined1)uStack_2d,(int3)uVar9);
            cVar19 = '\x02';
          }
          else {
            local_84 = local_68;
            local_7c = (byte *)CONCAT13((undefined1)uStack_2d,(int3)uVar9);
            local_80 = local_64;
            cVar19 = '\x03';
            local_88 = (undefined1)local_60;
            local_34 = local_6c._1_2_;
            local_32 = local_6c._3_1_;
          }
          bVar22 = true;
        }
      }
      FUN_019bb7e0(uVar16,iVar3);
      iVar3 = param_2[2];
      local_30 = cVar19 != '\0';
      if (bVar22) {
        uVar26 = FUN_01acb888(param_2,0,&local_30,local_78,pbVar21);
      }
      else {
        iVar4 = iVar3;
        if (*param_2 == iVar3) {
          FUN_01af7b44(param_2,iVar3,1,1,1);
          iVar4 = param_2[2];
        }
        *(undefined1 *)(param_2[1] + iVar4) = 0x2f;
        param_2[2] = iVar3 + 1;
        uVar26 = FUN_01aca0cc(param_2,0,&local_30,iVar3,local_78,pbVar21);
      }
      if (local_30 == '\0') {
        FUN_01ad077c(&local_70,param_2,7,iVar3,0x1d2fa88);
        uVar16 = local_64;
        uVar15 = local_68;
        if ((local_64 <= local_60) && (uVar12 = *(uint *)(local_68 + 8), local_60 <= uVar12)) {
          *(uint *)(local_68 + 8) = local_64;
          if (local_60 == local_64) {
            if (uVar12 != local_60) goto LAB_01ace004;
          }
          else if (uVar12 != local_60) {
            FUN_01bed864(*(int *)(local_68 + 4) + local_64,*(int *)(local_68 + 4) + local_60,
                         uVar12 - local_60);
LAB_01ace004:
            *(uint *)(uVar15 + 8) = (uVar12 - local_60) + uVar16;
          }
        }
        iVar3 = 7;
        cVar19 = '\0';
      }
      FUN_01aceee8(&local_70,param_2,0,4,uVar26);
      if (local_70 != (byte *)0x2) {
        iVar4 = param_2[1];
        iVar14 = param_2[2];
        param_1[4] = *param_2;
        param_1[5] = iVar4;
        param_1[6] = iVar14;
        *(byte **)((int)param_1 + 0x35) = local_7c;
        *(undefined1 *)(param_1 + 0x11) = local_88;
        param_1[0xf] = local_84;
        param_1[0x10] = local_80;
        param_1[8] = 4;
        *(undefined2 *)(param_1 + 7) = 0;
        param_1[9] = 7;
        param_1[10] = 7;
        *(char *)(param_1 + 0xd) = cVar19;
        param_1[0xb] = iVar3;
        param_1[0xc] = iVar3;
        *param_1 = (int)local_70;
        param_1[1] = (int)local_6c;
        param_1[2] = local_68;
        param_1[3] = local_64;
        *(undefined2 *)((int)param_1 + 0x39) = local_34;
        *(undefined1 *)((int)param_1 + 0x3b) = local_32;
        return;
      }
    }
    else {
      iVar3 = param_2[2];
      if ((uint)(*param_2 - iVar3) < 7) {
        FUN_01af7b44(param_2,iVar3,7,1,1);
        iVar3 = param_2[2];
      }
      iVar4 = param_2[1];
      *(undefined4 *)(iVar4 + iVar3) = 0x656c6966;
      *(undefined4 *)(iVar4 + iVar3 + 3) = 0x2f2f3a65;
      param_2[2] = param_2[2] + 7;
      iVar3 = FUN_01acf07c(pbVar10,pbVar11);
      uVar18 = 0;
      local_78 = (byte *)0x7;
      if ((param_5 != (int *)0x0) && (iVar3 == 0)) {
        uVar26 = FUN_01ac96dc(param_5);
        uVar26 = FUN_01ad01c4((int)uVar26,(int)((ulonglong)uVar26 >> 0x20),0x2f);
        uVar15 = (uint)((ulonglong)uVar26 >> 0x20);
        pbVar21 = (byte *)uVar26;
        if (pbVar21 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(0x1d2fa98);
        }
        local_5c = 0x2f;
        uVar16 = 0;
        do {
          uVar12 = uVar15 - uVar16;
          if (uVar12 < 8) {
            uVar7 = 0;
            if (uVar12 == 0) {
              uVar25 = 0;
            }
            else {
              do {
                if ((pbVar21 + uVar16)[uVar7] == 0x2f) {
                  uVar25 = CONCAT44(uVar7,1);
                  goto LAB_01acd44c;
                }
                uVar7 = uVar7 + 1;
              } while (uVar12 != uVar7);
              uVar25 = (ulonglong)uVar12 << 0x20;
            }
          }
          else {
            uVar25 = FUN_01307168(0x2f,pbVar21 + uVar16);
          }
LAB_01acd44c:
          if ((uVar25 & 1) == 0) break;
          uVar12 = uVar16 + (int)(uVar25 >> 0x20);
          uVar16 = uVar12 + 1;
          if (((uVar16 != 0) && (uVar16 <= uVar15)) && (pbVar21[uVar12] == 0x2f)) goto LAB_01acd484;
        } while (uVar16 <= uVar15);
        uVar12 = uVar15;
LAB_01acd484:
        if (((uVar12 == 2) && ((*pbVar21 & 0xdf) - 0x41 < 0x1a)) && (pbVar21[1] == 0x3a)) {
          iVar4 = param_2[2];
          iVar3 = iVar4;
          if (*param_2 == iVar4) {
            FUN_01af7b44(param_2,iVar4,1,1,1);
            iVar3 = param_2[2];
          }
          *(undefined1 *)(param_2[1] + iVar3) = 0x2f;
          iVar4 = iVar4 + 1;
          param_2[2] = iVar4;
          if ((uint)(*param_2 - iVar4) < 2) {
            FUN_01af7b44(param_2,iVar4,2,1,1);
            iVar4 = param_2[2];
          }
          *(undefined2 *)(param_2[1] + iVar4) = *(undefined2 *)pbVar21;
          param_2[2] = param_2[2] + 2;
        }
        else {
          uVar26 = FUN_01ac9ac0(param_5);
          uVar15 = (uint)((ulonglong)uVar26 >> 0x20);
          if ((int)uVar26 != 0) {
            iVar3 = param_2[2];
            if ((uint)(*param_2 - iVar3) < uVar15) {
              FUN_01af7b44(param_2,iVar3,uVar15,1,1);
              iVar3 = param_2[2];
            }
            FUN_01bed4e2(param_2[1] + iVar3,(int)uVar26,uVar15);
            local_78 = (byte *)(param_2[2] + uVar15);
            param_2[2] = (int)local_78;
            uVar18 = (undefined1)param_5[0xd];
            FUN_01bed4e2(auStack_48,(int)param_5 + 0x35,0x10);
            goto LAB_01acd6e4;
          }
        }
        uVar18 = 0;
      }
LAB_01acd6e4:
      if ((((undefined1 *)0x1c < puVar2 + -0x23) ||
          ((1 << ((uint)(puVar2 + -0x23) & 0xff) & 0x10001001U) == 0)) &&
         (puVar2 != (undefined1 *)0x5c)) {
        local_7c = pbVar11;
        param_3 = pbVar10;
      }
      local_70 = (byte *)((uint)local_70 & 0xffffff00);
      uVar26 = FUN_01aca0cc(param_2,0,&local_70,local_78,param_3,local_7c);
      FUN_01aceee8(&local_70,param_2,0,4,uVar26);
      pbVar11 = local_6c;
      pbVar10 = local_70;
      if (local_70 != (byte *)0x2) {
        iVar3 = param_2[1];
        iVar4 = param_2[2];
        param_1[4] = *param_2;
        param_1[5] = iVar3;
        param_1[6] = iVar4;
        FUN_01bed4e2((int)param_1 + 0x35,auStack_48,0x10);
        param_1[9] = 7;
        param_1[10] = 7;
        param_1[0xb] = (int)local_78;
        param_1[0xc] = (int)local_78;
        *(undefined1 *)(param_1 + 0xd) = uVar18;
        param_1[8] = 4;
        *(undefined2 *)(param_1 + 7) = 0;
        *param_1 = (int)pbVar10;
        param_1[1] = (int)pbVar11;
        param_1[2] = local_68;
        param_1[3] = local_64;
        return;
      }
    }
  }
  else {
    if (puVar2 == &DAT_00110000) {
      if (param_5 != (int *)0x0) {
        if (param_5[2] != 1) {
          local_78 = (byte *)param_5[5];
          uVar15 = param_5[6];
          goto LAB_01acd904;
        }
        uVar15 = param_5[3];
        local_78 = (byte *)param_5[5];
        if (uVar15 == 0) {
          uVar15 = 0;
          goto LAB_01acd918;
        }
        uVar16 = param_5[6];
        if (uVar15 < uVar16) {
          if (-0x41 < (char)local_78[uVar15]) goto LAB_01acd904;
        }
        else if (uVar15 == uVar16) {
LAB_01acd904:
          if ((uint)(*param_2 - param_2[2]) < uVar15) {
            FUN_01af7b44(param_2,param_2[2],uVar15,1,1);
          }
LAB_01acd918:
          FUN_01bed4e2(param_2[1] + param_2[2],local_78,uVar15);
          param_2[2] = param_2[2] + uVar15;
          iVar3 = param_2[1];
          iVar4 = param_2[2];
          param_1[4] = *param_2;
          param_1[5] = iVar3;
          param_1[6] = iVar4;
          iVar23 = param_5[8];
          iVar24 = param_5[9];
          iVar17 = param_5[10];
          iVar20 = param_5[0xb];
          iVar3 = param_5[0xe];
          iVar4 = param_5[0xf];
          iVar14 = param_5[0x10];
          param_1[0xd] = param_5[0xd];
          param_1[0xe] = iVar3;
          param_1[0xf] = iVar4;
          param_1[0x10] = iVar14;
          iVar3 = param_5[1];
          iVar14 = param_5[7];
          iVar4 = *param_5;
          iVar13 = param_5[0xc];
          *(char *)(param_1 + 0x11) = (char)param_5[0x11];
          param_1[7] = iVar14;
          param_1[8] = iVar23;
          param_1[9] = iVar24;
          param_1[10] = iVar17;
          param_1[0xb] = iVar20;
          param_1[0xc] = iVar13;
          *param_1 = iVar4;
          param_1[1] = iVar3;
          param_1[2] = 0;
          return;
        }
        puVar5 = (undefined *)0x1d2faa8;
        goto LAB_01acdd34;
      }
LAB_01acd514:
      iVar3 = param_2[2];
      if ((uint)(*param_2 - iVar3) < 8) {
        FUN_01af7b44(param_2,iVar3,8,1,1);
        iVar3 = param_2[2];
      }
      iVar4 = param_2[1];
      *(undefined4 *)(iVar4 + iVar3) = 0x656c6966;
      ((undefined4 *)(iVar4 + iVar3))[1] = 0x2f2f2f3a;
      param_2[2] = param_2[2] + 8;
      local_70 = (byte *)((uint)local_70 & 0xffffff00);
      uVar26 = FUN_01aca0cc(param_2,0,&local_70,7,param_3,param_4);
      FUN_01aceee8(&local_70,param_2,0,4,uVar26);
    }
    else {
      if (param_5 == (int *)0x0) goto LAB_01acd514;
      if (puVar2 == (undefined1 *)0x23) {
        local_70 = (byte *)*param_2;
        local_6c = (byte *)param_2[1];
        local_68 = param_2[2];
        local_64 = param_2[3];
        local_60 = param_2[4];
        local_5c = param_2[5];
        iStack_58 = param_2[6];
        iStack_54 = param_2[7];
        iStack_50 = param_2[8];
        FUN_01acec04(param_1,&local_70,param_5,param_3,param_4);
        return;
      }
      if (puVar2 == (undefined1 *)0x3f) {
        if (*param_5 == 0) {
          if (param_5[2] != 0) {
            puVar6 = (uint *)(param_5 + 3);
            goto LAB_01acd8b4;
          }
          local_78 = (byte *)param_5[5];
          uVar15 = param_5[6];
          goto LAB_01acda04;
        }
        puVar6 = (uint *)(param_5 + 1);
LAB_01acd8b4:
        uVar15 = *puVar6;
        local_78 = (byte *)param_5[5];
        if (uVar15 != 0) {
          uVar16 = param_5[6];
          if (uVar15 < uVar16) {
            if (-0x41 < (char)local_78[uVar15]) goto LAB_01acda04;
          }
          else if (uVar15 == uVar16) {
LAB_01acda04:
            if ((uint)(*param_2 - param_2[2]) < uVar15) {
              FUN_01af7b44(param_2,param_2[2],uVar15,1,1);
            }
            goto LAB_01acda1c;
          }
LAB_01acdd28:
          puVar5 = &DAT_01d2fde8;
          goto LAB_01acdd34;
        }
        uVar15 = 0;
LAB_01acda1c:
        FUN_01bed4e2(param_2[1] + param_2[2],local_78,uVar15);
        param_2[2] = param_2[2] + uVar15;
        iVar3 = param_5[8];
        FUN_01aceee8(&local_70,param_2,0,iVar3,param_3,param_4);
        if (local_70 != (byte *)0x2) {
          iVar4 = param_2[1];
          iVar14 = param_2[2];
          param_1[4] = *param_2;
          param_1[5] = iVar4;
          param_1[6] = iVar14;
          iVar20 = param_5[9];
          iVar23 = param_5[10];
          iVar17 = param_5[0xb];
          iVar4 = param_5[0xe];
          iVar14 = param_5[0xf];
          iVar13 = param_5[0x10];
          param_1[0xd] = param_5[0xd];
          param_1[0xe] = iVar4;
          param_1[0xf] = iVar14;
          param_1[0x10] = iVar13;
          *param_1 = (int)local_70;
          iVar14 = param_5[7];
          param_1[1] = (int)local_6c;
          param_1[2] = local_68;
          iVar13 = param_5[0xc];
          iVar4 = param_5[0x11];
          param_1[3] = local_64;
          *(char *)(param_1 + 0x11) = (char)iVar4;
          param_1[7] = iVar14;
          param_1[8] = iVar3;
          param_1[9] = iVar20;
          param_1[10] = iVar23;
          param_1[0xb] = iVar17;
          param_1[0xc] = iVar13;
          return;
        }
        goto LAB_01ace03c;
      }
      iVar3 = FUN_01acf07c(param_3,param_4);
      if (iVar3 == 0) {
        if (*param_5 == 0) {
          if (param_5[2] != 0) {
            puVar6 = (uint *)(param_5 + 3);
            goto LAB_01acd9d0;
          }
          local_78 = (byte *)param_5[5];
          uVar15 = param_5[6];
          goto LAB_01acdb04;
        }
        puVar6 = (uint *)(param_5 + 1);
LAB_01acd9d0:
        uVar15 = *puVar6;
        local_78 = (byte *)param_5[5];
        if (uVar15 == 0) {
          uVar15 = 0;
          goto LAB_01acdb1c;
        }
        uVar16 = param_5[6];
        if (uVar15 < uVar16) {
          if (-0x41 < (char)local_78[uVar15]) goto LAB_01acdb04;
        }
        else if (uVar15 == uVar16) {
LAB_01acdb04:
          if ((uint)(*param_2 - param_2[2]) < uVar15) {
            FUN_01af7b44(param_2,param_2[2],uVar15,1,1);
          }
LAB_01acdb1c:
          FUN_01bed4e2(param_2[1] + param_2[2],local_78,uVar15);
          iVar3 = param_5[0xc];
          param_2[2] = param_2[2] + uVar15;
          FUN_01acb16c(param_2,0,iVar3);
          local_70 = (byte *)CONCAT31(local_70._1_3_,1);
          uVar26 = FUN_01aca0cc(param_2,0,&local_70,iVar3,param_3,param_4);
          local_70 = (byte *)*param_2;
          local_6c = (byte *)param_2[1];
          local_68 = param_2[2];
          local_64 = param_2[3];
          local_60 = param_2[4];
          local_5c = param_2[5];
          iStack_58 = param_2[6];
          iStack_54 = param_2[7];
          iStack_50 = param_2[8];
          FUN_01accbb8(param_1,&local_70,0,param_5[8],param_5[9],param_5[10],param_5[0xb],
                       param_5 + 0xd,(short)param_5[7],*(undefined2 *)((int)param_5 + 0x1e),iVar3,
                       uVar26);
          return;
        }
        goto LAB_01acdd28;
      }
      iVar3 = param_2[2];
      if ((uint)(*param_2 - iVar3) < 8) {
        FUN_01af7b44(param_2,iVar3,8,1,1);
        iVar3 = param_2[2];
      }
      iVar4 = param_2[1];
      *(undefined4 *)(iVar4 + iVar3) = 0x656c6966;
      ((undefined4 *)(iVar4 + iVar3))[1] = 0x2f2f2f3a;
      param_2[2] = param_2[2] + 8;
      local_70 = (byte *)((uint)local_70 & 0xffffff00);
      uVar26 = FUN_01aca0cc(param_2,0,&local_70,7,param_3,param_4);
      FUN_01aceee8(&local_70,param_2,0,4,uVar26);
    }
    if (local_70 != (byte *)0x2) {
      iVar3 = param_2[1];
      iVar4 = param_2[2];
      param_1[4] = *param_2;
      param_1[5] = iVar3;
      param_1[6] = iVar4;
      *(undefined1 *)(param_1 + 0xd) = 0;
      param_1[8] = 4;
      param_1[9] = 7;
      param_1[10] = 7;
      param_1[0xb] = 7;
      param_1[0xc] = 7;
      *(undefined2 *)(param_1 + 7) = 0;
      *param_1 = (int)local_70;
      param_1[1] = (int)local_6c;
      param_1[2] = local_68;
      param_1[3] = local_64;
      return;
    }
  }
LAB_01ace03c:
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = (undefined1)local_6c;
LAB_01ace050:
  FUN_019bb7e0(*param_2,param_2[1]);
  return;
}

