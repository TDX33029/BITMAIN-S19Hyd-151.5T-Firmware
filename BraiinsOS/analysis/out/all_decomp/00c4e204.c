// FUN_00c4e204 @ 00c4e204 size=1976 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_00c4e204(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint *puVar13;
  uint *puVar12;
  int iVar14;
  int *piVar15;
  ulonglong uVar16;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_48 [4];
  undefined2 local_40 [14];
  
  piVar8 = (int *)*param_2;
  iVar2 = piVar8[2];
  if (*piVar8 == iVar2) {
    FUN_00d653ec(piVar8,iVar2,1,1,1);
    iVar2 = piVar8[2];
  }
  puVar6 = *(uint **)(param_1 + 4);
  uVar7 = *param_2;
  *(undefined1 *)(piVar8[1] + iVar2) = 0x7b;
  piVar8[2] = iVar2 + 1;
  iVar2 = *(int *)(param_1 + 8);
  FUN_00cd2b24(&local_50,uVar7,&DAT_00354680,0xf);
  if ((char)local_50 != '\x04') goto LAB_00c4e8c4;
  piVar8 = (int *)*param_2;
  iVar3 = piVar8[2];
  if (*piVar8 == iVar3) {
    FUN_00d653ec(piVar8,iVar3,1,1,1);
    iVar3 = piVar8[2];
  }
  local_54 = (uint *)*param_2;
  *(undefined1 *)(piVar8[1] + iVar3) = 0x3a;
  piVar8[2] = piVar8[2] + 1;
  uVar4 = local_54[2];
  if (*local_54 == uVar4) {
    FUN_00d653ec(local_54,uVar4,1,1,1);
    uVar4 = local_54[2];
  }
  *(undefined1 *)(local_54[1] + uVar4) = 0x5b;
  uVar4 = local_54[2] + 1;
  local_54[2] = uVar4;
  if (iVar2 == 0) {
    if (*local_54 == uVar4) goto LAB_00c4e870;
  }
  else {
    bVar1 = true;
    puVar12 = puVar6;
    do {
      puVar13 = puVar12 + 1;
      uVar9 = *puVar12;
      if (bVar1) {
        if (uVar9 < 10000) goto LAB_00c4e324;
LAB_00c4e38c:
        iVar3 = 0;
        uVar5 = uVar9;
        do {
          iVar14 = iVar3;
          uVar9 = uVar5 / 10000;
          uVar10 = (uint)((short)(uVar5 % 10000 >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)((int)local_48 + iVar14 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar10 * 2)
          ;
          *(undefined2 *)((int)local_48 + iVar14) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar5 % 10000 + uVar10 * -100 & 0xffff) * 2);
          bVar1 = 99999999 < uVar5;
          iVar3 = iVar14 + -4;
          uVar5 = uVar9;
        } while (bVar1);
        iVar14 = iVar14 + 6;
        if (99 < uVar9) goto LAB_00c4e404;
LAB_00c4e334:
        iVar3 = iVar14;
        uVar5 = uVar9;
        if (9 < uVar9) goto LAB_00c4e340;
LAB_00c4e438:
        iVar14 = iVar3 + -1;
        *(byte *)((int)local_48 + iVar3 + -9) = (byte)uVar5 | 0x30;
      }
      else {
        if (*local_54 == uVar4) {
          FUN_00d653ec(local_54,uVar4,1,1,1);
          uVar4 = local_54[2];
        }
        *(undefined1 *)(local_54[1] + uVar4) = 0x2c;
        uVar4 = local_54[2] + 1;
        local_54[2] = uVar4;
        if (9999 < uVar9) goto LAB_00c4e38c;
LAB_00c4e324:
        iVar14 = 10;
        if (uVar9 < 100) goto LAB_00c4e334;
LAB_00c4e404:
        iVar3 = iVar14 + -2;
        uVar5 = (uint)((short)((uVar9 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)local_48 + iVar14 + -10) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar9 + uVar5 * -100 & 0xffff) * 2);
        if (uVar5 < 10) goto LAB_00c4e438;
LAB_00c4e340:
        iVar14 = iVar3 + -2;
        *(undefined2 *)((int)local_48 + iVar3 + -10) = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
      }
      uVar9 = 10 - iVar14;
      if (*local_54 - uVar4 < uVar9) {
        FUN_00d653ec(local_54,uVar4,uVar9,1,1);
        uVar4 = local_54[2];
      }
      FUN_016dd1aa(local_54[1] + uVar4,(int)local_48 + iVar14 + -8,uVar9);
      uVar4 = local_54[2] + uVar9;
      bVar1 = false;
      local_54[2] = uVar4;
      puVar12 = puVar13;
    } while (puVar13 != puVar6 + iVar2);
    if (*local_54 == uVar4) {
LAB_00c4e870:
      FUN_00d653ec(local_54,uVar4,1,1,1);
      uVar4 = local_54[2];
    }
  }
  piVar8 = (int *)*param_2;
  puVar6 = *(uint **)(param_1 + 0x10);
  *(undefined1 *)(local_54[1] + uVar4) = 0x5d;
  local_54[2] = local_54[2] + 1;
  iVar2 = piVar8[2];
  iVar3 = *(int *)(param_1 + 0x14);
  if (*piVar8 == iVar2) {
    FUN_00d653ec(piVar8,iVar2,1,1,1);
    iVar2 = piVar8[2];
  }
  *(undefined1 *)(piVar8[1] + iVar2) = 0x2c;
  uVar7 = *param_2;
  piVar8[2] = piVar8[2] + 1;
  FUN_00cd2b24(&local_50,uVar7,&DAT_005654c0,0x10);
  if ((char)local_50 != '\x04') {
LAB_00c4e8c4:
    uVar7 = FUN_0157c4a0(local_50,local_4c);
    return uVar7;
  }
  piVar8 = (int *)*param_2;
  iVar2 = piVar8[2];
  if (*piVar8 == iVar2) {
    FUN_00d653ec(piVar8,iVar2,1,1,1);
    iVar2 = piVar8[2];
  }
  piVar15 = (int *)*param_2;
  *(undefined1 *)(piVar8[1] + iVar2) = 0x3a;
  piVar8[2] = piVar8[2] + 1;
  iVar2 = piVar15[2];
  if (*piVar15 == iVar2) {
    FUN_00d653ec(piVar15,iVar2,1,1,1);
    iVar2 = piVar15[2];
  }
  *(undefined1 *)(piVar15[1] + iVar2) = 0x5b;
  iVar2 = piVar15[2] + 1;
  piVar15[2] = iVar2;
  if (iVar3 == 0) {
    if (*piVar15 != iVar2) goto LAB_00c4e818;
  }
  else {
    local_54 = puVar6 + iVar3;
    bVar1 = true;
    do {
      puVar12 = puVar6 + 1;
      uVar4 = *puVar6;
      if (!bVar1) {
        if (*piVar15 == iVar2) {
          FUN_00d653ec(piVar15,iVar2,1,1,1);
          iVar2 = piVar15[2];
        }
        *(undefined1 *)(piVar15[1] + iVar2) = 0x2c;
        iVar2 = piVar15[2] + 1;
        piVar15[2] = iVar2;
      }
      if (uVar4 < 10000) {
        uVar16 = (ulonglong)uVar4;
        iVar3 = 0x14;
        if (99 < uVar4) goto LAB_00c4e718;
LAB_00c4e6dc:
        uVar4 = (uint)(uVar16 >> 0x20);
        uVar9 = (uint)uVar16;
        iVar14 = iVar3;
        if (uVar4 != 0 || uVar4 < (9 < uVar9)) goto LAB_00c4e6ec;
LAB_00c4e754:
        iVar3 = iVar14 + -1;
        *(byte *)((int)local_48 + iVar14 + -9) = (byte)uVar9 | 0x30;
      }
      else {
        uVar16 = (ulonglong)uVar4;
        iVar14 = 0;
        do {
          iVar3 = iVar14;
          iVar11 = (int)(uVar16 >> 0x20);
          uVar10 = (uint)uVar16;
          uVar16 = FUN_01846088(uVar10,iVar11,10000,0);
          uVar4 = (uint)uVar16;
          uVar5 = uVar10 + uVar4 * -10000;
          uVar9 = (uint)((short)((uVar5 & 0xffff) >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)((int)local_40 + iVar3) = *(undefined2 *)(&DAT_0040f4ca + uVar9 * 2);
          *(undefined2 *)((int)local_40 + iVar3 + 2) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar5 + uVar9 * -100 & 0xffff) * 2);
          iVar14 = iVar3 + -4;
        } while ((uint)(uVar10 < 100000000) <= (uint)-iVar11);
        iVar3 = iVar3 + 0x10;
        if ((uint)-(int)(uVar16 >> 0x20) < (uint)(uVar4 < 100)) goto LAB_00c4e6dc;
LAB_00c4e718:
        iVar14 = iVar3 + -2;
        uVar9 = (uint)((short)((uVar4 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)local_48 + iVar3 + -10) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar4 + uVar9 * -100 & 0xffff) * 2);
        if (uVar9 < 10) goto LAB_00c4e754;
LAB_00c4e6ec:
        iVar3 = iVar14 + -2;
        *(undefined2 *)((int)local_48 + iVar14 + -10) = *(undefined2 *)(&DAT_0040f4ca + uVar9 * 2);
      }
      uVar4 = 0x14 - iVar3;
      if ((uint)(*piVar15 - iVar2) < uVar4) {
        FUN_00d653ec(piVar15,iVar2,uVar4,1,1);
        iVar2 = piVar15[2];
      }
      FUN_016dd1aa(piVar15[1] + iVar2,(int)local_48 + iVar3 + -8,uVar4);
      iVar2 = piVar15[2] + uVar4;
      bVar1 = false;
      piVar15[2] = iVar2;
      puVar6 = puVar12;
    } while (puVar12 != local_54);
    if (*piVar15 != iVar2) goto LAB_00c4e818;
  }
  FUN_00d653ec(piVar15,iVar2,1,1,1);
  iVar2 = piVar15[2];
LAB_00c4e818:
  piVar8 = (int *)*param_2;
  *(undefined1 *)(piVar15[1] + iVar2) = 0x5d;
  piVar15[2] = piVar15[2] + 1;
  iVar2 = piVar8[2];
  if (*piVar8 == iVar2) {
    FUN_00d653ec(piVar8,iVar2,1,1,1);
    iVar2 = piVar8[2];
  }
  *(undefined1 *)(piVar8[1] + iVar2) = 0x7d;
  piVar8[2] = iVar2 + 1;
  return 0;
}

