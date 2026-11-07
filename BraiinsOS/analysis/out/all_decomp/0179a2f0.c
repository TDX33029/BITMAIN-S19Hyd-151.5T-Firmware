// FUN_0179a2f0 @ 0179a2f0 size=3748 calls_out=9 calls_in=1
// strings: 

uint FUN_0179a2f0(undefined4 *param_1,undefined4 param_2,uint param_3,uint param_4,uint param_5,
                 int param_6,int param_7)

{
  char cVar1;
  longlong lVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined8 *puVar14;
  code *pcVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  bool bVar24;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  
  param_1[0xbb] = 1;
  FUN_016dd1aa(param_1 + 0x2f,param_2,0xb0);
  puVar13 = param_1 + 0x30;
  if (param_1[0x44] == 1) {
    FUN_01802be8(param_1 + 0x44,puVar13);
  }
  uVar7 = param_1[0x30];
  uVar9 = 1 << (uVar7 - 0x20 & 0xff) | 1U >> (0x20 - uVar7 & 0xff);
  local_30 = 1 << (uVar7 & 0xff);
  if (param_4 < uVar9 || uVar9 - param_4 < (uint)(param_3 <= local_30)) {
    local_30 = param_3;
    if (param_3 == 0) {
      local_30 = 1;
    }
  }
  else if (local_30 == 0) {
    local_30 = 1;
  }
  if (local_30 < (uint)param_1[0x59]) {
    uVar7 = local_30;
  }
  else {
    uVar7 = param_1[0x59];
  }
  iVar10 = param_1[0x34];
  if (param_7 != 1) {
    local_30 = 0;
  }
  iVar11 = param_1[0x58];
  if (param_7 != 1) {
    local_34 = local_30;
  }
  else {
    if (param_1[0x4c] == 0) {
      if (uVar7 < 0xff00ff00) {
        iVar4 = uVar7 + (uVar7 >> 8);
        if (uVar7 < 0x20000) {
          iVar4 = iVar4 + (0x20000 - uVar7 >> 0xb);
        }
        if (iVar4 != 0) {
          local_34 = iVar4 + 1;
          goto LAB_0179a9c8;
        }
      }
      local_34 = 0xffffffb9;
    }
    else {
      local_34 = 0;
    }
LAB_0179a9c8:
    if (param_1[0x4b] == 0) {
      local_30 = local_30 + uVar7;
    }
    else {
      local_30 = 0;
    }
  }
  iVar4 = FUN_01802cd4(param_1[0x44],param_1[0x45],param_1[0x46],param_1[0x47],param_1[0x48],
                       param_1[0x49],uVar7);
  bVar24 = 0x5ffffffe < param_5;
  bVar23 = param_5 == 0x5fffffff;
  if (param_5 < 0x60000000) {
    bVar24 = 0x9effffff < (uint)(param_1[0x21a] - param_1[0x21b]);
    bVar23 = param_1[0x21a] - param_1[0x21b] == 0x9f000000;
  }
  if (bVar24 && !bVar23) {
    bVar23 = true;
  }
  else {
    bVar23 = param_1[0xbc] == 0;
  }
  uVar9 = FUN_01798aac(puVar13,param_1 + 0x44,param_1[0xb6] != 0,param_1[0x50],local_30,local_34,
                       param_3,param_4,param_1[0x58] != 0,param_1[0x59]);
  if (0xffffff88 < uVar9) {
    return uVar9;
  }
  iVar20 = param_1[0x89];
  if (param_1[0xb6] == 0) {
    param_1[0x91] = param_1[0x91] + 1;
  }
  if ((((uint)(param_1[0x8e] - param_1[0x8c]) < uVar9 * 3) || ((int)param_1[0x91] < 0x81)) &&
     (local_3c = param_1[0x8a], uVar9 <= local_3c - iVar20)) {
    uVar9 = param_1[0x8b];
    local_38 = local_3c & 0xffffffc0;
    param_1[0x8e] = local_38;
    *(undefined1 *)(param_1 + 0x90) = 0;
    if (1 < (uint)param_1[0x92]) {
      param_1[0x92] = (uint)(1 < (uint)param_1[0x92]);
    }
  }
  else {
    if (param_1[0xb6] != 0) {
      return 0xffffffc0;
    }
    pcVar15 = (code *)param_1[0xb3];
    uVar6 = param_1[0xb4];
    FUN_016dd606(param_1 + 0x89,0,0x2c);
    if (iVar20 != 0) {
      if (pcVar15 == (code *)0x0) {
        thunk_FUN_016d3fb4(iVar20);
        uVar6 = param_1[0xb4];
      }
      else {
        (*pcVar15)(uVar6,iVar20);
        uVar6 = param_1[0xb4];
      }
    }
    if ((code *)param_1[0xb2] == (code *)0x0) {
      iVar20 = thunk_FUN_016d4a50(uVar9);
    }
    else {
      iVar20 = (*(code *)param_1[0xb2])(uVar6,uVar9);
    }
    if (iVar20 == 0) {
      return 0xffffffc0;
    }
    local_3c = iVar20 + uVar9;
    uVar18 = iVar20 + 0x11f4;
    local_38 = local_3c & 0xffffffc0;
    param_1[0x8a] = local_3c;
    uVar9 = uVar18;
    if (local_3c < uVar18) {
      uVar9 = 1;
    }
    param_1[0x89] = iVar20;
    param_1[0x8b] = iVar20;
    param_1[0x8d] = iVar20;
    param_1[0x8f] = local_38;
    param_1[0x92] = 0;
    param_1[0x93] = 0;
    *(undefined1 *)(param_1 + 0x90) = 0;
    param_1[0x8c] = iVar20;
    param_1[0x8e] = local_38;
    param_1[0x91] = 0;
    if (local_3c < uVar18) {
      param_1[0x218] = 0;
      *(char *)(param_1 + 0x90) = (char)uVar9;
      return 0xffffffc0;
    }
    uVar18 = iVar20 + 0x23e8;
    param_1[0x8b] = uVar9;
    param_1[0x8c] = uVar9;
    param_1[0x8d] = uVar9;
    if (local_3c < uVar18) {
      uVar9 = 1;
    }
    param_1[0x218] = iVar20;
    if (local_3c < uVar18) {
      param_1[0x219] = 0;
      *(char *)(param_1 + 0x90) = (char)uVar9;
      return 0xffffffc0;
    }
    param_1[0x219] = uVar9;
    param_1[0x8b] = uVar18;
    param_1[0x8c] = uVar18;
    param_1[0x8d] = uVar18;
    if (uVar9 == 0) {
      return 0xffffffc0;
    }
    uVar9 = iVar20 + 0x46c0;
    if (local_3c < uVar9) {
      param_1[0x252] = 0;
      *(undefined1 *)(param_1 + 0x90) = 1;
      return 0xffffffc0;
    }
    param_1[0x252] = uVar18;
    param_1[0x8b] = uVar9;
    param_1[0x8c] = uVar9;
    param_1[0x8d] = uVar9;
    if (uVar18 == 0) {
      return 0xffffffc0;
    }
    bVar23 = true;
    *(undefined1 *)(param_1 + 0x90) = 0;
    param_1[0x8e] = local_38;
  }
  param_1[0x248] = *puVar13;
  param_1[0x249] = param_1[0x31];
  param_1[0x24a] = param_1[0x32];
  param_1[0x24b] = param_1[0x33];
  param_1[0x24c] = param_1[0x34];
  param_1[0x24d] = param_1[0x35];
  param_1[0x24e] = param_1[0x36];
  param_1[0x250] = (uint)(param_1[0x55] == 1);
  puVar14 = (undefined8 *)(param_1 + 0x98);
  param_1[0x96] = param_3 + 1;
  param_1[0x97] = param_4 + (0xfffffffe < param_3);
  *puVar14 = 0;
  if (param_4 == 0xffffffff && param_3 == 0xffffffff) {
    puVar14 = (undefined8 *)0x0;
  }
  *(undefined8 *)(param_1 + 0x9a) = 0;
  if (param_4 == 0xffffffff && param_3 == 0xffffffff) {
    param_1[0x37] = puVar14;
  }
  param_1[0x94] = uVar7;
  FUN_016dd606(param_1 + 0x9c,0,0x58);
  iVar8 = param_1[0x218];
  iVar20 = 0;
  *(undefined8 *)(param_1 + 0x9e) = 0x60ea27eeadc0b5d6;
  *(undefined8 *)(param_1 + 0xa0) = 0xc2b2ae3d27d4eb4f;
  *(undefined8 *)(param_1 + 0xa4) = 0x61c8864e7a143579;
  *param_1 = 1;
  param_1[0x87] = 0;
  param_1[0x88] = 0;
  *(undefined4 *)(iVar8 + 0x11e8) = 1;
  *(undefined4 *)(iVar8 + 0x11ec) = 4;
  *(undefined4 *)(iVar8 + 0x11f0) = 8;
  *(undefined4 *)(iVar8 + 0x404) = 0;
  uVar18 = param_1[0x36];
  iVar19 = param_1[0x50];
  *(undefined4 *)(iVar8 + 0x11dc) = 0;
  *(undefined4 *)(iVar8 + 0x11e0) = 0;
  *(undefined4 *)(iVar8 + 0x11e4) = 0;
  if (uVar18 != 1) {
    bVar24 = uVar18 - 3 == 2;
    if (uVar18 - 3 < 3) {
      bVar24 = iVar19 == 1;
    }
    if (!bVar24) {
      iVar20 = 4 << (param_1[0x31] & 0xff);
    }
  }
  uVar17 = param_1[0x32];
  if (param_1[0x34] == 3) {
    uVar22 = param_1[0x30];
    if (uVar22 == 0) {
      uVar5 = 0;
    }
    else {
      if (0x10 < uVar22) {
        uVar22 = 0x11;
      }
      uVar5 = 4 << (uVar22 & 0xff);
    }
  }
  else {
    uVar22 = 0;
    uVar5 = uVar22;
  }
  if (bVar23) {
    param_1[0x8d] = uVar9;
    param_1[0x21f] = 0;
    param_1[0x21b] = &DAT_005a173c;
    param_1[0x21c] = &DAT_005a173c;
    param_1[0x21a] = &DAT_005a173e;
    iVar8 = 2;
  }
  else {
    iVar8 = param_1[0x21a] - param_1[0x21b];
  }
  param_1[0x222] = uVar22;
  param_1[0x21d] = iVar8;
  param_1[0x21e] = iVar8;
  param_1[0x221] = iVar8;
  param_1[0x8c] = uVar9;
  param_1[0x251] = 0;
  param_1[0x220] = 0;
  param_1[0x23d] = 0;
  param_1[0x247] = 0;
  if (param_1[0x92] == 0) {
    uVar22 = uVar9 + (-uVar9 & 0x3f);
    param_1[0x8f] = local_38;
    if (uVar22 <= local_3c) {
      param_1[0x8c] = uVar22;
      if (uVar22 < uVar9) {
      }
      else {
        uVar9 = uVar22;
      }
      param_1[0x8d] = uVar9;
      param_1[0x8b] = uVar22;
      uVar12 = uVar22 + (4 << (uVar17 & 0xff));
      bVar23 = local_38 < uVar12;
      if (bVar23) {
        uVar21 = 0;
        uVar12 = uVar22;
      }
      else {
        uVar21 = uVar22;
      }
      param_1[0x92] = 1;
      if (bVar23) {
        *(undefined1 *)(param_1 + 0x90) = 1;
      }
      else {
        param_1[0x8c] = uVar12;
      }
      goto LAB_0179a654;
    }
    uVar22 = param_1[0x8b];
    param_1[0x231] = 0;
    param_1[0x8d] = uVar22;
    uVar12 = uVar22 + (-uVar22 & 0x3f);
    if (uVar12 <= local_3c) {
      uVar9 = uVar12 + iVar20;
      if (uVar22 < uVar12) {
        uVar22 = uVar12;
      }
      param_1[0x8d] = uVar22;
      param_1[0x8b] = uVar12;
      param_1[0x8c] = uVar12;
      uVar22 = uVar9;
      if (local_38 < uVar9) {
        uVar22 = uVar12;
      }
      param_1[0x92] = 1;
      if (local_38 >= uVar9) goto LAB_0179a668;
      *(undefined1 *)(param_1 + 0x90) = 1;
      uVar9 = 0;
      goto LAB_0179a66c;
    }
    cVar1 = *(char *)(param_1 + 0x90);
    param_1[0x233] = 0;
    uVar22 = 0;
  }
  else {
    uVar12 = uVar9 + (4 << (uVar17 & 0xff));
    if (local_38 < uVar12) {
      uVar21 = 0;
      *(undefined1 *)(param_1 + 0x90) = 1;
      uVar12 = uVar9;
    }
    else {
      param_1[0x8c] = uVar12;
      uVar21 = uVar9;
    }
LAB_0179a654:
    uVar22 = uVar12 + iVar20;
    param_1[0x231] = uVar21;
    if (local_38 < uVar22) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      uVar9 = 0;
      uVar22 = uVar12;
    }
    else {
LAB_0179a668:
      param_1[0x8c] = uVar22;
      uVar9 = uVar12;
    }
LAB_0179a66c:
    param_1[0x233] = uVar9;
    uVar9 = uVar22 + uVar5;
    if (local_38 < uVar9) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      param_1[0x232] = 0;
      return 0xffffffc0;
    }
    param_1[0x8c] = uVar9;
    cVar1 = *(char *)(param_1 + 0x90);
  }
  param_1[0x232] = uVar22;
  if (cVar1 != '\0') {
    return 0xffffffc0;
  }
  if ((param_6 != 1) && (uVar5 = param_1[0x8d], uVar5 < uVar9)) {
    FUN_016dd606(uVar5,0,uVar9 - uVar5);
    uVar18 = param_1[0x36];
    if ((uint)param_1[0x8d] < (uint)param_1[0x8c]) {
      param_1[0x8d] = param_1[0x8c];
    }
  }
  bVar23 = uVar18 - 3 == 2;
  if (uVar18 - 3 < 3) {
    bVar23 = iVar19 == 1;
  }
  if (bVar23) {
    uVar9 = (1 << (uVar17 & 0xff)) + 0x3fU & 0xffffffc0;
    uVar17 = FUN_017977b8(param_1 + 0x89,uVar9);
    if ((uVar17 != 0) && (uVar17 < (uint)param_1[0x8f])) {
      uVar18 = param_1[0x8f] - uVar17;
      if (uVar18 < uVar9) {
        uVar9 = uVar18;
      }
      FUN_016dd606(uVar17,0,uVar9);
      uVar18 = param_1[0x36];
      param_1[0x8f] = uVar17;
    }
    uVar12 = param_1[0x22e];
    uVar5 = param_1[0x22f];
    uVar9 = param_1[0x230];
    param_1[0x224] = uVar17;
    uVar17 = uVar12 * 0x8000 + (uVar5 >> 0x11) ^ (uVar12 >> 0x18) + uVar5 * 0x100 ^ uVar12;
    uVar22 = (uVar9 >> 0x18 | uVar9 << 0xf) ^ uVar9;
    uVar9 = uVar9 << 8 ^ uVar9 >> 0x11;
    lVar2 = (ulonglong)uVar17 * 0x1e98df25;
    uVar21 = (uVar5 * 0x8000 + (uVar12 >> 0x11) ^ (uVar5 >> 0x18) + uVar12 * 0x100 ^ uVar5) *
             0x1e98df25 + uVar17 * -0x604de39b + (int)((ulonglong)lVar2 >> 0x20);
    lVar3 = (ulonglong)uVar22 * 0x1e98df25;
    uVar12 = uVar9 * 0x1e98df25 + uVar22 * -0x604de39b + (int)((ulonglong)lVar3 >> 0x20);
    uVar17 = (uint)lVar2 ^ (uVar21 >> 3) + 8;
    uVar5 = (uint)lVar3 ^ (uVar12 >> 3) + 4;
    uVar22 = param_1[0x33];
    if (uVar22 < 6) {
      uVar9 = uVar22;
    }
    if (uVar22 >= 6) {
      uVar9 = 6;
    }
    lVar2 = (ulonglong)uVar17 * 0x1e98df25;
    uVar22 = (uint)lVar2;
    lVar3 = (ulonglong)uVar5 * 0x1e98df25;
    uVar16 = (uint)lVar3;
    uVar21 = uVar21 * 0x1e98df25 + uVar17 * -0x604de39b + (int)((ulonglong)lVar2 >> 0x20);
    uVar17 = uVar12 * 0x1e98df25 + uVar5 * -0x604de39b + (int)((ulonglong)lVar3 >> 0x20);
    param_1[0x22e] =
         (uVar22 >> 0x1c | uVar21 * 0x10) ^ uVar16 ^ uVar22 ^ (uVar16 >> 0x1c | uVar17 * 0x10);
    if (uVar9 < 4) {
      iVar20 = param_1[0x32] + -4;
    }
    else {
      iVar20 = param_1[0x32] - uVar9;
    }
    param_1[0x223] = iVar20;
    param_1[0x22f] = uVar17 ^ uVar21 >> 0x1c ^ uVar21 ^ uVar17 >> 0x1c;
  }
  if (6 < uVar18) {
    if ((uint)param_1[0x92] < 2) {
      if (param_1[0x92] != 0) {
        uVar9 = param_1[0x8c];
LAB_0179ae64:
        param_1[0x92] = 2;
        goto LAB_0179ae6c;
      }
      uVar18 = param_1[0x8b];
      param_1[0x8d] = uVar18;
      uVar9 = uVar18 + (-uVar18 & 0x3f);
      param_1[0x8f] = param_1[0x8a] & 0xffffffc0;
      if (uVar9 <= (uint)param_1[0x8a]) {
        param_1[0x8b] = uVar9;
        param_1[0x8c] = uVar9;
        if (uVar18 < uVar9) {
          param_1[0x8d] = uVar9;
        }
        goto LAB_0179ae64;
      }
LAB_0179b1b4:
      uVar18 = 0;
    }
    else {
      uVar9 = param_1[0x8c];
LAB_0179ae6c:
      uVar18 = param_1[0x8e] - 0x400;
      if (uVar18 < uVar9) {
        *(undefined1 *)(param_1 + 0x90) = 1;
        goto LAB_0179b1b4;
      }
      param_1[0x8e] = uVar18;
      if (uVar18 < (uint)param_1[0x8d]) {
        param_1[0x8d] = uVar18;
      }
    }
    param_1[0x236] = uVar18;
    uVar6 = FUN_017977b8(param_1 + 0x89,0xc0,2);
    param_1[0x237] = uVar6;
    uVar6 = FUN_017977b8(param_1 + 0x89,0x100,2);
    param_1[0x238] = uVar6;
    uVar6 = FUN_017977b8(param_1 + 0x89,0x80,2);
    param_1[0x239] = uVar6;
    uVar6 = FUN_017977b8(param_1 + 0x89,0x8040,2);
    param_1[0x23a] = uVar6;
    uVar6 = FUN_017977b8(param_1 + 0x89,0x1c080,2);
    param_1[0x23b] = uVar6;
  }
  param_1[0x248] = *puVar13;
  param_1[0x249] = param_1[0x31];
  param_1[0x24a] = param_1[0x32];
  param_1[0x24b] = param_1[0x33];
  param_1[0x24c] = param_1[0x34];
  param_1[0x24d] = param_1[0x35];
  param_1[0x24e] = param_1[0x36];
  if (*(char *)(param_1 + 0x90) != '\0') {
    return 0xffffffc0;
  }
  uVar9 = (uint)(iVar10 == 3);
  if (iVar11 != 0) {
    uVar9 = 1;
  }
  uVar9 = 4 - uVar9;
  iVar10 = FUN_018462e8(uVar7,uVar9);
  if ((uint)param_1[0x92] < 2) {
    if (param_1[0x92] != 0) {
LAB_0179a780:
      param_1[0x92] = 2;
      goto LAB_0179a788;
    }
    uVar18 = param_1[0x8b];
    param_1[0x8d] = uVar18;
    uVar17 = uVar18 + (-uVar18 & 0x3f);
    param_1[0x8f] = param_1[0x8a] & 0xffffffc0;
    if (uVar17 <= (uint)param_1[0x8a]) {
      param_1[0x8b] = uVar17;
      param_1[0x8c] = uVar17;
      if (uVar18 < uVar17) {
        param_1[0x8d] = uVar17;
      }
      goto LAB_0179a780;
    }
LAB_0179aa68:
    uVar18 = 0;
  }
  else {
LAB_0179a788:
    uVar18 = iVar10 * 8 + 0x3fU & 0xffffffc0;
    if (uVar18 == 0) goto LAB_0179aa68;
    uVar18 = param_1[0x8e] - uVar18;
    if (uVar18 < (uint)param_1[0x8c]) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      goto LAB_0179aa68;
    }
    param_1[0x8e] = uVar18;
    if (uVar18 < (uint)param_1[0x8d]) {
      param_1[0x8d] = uVar18;
    }
  }
  param_1[0xbd] = uVar18;
  if (param_1[0x44] == 1) {
    iVar11 = 8 << (param_1[0x45] & 0xff);
    uVar6 = FUN_017977b8(param_1 + 0x89,iVar11 + 0x3fU & 0xffffffc0,2);
    param_1[0xce] = uVar6;
    FUN_016dd606(uVar6,0,iVar11);
    uVar6 = FUN_017977b8(param_1 + 0x89,iVar4 * 0xc + 0x3fU & 0xffffffc0,2);
    param_1[0x212] = iVar4;
    param_1[0x211] = uVar6;
    param_1[0xc9] = &DAT_005a173c;
    param_1[0xca] = &DAT_005a173c;
    param_1[200] = &DAT_005a173e;
    param_1[0xcd] = 0;
    param_1[0xcf] = 0;
    param_1[0xcb] = 2;
    param_1[0xcc] = 2;
  }
  if (param_1[0x58] != 0) {
    iVar11 = (uVar7 >> 10) + uVar7 / 3 + 2;
    param_1[0x3b2] = iVar11;
    uVar6 = FUN_017977b8(param_1 + 0x89,iVar11 * 0x10 + 0x3fU & 0xffffffc0,2);
    param_1[0x3b1] = uVar6;
  }
  if ((uint)param_1[0x92] < 3) {
    if (param_1[0x92] != 0) {
LAB_0179ab0c:
      param_1[0x92] = 3;
      if (uVar7 == 0xffffffe0) goto LAB_0179ab1c;
      goto LAB_0179acc0;
    }
    uVar18 = param_1[0x8b];
    param_1[0x8d] = uVar18;
    uVar17 = uVar18 + (-uVar18 & 0x3f);
    param_1[0x8f] = param_1[0x8a] & 0xffffffc0;
    if (uVar17 <= (uint)param_1[0x8a]) {
      param_1[0x8b] = uVar17;
      param_1[0x8c] = uVar17;
      if (uVar18 < uVar17) {
        param_1[0x8d] = uVar17;
      }
      goto LAB_0179ab0c;
    }
    param_1[0x253] = param_7;
    param_1[0x255] = local_30;
    param_1[0x25a] = local_34;
    param_1[0xbf] = 0;
    param_1[0x254] = 0;
    param_1[0xc5] = uVar7;
LAB_0179ab4c:
    local_34 = 0;
  }
  else {
    if (uVar7 == 0xffffffe0) {
LAB_0179ab1c:
      uVar18 = 0;
      uVar17 = 0xffffffe0;
    }
    else {
LAB_0179acc0:
      uVar18 = param_1[0x8e] + (-0x20 - uVar7);
      if (uVar18 < (uint)param_1[0x8c]) {
        *(undefined1 *)(param_1 + 0x90) = 1;
        uVar18 = 0;
      }
      else {
        param_1[0x8e] = uVar18;
        if (uVar18 < (uint)param_1[0x8d]) {
          param_1[0x8d] = uVar18;
        }
      }
      uVar17 = uVar7;
    }
    param_1[0xbf] = uVar18;
    param_1[0x253] = param_7;
    param_1[0xc5] = uVar17;
    param_1[0x255] = local_30;
    uVar18 = 0;
    if (local_30 != 0) {
      uVar18 = param_1[0x8e] - local_30;
      if (uVar18 < (uint)param_1[0x8c]) {
        *(undefined1 *)(param_1 + 0x90) = 1;
        uVar18 = 0;
      }
      else {
        param_1[0x8e] = uVar18;
        if (uVar18 < (uint)param_1[0x8d]) {
          param_1[0x8d] = uVar18;
        }
      }
    }
    param_1[0x254] = uVar18;
    param_1[0x25a] = local_34;
    if (local_34 == 0) goto LAB_0179ab4c;
    local_34 = param_1[0x8e] - local_34;
    if (local_34 < (uint)param_1[0x8c]) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      goto LAB_0179ab4c;
    }
    param_1[0x8e] = local_34;
    if (local_34 < (uint)param_1[0x8d]) {
      param_1[0x8d] = local_34;
    }
  }
  param_1[0x259] = local_34;
  if (param_1[0x44] == 1) {
    iVar11 = 1 << (param_1[0x45] - param_1[0x46] & 0xff);
    uVar6 = FUN_017977b8(param_1 + 0x89,iVar11,3);
    param_1[0xd0] = uVar6;
    FUN_016dd606(uVar6,0,iVar11);
  }
  param_1[0xc4] = iVar10;
  param_1[0x213] = 0;
  param_1[0x216] = 0;
  param_1[0x217] = 0;
  param_1[0x214] = 0;
  param_1[0x215] = 0;
  if ((uint)param_1[0x92] < 3) {
    if (param_1[0x92] == 0) {
      uVar18 = param_1[0x8b];
      param_1[0x8d] = uVar18;
      uVar17 = uVar18 + (-uVar18 & 0x3f);
      param_1[0x8f] = param_1[0x8a] & 0xffffffc0;
      if (uVar17 <= (uint)param_1[0x8a]) {
        param_1[0x8b] = uVar17;
        param_1[0x8c] = uVar17;
        if (uVar18 < uVar17) {
          param_1[0x8d] = uVar17;
        }
        goto LAB_0179abc8;
      }
      param_1[0xc1] = 0;
      goto LAB_0179abe8;
    }
LAB_0179abc8:
    param_1[0x92] = 3;
    if (uVar7 < uVar9) goto LAB_0179abd8;
LAB_0179ad98:
    uVar9 = param_1[0x8c];
    uVar7 = param_1[0x8e] - iVar10;
    if (uVar7 < uVar9) {
      *(undefined1 *)(param_1 + 0x90) = 1;
      uVar18 = uVar7;
      uVar7 = 0;
    }
    else {
      param_1[0x8e] = uVar7;
      if (uVar7 < (uint)param_1[0x8d]) {
        param_1[0x8d] = uVar7;
      }
      uVar18 = uVar7 - iVar10;
    }
    param_1[0xc1] = uVar7;
    if (uVar18 < uVar9) {
      param_1[0xc2] = 0;
    }
    else {
      param_1[0x8e] = uVar18;
      uVar7 = uVar18 - iVar10;
      if (uVar18 < (uint)param_1[0x8d]) {
        param_1[0x8d] = uVar18;
      }
      param_1[0xc2] = uVar18;
      if (uVar9 <= uVar7) {
        param_1[0x8e] = uVar7;
        if (uVar7 < (uint)param_1[0x8d]) {
          param_1[0x8d] = uVar7;
        }
        goto LAB_0179abf4;
      }
    }
    *(undefined1 *)(param_1 + 0x90) = 1;
  }
  else {
    if (uVar9 <= uVar7) goto LAB_0179ad98;
LAB_0179abd8:
    param_1[0xc1] = 0;
LAB_0179abe8:
    param_1[0xc2] = 0;
  }
  uVar7 = 0;
LAB_0179abf4:
  param_1[0xc3] = uVar7;
  param_1[0xbc] = 1;
  return 0;
}

