// FUN_0060ad68 @ 0060ad68 size=924 calls_out=4 calls_in=1
// strings: 

void FUN_0060ad68(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined1 uVar7;
  uint uVar8;
  undefined2 *puVar9;
  uint uVar10;
  byte *pbVar11;
  uint uVar12;
  byte *pbVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  undefined2 uVar17;
  uint uVar18;
  byte *pbVar19;
  uint unaff_r10;
  uint uVar20;
  byte *unaff_r11;
  byte *pbVar21;
  ushort local_58;
  int local_48;
  int local_34;
  uint local_30;
  int local_2c;
  uint local_28;
  
  pbVar13 = (byte *)*param_2;
  if (param_2[1] == 0) {
    *(byte **)(param_1 + 4) = pbVar13;
    *(undefined4 *)(param_1 + 0xc) = 0;
    uVar7 = 0x13;
    *(byte **)(param_1 + 8) = pbVar13;
LAB_0060b02c:
    *param_1 = uVar7;
    return;
  }
  uVar15 = (uint)*pbVar13;
  local_34 = param_2[1] + -1;
  *param_2 = pbVar13 + 1;
  param_2[1] = local_34;
  if (uVar15 == 0) {
    local_28 = 0;
    local_2c = 2;
    local_30 = 0;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(uVar15 << 2);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(2,uVar15 << 2);
    }
    local_28 = 0;
    local_48 = 0;
    pbVar13 = pbVar13 + 1;
    local_30 = uVar15;
    local_2c = iVar4;
    do {
      uVar2 = local_28;
      iVar16 = 0;
      uVar10 = 0;
      pbVar21 = (byte *)0x0;
      uVar20 = 0;
      uVar5 = local_28 + 1;
      pbVar19 = pbVar13;
      uVar12 = 0;
      do {
        pbVar11 = pbVar19;
        if (local_34 + iVar16 == 0) {
          unaff_r10 = 0;
          uVar7 = 0x13;
          pbVar19 = pbVar11;
LAB_0060b080:
          param_1[1] = (char)uVar12;
          *param_1 = uVar7;
          *(byte **)(param_1 + 4) = pbVar19;
          *(byte **)(param_1 + 8) = pbVar11;
          *(uint *)(param_1 + 0xc) = unaff_r10;
          goto joined_r0x0060b0a0;
        }
        bVar1 = pbVar13[-iVar16];
        uVar8 = (uint)bVar1;
        pbVar19 = pbVar11 + 1;
        *param_2 = pbVar19;
        param_2[1] = local_34 + -1 + iVar16;
        if ((uVar10 == 0x3f) && (1 < uVar8)) {
          uVar7 = 6;
          pbVar11 = unaff_r11;
          goto LAB_0060b080;
        }
        uVar14 = uVar10 & 0x3f;
        uVar6 = uVar8 & 0x7f;
        uVar18 = uVar14 - 0x20;
        uVar12 = uVar6 << uVar14;
        if (-1 < (int)uVar18) {
          uVar12 = 0;
        }
        pbVar21 = (byte *)(uVar12 | (uint)pbVar21);
        uVar12 = uVar6 >> (0x20 - uVar14 & 0xff);
        iVar16 = iVar16 + -1;
        if (-1 < (int)uVar18) {
          uVar12 = uVar6 << (uVar18 & 0xff);
        }
        uVar20 = uVar12 | uVar20;
        uVar10 = uVar10 + 7;
        uVar12 = uVar8;
      } while (0x7fffffff < (uint)(int)(char)bVar1);
      iVar16 = local_34 + iVar16;
      pbVar13 = &DAT_0000ffff;
      if (pbVar21 < &DAT_0000ffff) {
        pbVar13 = pbVar21;
      }
      uVar17 = SUB42(pbVar13,0);
      if (uVar20 != 0) {
        uVar17 = 0xffff;
      }
      if (iVar16 == 0) {
LAB_0060b0bc:
        uVar7 = 0x13;
LAB_0060b0c0:
        *(byte **)(param_1 + 4) = pbVar19;
        *(byte **)(param_1 + 8) = pbVar19;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(ushort *)(param_1 + 2) = local_58;
        *param_1 = uVar7;
        goto joined_r0x0060b0a0;
      }
      bVar1 = *pbVar19;
      local_34 = iVar16 + -1;
      pbVar19 = pbVar11 + 2;
      uVar3 = bVar1 & 0x7f;
      param_2[1] = local_34;
      *param_2 = pbVar19;
      if ((char)bVar1 < '\0') {
        if (local_34 == 0) goto LAB_0060b0bc;
        pbVar19 = pbVar11 + 3;
        bVar1 = pbVar11[2];
        local_34 = iVar16 + -2;
        *param_2 = pbVar19;
        param_2[1] = local_34;
        uVar3 = uVar3 | (bVar1 & 0x7f) << 7;
        if (-1 < (char)bVar1) {
          local_58 = uVar3;
          goto LAB_0060af7c;
        }
        if (local_34 == 0) goto LAB_0060b0bc;
        local_34 = iVar16 + -3;
        param_2[1] = local_34;
        pbVar19 = pbVar11 + 4;
        bVar1 = pbVar11[3];
        *param_2 = pbVar19;
        if (bVar1 < 4) {
          local_58 = uVar3 | (ushort)bVar1 << 0xe;
          goto LAB_0060af7c;
        }
        uVar7 = 6;
        goto LAB_0060b0c0;
      }
      local_58 = uVar3;
LAB_0060af7c:
      if (local_28 == local_30) {
        FUN_0061ce80(&local_30);
        iVar4 = local_2c;
      }
      local_48 = local_48 +
                 (uint)((uVar20 == 0 && (&DAT_0000ffff < pbVar21) <= uVar20) &&
                       ((uint)pbVar21 & 0xffff) == 1);
      puVar9 = (undefined2 *)(iVar4 + uVar2 * 4);
      *puVar9 = uVar17;
      puVar9[1] = local_58;
      pbVar13 = pbVar19;
      unaff_r10 = uVar20;
      unaff_r11 = pbVar21;
      local_28 = uVar5;
    } while (uVar5 != uVar15);
    if (local_48 == 1) {
      *(int *)(param_1 + 8) = local_2c;
      uVar7 = 0x4f;
      *(uint *)(param_1 + 4) = local_30;
      *(uint *)(param_1 + 0xc) = uVar5;
      goto LAB_0060b02c;
    }
  }
  *param_1 = 0x47;
joined_r0x0060b0a0:
  if (local_30 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_2c);
  return;
}

