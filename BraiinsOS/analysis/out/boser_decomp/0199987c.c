// FUN_0199987c @ 0199987c size=1036 calls_out=2 calls_in=2
// strings: 

void FUN_0199987c(uint *param_1,uint *param_2)

{
  char cVar1;
  undefined2 uVar2;
  byte *pbVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  byte *pbVar15;
  uint uVar16;
  int iVar17;
  byte *pbVar18;
  int iVar19;
  uint *puVar20;
  byte *pbVar21;
  uint uVar22;
  uint uVar23;
  int iVar24;
  undefined8 uVar25;
  int local_7c;
  undefined2 local_68;
  undefined1 local_66;
  uint local_64;
  uint local_60;
  undefined8 local_5c;
  uint *local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  int local_40;
  int local_3c;
  char local_38;
  undefined2 local_37;
  undefined1 local_35;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  puVar20 = param_2 + 4;
  uVar8 = *puVar20;
  if (uVar8 == 0) {
    local_30 = param_2[1];
  }
  else {
    if (param_2[9] == 1) {
      local_30 = param_2[10];
      if (param_2[5] < local_30) {
        local_2c = 0;
        local_38 = '\x13';
        local_30 = uVar8;
        local_34 = uVar8;
LAB_01999ad4:
        *(undefined1 *)((int)param_1 + 3) = local_66;
        *(undefined2 *)((int)param_1 + 1) = local_68;
        param_1[1] = local_34;
        param_1[2] = local_30;
        param_1[3] = local_2c;
        *(char *)param_1 = local_38;
        return;
      }
      local_34 = uVar8 + local_30;
      local_30 = param_2[5] - local_30;
    }
    else {
      uVar22 = param_2[5];
      uVar25 = FUN_0134bd24(param_2[6]);
      local_54 = puVar20;
      local_64 = uVar8;
      local_60 = uVar22;
      if ((int)((ulonglong)uVar25 >> 0x20) != 0) {
        do {
          local_5c._4_4_ = (int)((ulonglong)uVar25 >> 0x20);
          local_5c._0_4_ = (undefined4 *)uVar25;
          iVar11 = local_5c._4_4_ + -1;
          puVar5 = (undefined4 *)local_5c + 4;
          uStack_44 = ((undefined4 *)local_5c)[3];
          uStack_48 = ((undefined4 *)local_5c)[2];
          uStack_4c = ((undefined4 *)local_5c)[1];
          local_50 = *(undefined4 *)local_5c;
          local_5c = uVar25;
          FUN_019901d0(&local_40,&local_64,*(undefined4 *)(local_54[3] + 0x20),&local_50);
          if (local_40 == 0x2e && local_3c == 0) {
            local_68 = local_37;
            local_66 = local_35;
            if (local_38 != 'R') goto LAB_01999ad4;
            goto LAB_019999fc;
          }
          uVar25 = CONCAT44(iVar11,puVar5);
        } while (iVar11 != 0);
      }
      local_30 = local_60;
      local_34 = local_64;
      if (local_54[5] == 0) {
        local_54[5] = 1;
        local_54[6] = local_64 - *local_54;
      }
    }
LAB_019999fc:
    *param_2 = local_34;
    param_2[1] = local_30;
  }
  if (local_30 == 0) {
    param_2[0xb] = 0;
    param_2[4] = 0;
    uVar2 = 0x52;
LAB_019998e0:
    *(undefined2 *)param_1 = uVar2;
    return;
  }
  uVar8 = param_2[2];
  iVar13 = 4;
  pbVar3 = (byte *)*param_2;
  uVar22 = 0;
  uVar23 = param_2[3];
  pbVar15 = pbVar3 + local_30;
  iVar11 = *(int *)(uVar8 + 0x24);
  iVar17 = *(int *)(uVar8 + 0x18);
  iVar19 = *(int *)(uVar8 + 0x1c);
  if (*(char *)(uVar8 + 0x21) == '\b') {
    iVar13 = 0xc;
  }
  pbVar21 = (byte *)0x0;
  uVar16 = 0;
  pbVar10 = pbVar3;
  do {
    local_30 = local_30 - 1;
    pbVar18 = pbVar10 + 1;
    uVar4 = (uint)*pbVar10;
    if ((uVar16 == 0x3f) && (1 < uVar4)) {
      uVar8 = 6;
      goto LAB_01999b04;
    }
    uVar12 = uVar16 & 0x3f;
    uVar9 = uVar4 & 0x7f;
    uVar14 = uVar12 - 0x20;
    uVar7 = uVar9 << uVar12;
    if (-1 < (int)uVar14) {
      uVar7 = 0;
    }
    pbVar21 = (byte *)(uVar7 | (uint)pbVar21);
    uVar7 = uVar9 >> (0x20 - uVar12 & 0xff);
    if (-1 < (int)uVar14) {
      uVar7 = uVar9 << (uVar14 & 0xff);
    }
    uVar22 = uVar7 | uVar22;
    if ((uint)(int)(char)*pbVar10 < 0x80000000) {
      *param_2 = (uint)pbVar18;
      param_2[1] = local_30;
      if (pbVar21 == (byte *)0x0 && uVar22 == 0) {
        param_2[4] = 0;
        param_2[0xb] = 0xffffffff;
        uVar2 = 0x152;
        goto LAB_019998e0;
      }
      if ((uVar22 == 0) && (pbVar21 + -1 < *(byte **)(uVar23 + 8))) {
        puVar5 = (undefined4 *)((int)(pbVar21 + -1) * 0x68 + *(int *)(uVar23 + 4));
        goto LAB_01999c30;
      }
      puVar5 = *(undefined4 **)(uVar23 + 0xc);
      if (puVar5 == (undefined4 *)0x0) goto LAB_01999c78;
      local_7c = *(int *)(uVar23 + 0x10);
      goto LAB_01999b7c;
    }
    uVar16 = uVar16 + 7;
    pbVar10 = pbVar18;
  } while (local_30 != 0);
  uVar8 = 0x13;
  pbVar21 = pbVar15;
LAB_01999b04:
  uVar4 = uVar4 << 8;
  uVar22 = 0;
LAB_01999b0c:
  *param_2 = 1;
  param_2[0xb] = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  *param_1 = uVar8 | uVar4;
  param_1[1] = (uint)pbVar15;
  param_1[2] = (uint)pbVar21;
  param_1[3] = uVar22;
  return;
LAB_01999b7c:
  uVar23 = 0xffffffff;
  iVar24 = (uint)*(ushort *)((int)puVar5 + 0x4d6) << 3;
  puVar6 = puVar5;
  do {
    if (iVar24 == 0) {
      uVar23 = (uint)*(ushort *)((int)puVar5 + 0x4d6);
      goto LAB_01999bec;
    }
    pbVar10 = (byte *)*puVar6;
    uVar16 = puVar6[1];
    iVar24 = iVar24 + -8;
    uVar23 = uVar23 + 1;
    puVar6 = puVar6 + 2;
    uVar16 = (uint)(uVar16 <= uVar22 && (uint)(pbVar21 <= pbVar10) <= uVar16 - uVar22) -
             (uint)(uVar22 <= uVar16 && (uint)(pbVar10 <= pbVar21) <= uVar22 - uVar16);
  } while (uVar16 == 1);
  if ((uVar16 & 0xff) == 0) {
    puVar5 = puVar5 + uVar23 * 0x1a + 0x16;
LAB_01999c30:
    cVar1 = *(char *)((int)puVar5 + 0x62);
    param_2[6] = (uint)puVar5;
    param_2[7] = uVar8;
    param_2[8] = (uint)(pbVar3 + ((iVar13 + iVar11) - (iVar19 + iVar17)));
    *(undefined2 *)param_1 = 0x152;
    *puVar20 = (uint)pbVar18;
    param_2[5] = local_30;
    param_2[9] = 0;
    param_2[0xb] = (uint)(cVar1 == '\x01');
    return;
  }
LAB_01999bec:
  if (local_7c == 0) goto LAB_01999c78;
  local_7c = local_7c + -1;
  puVar5 = (undefined4 *)puVar5[uVar23 + 0x136];
  goto LAB_01999b7c;
LAB_01999c78:
  uVar4 = 0;
  uVar8 = 0x12;
  goto LAB_01999b0c;
}

