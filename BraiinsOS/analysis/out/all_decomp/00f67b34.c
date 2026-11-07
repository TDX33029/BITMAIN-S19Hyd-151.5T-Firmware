// FUN_00f67b34 @ 00f67b34 size=1268 calls_out=5 calls_in=2
// strings: invalid transition | invalid local time type index | invalid leap second | out of range operation | extra transition rule is inconsistent with the last transition | list of local time types must not be empty

void FUN_00f67b34(undefined4 *param_1,int *param_2,int *param_3,int *param_4,undefined4 *param_5)

{
  undefined *puVar1;
  uint *puVar2;
  undefined4 **ppuVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 **ppuVar7;
  undefined *puVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  uint uVar14;
  uint *puVar15;
  uint uVar16;
  int iVar17;
  undefined4 uVar18;
  char *pcVar19;
  bool bVar20;
  undefined4 *local_a0;
  uint *puStack_9c;
  uint *puStack_98;
  int local_94;
  int local_90;
  uint *local_8c;
  uint local_88;
  int local_84;
  int local_80;
  uint local_7c;
  int local_78;
  uint *local_74;
  uint local_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 *local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  uint uStack_40;
  int *local_38;
  undefined4 local_34;
  int local_30;
  undefined4 **local_2c;
  
  puVar15 = (uint *)param_4[1];
  local_70 = param_4[2];
  local_90 = *param_2;
  puVar2 = (uint *)param_2[1];
  local_88 = param_2[2];
  local_78 = *param_4;
  local_84 = *param_3;
  iVar10 = param_3[1];
  local_7c = param_3[2];
  local_6c = *param_5;
  uStack_68 = param_5[1];
  uStack_64 = param_5[2];
  uStack_60 = param_5[3];
  uStack_5c = param_5[4];
  uStack_58 = param_5[5];
  ppuVar3 = &local_54;
  local_54 = (undefined4 *)param_5[6];
  uStack_50 = param_5[7];
  uStack_4c = param_5[8];
  uStack_48 = param_5[9];
  uStack_44 = param_5[10];
  uStack_40 = param_5[0xb];
  iVar11 = 0x3b9aca0b;
  local_8c = puVar2;
  local_80 = iVar10;
  local_74 = puVar15;
  if (local_7c == 0) {
    uVar18 = 0x2a;
    pcVar19 = "list of local time types must not be empty";
    goto LAB_00f67de4;
  }
  uVar16 = uStack_40;
  local_94 = iVar10;
  if (local_88 != 0) {
    uVar13 = 0;
    pcVar19 = "invalid local time type index";
    puVar12 = puVar2;
    do {
      uVar16 = puVar12[2];
      if (local_7c <= uVar16) {
        uVar18 = 0x1d;
        iVar11 = 0x3b9aca0b;
        goto LAB_00f67de4;
      }
      uVar13 = uVar13 + 1;
      if (uVar13 < local_88) {
        uVar5 = puVar12[1];
        uVar16 = puVar12[5];
        ppuVar3 = (undefined4 **)(uVar5 - (uVar16 + (*puVar12 < puVar12[4])));
        if ((int)ppuVar3 < 0 ==
            (SBORROW4(uVar5,uVar16) != SBORROW4(uVar5 - uVar16,(uint)(*puVar12 < puVar12[4])))) {
          iVar11 = 0x3b9aca0b;
          pcVar19 = "invalid transition";
          uVar18 = 0x12;
          goto LAB_00f67de4;
        }
      }
      puVar12 = puVar12 + 4;
    } while (local_88 != uVar13);
  }
  if (local_70 != 0) {
    pcVar19 = "invalid leap second";
    if ((int)puVar15[1] < 0) {
      iVar11 = 0x3b9aca0b;
      uVar18 = 0x13;
      goto LAB_00f67de4;
    }
    uVar13 = puVar15[2];
    ppuVar3 = (undefined4 **)0x0;
    uVar16 = SignedSaturate(-uVar13,0x20);
    SignedDoesSaturate(uVar16,0x20);
    if (-1 < (int)uVar13) {
      uVar16 = uVar13;
    }
    if (uVar16 != 1) {
LAB_00f67d24:
      iVar11 = 0x3b9aca0b;
      pcVar19 = "invalid leap second";
      uVar18 = 0x13;
      goto LAB_00f67de4;
    }
    ppuVar3 = &local_a0;
    uVar16 = 0;
    puVar12 = puVar15;
    do {
      uVar16 = uVar16 + 1;
      local_a0 = param_1;
      puStack_9c = puVar15;
      puStack_98 = puVar2;
      if (uVar16 < local_70) {
        uVar13 = puVar12[5];
        iVar11 = SignedSaturate(puVar12[6] - puVar12[2],0x20);
        SignedDoesSaturate(iVar11,0x20);
        iVar17 = SignedSaturate(-iVar11,0x20);
        SignedDoesSaturate(iVar17,0x20);
        if ((int)puVar12[2] <= (int)puVar12[6]) {
          iVar17 = iVar11;
        }
        uVar5 = uVar13 - (puVar12[1] + (uint)(puVar12[4] < *puVar12));
        puVar8 = (undefined *)((int)uVar5 >> 0x1f);
        puVar1 = (undefined *)(puVar12[4] - *puVar12);
        if ((int)((uVar13 ^ puVar12[1]) & (uVar13 ^ uVar5)) < 0) {
          uVar5 = (uint)puVar8 ^ 0x80000000;
          puVar1 = puVar8;
        }
        ppuVar3 = (undefined4 **)(uVar5 - (puVar1 < &UNK_0024e9ff));
        if (((int)uVar5 < (int)(uint)(puVar1 < &UNK_0024e9ff)) || (iVar17 != 1)) goto LAB_00f67d24;
      }
      puVar12 = puVar12 + 4;
    } while (local_70 != uVar16);
  }
  if (local_88 != 0) {
    uVar16 = uStack_40 >> 8 & 0xff;
  }
  if (!(local_88 != 0 && uVar16 != 3)) {
LAB_00f67d68:
    FUN_016dd1aa(param_1 + 1,&local_90,0x54);
    *param_1 = 0;
    return;
  }
  uVar16 = puVar2[local_88 * 4 + -2];
  if (local_7c <= uVar16) {
    puVar8 = &DAT_0188005c;
    uVar13 = local_7c;
LAB_00f68020:
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar16,uVar13,puVar8);
  }
  uVar13 = puVar2[local_88 * 4 + -4];
  uVar5 = puVar2[local_88 * 4 + -3];
  iVar11 = 0x3b9aca0b;
  pcVar19 = "out of range operation";
  uVar18 = 0x16;
  if (uVar13 != 0 || uVar5 != 0x80000000) {
    uVar6 = uVar13 - 1;
    uVar4 = uVar5 - (uVar13 == 0);
    iVar11 = 0;
    iVar17 = 0;
    if (local_70 != 0) {
      iVar11 = 0;
      if (local_70 != 1) {
        uVar14 = local_70;
        do {
          iVar17 = iVar11 + (uVar14 >> 1);
          uVar14 = uVar14 - (uVar14 >> 1);
          uVar9 = (puVar15 + iVar17 * 4)[1];
          bVar20 = puVar15[iVar17 * 4] < uVar13;
          if ((int)(uVar9 - (uVar5 + bVar20)) < 0 !=
              (SBORROW4(uVar9,uVar5) != SBORROW4(uVar9 - uVar5,(uint)bVar20))) {
            iVar11 = iVar17;
          }
        } while (1 < uVar14);
      }
      uVar9 = puVar15[iVar11 * 4];
      uVar14 = (puVar15 + iVar11 * 4)[1];
      iVar17 = 1;
      if ((uVar9 != uVar6 || uVar14 != uVar4) &&
         (iVar17 = 0,
         (int)(uVar14 - (uVar4 + (uVar9 < uVar6))) < 0 !=
         (SBORROW4(uVar14,uVar4) != SBORROW4(uVar14 - uVar4,(uint)(uVar9 < uVar6))))) {
        iVar11 = iVar11 + 1;
      }
    }
    if (iVar17 + iVar11 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = (iVar17 + iVar11) - 1;
      if (local_70 <= uVar4) {
        puVar8 = &DAT_0188004c;
        uVar13 = local_70;
        uVar16 = uVar4;
        goto LAB_00f68020;
      }
      uVar4 = puVar15[uVar4 * 4 + 2];
    }
    iVar11 = 0x3b9aca0b;
    ppuVar3 = (undefined4 **)
              ((uVar5 ^ (int)uVar4 >> 0x1f) &
              (uVar5 ^ uVar5 - (((int)uVar4 >> 0x1f) + (uint)(uVar13 < uVar4))));
    if ((int)ppuVar3 < 0) {
      uVar18 = 0x16;
      pcVar19 = "out of range operation";
    }
    else {
      FUN_00f66ac0(&local_38,&local_6c,uVar13 - uVar4);
      if (local_30 == 0x3b9aca10) {
        ppuVar3 = (undefined4 **)(iVar10 + uVar16 * 0x10);
        uVar18 = 0x3e;
        pcVar19 = "extra transition rule is inconsistent with the last transition";
        if (*ppuVar3 == (undefined4 *)*local_38) {
          if (*(char *)((int)ppuVar3 + 0xd) == *(char *)((int)local_38 + 0xd)) {
            ppuVar7 = (undefined4 **)(uint)*(byte *)(local_38 + 1);
            if (*(char *)(ppuVar3 + 1) == '\x01') {
              if (ppuVar7 == (undefined4 **)0x0) goto LAB_00f67de4;
              ppuVar3 = (undefined4 **)
                        (*(uint *)((int)ppuVar3 + 5) ^ *(uint *)((int)local_38 + 5) |
                        *(uint *)((int)ppuVar3 + 9) ^ *(uint *)((int)local_38 + 9));
              ppuVar7 = ppuVar3;
            }
            if (ppuVar7 == (undefined4 **)0x0) goto LAB_00f67d68;
          }
        }
      }
      else {
        pcVar19 = (char *)local_38;
        uVar18 = local_34;
        if (local_30 == 0x3b9aca07) {
          ppuVar3 = (undefined4 **)FUN_00f67aac(&local_38);
        }
        else {
          ppuVar3 = local_2c;
          iVar11 = local_30;
        }
      }
    }
  }
LAB_00f67de4:
  param_1[5] = ppuVar3;
  param_1[2] = pcVar19;
  param_1[3] = uVar18;
  param_1[4] = iVar11;
  *param_1 = 1;
  if (local_90 != 0) {
    thunk_FUN_016d3fb4(puVar2);
  }
  if (local_84 != 0) {
    thunk_FUN_016d3fb4(iVar10);
  }
  if (local_78 != 0) {
    thunk_FUN_016d3fb4(puVar15);
  }
  return;
}

