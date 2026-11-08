// FUN_0062b16c @ 0062b16c size=3480 calls_out=18 calls_in=0
// strings: /pro

undefined4 FUN_0062b16c(uint *param_1,undefined4 param_2,int *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  undefined4 uVar3;
  byte *pbVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  uint uVar8;
  int iVar9;
  byte *pbVar10;
  code *pcVar11;
  undefined4 *puVar12;
  byte bVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  byte *pbVar17;
  int iVar18;
  int *piVar19;
  uint uVar20;
  uint uVar21;
  byte *pbVar22;
  uint uVar23;
  byte *pbVar24;
  byte *pbVar25;
  undefined4 *puVar26;
  undefined8 uVar27;
  ulonglong uVar28;
  ulonglong uVar29;
  ulonglong uVar30;
  ulonglong uVar31;
  undefined1 *local_c8;
  byte *local_c0;
  byte *local_bc;
  byte *local_b8;
  byte *local_b4;
  byte *local_b0;
  byte *local_ac;
  byte *local_a8;
  byte *local_a4;
  byte *local_94;
  undefined1 *local_90;
  byte *local_8c;
  byte *local_88;
  int local_84;
  undefined4 *local_80;
  byte *local_7c;
  byte *local_78;
  undefined4 *local_74;
  byte *local_70;
  byte *local_6c;
  byte *local_68;
  byte *local_64;
  uint local_60;
  byte *local_5c;
  byte *local_58;
  undefined2 local_54;
  int local_4c;
  byte *local_48;
  int local_44;
  byte *local_40;
  undefined8 local_3c;
  undefined4 local_34;
  byte *local_30;
  undefined4 local_2c;
  undefined1 local_28;
  
  uVar8 = param_1[2];
  pbVar17 = (byte *)param_1[1];
  uVar23 = *param_1;
  iVar9 = param_3[2];
  pbVar24 = (byte *)(uint)(ushort)param_1[3];
  if (pbVar17 == (byte *)0x0) {
    if (uVar23 == 0) goto LAB_0062b1f8;
    if (iVar9 == 0) goto LAB_0062b24c;
    puVar7 = (undefined4 *)&DAT_00000001;
    pbVar4 = (byte *)0x0;
    pbVar22 = (byte *)0x0;
  }
  else if (uVar23 == 0) {
LAB_0062b1f8:
    FUN_015e6ab4(&local_78);
    pbVar17 = local_70;
    if (local_78 != &DAT_80000000) {
      puVar7 = local_74;
      pbVar22 = local_78;
      pbVar4 = local_70;
      goto LAB_0062bd1c;
    }
    if ((char)local_74 != '\x03') {
      puVar7 = (undefined4 *)&DAT_00000001;
      pbVar22 = (byte *)0x0;
      pbVar4 = (byte *)0x0;
      local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
      goto LAB_0062bd1c;
    }
    puVar7 = *(undefined4 **)(local_70 + 4);
    uVar5 = *(undefined4 *)local_70;
    if ((code *)*puVar7 != (code *)0x0) {
      (*(code *)*puVar7)(uVar5);
    }
LAB_0062bcb8:
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar5);
    }
    thunk_FUN_016d3fb4(pbVar17);
    puVar7 = (undefined4 *)&DAT_00000001;
    pbVar22 = (byte *)0x0;
    pbVar4 = (byte *)0x0;
  }
  else {
    if (iVar9 == 0) {
      param_1 = (uint *)(uint)*pbVar17;
    }
    if (iVar9 != 0 || param_1 != (uint *)0x0) {
      pbVar4 = (byte *)FUN_016dd8a2(pbVar17);
      if ((int)pbVar4 < 0) {
        uVar5 = 0;
        pbVar4 = pbVar24;
LAB_0062b1c8:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar5,pbVar4);
      }
      if (pbVar4 == (byte *)0x0) {
        pbVar22 = (byte *)0x0;
        puVar7 = (undefined4 *)&DAT_00000001;
      }
      else {
        puVar7 = (undefined4 *)thunk_FUN_016d4a50(pbVar4);
        if (puVar7 == (undefined4 *)0x0) {
          uVar5 = 1;
          goto LAB_0062b1c8;
        }
        pbVar22 = pbVar4;
      }
      FUN_016dd1aa(puVar7,pbVar17,pbVar4);
      goto LAB_0062bd18;
    }
