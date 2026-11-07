// FUN_006096b4 @ 006096b4 size=1100 calls_out=2 calls_in=3
// strings: 

void FUN_006096b4(uint *param_1,uint *param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  undefined4 *puVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  int iVar14;
  uint uVar15;
  byte *pbVar16;
  int iVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  byte *pbVar21;
  uint uVar22;
  uint *puVar23;
  int iVar24;
  uint uVar25;
  int local_7c;
  undefined2 local_68;
  undefined1 local_66;
  uint local_64;
  uint local_60;
  int *local_5c;
  uint local_58;
  uint *local_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  int local_3c;
  char local_38;
  undefined2 local_37;
  undefined1 local_35;
  uint local_34;
  uint local_30;
  uint local_2c;
  
  puVar23 = param_2 + 4;
  local_64 = *puVar23;
  if (local_64 == 0) {
    local_60 = param_2[1];
  }
  else {
    if (param_2[9] == 1) {
      local_60 = param_2[10];
      if (param_2[5] < local_60) {
        local_2c = 0;
        local_38 = '\x13';
        local_30 = local_64;
LAB_0060998c:
        *(undefined1 *)((int)param_1 + 3) = local_66;
        *(undefined2 *)((int)param_1 + 1) = local_68;
        param_1[1] = local_64;
        param_1[2] = local_30;
        param_1[3] = local_2c;
        *(char *)param_1 = local_38;
        return;
      }
      local_64 = local_64 + local_60;
      local_60 = param_2[5] - local_60;
    }
    else {
      piVar7 = (int *)param_2[6];
      local_60 = param_2[5];
      if (*piVar7 == 1) {
        local_5c = (int *)piVar7[2];
        local_58 = piVar7[3];
      }
      else {
        local_58 = piVar7[1];
        if (5 < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,local_58,5,&DAT_01882304);
        }
        local_5c = piVar7 + 2;
      }
      local_54 = puVar23;
      if (local_58 != 0) {
        do {
          uVar3 = local_58 - 1;
          piVar7 = local_5c + 4;
          iStack_44 = local_5c[3];
          iStack_48 = local_5c[2];
          iStack_4c = local_5c[1];
          local_50 = *local_5c;
          FUN_006067fc(&local_40,&local_64,*(undefined4 *)(local_54[3] + 0x20),&local_50);
          if (local_40 == 0x2e && local_3c == 0) {
            local_68 = local_37;
            local_66 = local_35;
            local_64 = local_34;
            local_60 = local_30;
            if (local_38 == 'O') goto LAB_00609824;
            goto LAB_0060998c;
          }
          local_5c = piVar7;
          local_58 = uVar3;
        } while (uVar3 != 0);
      }
      if (local_54[5] == 0) {
        local_54[5] = 1;
        local_54[6] = local_64 - *local_54;
      }
    }
LAB_00609824:
    *param_2 = local_64;
    param_2[1] = local_60;
  }
  if (local_60 == 0) {
    param_2[0xb] = 0;
    param_2[4] = 0;
    *(undefined2 *)param_1 = 0x4f;
    return;
  }
  uVar3 = param_2[2];
  iVar17 = 4;
  pbVar19 = (byte *)*param_2;
  uVar25 = 0;
  uVar22 = param_2[3];
  iVar14 = *(int *)(uVar3 + 0x24);
  iVar9 = *(int *)(uVar3 + 0x18);
  iVar11 = *(int *)(uVar3 + 0x1c);
  if (*(char *)(uVar3 + 0x21) == '\b') {
    iVar17 = 0xc;
  }
  uVar12 = 0;
  uVar10 = 0;
  pbVar5 = (byte *)0x0;
  pbVar21 = pbVar19;
  do {
    if (local_60 == 0) {
      uVar10 = uVar12 << 8 | 0x13;
      uVar25 = 0;
      *param_2 = (uint)pbVar21;
      param_2[1] = 0;
      goto LAB_006098f8;
    }
    pbVar20 = pbVar21 + 1;
    bVar1 = *pbVar21;
    uVar12 = (uint)bVar1;
    local_60 = local_60 - 1;
    pbVar21 = pbVar20;
    if ((uVar10 == 0x3f) && (1 < uVar12)) {
      *param_2 = (uint)pbVar20;
      param_2[1] = local_60;
      uVar10 = 6;
      uVar25 = 0;
      goto LAB_006098f8;
    }
    uVar18 = uVar10 & 0x3f;
    uVar8 = uVar12 & 0x7f;
    uVar15 = uVar18 - 0x20;
    uVar10 = uVar10 + 7;
    uVar4 = uVar8 << uVar18;
    if (-1 < (int)uVar15) {
      uVar4 = 0;
    }
    pbVar5 = (byte *)(uVar4 | (uint)pbVar5);
    uVar4 = uVar8 >> (0x20 - uVar18 & 0xff);
    if (-1 < (int)uVar15) {
      uVar4 = uVar8 << (uVar15 & 0xff);
    }
    uVar25 = uVar4 | uVar25;
  } while ((char)bVar1 < '\0');
  *param_2 = (uint)pbVar20;
  param_2[1] = local_60;
  if (pbVar5 == (byte *)0x0 && uVar25 == 0) {
    param_2[4] = 0;
    param_2[0xb] = 0xffffffff;
    *(undefined2 *)param_1 = 0x14f;
    return;
  }
  if ((uVar25 == 0) && (pbVar5 + -1 < *(byte **)(uVar22 + 8))) {
    puVar6 = (undefined4 *)((int)(pbVar5 + -1) * 0x68 + *(int *)(uVar22 + 4));
LAB_00609a90:
    cVar2 = *(char *)((int)puVar6 + 0x62);
    param_2[6] = (uint)puVar6;
    param_2[7] = uVar3;
    param_2[8] = (uint)(pbVar19 + ((iVar17 + iVar14) - (iVar11 + iVar9)));
    *(undefined2 *)param_1 = 0x14f;
    *puVar23 = (uint)pbVar20;
    param_2[5] = local_60;
    param_2[9] = 0;
    param_2[0xb] = (uint)(cVar2 == '\x01');
    return;
  }
  puVar6 = *(undefined4 **)(uVar22 + 0xc);
  uVar10 = 0x12;
  pbVar21 = pbVar5;
  if (puVar6 != (undefined4 *)0x0) {
    local_7c = *(int *)(uVar22 + 0x10);
    do {
      uVar22 = 0xffffffff;
      iVar24 = (uint)*(ushort *)((int)puVar6 + 0x4d6) << 3;
      puVar13 = puVar6;
      do {
        if (iVar24 == 0) {
          uVar22 = (uint)*(ushort *)((int)puVar6 + 0x4d6);
          goto LAB_00609a40;
        }
        pbVar16 = (byte *)*puVar13;
        iVar24 = iVar24 + -8;
        uVar10 = puVar13[1];
        uVar22 = uVar22 + 1;
        puVar13 = puVar13 + 2;
        uVar10 = (uint)(uVar10 <= uVar25 && (uint)(pbVar5 <= pbVar16) <= uVar10 - uVar25) -
                 (uint)(uVar25 <= uVar10 && (uint)(pbVar16 <= pbVar5) <= uVar25 - uVar10);
      } while (uVar10 == 1);
      if ((uVar10 & 0xff) == 0) {
        puVar6 = puVar6 + uVar22 * 0x1a + 0x16;
        goto LAB_00609a90;
      }
LAB_00609a40:
      if (local_7c == 0) goto LAB_00609adc;
      local_7c = local_7c + -1;
      puVar6 = (undefined4 *)puVar6[uVar22 + 0x136];
    } while( true );
  }
LAB_006098f8:
  *param_2 = 1;
  param_2[0xb] = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  *param_1 = uVar10;
  param_1[1] = (uint)pbVar21;
  param_1[2] = (uint)pbVar21;
  param_1[3] = uVar25;
  return;
LAB_00609adc:
  uVar10 = 0x12;
  goto LAB_006098f8;
}

