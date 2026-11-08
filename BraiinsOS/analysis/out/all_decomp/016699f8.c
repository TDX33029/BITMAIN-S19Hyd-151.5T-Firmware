// FUN_016699f8 @ 016699f8 size=1008 calls_out=6 calls_in=1
// strings: 

void FUN_016699f8(uint *param_1,int *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  uint local_4c;
  uint local_44;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
  iVar10 = param_2[2];
  iVar11 = param_2[3];
  iVar15 = *param_2;
  iVar13 = 0;
  if (iVar11 != 0) {
    do {
      if (*(char *)(iVar10 + iVar13) != ' ' && *(char *)(iVar10 + iVar13) != '\t')
      goto LAB_01669a3c;
      iVar13 = iVar13 + 1;
    } while (iVar11 != iVar13);
    iVar13 = iVar11;
  }
LAB_01669a3c:
  pcVar12 = (char *)(iVar10 + iVar13);
  uVar4 = iVar11 - iVar13;
  param_2[2] = (int)pcVar12;
  param_2[3] = uVar4;
  if (uVar4 == 0) {
    param_2[2] = (int)pcVar12;
    param_2[3] = 0;
LAB_01669ad4:
    local_44 = 1;
    uVar4 = 4;
    local_2c = 0;
    local_28 = 0;
    local_4c = 0;
    uVar16 = 0;
    uVar17 = 0;
LAB_01669db0:
    local_34 = local_4c & 0xff | uVar16 << 8;
    goto LAB_01669db8;
  }
  cVar1 = *pcVar12;
  param_2[2] = (int)pcVar12;
  param_2[3] = uVar4;
  if (cVar1 == '\"') {
    FUN_0166a7a4(&local_3c,param_2);
    local_44 = local_3c;
    local_4c = local_38;
    uVar4 = local_34;
    uVar16 = local_30;
    if (local_3c == 3) {
      uVar2 = 0;
      if ((int)local_30 < 0) {
LAB_01669b20:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar2,local_30);
      }
      if (local_30 == 0) {
        uVar4 = 1;
        local_4c = 0;
      }
      else {
        uVar4 = thunk_FUN_016d4a50(local_30);
        if (uVar4 == 0) {
          uVar2 = 1;
          goto LAB_01669b20;
        }
        local_4c = local_30;
      }
      FUN_016dd1aa(uVar4,local_34,local_30);
      if ((local_38 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(local_34);
      }
      uVar16 = local_4c >> 8;
      local_34 = local_30;
    }
    else {
joined_r0x01669bf0:
      local_34 = uVar16;
      uVar16 = local_4c >> 8;
      uVar17 = local_34;
      if (local_44 != 3) goto LAB_01669db0;
    }
LAB_01669c70:
    pcVar14 = (char *)param_2[2];
    iVar11 = *param_2;
    local_44 = uVar4;
  }
  else {
    if (cVar1 == '\'') {
      FUN_0166ac58(&local_3c,param_2);
      local_44 = local_3c;
      local_4c = local_38;
      uVar4 = local_34;
      uVar16 = local_30;
      if (local_3c != 3) goto joined_r0x01669bf0;
      if ((int)local_34 < 0) goto LAB_01669b8c;
      if (local_34 == 0) {
        uVar4 = 1;
        local_4c = 0;
      }
      else {
        uVar4 = thunk_FUN_016d4a50(local_34);
        if (uVar4 == 0) goto LAB_01669dd8;
        local_4c = local_34;
      }
      FUN_016dd1aa(uVar4,local_38,local_34);
      uVar16 = local_4c >> 8;
      goto LAB_01669c70;
    }
    uVar16 = 0;
    do {
      uVar9 = (uint)(byte)pcVar12[uVar16];
      uVar17 = (uVar9 & 0xdf) - 0x41;
      bVar18 = 0x19 < uVar17;
      if (bVar18) {
        uVar17 = uVar9 - 0x30;
      }
      if ((!(!bVar18 || uVar17 < 10)) && (local_34 = uVar16, !(uVar9 == 0x5f || uVar9 == 0x2d)))
      break;
      uVar16 = uVar16 + 1;
      local_34 = uVar4;
    } while (uVar4 != uVar16);
    if (local_34 == 0) goto LAB_01669ad4;
    pcVar14 = pcVar12 + local_34;
    param_2[2] = (int)pcVar14;
    param_2[3] = uVar4 - local_34;
    if ((int)local_34 < 0) {
LAB_01669b8c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,local_34);
    }
    local_44 = thunk_FUN_016d4a50(local_34);
    if (local_44 == 0) {
LAB_01669dd8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_34);
    }
    FUN_016dd1aa(local_44,pcVar12,local_34);
    uVar16 = local_34 >> 8;
    iVar11 = iVar15;
    local_4c = local_34;
  }
  uVar9 = 0x80000002;
  uVar17 = (int)pcVar12 - iVar15;
  iVar3 = param_2[2];
  iVar5 = param_2[3];
  uVar16 = local_4c & 0xff | uVar16 << 8;
  iVar7 = 0;
  if (uVar17 == (int)pcVar14 - iVar11) {
    uVar9 = 0x80000000;
  }
  if (iVar5 != 0) {
    do {
      if (*(char *)(iVar3 + iVar7) != ' ' && *(char *)(iVar3 + iVar7) != '\t') goto LAB_01669cd0;
      iVar7 = iVar7 + 1;
    } while (iVar5 != iVar7);
    iVar7 = iVar5;
  }
LAB_01669cd0:
  uVar4 = iVar10 - iVar15;
  local_2c = iVar3 - *param_2;
  local_28 = (iVar3 + iVar7) - *param_2;
  param_2[2] = iVar3 + iVar7;
  param_2[3] = iVar5 - iVar7;
  if (uVar16 != 0x80000000) {
    uVar8 = 0x80000002;
    param_1[9] = 0x80000003;
    if (iVar7 == 0) {
      uVar8 = 0x80000000;
    }
    param_1[6] = 0x80000003;
    uVar6 = 0x80000002;
    if (iVar13 == 0) {
      uVar6 = 0x80000000;
    }
    param_1[3] = uVar9;
    *param_1 = uVar16;
    param_1[1] = local_44;
    param_1[2] = local_34;
    param_1[4] = uVar17;
    param_1[5] = (int)pcVar14 - iVar11;
    param_1[0xc] = uVar6;
    param_1[0xd] = uVar4;
    param_1[0xe] = uVar17;
    param_1[0xf] = uVar8;
    param_1[0x10] = local_2c;
    param_1[0x11] = local_28;
    return;
  }
LAB_01669db8:
  param_1[5] = local_2c;
  *param_1 = 0x80000000;
  param_1[1] = local_44;
  param_1[2] = local_34;
  param_1[3] = uVar4;
  param_1[4] = uVar17;
  param_1[6] = local_28;
  return;
}

