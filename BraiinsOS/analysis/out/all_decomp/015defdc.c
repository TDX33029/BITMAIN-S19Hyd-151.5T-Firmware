// FUN_015defdc @ 015defdc size=1084 calls_out=2 calls_in=2
// strings: 

void FUN_015defdc(uint *param_1,uint *param_2)

{
  char cVar1;
  byte *pbVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  int *piVar6;
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
  int local_80;
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
  uint uStack_30;
  uint uStack_2c;
  
  puVar20 = param_2 + 4;
  local_64 = *puVar20;
  if (local_64 == 0) {
    local_60 = param_2[1];
  }
  else {
    if (param_2[9] == 1) {
      local_60 = param_2[10];
      if (param_2[5] < local_60) {
        uStack_2c = 0;
        local_38 = '\x13';
        uStack_30 = local_64;
LAB_015df2b8:
        *(undefined1 *)((int)param_1 + 3) = local_66;
        *(undefined2 *)((int)param_1 + 1) = local_68;
        param_1[1] = local_64;
        param_1[2] = uStack_30;
        param_1[3] = uStack_2c;
        *(char *)param_1 = local_38;
        return;
      }
      local_64 = local_64 + local_60;
      local_60 = param_2[5] - local_60;
    }
    else {
      piVar6 = (int *)param_2[6];
      local_60 = param_2[5];
      if (*piVar6 == 1) {
        local_5c = (int *)piVar6[2];
        local_58 = piVar6[3];
      }
      else {
        local_58 = piVar6[1];
        if (5 < local_58) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(0,local_58,5,&DAT_018822e4);
        }
        local_5c = piVar6 + 2;
      }
      local_54 = puVar20;
      if (local_58 != 0) {
        do {
          uVar8 = local_58 - 1;
          piVar6 = local_5c + 4;
          iStack_44 = local_5c[3];
          iStack_48 = local_5c[2];
          iStack_4c = local_5c[1];
          local_50 = *local_5c;
          FUN_015d5608(&local_40,&local_64,*(undefined4 *)(local_54[3] + 0x20),&local_50);
          if (local_40 == 0x2e && local_3c == 0) {
            local_68 = local_37;
            local_66 = local_35;
            local_64 = local_34;
            local_60 = uStack_30;
            if (local_38 == 'R') goto LAB_015df148;
            goto LAB_015df2b8;
          }
          local_5c = piVar6;
          local_58 = uVar8;
        } while (uVar8 != 0);
      }
      if (local_54[5] == 0) {
        local_54[5] = 1;
        local_54[6] = local_64 - *local_54;
      }
    }
LAB_015df148:
    *param_2 = local_64;
    param_2[1] = local_60;
  }
  if (local_60 == 0) {
    param_2[0xb] = 0;
    param_2[4] = 0;
    *(undefined2 *)param_1 = 0x52;
    return;
  }
  uVar8 = param_2[2];
  iVar13 = 4;
  pbVar2 = (byte *)*param_2;
  uVar22 = 0;
  uVar23 = param_2[3];
  pbVar15 = pbVar2 + local_60;
  iVar11 = *(int *)(uVar8 + 0x24);
  iVar17 = *(int *)(uVar8 + 0x18);
  iVar19 = *(int *)(uVar8 + 0x1c);
  if (*(char *)(uVar8 + 0x21) == '\b') {
    iVar13 = 0xc;
  }
  pbVar21 = (byte *)0x0;
  uVar16 = 0;
  pbVar10 = pbVar2;
  do {
    local_60 = local_60 - 1;
    pbVar18 = pbVar10 + 1;
    uVar3 = (uint)*pbVar10;
    if ((uVar16 == 0x3f) && (1 < uVar3)) {
      uVar8 = 6;
      goto LAB_015df224;
    }
    uVar12 = uVar16 & 0x3f;
    uVar9 = uVar3 & 0x7f;
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
      param_2[1] = local_60;
      if (pbVar21 == (byte *)0x0 && uVar22 == 0) {
        param_2[4] = 0;
        param_2[0xb] = 0xffffffff;
        *(undefined2 *)param_1 = 0x152;
        return;
      }
      if ((uVar22 == 0) && (pbVar21 + -1 < *(byte **)(uVar23 + 8))) {
        puVar4 = (undefined4 *)((int)(pbVar21 + -1) * 0x68 + *(int *)(uVar23 + 4));
        goto LAB_015df3a8;
      }
      puVar4 = *(undefined4 **)(uVar23 + 0xc);
      if (puVar4 == (undefined4 *)0x0) goto LAB_015df3f0;
      local_80 = *(int *)(uVar23 + 0x10);
      goto LAB_015df2ec;
    }
    uVar16 = uVar16 + 7;
    pbVar10 = pbVar18;
  } while (local_60 != 0);
  uVar8 = 0x13;
  pbVar21 = pbVar15;
LAB_015df224:
  uVar3 = uVar3 << 8;
  uVar22 = 0;
LAB_015df22c:
  *param_2 = 1;
  param_2[0xb] = 0;
  param_2[1] = 0;
  param_2[4] = 0;
  *param_1 = uVar8 | uVar3;
  param_1[1] = (uint)pbVar15;
  param_1[2] = (uint)pbVar21;
  param_1[3] = uVar22;
  return;
LAB_015df2ec:
  uVar23 = 0xffffffff;
  iVar24 = (uint)*(ushort *)((int)puVar4 + 0x4d6) << 3;
  puVar5 = puVar4;
  do {
    if (iVar24 == 0) {
      uVar23 = (uint)*(ushort *)((int)puVar4 + 0x4d6);
      goto LAB_015df35c;
    }
    pbVar10 = (byte *)*puVar5;
    uVar16 = puVar5[1];
    iVar24 = iVar24 + -8;
    uVar23 = uVar23 + 1;
    puVar5 = puVar5 + 2;
    uVar16 = (uint)(uVar16 <= uVar22 && (uint)(pbVar21 <= pbVar10) <= uVar16 - uVar22) -
             (uint)(uVar22 <= uVar16 && (uint)(pbVar10 <= pbVar21) <= uVar22 - uVar16);
  } while (uVar16 == 1);
  if ((uVar16 & 0xff) == 0) {
    puVar4 = puVar4 + uVar23 * 0x1a + 0x16;
LAB_015df3a8:
    cVar1 = *(char *)((int)puVar4 + 0x62);
    param_2[6] = (uint)puVar4;
    param_2[7] = uVar8;
    param_2[8] = (uint)(pbVar2 + ((iVar13 + iVar11) - (iVar19 + iVar17)));
    *(undefined2 *)param_1 = 0x152;
    *puVar20 = (uint)pbVar18;
    param_2[5] = local_60;
    param_2[9] = 0;
    param_2[0xb] = (uint)(cVar1 == '\x01');
    return;
  }
LAB_015df35c:
  if (local_80 == 0) goto LAB_015df3f0;
  local_80 = local_80 + -1;
  puVar4 = (undefined4 *)puVar4[uVar23 + 0x136];
  goto LAB_015df2ec;
LAB_015df3f0:
  uVar3 = 0;
  uVar8 = 0x12;
  goto LAB_015df22c;
}

