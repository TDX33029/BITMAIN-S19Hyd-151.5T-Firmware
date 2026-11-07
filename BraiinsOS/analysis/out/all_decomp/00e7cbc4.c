// FUN_00e7cbc4 @ 00e7cbc4 size=1676 calls_out=12 calls_in=1
// strings: 

void FUN_00e7cbc4(int *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined1 uVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  int *piVar9;
  uint uVar10;
  uint uVar11;
  int extraout_r3;
  uint uVar12;
  int *piVar13;
  undefined4 uVar14;
  uint uVar15;
  uint *puVar16;
  int iVar17;
  undefined4 uVar18;
  char cVar19;
  int iVar20;
  int iVar21;
  char cVar22;
  int iVar23;
  undefined4 uVar24;
  bool bVar25;
  undefined8 uVar26;
  uint local_a4;
  int local_a0;
  char local_9c;
  char local_98;
  undefined4 *local_94;
  int local_90;
  int local_8c;
  int local_88;
  int local_84;
  uint local_80;
  int local_7c;
  int local_78;
  undefined2 local_74;
  char local_70;
  char local_6c;
  int local_68;
  undefined4 local_64;
  uint local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  undefined4 *local_44;
  undefined4 local_40;
  int local_3c;
  char *local_38;
  int local_34;
  undefined4 local_30;
  undefined3 uStack_2c;
  undefined2 local_26;
  
  uVar26 = thunk_FUN_016de0ee(param_1,0x40);
  iVar17 = (int)uVar26 + (int)((ulonglong)uVar26 >> 0x20);
  if (*(char *)(iVar17 + 0x38) == '\x01') {
LAB_00e7cc18:
    cVar22 = *(char *)(iVar17 + 0x31);
    cVar19 = *(char *)(iVar17 + 0x30);
    cVar4 = cVar22;
    if (cVar19 == '\x01') {
      if (cVar22 == '\0') {
        FUN_016455a4(*param_3,param_3[1]);
        *param_1 = 5;
        return;
      }
      cVar4 = cVar22 + -1;
    }
    *(char *)(iVar17 + 0x31) = cVar4;
  }
  else {
    cVar19 = '\0';
    cVar22 = '\0';
    if (*(char *)(iVar17 + 0x38) != '\x02') {
      FUN_015e8e6c(iVar17,FUN_005bc49c);
      *(undefined1 *)(iVar17 + 0x38) = 1;
      goto LAB_00e7cc18;
    }
  }
  FUN_00e7d2a0(&local_40,*param_2,param_2 + 1,param_3);
  piVar13 = param_1 + 2;
  if ((local_40 ^ 3) == 0 && local_3c == 0) {
    iVar21 = *(int *)(local_38 + 8);
    if (iVar21 == 4) {
      local_90 = 0;
      local_a0 = 0;
      local_98 = '\0';
      local_a4 = local_40 ^ 3;
      local_94 = param_2 + 1;
      local_9c = cVar22;
    }
    else if (iVar21 == 3) {
      local_84 = *(int *)(local_38 + 0x18);
      local_88 = *(int *)(local_38 + 0x1c);
      local_90 = *(int *)(local_38 + 0x10);
      local_a0 = *(int *)(local_38 + 0x14);
      local_30._0_3_ = (undefined3)*(undefined4 *)(local_38 + 0x25);
      local_30._3_1_ = (undefined1)*(undefined4 *)(local_38 + 0x28);
      uStack_2c = (undefined3)((uint)*(undefined4 *)(local_38 + 0x28) >> 8);
      local_58 = *(undefined4 *)(local_38 + 0x56);
      local_64 = *(undefined4 *)(local_38 + 0x52);
      local_7c = *(int *)(local_38 + 0x40);
      local_5c = *(uint *)(local_38 + 0x44);
      local_60 = *(uint *)(local_38 + 0x48);
      local_68 = *(int *)(local_38 + 0x4c);
      local_54 = *(int *)(local_38 + 0x20);
      local_8c = *(int *)(local_38 + 0x5c);
      local_70 = local_38[0x5b];
      local_6c = local_38[0x5a];
      local_74 = *(undefined2 *)(local_38 + 0x50);
      local_44 = *(undefined4 **)(local_38 + 0x30);
      local_80 = *(uint *)(local_38 + 0x34);
      local_a4 = *(uint *)(local_38 + 0xc);
      local_98 = local_38[0x2d];
      local_94 = (undefined4 *)(uint)(byte)local_38[0x2c];
      local_9c = local_38[0x24];
      local_50 = *(int *)(local_38 + 0x38);
      local_26 = *(undefined2 *)(local_38 + 0x2e);
      local_78 = *(int *)(local_38 + 0x3c);
    }
    else {
      local_54 = extraout_r3;
      if (iVar21 != 2) {
        local_9c = local_38[0x24];
        local_94 = (undefined4 *)(uint)(byte)local_38[0x2c];
        local_98 = local_38[0x2d];
        if (local_9c == '\x02') {
          local_54 = 2;
        }
        else {
          local_54 = *(int *)(local_38 + 0x20);
          local_84 = *(int *)(local_38 + 0x18);
          local_88 = *(int *)(local_38 + 0x1c);
          local_40._0_3_ = (undefined3)*(undefined4 *)(local_38 + 0x25);
          local_40._3_1_ = (undefined1)*(undefined4 *)(local_38 + 0x28);
          local_3c._0_3_ = (undefined3)((uint)*(undefined4 *)(local_38 + 0x28) >> 8);
        }
        local_a4 = *(uint *)(local_38 + 0xc);
        local_90 = *(int *)(local_38 + 0x10);
        local_a0 = *(int *)(local_38 + 0x14);
      }
      local_74 = *(undefined2 *)(local_38 + 0x50);
      local_70 = local_38[0x5b];
      uVar10 = *(uint *)(local_38 + 0x34);
      local_7c = *(int *)(local_38 + 0x40);
      local_68 = *(int *)(local_38 + 0x4c);
      local_5c = *(uint *)(local_38 + 0x44);
      local_60 = *(uint *)(local_38 + 0x48);
      local_58 = *(undefined4 *)(local_38 + 0x56);
      local_64 = *(undefined4 *)(local_38 + 0x52);
      local_6c = local_38[0x5a];
      if (uVar10 == 0) {
        local_50 = 0;
        local_44 = &DAT_005674cc;
        local_78 = 0;
        local_80 = 0;
      }
      else {
        lVar2 = (ulonglong)(uVar10 + 1) * 0x11;
        uVar5 = (uint)lVar2;
        if ((int)((ulonglong)lVar2 >> 0x20) != 0) {
LAB_00e7ceb8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_004144a9,0x39,&DAT_01883228);
        }
        bVar25 = 0xfffffffb < uVar5;
        uVar15 = uVar10;
        local_80 = 0;
        uVar12 = local_60;
        uVar11 = local_5c;
        if (uVar5 < 0xfffffffd) {
          uVar11 = uVar10 + 5;
          uVar12 = uVar5 + 3 & 0xfffffffc;
          bVar25 = CARRY4(uVar12,uVar11);
          uVar15 = uVar12 + uVar11;
          local_80 = uVar10;
        }
        if ((bVar25) || (0x7ffffffc < uVar15)) goto LAB_00e7ceb8;
        if (uVar15 == 0) {
          uVar10 = 4;
        }
        else {
          if (uVar15 < 4) {
            local_30 = 0;
            iVar23 = FUN_016d51b0(&local_30,4,uVar15);
            if (iVar23 != 0) goto LAB_00e7d248;
            uVar10 = local_30;
          }
          else {
            uVar10 = thunk_FUN_016d4a50(uVar15);
          }
          if (uVar10 == 0) {
LAB_00e7d248:
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,uVar15,uVar11);
          }
        }
        puVar6 = *(uint **)(local_38 + 0x30);
        local_44 = (undefined4 *)(uVar10 + uVar12);
        FUN_016dd1aa();
        local_78 = *(int *)(local_38 + 0x3c);
        if (local_78 != 0) {
          puVar7 = puVar6 + 1;
          uVar10 = ~*puVar6 & 0x80808080;
          puVar16 = puVar6;
          iVar23 = local_78;
          do {
            puVar8 = puVar7;
            if (uVar10 == 0) {
              do {
                puVar7 = puVar8 + 1;
                uVar10 = *puVar8;
                puVar16 = puVar16 + -0x11;
                puVar8 = puVar7;
              } while ((uVar10 & 0x80808080) == 0x80808080);
              uVar10 = uVar10 & 0x80808080 ^ 0x80808080;
            }
            uVar5 = LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                            (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18);
            iVar23 = iVar23 + -1;
            iVar20 = (uVar5 >> 3) * -0x10 - (uVar5 >> 3);
            iVar3 = iVar20 - (int)puVar6;
            uVar24 = *(undefined4 *)((int)puVar16 + iVar20 + -0x11);
            uVar14 = *(undefined4 *)((int)puVar16 + iVar20 + -0xd);
            uVar18 = *(undefined4 *)((int)puVar16 + iVar20 + -9);
            uVar1 = *(undefined1 *)((int)puVar16 + iVar20 + -1);
            *(undefined4 *)((int)puVar16 + (int)local_44 + iVar3 + -5) =
                 *(undefined4 *)((int)puVar16 + iVar20 + -5);
            *(undefined4 *)((int)puVar16 + (int)local_44 + iVar3 + -9) = uVar18;
            *(undefined4 *)((int)puVar16 + (int)local_44 + iVar3 + -0xd) = uVar14;
            *(undefined4 *)((int)puVar16 + (int)local_44 + iVar3 + -0x11) = uVar24;
            *(undefined1 *)((int)puVar16 + (int)local_44 + iVar3 + -1) = uVar1;
            uVar10 = uVar10 - 1 & uVar10;
          } while (iVar23 != 0);
        }
        local_50 = *(int *)(local_38 + 0x38);
      }
      uStack_2c = (undefined3)local_3c;
      local_30 = local_40;
    }
    *(uint *)((int)param_1 + 0x1d) = local_30;
    param_1[10] = (int)local_44;
    param_1[0xb] = local_80;
    param_1[0xc] = local_50;
    param_1[0xd] = local_78;
    param_1[4] = local_84;
    param_1[5] = local_88;
    param_1[0xe] = local_7c;
    param_1[0xf] = local_5c;
    param_1[0x10] = local_60;
    param_1[0x11] = local_68;
    *(undefined2 *)(param_1 + 0x12) = local_74;
    *(undefined4 *)((int)param_1 + 0x4a) = local_64;
    *(undefined4 *)((int)param_1 + 0x4e) = local_58;
    param_1[0x15] = local_8c;
    *param_1 = iVar21;
    param_1[1] = local_a4;
    *(char *)((int)param_1 + 0x25) = local_98;
    piVar9 = (int *)(local_38 + 0x68);
    *(char *)((int)param_1 + 0x53) = local_70;
    *(char *)(param_1 + 7) = local_9c;
    param_1[6] = local_54;
    param_1[8] = CONCAT31(uStack_2c,local_30._3_1_);
    *(char *)(param_1 + 9) = (char)local_94;
    *(undefined2 *)((int)param_1 + 0x26) = local_26;
    *piVar13 = local_90;
    param_1[3] = local_a0;
    *(char *)((int)param_1 + 0x52) = local_6c;
    DataMemoryBarrier(0xb);
    do {
      iVar21 = *piVar9;
      bVar25 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar25);
    *piVar9 = iVar21 + -1;
    DataMemoryBarrier(0xb);
    if (iVar21 == 1) {
      if (((1 < *(int *)(local_38 + 8) - 3U) && (iVar21 = *(int *)(local_38 + 0x34), iVar21 != 0))
         && (uVar10 = iVar21 * 0x11 & 0xfffffffc, uVar10 + iVar21 != -0x19)) {
        thunk_FUN_016d3fb4((*(int *)(local_38 + 0x30) - uVar10) + -0x14);
      }
      local_38[8] = '\x04';
      local_38[9] = '\0';
      local_38[10] = '\0';
      local_38[0xb] = '\0';
    }
    FUN_01282570(local_38);
    if (*local_38 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar25 = (bool)hasExclusiveAccess(local_38);
        if (bVar25) {
          *local_38 = '\0';
          goto LAB_00e7d1ec;
        }
      } while (*local_38 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(local_38);
  }
  else {
    if (local_40 == 0) {
      iVar21 = 5;
    }
    else if (local_40 == 1) {
      *piVar13 = 0;
      param_1[3] = 0;
      iVar21 = 4;
    }
    else {
      param_1[4] = (int)local_38;
      iVar21 = 4;
      *piVar13 = 1;
      param_1[3] = 0;
      param_1[5] = local_34;
    }
    *param_1 = iVar21;
  }
LAB_00e7d1ec:
  if ((*param_1 != 5) || (cVar19 == '\0')) {
    return;
  }
  if (*(char *)(iVar17 + 0x38) != '\x01') {
    if (*(char *)(iVar17 + 0x38) == '\x02') {
      return;
    }
    FUN_015e8e6c(iVar17,FUN_01655ec4);
    *(undefined1 *)(iVar17 + 0x38) = 1;
  }
  *(char *)(iVar17 + 0x31) = cVar22;
  *(undefined1 *)(iVar17 + 0x30) = 1;
  return;
}

