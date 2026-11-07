// FUN_016afc94 @ 016afc94 size=932 calls_out=7 calls_in=7
// strings: Some Trigger/Listener has panicked

void FUN_016afc94(int param_1)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  uint *puVar4;
  char *pcVar5;
  uint uVar6;
  int iVar7;
  uint *extraout_r2;
  int iVar8;
  int extraout_r3;
  int extraout_r3_00;
  uint *puVar9;
  int iVar10;
  int *piVar11;
  uint *puVar12;
  uint *puVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined4 in_stack_00000000;
  int *local_48;
  uint local_44;
  uint *local_40;
  uint *local_3c;
  uint local_38;
  uint *local_34;
  int local_30;
  int local_2c;
  
  pcVar5 = (char *)(param_1 + 0x38);
  DataMemoryBarrier(0xb);
  do {
    cVar1 = *pcVar5;
    bVar2 = (bool)hasExclusiveAccess(pcVar5);
  } while (!bVar2);
  *pcVar5 = '\x01';
  DataMemoryBarrier(0xb);
  if (cVar1 != '\0') {
    return;
  }
  piVar11 = (int *)(param_1 + 8);
  do {
    if (*piVar11 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(piVar11);
      goto LAB_016afcf8;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = 1;
  DataMemoryBarrier(0xb);
LAB_016afcf8:
  uVar16 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(param_1 + 0xc);
  }
  else {
    uVar16 = FUN_015bf3f8();
    uVar16 = uVar16 ^ 1;
    cVar1 = *(char *)(param_1 + 0xc);
  }
  if (cVar1 != '\0') {
    uVar6 = local_44 >> 8;
    local_44 = CONCAT31((int3)uVar6,(char)uVar16);
    local_48 = piVar11;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("Some Trigger/Listener has panicked",0x22,&local_48,&DAT_018aea3c,&DAT_018aea6c);
  }
  uVar17 = thunk_FUN_016de0ee(0,0x2c0);
  puVar9 = (uint *)((int)uVar17 + (int)((ulonglong)uVar17 >> 0x20));
  if ((char)puVar9[4] == '\x01') {
    local_44 = puVar9[1];
    local_40 = (uint *)puVar9[2];
    local_3c = (uint *)puVar9[3];
    local_48 = (int *)*puVar9;
  }
  else {
    FUN_015f62e4(&local_48);
    puVar9[2] = (uint)local_40;
    puVar9[3] = (uint)local_3c;
    *(undefined1 *)(puVar9 + 4) = 1;
  }
  puVar15 = *(uint **)(param_1 + 0x10);
  *puVar9 = (int)local_48 + 1;
  puVar9[1] = local_44 + ((int *)0xfffffffe < local_48);
  *(uint **)(param_1 + 0x28) = local_40;
  *(int **)(param_1 + 0x20) = local_48;
  iVar10 = *(int *)(param_1 + 0x14);
  iVar14 = *(int *)(param_1 + 0x1c);
  iVar8 = 0;
  *(uint *)(param_1 + 0x24) = local_44;
  *(uint **)(param_1 + 0x2c) = local_3c;
  *(undefined4 **)(param_1 + 0x10) = &DAT_005674cc;
  *(undefined4 *)(param_1 + 0x14) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  *(undefined4 *)(param_1 + 0x1c) = 0;
  if (((uVar16 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
     (iVar7 = FUN_015bf3f8(), iVar8 = extraout_r3_00, iVar7 == 0)) {
    *(undefined1 *)(param_1 + 0xc) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar7 = *piVar11;
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = 0;
  if (iVar7 == 2) {
    FUN_016d6968(0xf0,piVar11,0x81,1);
    uVar16 = *puVar15;
    puVar9 = extraout_r2;
    iVar8 = extraout_r3;
  }
  else {
    uVar16 = *puVar15;
    puVar9 = (uint *)0x0;
  }
  if (iVar10 == 0) {
    local_48 = (int *)0x0;
  }
  else {
    iVar8 = iVar10 * 0xd + 0x11;
    puVar9 = puVar15 + iVar10 * -3 + -3;
    local_48 = (int *)0x4;
  }
  puVar12 = puVar15 + 1;
  uVar16 = ~uVar16 & 0x80808080;
  local_30 = (int)puVar15 + iVar10 + 1;
  local_44 = iVar8;
  local_40 = puVar9;
  local_3c = puVar15;
  local_38 = uVar16;
  local_34 = puVar12;
  local_2c = iVar14;
  while (iVar14 != 0) {
    uVar6 = uVar16;
    puVar13 = puVar12;
    if (uVar16 == 0) {
      do {
        puVar12 = puVar13 + 1;
        uVar16 = *puVar13;
        puVar15 = puVar15 + -0xc;
        puVar13 = puVar12;
      } while ((uVar16 & 0x80808080) == 0x80808080);
      uVar6 = uVar16 & 0x80808080 ^ 0x80808080;
    }
    iVar14 = iVar14 + -1;
    uVar16 = uVar6 - 1 & uVar6;
    uVar6 = (uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8
                          | uVar6 >> 0x18) >> 3;
    iVar7 = iVar14;
    uVar3 = uVar16;
    puVar13 = puVar12;
    puVar4 = puVar15;
    if (puVar15[uVar6 * -3 + -2] == 0) goto joined_r0x016aff7c;
    (**(code **)(puVar15[uVar6 * -3 + -2] + 4))(puVar15[uVar6 * -3 + -1]);
  }
  local_2c = 0;
  local_3c = puVar15;
  local_38 = uVar16;
  local_34 = puVar12;
LAB_016affe0:
  if (iVar8 != 0 && iVar10 != 0) {
    thunk_FUN_016d3fb4(puVar9);
  }
  piVar11 = (int *)(param_1 + 0x30);
  do {
    bVar2 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar2);
  *piVar11 = *piVar11 + 1;
  software_interrupt(0);
  FUN_016d3496(piVar11,0x81,0x7fffffff,in_stack_00000000);
  return;
joined_r0x016aff7c:
  for (; local_3c = puVar4, local_34 = puVar13, local_38 = uVar3, local_2c = iVar7, iVar14 != 0;
      iVar14 = iVar14 + -1) {
    puVar13 = puVar12;
    if (uVar16 == 0) {
      do {
        puVar12 = puVar13 + 1;
        uVar16 = *puVar13;
        puVar15 = puVar15 + -0xc;
        puVar13 = puVar12;
      } while ((uVar16 & 0x80808080) == 0x80808080);
      uVar16 = uVar16 & 0x80808080 ^ 0x80808080;
    }
    uVar6 = (uint)LZCOUNT(uVar16 << 0x18 | (uVar16 >> 8 & 0xff) << 0x10 |
                          (uVar16 >> 0x10 & 0xff) << 8 | uVar16 >> 0x18) >> 3;
    (**(code **)(puVar15[uVar6 * -3 + -2] + 0xc))(puVar15[uVar6 * -3 + -1]);
    uVar16 = uVar16 - 1 & uVar16;
    iVar7 = local_2c;
    uVar3 = local_38;
    puVar13 = local_34;
    puVar4 = local_3c;
  }
  goto LAB_016affe0;
}