LAB_0062b24c:
    local_8c = (byte *)0x0;
    local_90 = &DAT_00000004;
    local_94 = (byte *)0x0;
    local_78 = (byte *)0x0;
    local_6c = (byte *)((uint)local_6c & 0xffff0000);
    local_74 = (undefined4 *)&DAT_000001b6;
    local_70 = &DAT_00000001;
    FUN_015ec1bc(&local_40,&local_78,"/pro",0xf);
    pbVar17 = (byte *)local_3c;
    if ((byte)local_40 == 4) {
      local_88 = (byte *)local_3c;
      local_7c = (byte *)0x0;
      local_80 = (undefined4 *)&DAT_00000001;
      local_84 = 0;
      FUN_015c4bfc(&local_78,&local_88,&local_84);
      puVar7 = local_74;
      if ((byte)local_78 != 4) {
        if (2 < (byte)local_78) {
          uVar5 = *local_74;
          puVar26 = (undefined4 *)local_74[1];
          pcVar11 = (code *)*puVar26;
          if (pcVar11 != (code *)0x0) {
            (*pcVar11)(uVar5);
          }
          if (puVar26[1] != 0) {
            thunk_FUN_016d3fb4(uVar5);
          }
          thunk_FUN_016d3fb4(puVar7);
        }
        pbVar25 = (byte *)0x0;
        local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
joined_r0x0062bc08:
        if (local_84 != 0) {
          thunk_FUN_016d3fb4(local_80);
        }
        FUN_016dffb2(pbVar17);
        local_c8 = local_90;
        goto LAB_0062bc20;
      }
      local_74 = local_80;
      local_70 = local_7c;
      local_6c = (byte *)0x0;
      local_c8 = &DAT_00000004;
      local_58 = local_7c;
      pbVar25 = (byte *)0x0;
      local_68 = local_7c;
      local_60 = CONCAT31(local_60._1_3_,1);
      local_54 = 0;
      local_5c = (byte *)0x0;
      local_64 = (byte *)0xa;
      local_78 = &DAT_0000000a;
      do {
        puVar7 = local_74;
        FUN_0062a644(&local_40,&local_78);
        local_a4 = local_5c;
        if (local_40 == &DAT_00000001) {
          local_5c = local_3c._4_4_;
          pbVar22 = local_3c._4_4_ + -(int)local_a4;
        }
        else {
          if (local_54._1_1_ != '\0') break;
          local_54 = CONCAT11(1,(char)local_54);
          if (((char)local_54 != '\x01') && (local_58 == local_5c)) break;
          pbVar22 = local_58 + -(int)local_5c;
          puVar7 = local_74;
        }
        local_a4 = (byte *)((int)puVar7 + (int)local_a4);
        pbVar4 = pbVar22;
        if ((pbVar22 != (byte *)0x0) && ((local_a4 + (int)pbVar22)[-1] == 10)) {
          pbVar4 = pbVar22 + -1;
          if (pbVar4 == (byte *)0x0) {
            pbVar4 = (byte *)0x0;
          }
          else if ((local_a4 + (int)pbVar4)[-1] == 0xd) {
            pbVar4 = pbVar22 + -2;
          }
        }
        local_3c = FUN_00f6aec0(local_a4);
        local_a8 = (byte *)((ulonglong)local_3c >> 0x20);
        pbVar22 = (byte *)local_3c;
        local_34 = 0;
        local_28 = 1;
        local_40 = &DAT_00000020;
        local_2c = 0x20;
        local_30 = local_a8;
        FUN_0062a644(&local_4c,&local_40);
        if (local_4c == 0 || pbVar22 == (byte *)0x0) {
          local_a8 = (byte *)0x0;
          local_b4 = &DAT_00000001;
        }
        else {
          local_a8 = local_a8 + -local_44;
          local_b4 = pbVar22 + local_44;
          local_a4 = pbVar22;
          pbVar4 = local_48;
        }
        if (pbVar4 == (byte *)0x0) goto joined_r0x0062bc08;
        uVar27 = FUN_00f6aec0(local_b4,local_a8);
        local_ac = (byte *)((ulonglong)uVar27 >> 0x20);
        pbVar22 = (byte *)uVar27;
        local_34 = 0;
        local_28 = 1;
        local_40 = &DAT_00000020;
        local_2c = 0x20;
        local_30 = local_ac;
        local_3c = uVar27;
        FUN_0062a644(&local_4c,&local_40);
        if (local_4c == 0 || pbVar22 == (byte *)0x0) {
          local_ac = (byte *)0x0;
          local_b8 = &DAT_00000001;
        }
        else {
          local_ac = local_ac + -local_44;
          local_b8 = pbVar22 + local_44;
          local_b4 = pbVar22;
          local_a8 = local_48;
        }
        if (local_a8 == (byte *)0x0) goto joined_r0x0062bc08;
        uVar27 = FUN_00f6aec0(local_b8,local_ac);
        pbVar22 = (byte *)((ulonglong)uVar27 >> 0x20);
        pbVar10 = (byte *)uVar27;
        local_34 = 0;
        local_28 = 1;
        local_40 = &DAT_00000020;
        local_2c = 0x20;
        local_30 = pbVar22;
        local_3c = uVar27;
        FUN_0062a644(&local_4c,&local_40);
        if (local_4c == 0 || pbVar10 == (byte *)0x0) {
          pbVar22 = (byte *)0x0;
          local_bc = &DAT_00000001;
        }
        else {
          pbVar22 = pbVar22 + -local_44;
          local_bc = pbVar10 + local_44;
          local_b8 = pbVar10;
          local_ac = local_48;
        }
        if (local_ac == (byte *)0x0) goto joined_r0x0062bc08;
        uVar27 = FUN_00f6aec0(local_bc,pbVar22);
        local_b0 = (byte *)((ulonglong)uVar27 >> 0x20);
        pbVar10 = (byte *)uVar27;
        local_34 = 0;
        local_28 = 1;
        local_40 = &DAT_00000020;
        local_2c = 0x20;
        local_30 = local_b0;
        local_3c = uVar27;
        FUN_0062a644(&local_4c,&local_40);
        if (local_4c == 0 || pbVar10 == (byte *)0x0) {
          local_b0 = (byte *)0x0;
          local_c0 = &DAT_00000001;
        }
        else {
          local_b0 = local_b0 + -local_44;
          local_c0 = pbVar10 + local_44;
          local_bc = pbVar10;
          pbVar22 = local_48;
        }
        if (pbVar22 == (byte *)0x0) goto joined_r0x0062bc08;
        uVar27 = FUN_00f6aec0(local_c0,local_b0);
        pbVar6 = (byte *)((ulonglong)uVar27 >> 0x20);
        pbVar10 = (byte *)uVar27;
        local_34 = 0;
        local_28 = 1;
        local_40 = &DAT_00000020;
        local_2c = 0x20;
        local_30 = pbVar6;
        local_3c = uVar27;
        FUN_0062a644(&local_4c,&local_40);
        if (local_4c == 0 || pbVar10 == (byte *)0x0) {
          iVar9 = 0;
          pbVar6 = &DAT_00000001;
        }
        else {
          iVar9 = (int)pbVar6 - local_44;
          pbVar6 = pbVar10 + local_44;
          local_c0 = pbVar10;
          local_b0 = local_48;
        }
        if (local_b0 == (byte *)0x0) goto joined_r0x0062bc08;
        uVar27 = FUN_00f6aec0(pbVar6,iVar9);
        uVar5 = (undefined4)((ulonglong)uVar27 >> 0x20);
        local_34 = 0;
        local_28 = 1;
        local_40 = &DAT_0000002d;
        local_2c = 0x2d;
        local_3c._0_4_ = local_a4;
        local_3c._4_4_ = pbVar4;
        local_30 = pbVar4;
        FUN_0062a644(&local_4c,&local_40);
        local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
        if (local_4c != 1) goto joined_r0x0062bc08;
        if (local_48 == &DAT_00000001) {
          bVar13 = *local_a4;
          local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
          if (bVar13 == 0x2b || bVar13 == 0x2d) goto joined_r0x0062bc08;
        }
        else {
          local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
          if (local_48 == (byte *)0x0) goto joined_r0x0062bc08;
          bVar13 = *local_a4;
        }
        pbVar10 = local_48;
        if (bVar13 == 0x2b) {
          pbVar10 = local_48 + -1;
        }
        uVar20 = 0;
        pbVar6 = local_a4;
        if (bVar13 == 0x2b) {
          pbVar6 = local_a4 + 1;
        }
        if (&DAT_00000008 < pbVar10) {
          do {
            local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
            if (0xfffffff < uVar20) goto joined_r0x0062bc08;
            uVar21 = (uint)*pbVar6;
            uVar15 = uVar21 - 0x30;
            if (0x39 < uVar21) {
              uVar15 = (uVar21 - 0x41 & 0xffffffdf) + 10;
            }
            local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
            if (0xf < uVar15) goto joined_r0x0062bc08;
            uVar20 = uVar15 | uVar20 << 4;
            pbVar6 = pbVar6 + 1;
            pbVar10 = pbVar10 + -1;
          } while (pbVar10 != (byte *)0x0);
        }
        else {
          for (; pbVar10 != (byte *)0x0; pbVar10 = pbVar10 + -1) {
            uVar21 = (uint)*pbVar6;
            uVar15 = uVar21 - 0x30;
            if (0x39 < uVar21) {
              uVar15 = (uVar21 - 0x41 & 0xffffffdf) + 10;
            }
            local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
            if (0xf < uVar15) goto joined_r0x0062bc08;
            uVar20 = uVar15 | uVar20 << 4;
            pbVar6 = pbVar6 + 1;
          }
        }
        local_a4 = local_a4 + local_44;
        uVar15 = (int)pbVar4 - local_44;
        if (uVar15 == 1) {
          bVar13 = *local_a4;
          local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
          if (bVar13 == 0x2b || bVar13 == 0x2d) goto joined_r0x0062bc08;
        }
        else {
          local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
          if (uVar15 == 0) goto joined_r0x0062bc08;
          bVar13 = *local_a4;
        }
        uVar21 = 0;
        if (bVar13 == 0x2b) {
          local_a4 = local_a4 + 1;
          uVar15 = uVar15 - 1;
        }
        if (uVar15 < 9) {
          for (; uVar15 != 0; uVar15 = uVar15 - 1) {
            uVar16 = (uint)*local_a4;
            uVar14 = uVar16 - 0x30;
            if (0x39 < uVar16) {
              uVar14 = (uVar16 - 0x41 & 0xffffffdf) + 10;
            }
            local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
            if (0xf < uVar14) goto joined_r0x0062bc08;
            uVar21 = uVar14 | uVar21 << 4;
            local_a4 = local_a4 + 1;
          }
        }
        else {
          do {
            local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
            if (0xfffffff < uVar21) goto joined_r0x0062bc08;
            uVar16 = (uint)*local_a4;
            uVar14 = uVar16 - 0x30;
            if (0x39 < uVar16) {
              uVar14 = (uVar16 - 0x41 & 0xffffffdf) + 10;
            }
            local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
            if (0xf < uVar14) goto joined_r0x0062bc08;
            uVar21 = uVar14 | uVar21 << 4;
            local_a4 = local_a4 + 1;
            uVar15 = uVar15 - 1;
          } while (uVar15 != 0);
        }
        local_3c._0_4_ = local_b4 + (int)local_a8;
        local_40 = local_b4;
        uVar28 = FUN_00f65b48(&local_40);
        local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
        if ((uVar28 & 1) == 0) goto joined_r0x0062bc08;
        uVar29 = FUN_00f65b48(&local_40);
        local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
        if ((uVar29 & 1) == 0) goto joined_r0x0062bc08;
        uVar30 = FUN_00f65b48(&local_40);
        local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
        if ((uVar30 & 1) == 0) goto joined_r0x0062bc08;
        uVar31 = FUN_00f65b48(&local_40);
        local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
        if ((uVar31 & 1) == 0) goto joined_r0x0062bc08;
        uVar15 = FUN_00f65b48(&local_40);
        local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
        if ((uVar15 & 1) != 0) goto joined_r0x0062bc08;
        FUN_0062a940(&local_40,local_b8,local_ac);
        pbVar4 = (byte *)local_3c;
        local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
        if ((byte)local_40 == '\x01') goto joined_r0x0062bc08;
        FUN_0062aa6c(&local_40,local_bc,pbVar22);
        uVar3 = local_34;
        pbVar22 = local_3c._4_4_;
        local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
        if (local_40 == (byte *)0x0) goto joined_r0x0062bc08;
        FUN_0062a940(&local_4c,local_40,(byte *)local_3c);
        pbVar10 = local_48;
        local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
        if ((char)local_4c == '\x01') goto joined_r0x0062bc08;
        FUN_0062a940(&local_4c,pbVar22,uVar3);
        pbVar22 = local_48;
        local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
        if ((char)local_4c == '\x01') goto joined_r0x0062bc08;
        FUN_0062a940(&local_40,local_c0,local_b0);
        pbVar6 = (byte *)local_3c;
        local_3c = CONCAT44(local_3c._4_4_,(byte *)local_3c);
        if ((byte)local_40 == '\x01') goto joined_r0x0062bc08;
        FUN_0061d0d4(&local_40,uVar5,0,1,1);
        pbVar2 = local_3c._4_4_;
        pbVar1 = (byte *)local_3c;
        if (local_40 == &DAT_00000001) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4((byte *)local_3c,local_3c._4_4_);
        }
        FUN_016dd1aa(local_3c._4_4_,(int)uVar27,uVar5);
        if (pbVar25 == local_94) {
          FUN_0061cdbc(&local_94);
          local_c8 = local_90;
        }
        iVar9 = (int)pbVar25 * 0x34;
        pbVar25 = pbVar25 + 1;
        puVar7 = (undefined4 *)(local_c8 + iVar9);
        *puVar7 = (int)(uVar28 >> 0x20);
        puVar7[9] = pbVar4;
        puVar7[10] = pbVar10;
        puVar7[0xc] = pbVar6;
        puVar7[1] = (int)(uVar29 >> 0x20);
        puVar7[2] = (int)(uVar30 >> 0x20);
        puVar7[3] = (int)(uVar31 >> 0x20);
        puVar7[0xb] = pbVar22;
        puVar7[4] = pbVar1;
        puVar7[5] = pbVar2;
        puVar7[6] = uVar5;
        puVar7[7] = uVar20;
        puVar7[8] = uVar21;
        local_8c = pbVar25;
      } while (local_54._1_1_ == '\0');
      pbVar10 = local_94;
      if (local_84 != 0) {
        thunk_FUN_016d3fb4(local_80);
      }
      FUN_016dffb2(pbVar17);
      if (pbVar10 != &DAT_80000000) {
        local_3c._0_4_ = local_c8;
        local_40 = pbVar10;
        local_3c._4_4_ = pbVar25;
        if (pbVar25 != (byte *)0x0) {
          iVar9 = 0;
LAB_0062be10:
          if (((uVar23 < *(uint *)(local_c8 + iVar9 + 0x1c)) ||
              (*(uint *)(local_c8 + iVar9 + 0x20) <= uVar23)) ||
             (*(int *)(local_c8 + iVar9 + 0x18) == 0)) goto LAB_0062be04;
          FUN_015049b0(&local_78,*(undefined4 *)(local_c8 + iVar9 + 0x14));
          pbVar4 = local_70;
          puVar7 = local_74;
          pbVar22 = local_78;
          piVar19 = (int *)(local_c8 + 0x10);
          for (; pbVar25 != (byte *)0x0; pbVar25 = pbVar25 + -1) {
            if (*piVar19 != 0) {
              thunk_FUN_016d3fb4(piVar19[1]);
            }
            piVar19 = piVar19 + 0xd;
          }
          if (pbVar10 != (byte *)0x0) {
            thunk_FUN_016d3fb4(local_c8);
          }
          goto LAB_0062bd18;
        }
LAB_0062be90:
        piVar19 = (int *)(local_c8 + 0x10);
        for (; pbVar25 != (byte *)0x0; pbVar25 = pbVar25 + -1) {
          if (*piVar19 != 0) {
            thunk_FUN_016d3fb4(piVar19[1]);
          }
          piVar19 = piVar19 + 0xd;
        }
        if (pbVar10 == (byte *)0x0) goto LAB_0062bc64;
        goto LAB_0062bc5c;
      }
    }
    else {
      if (2 < (byte)local_40) {
        puVar7 = *(undefined4 **)((byte *)local_3c + 4);
        uVar5 = *(undefined4 *)(byte *)local_3c;
        pcVar11 = (code *)*puVar7;
        if (pcVar11 != (code *)0x0) {
          (*pcVar11)(uVar5);
        }
        if (puVar7[1] != 0) {
          thunk_FUN_016d3fb4(uVar5);
        }
        thunk_FUN_016d3fb4(pbVar17);
      }
      local_c8 = &DAT_00000004;
      pbVar25 = (byte *)0x0;
LAB_0062bc20:
      piVar19 = (int *)(local_c8 + 0x10);
      for (; pbVar25 != (byte *)0x0; pbVar25 = pbVar25 + -1) {
        if (*piVar19 != 0) {
          thunk_FUN_016d3fb4(piVar19[1]);
        }
        piVar19 = piVar19 + 0xd;
      }
      if (local_94 != (byte *)0x0) {
LAB_0062bc5c:
        thunk_FUN_016d3fb4(local_c8);
      }
    }
