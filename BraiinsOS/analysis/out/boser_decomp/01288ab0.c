// FUN_01288ab0 @ 01288ab0 size=1116 calls_out=4 calls_in=2
// strings: out of range operation | extra transition rule is inconsistent with the last transition | invalid leap second | invalid transition | invalid local time type index | list of local time types must not be empty

void FUN_01288ab0(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                 uint *param_5)

{
  int *piVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint *puVar14;
  undefined4 uVar15;
  uint uVar16;
  int iVar17;
  char *pcVar18;
  bool bVar19;
  undefined4 local_90;
  uint *local_8c;
  uint local_88;
  undefined4 local_84;
  int local_80;
  uint local_7c;
  undefined4 local_78;
  uint *local_74;
  uint local_70;
  uint local_6c;
  uint uStack_68;
  uint uStack_64;
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint *puStack_44;
  uint uStack_40;
  uint *local_38;
  undefined4 local_34;
  int local_30;
  uint *local_2c;
  
  local_90 = *param_2;
  local_8c = (uint *)param_2[1];
  local_88 = param_2[2];
  local_84 = *param_3;
  iVar13 = param_3[1];
  local_7c = param_3[2];
  local_78 = *param_4;
  local_74 = (uint *)param_4[1];
  local_70 = param_4[2];
  local_6c = *param_5;
  uStack_68 = param_5[1];
  uStack_64 = param_5[2];
  uStack_60 = param_5[3];
  uStack_5c = param_5[4];
  uStack_58 = param_5[5];
  local_54 = param_5[6];
  uStack_50 = param_5[7];
  uStack_4c = param_5[8];
  uStack_48 = param_5[9];
  puStack_44 = (uint *)param_5[10];
  uStack_40 = param_5[0xb];
  iVar17 = 0x3b9aca0b;
  puVar5 = &local_6c;
  local_80 = iVar13;
  if (local_7c == 0) {
    uVar15 = 0x2a;
    pcVar18 = "list of local time types must not be empty";
    goto LAB_01288d14;
  }
  puVar14 = puStack_44;
  if (local_88 != 0) {
    uVar6 = 0;
    pcVar18 = "invalid local time type index";
    puVar14 = local_8c;
    do {
      if (local_7c <= puVar14[2]) {
        uVar15 = 0x1d;
        goto LAB_01288d14;
      }
      uVar6 = uVar6 + 1;
      if (uVar6 < local_88) {
        uVar4 = puVar14[1];
        uVar11 = puVar14[5];
        puVar5 = (uint *)(uVar4 - (uVar11 + (*puVar14 < puVar14[4])));
        if ((int)puVar5 < 0 ==
            (SBORROW4(uVar4,uVar11) != SBORROW4(uVar4 - uVar11,(uint)(*puVar14 < puVar14[4])))) {
          uVar15 = 0x12;
          pcVar18 = "invalid transition";
          goto LAB_01288d14;
        }
      }
      puVar14 = puVar14 + 4;
    } while (local_88 != uVar6);
  }
  if (local_70 != 0) {
    uVar15 = 0x13;
    if (-1 < (int)local_74[1]) {
      uVar4 = local_74[2];
      uVar6 = SignedSaturate(-uVar4,0x20);
      SignedDoesSaturate(uVar6,0x20);
      if (-1 < (int)uVar4) {
        uVar6 = uVar4;
      }
      if (uVar6 == 1) {
        uVar6 = 0;
        puVar5 = local_74;
        puVar7 = local_74;
        do {
          uVar6 = uVar6 + 1;
          if (uVar6 < local_70) {
            uVar4 = puVar7[5];
            puVar5 = (uint *)SignedSaturate(puVar7[6] - puVar7[2],0x20);
            SignedDoesSaturate(puVar5,0x20);
            puVar14 = (uint *)SignedSaturate(-(int)puVar5,0x20);
            SignedDoesSaturate(puVar14,0x20);
            if ((int)puVar7[2] <= (int)puVar7[6]) {
              puVar14 = puVar5;
            }
            puVar5 = (uint *)(uVar4 - (puVar7[1] + (uint)(puVar7[4] < *puVar7)));
            puVar10 = (undefined *)((int)puVar5 >> 0x1f);
            puVar2 = (undefined *)(puVar7[4] - *puVar7);
            if ((int)((uVar4 ^ puVar7[1]) & (uVar4 ^ (uint)puVar5)) < 0) {
              puVar5 = (uint *)((uint)puVar10 ^ 0x80000000);
              puVar2 = puVar10;
            }
            if (((int)puVar5 < (int)(uint)(puVar2 < &DAT_0024e9ff)) ||
               (puVar14 != (uint *)&DAT_00000001)) {
              uVar15 = 0x13;
              iVar17 = 0x3b9aca0b;
              pcVar18 = "invalid leap second";
              goto LAB_01288d14;
            }
          }
          puVar7 = puVar7 + 4;
        } while (local_70 != uVar6);
        goto LAB_01288c74;
      }
    }
    iVar17 = 0x3b9aca0b;
    puVar5 = local_74;
    pcVar18 = "invalid leap second";
    goto LAB_01288d14;
  }
LAB_01288c74:
  if (local_88 != 0) {
    puVar7 = local_8c + local_88 * 4 + -4;
    if (puVar7 != (uint *)0x0) {
      puVar14 = (uint *)(uStack_40 >> 8 & 0xff);
    }
    if (puVar7 != (uint *)0x0 && puVar14 != (uint *)&DAT_00000003) {
      uVar6 = local_8c[local_88 * 4 + -2];
      if (local_7c <= uVar6) {
        puVar10 = &DAT_01c25e28;
        uVar4 = local_7c;
LAB_01288f04:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar6,uVar4,puVar10);
      }
      uVar11 = *puVar7;
      uVar4 = local_8c[local_88 * 4 + -3];
      uVar15 = 0x16;
      iVar17 = 0x3b9aca0b;
      pcVar18 = "out of range operation";
      if (uVar11 == 0 && uVar4 == 0x80000000) goto LAB_01288d14;
      puVar5 = (uint *)(uVar11 - 1);
      uVar16 = uVar4 - (uVar11 == 0);
      iVar3 = 0;
      iVar9 = 0;
      if (local_70 != 0) {
        iVar3 = 0;
        if (local_70 != 1) {
          uVar8 = local_70;
          do {
            iVar17 = iVar3 + (uVar8 >> 1);
            uVar8 = uVar8 - (uVar8 >> 1);
            uVar12 = (local_74 + iVar17 * 4)[1];
            bVar19 = local_74[iVar17 * 4] < uVar11;
            if ((int)(uVar12 - (uVar4 + bVar19)) < 0 !=
                (SBORROW4(uVar12,uVar4) != SBORROW4(uVar12 - uVar4,(uint)bVar19))) {
              iVar3 = iVar17;
            }
          } while (1 < uVar8);
        }
        puVar14 = (uint *)local_74[iVar3 * 4];
        uVar8 = (local_74 + iVar3 * 4)[1];
        iVar9 = 1;
        if (puVar14 != puVar5 || uVar8 != uVar16) {
          if ((int)(uVar8 - (uVar16 + (puVar14 < puVar5))) < 0 !=
              (SBORROW4(uVar8,uVar16) != SBORROW4(uVar8 - uVar16,(uint)(puVar14 < puVar5)))) {
            iVar3 = iVar3 + 1;
          }
          iVar9 = 0;
        }
        puVar5 = local_74;
      }
      iVar17 = 0x3b9aca0b;
      if (iVar9 + iVar3 == 0) {
        uVar16 = 0;
      }
      else {
        uVar16 = (iVar9 + iVar3) - 1;
        if (local_70 <= uVar16) {
          puVar10 = &DAT_01c25e18;
          uVar6 = uVar16;
          uVar4 = local_70;
          goto LAB_01288f04;
        }
        uVar16 = local_74[uVar16 * 4 + 2];
        puVar5 = local_74;
      }
      if (-1 < (int)((uVar4 ^ (int)uVar16 >> 0x1f) &
                    (uVar4 ^ uVar4 - (((int)uVar16 >> 0x1f) + (uint)(uVar11 < uVar16))))) {
        FUN_0128c688(&local_38,&local_6c,uVar11 - uVar16);
        if (local_30 == 0x3b9aca10) {
          uVar15 = 0x3e;
          puVar14 = (uint *)(iVar13 + uVar6 * 0x10);
          pcVar18 = "extra transition rule is inconsistent with the last transition";
          puVar5 = local_38;
          if ((*puVar14 == *local_38) &&
             (*(char *)((int)puVar14 + 0xd) == *(char *)((int)local_38 + 0xd))) {
            if ((char)puVar14[1] == '\x01') {
              if ((char)local_38[1] == '\0') goto LAB_01288d14;
              piVar1 = (int *)((int)local_38 + 9);
              local_38 = (uint *)(*(uint *)((int)puVar14 + 5) ^ *(uint *)((int)local_38 + 5));
              bVar19 = local_38 == (uint *)0x0 && *(int *)((int)puVar14 + 9) == *piVar1;
            }
            else {
              bVar19 = (char)local_38[1] == '\0';
            }
            puVar5 = local_38;
            if (bVar19) goto LAB_01288c9c;
          }
        }
        else {
          if (local_30 == 0x3b9aca07) {
            local_30 = 0x3b9aca0b;
          }
          puVar5 = local_2c;
          uVar15 = local_34;
          iVar17 = local_30;
          pcVar18 = (char *)local_38;
        }
      }
LAB_01288d14:
      param_1[2] = pcVar18;
      *param_1 = 1;
      param_1[3] = uVar15;
      param_1[4] = iVar17;
      param_1[5] = puVar5;
      FUN_01288f48(&local_90);
      return;
    }
  }
LAB_01288c9c:
  FUN_01bed4e2(param_1 + 1,&local_90,0x54);
  *param_1 = 0;
  return;
}

