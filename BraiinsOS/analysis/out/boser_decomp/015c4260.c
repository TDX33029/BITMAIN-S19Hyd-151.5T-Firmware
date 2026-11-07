// FUN_015c4260 @ 015c4260 size=1468 calls_out=23 calls_in=1
// strings: dns_sd::service_daemon

void FUN_015c4260(int param_1,undefined4 *param_2,int param_3)

{
  ushort uVar1;
  undefined2 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  undefined4 *puVar11;
  undefined8 *puVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  int iVar18;
  int iVar19;
  undefined4 uVar20;
  char *pcVar21;
  char *pcVar22;
  uint *puVar23;
  int iVar24;
  uint *puVar25;
  undefined8 uVar26;
  int *local_158;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 local_144;
  undefined4 local_140;
  int local_13c;
  int local_138;
  int local_134;
  undefined4 local_130;
  undefined4 local_12c;
  undefined4 local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 local_118;
  undefined1 local_114;
  char *local_110;
  undefined1 *local_10c;
  undefined *puStack_108;
  int local_104;
  uint local_100;
  uint local_fc;
  uint local_f8;
  uint local_f4;
  int local_f0 [18];
  int local_a8 [18];
  uint local_60;
  undefined4 local_5c;
  undefined4 local_58;
  char *local_50;
  int *local_4c;
  char *local_48;
  uint local_44;
  undefined *local_40;
  int iStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  local_114 = 1;
  local_14c = 0;
  local_150 = 0;
  local_118 = 0;
  local_11c = 0;
  local_120 = 4;
  local_124 = 0;
  local_128 = 0;
  local_12c = 4;
  local_130 = 0;
  local_134 = 0;
  local_138 = 8;
  local_13c = 0;
  local_140 = 0;
  local_144 = 4;
  local_148 = 0;
  uVar26 = FUN_015fbb98();
  uVar16 = (uint)((ulonglong)uVar26 >> 0x20);
  puVar6 = (undefined4 *)uVar26;
  puVar13 = puVar6;
  if (param_3 != 0) {
    puVar13 = param_2 + param_3 * 3;
    do {
      uVar20 = *param_2;
      uVar17 = param_2[1];
      uVar1 = *(ushort *)(param_2 + 2);
      FUN_015e59a4(&local_150,uVar20,uVar17,uVar1);
      pcVar21 = (char *)0x0;
      local_158 = (int *)&SUB_00000004;
      if (uVar1 < 0x10) {
        if (uVar1 == 1) {
LAB_015c4370:
          iVar7 = FUN_015f2d70(param_1,uVar20,uVar17);
          goto LAB_015c43a8;
        }
        if (uVar1 == 0xc) {
          iVar7 = FUN_015f2ee8(param_1,uVar20,uVar17);
          goto LAB_015c43a8;
        }
      }
      else {
        if (uVar1 == 0x10) {
          iVar7 = FUN_015f3058(param_1,uVar20,uVar17);
        }
        else {
          if (uVar1 != 0x21) {
            if (uVar1 != 0x1c) goto LAB_015c4598;
            goto LAB_015c4370;
          }
          iVar7 = FUN_015f31cc(param_1,uVar20,uVar17);
        }
LAB_015c43a8:
        if (iVar7 != 0) {
          iVar14 = *(int *)(iVar7 + 8);
          iVar18 = *(int *)(iVar7 + 4);
          iVar7 = iVar14 * 0x18;
          iVar24 = iVar18;
          do {
            iVar19 = iVar24;
            if (iVar7 == 0) goto LAB_015c4598;
            iVar8 = FUN_015f2c40(puVar6,uVar16,iVar19);
            iVar7 = iVar7 + -0x18;
            iVar24 = iVar19 + 0x18;
          } while (iVar8 == 0);
          piVar9 = (int *)thunk_FUN_01be5118(0x10);
          if (piVar9 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00664620(4,0x10);
          }
          pcVar22 = (char *)0x1;
          iVar24 = 4;
          *piVar9 = iVar19;
          local_48 = (char *)0x1;
          local_50 = (char *)0x4;
          iVar7 = iVar19 + 0x18;
          local_4c = piVar9;
          while( true ) {
            iVar19 = iVar7;
            pcVar21 = local_50;
            if (iVar19 == iVar18 + iVar14 * 0x18) break;
            iVar8 = FUN_015f2c40(puVar6,uVar16,iVar19);
            iVar7 = iVar19 + 0x18;
            if (iVar8 != 0) {
              if (pcVar22 == local_50) {
                FUN_006520b4(&local_50,pcVar22,1,4,4);
                piVar9 = local_4c;
              }
              piVar9[(int)pcVar22] = iVar19;
              pcVar22 = pcVar22 + 1;
              iVar24 = iVar24 + 4;
              local_48 = pcVar22;
            }
          }
          local_158 = local_4c;
          piVar9 = local_4c;
          do {
            iVar7 = *piVar9;
            if (4 < DAT_01d51b00) {
              local_110 = (char *)(iVar7 + 0x10);
              local_10c = &LAB_01937250;
              local_44 = 0x17;
              local_40 = &DAT_01cfcab8;
              local_4c = (int *)&DAT_00000017;
              local_48 = "m";
              local_50 = "m";
              FUN_015fb650(&DAT_005ab876,&local_110,5,&local_50);
            }
            uVar26 = (**(code **)(*(int *)(iVar7 + 0x14) + 0x68))(*(undefined4 *)(iVar7 + 0x10));
            puVar10 = (uint *)(**(code **)((int)((ulonglong)uVar26 >> 0x20) + 0x14))();
            puVar11 = (undefined4 *)*puVar10;
            uVar15 = puVar10[1];
            if (uVar15 <= uVar16 && (uint)(puVar6 <= puVar11) <= uVar15 - uVar16) {
              iVar7 = FUN_01bf0ff0((int)puVar6 - (int)puVar11,uVar16 - (uVar15 + (puVar6 < puVar11))
                                   ,1000,0);
              puVar10[6] = puVar10[6] - iVar7;
            }
            iVar7 = local_134;
            if (local_134 == local_13c) {
              FUN_015f5b78(&local_13c);
            }
            iVar24 = iVar24 + -4;
            puVar12 = (undefined8 *)(local_138 + iVar7 * 0x10);
            *puVar12 = uVar26;
            *(undefined4 *)(puVar12 + 1) = 0;
            *(undefined4 *)((int)puVar12 + 0xc) = 0;
            local_134 = iVar7 + 1;
            piVar9 = piVar9 + 1;
          } while (iVar24 != 0);
        }
      }
LAB_015c4598:
      param_2 = param_2 + 3;
      FUN_0134aee0(pcVar21,local_158,4,4);
    } while (param_2 != puVar13);
  }
  uVar26 = thunk_FUN_01bee35a(puVar13,0x2c0);
  puVar10 = (uint *)((int)uVar26 + (int)((ulonglong)uVar26 >> 0x20));
  if ((char)puVar10[4] == '\0') {
    FUN_019ae6ac(&local_50);
    *puVar10 = (uint)local_50;
    puVar10[1] = (uint)local_4c;
    puVar10[2] = (uint)local_48;
    puVar10[3] = local_44;
    *(undefined1 *)(puVar10 + 4) = 1;
  }
  local_100 = *puVar10;
  local_f8 = puVar10[2];
  local_fc = puVar10[1];
  local_f4 = puVar10[3];
  *puVar10 = local_100 + 1;
  puVar10[1] = local_fc + (0xfffffffe < local_100);
  local_110 = (char *)&DAT_0056d238;
  local_10c = (undefined1 *)0x0;
  puStack_108 = (undefined *)0x0;
  local_104 = 0;
  iVar7 = *(int *)(param_1 + 500);
  puVar25 = *(uint **)(param_1 + 0xc0);
  puVar10 = puVar25 + 1;
  iVar14 = *(int *)(param_1 + 0xcc);
  uVar2 = *(undefined2 *)(param_1 + 0x254);
  uVar16 = ~*puVar25 & 0x80808080;
  iVar24 = *(int *)(param_1 + 0x1e8);
  while (iVar14 != 0) {
    puVar23 = puVar10;
    if (uVar16 == 0) {
      do {
        puVar10 = puVar23 + 1;
        uVar16 = *puVar23;
        puVar25 = puVar25 + -0x40;
        puVar23 = puVar10;
      } while ((uVar16 & 0x80808080) == 0x80808080);
      uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
    }
    uVar15 = uVar16 >> 8;
    uVar3 = uVar16 >> 0x10;
    uVar4 = uVar16 >> 0x18;
    uVar5 = uVar16 << 0x18;
    if (iVar24 != -1) {
      local_50 = (char *)CONCAT22(local_50._2_2_,2);
      FUN_015c507c(local_f0,&local_150,
                   puVar25 + (LZCOUNT(uVar5 | (uVar15 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 | uVar4)
                             & 0x1ffffff8U) * -2 + -0xe,(int *)(param_1 + 0x1e8),uVar2,0,&local_50);
      if (local_f0[0] == 2) {
        FUN_015c64b4(local_f0);
      }
      else {
        FUN_01453a54(&local_110,local_f0);
      }
    }
    iVar14 = iVar14 + -1;
    uVar16 = uVar16 - 1 & uVar16;
    if (iVar7 != -1) {
      local_50 = (char *)CONCAT22(local_50._2_2_,2);
      FUN_015c507c(local_a8,&local_150,
                   puVar25 + (LZCOUNT(uVar5 | (uVar15 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 | uVar4)
                             & 0x1ffffff8U) * -2 + -0xe,(int *)(param_1 + 500),uVar2,0,&local_50);
      if (local_a8[0] == 2) {
        FUN_015c64b4(local_a8);
      }
      else {
        FUN_01453a54(&local_110,local_a8);
      }
    }
  }
  if (local_104 == 0) {
    FUN_014532e4(&local_110);
  }
  else {
    local_48 = local_110;
    local_44 = (uint)local_10c;
    local_40 = puStack_108;
    iStack_3c = local_104;
    local_38 = local_100;
    uStack_34 = local_fc;
    uStack_30 = local_f8;
    uStack_2c = local_f4;
    local_4c = (int *)0x0;
    local_50 = (char *)0x11;
    FUN_015c4db8(&local_60,param_1);
    if ((4 < local_60) || ((1 << (local_60 & 0xff) & 0x13U) == 0)) {
      FUN_0134bd64(local_5c,local_58);
    }
  }
  FUN_015c39bc(&local_150);
  return;
}