LAB_0062bc64:
    FUN_015e6ab4(&local_78);
    pbVar17 = local_70;
    if (local_78 == &DAT_80000000) {
      if (((uint)local_74 & 0xff) == 3) {
        puVar7 = *(undefined4 **)(local_70 + 4);
        uVar5 = *(undefined4 *)local_70;
        if ((code *)*puVar7 != (code *)0x0) {
          (*(code *)*puVar7)(uVar5);
        }
        goto LAB_0062bcb8;
      }
      puVar7 = (undefined4 *)&DAT_00000001;
      pbVar22 = (byte *)0x0;
      pbVar4 = (byte *)0x0;
    }
    else {
      puVar7 = local_74;
      pbVar22 = local_78;
      pbVar4 = local_70;
    }
  }
LAB_0062bd18:
LAB_0062bd1c:
  uVar20 = uVar8;
  if (pbVar24 == (byte *)0x0) {
    uVar20 = 4;
  }
  if (uVar8 == 0) {
    uVar20 = 4;
    pbVar24 = (byte *)0x0;
  }
  if (pbVar24 == (byte *)0x0) {
    pbVar24 = (byte *)0x0;
    iVar9 = 4;
  }
  else {
    iVar9 = thunk_FUN_016d4a50((int)pbVar24 << 3);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,(int)pbVar24 << 3);
    }
    puVar12 = (undefined4 *)(iVar9 + 4);
    puVar26 = (undefined4 *)(uVar20 + 0x14);
    pbVar17 = pbVar24;
    do {
      pbVar17 = pbVar17 + -1;
      uVar5 = *puVar26;
      puVar12[-1] = puVar26[-3];
      *puVar12 = uVar5;
      puVar12 = puVar12 + 2;
      puVar26 = puVar26 + 8;
    } while (pbVar17 != (byte *)0x0);
  }
  iVar18 = param_3[2];
  local_78 = pbVar22;
  local_74 = puVar7;
  local_70 = pbVar4;
  local_6c = pbVar24;
  local_68 = (byte *)iVar9;
  local_64 = pbVar24;
  local_60 = uVar23;
  if (iVar18 == *param_3) {
    FUN_0061ccf8(param_3);
  }
  puVar7 = (undefined4 *)(param_3[1] + iVar18 * 0x1c);
  *puVar7 = local_78;
  puVar7[1] = local_74;
  puVar7[2] = local_70;
  puVar7[3] = local_6c;
  puVar7[4] = local_68;
  puVar7[5] = local_64;
  puVar7[6] = local_60;
  param_3[2] = iVar18 + 1;
  return 0;
LAB_0062be04:
  iVar9 = iVar9 + 0x34;
  if ((int)pbVar25 * 0x34 == iVar9) goto LAB_0062be90;
  goto LAB_0062be10;
}

