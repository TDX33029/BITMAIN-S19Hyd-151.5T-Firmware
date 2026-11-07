// FUN_0132ff88 @ 0132ff88 size=768 calls_out=7 calls_in=2
// strings: attempt to join into collection with len > usize::MAX

void FUN_0132ff88(int *param_1,int param_2,uint param_3)

{
  uint *puVar1;
  char *pcVar2;
  undefined4 *puVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  char *pcVar10;
  char cVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  bool bVar17;
  uint local_3c;
  char *local_38;
  uint local_34;
  uint local_30;
  char *local_2c;
  int local_28;
  
  if (param_3 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    return;
  }
  if (0xfffffff < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(param_3 << 3);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,param_3 << 3);
  }
  uVar5 = 0;
  do {
    iVar9 = *(int *)(param_2 + uVar5 * 4);
    uVar12 = 1;
    uVar14 = 0;
    if (*(char *)(iVar9 + 0xc) == '\x01') {
      uVar12 = *(undefined4 *)(iVar9 + 4);
      uVar14 = *(undefined4 *)(iVar9 + 8);
    }
    iVar9 = uVar5 * 2;
    puVar3[iVar9] = uVar12;
    uVar5 = uVar5 + 1;
    (puVar3 + iVar9)[1] = uVar14;
  } while (param_3 != uVar5);
  uVar15 = param_3 * 8 - 8;
  iVar9 = param_3 << 3;
  uVar5 = uVar15 >> 3;
  puVar6 = puVar3;
  while (iVar9 != 0) {
    puVar1 = puVar6 + 1;
    iVar9 = iVar9 + -8;
    puVar6 = puVar6 + 2;
    bVar17 = CARRY4(*puVar1,uVar5);
    uVar5 = *puVar1 + uVar5;
    if (bVar17) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("attempt to join into collection with len > usize::MAX",0x35,&DAT_018ad7c8);
    }
  }
  local_30 = 0;
  if ((int)uVar5 < 0) {
LAB_0133007c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(local_30,uVar5);
  }
  if (uVar5 == 0) {
    local_2c = &DAT_00000001;
  }
  else {
    local_2c = (char *)thunk_FUN_016d4a50(uVar5);
    local_30 = uVar5;
    if (local_2c == (char *)0x0) {
      local_30 = 1;
      goto LAB_0133007c;
    }
  }
  uVar12 = *puVar3;
  uVar16 = puVar3[1];
  local_28 = 0;
  if (local_30 < uVar16) {
    FUN_0132f8cc(&local_30,0,uVar16,1,1);
  }
  iVar9 = local_28;
  pcVar2 = local_2c;
  FUN_016dd1aa(local_2c + local_28,uVar12,uVar16);
  uVar13 = 0;
  iVar7 = uVar5 - (iVar9 + uVar16);
  pcVar4 = pcVar2 + iVar9 + uVar16;
  if (uVar15 != 0) {
    do {
      if (iVar7 == 0) {
LAB_013301a0:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018ad7b8);
      }
      *pcVar4 = '.';
      uVar16 = *(uint *)((int)puVar3 + uVar13 + 0xc);
      if (iVar7 - 1U < uVar16) goto LAB_013301a0;
      FUN_016dd1aa(pcVar4 + 1,*(undefined4 *)((int)puVar3 + uVar13 + 8),uVar16);
      iVar7 = (iVar7 - 1U) - uVar16;
      pcVar4 = pcVar4 + 1 + uVar16;
      uVar13 = uVar13 + 8;
    } while (uVar15 != uVar13);
  }
  local_34 = uVar5 - iVar7;
  local_3c = local_30;
  local_38 = pcVar2;
  if (local_30 == local_34) {
    FUN_0132f8cc(&local_3c,local_34,1,1,1);
  }
  uVar15 = local_34;
  pcVar2 = local_38;
  uVar5 = local_3c;
  local_38[local_34] = '.';
  thunk_FUN_016d3fb4(puVar3);
  iVar9 = uVar15 + 1;
  uVar12 = 0;
  if (iVar9 < 0) {
LAB_01330198:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar12,iVar9);
  }
  if (iVar9 == 0) {
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
  }
  else {
    pcVar4 = (char *)thunk_FUN_016d4a50(iVar9);
    if (pcVar4 == (char *)0x0) {
      uVar12 = 1;
      goto LAB_01330198;
    }
    pcVar8 = pcVar4;
    iVar7 = iVar9;
    pcVar10 = pcVar2;
    do {
      cVar11 = *pcVar10;
      if (cVar11 == '.') {
        cVar11 = '_';
      }
      iVar7 = iVar7 + -1;
      *pcVar8 = cVar11;
      pcVar8 = pcVar8 + 1;
      pcVar10 = pcVar10 + 1;
    } while (iVar7 != 0);
    param_1[1] = (int)pcVar4;
    param_1[2] = iVar9;
    *param_1 = iVar9;
  }
  if (uVar5 != 0) {
    thunk_FUN_016d3fb4(pcVar2);
  }
  return;
}

