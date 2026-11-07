// FUN_00653c7c @ 00653c7c size=1200 calls_out=8 calls_in=2
// strings: 

void FUN_00653c7c(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  byte *pbVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint *puVar9;
  undefined *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint uVar15;
  uint uVar16;
  int iVar17;
  uint unaff_r10;
  uint uVar18;
  bool bVar19;
  ulonglong uVar20;
  uint local_64;
  uint local_60;
  int local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40 [7];
  
  uVar14 = 0;
  local_5c = 4;
  iVar11 = param_2 + 0x1a4;
  uVar1 = *(byte *)(*(int *)(param_2 + 0x1a0) + 4) - 1;
  uVar18 = *(uint *)(param_2 + 0x2fc);
  uVar15 = *(uint *)(param_2 + 0x1ac);
  bVar19 = *(char *)(*(int *)(param_2 + 0x1a0) + 6) == '\x01';
  iVar17 = *(int *)(param_2 + 0x1b4);
  uVar12 = *(uint *)(param_2 + 0x1b8);
  local_64 = *(uint *)(param_2 + 0x1a8);
  if (bVar19) {
    local_44 = 0;
    local_4c = 0;
  }
  local_50 = (uint)bVar19;
  local_54 = 0;
  local_58 = 0;
  local_60 = 0;
  while( true ) {
    uVar20 = FUN_006541a0(iVar11,uVar18,uVar14,unaff_r10);
    uVar16 = local_50;
    unaff_r10 = (uint)(uVar20 >> 0x20);
    if ((uVar20 & 1) == 0) break;
    if (uVar12 <= unaff_r10) {
      puVar10 = &DAT_01c03478;
      local_64 = unaff_r10;
      goto LAB_00654094;
    }
    uVar14 = 1;
    uVar13 = *(uint *)(iVar17 + unaff_r10 * 9 + 1);
    if ((uVar18 != uVar13) &&
       ((local_50 != 1 || (iVar2 = FUN_00661e54(local_4c,local_48,uVar13), iVar2 == 0)))) {
      FUN_0065facc(&local_60,uVar13);
      if (uVar16 != 0) {
        FUN_006619b0(&local_4c,uVar13);
      }
      if (uVar1 < 2) {
        if (uVar15 <= uVar13) {
          puVar10 = &DAT_01c03488;
          local_64 = uVar13;
          uVar12 = uVar15;
LAB_00654094:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(local_64,uVar12,puVar10);
        }
        iVar2 = local_64 + uVar13 * 0x14;
        if (*(int *)(iVar2 + 8) != 0) {
          *(undefined4 *)(iVar2 + 0xc) = 0;
        }
      }
    }
  }
  do {
    if (local_54 == 0) {
      *param_1 = 3;
      if (local_50 != 0) goto LAB_00654048;
      goto LAB_00654050;
    }
    local_54 = local_54 + -1;
    uVar12 = local_58 + 1;
    uVar15 = *(uint *)(local_5c + local_58 * 4);
    local_58 = uVar12 - local_60;
    if (uVar12 < local_60) {
      local_58 = uVar12;
    }
    uVar14 = 0;
LAB_00653df8:
    uVar20 = FUN_006541a0(iVar11,uVar15,uVar14,local_64);
    uVar18 = local_50;
    local_64 = (uint)(uVar20 >> 0x20);
    if ((uVar20 & 1) != 0) {
      uVar12 = *(uint *)(param_2 + 0x1b8);
      if (local_64 < uVar12) {
        iVar17 = *(int *)(param_2 + 0x1b4);
        pbVar5 = (byte *)(iVar17 + local_64 * 9);
        uVar16 = (uint)*pbVar5;
        uVar13 = *(uint *)(pbVar5 + 1);
        if (local_50 == 1) goto code_r0x00653e48;
        goto LAB_00653e64;
      }
      puVar10 = &DAT_01c03498;
      goto LAB_00654094;
    }
  } while ((uVar1 < 2) ||
          (FUN_00654224(local_40,iVar11,*(undefined4 *)(param_2 + 0x2fc),uVar15), local_40[0] == 3))
  ;
LAB_00654020:
  piVar6 = (int *)((uint)local_40 | 4);
  iVar11 = piVar6[1];
  iVar17 = piVar6[2];
  iVar2 = piVar6[3];
  iVar8 = piVar6[4];
  param_1[1] = *piVar6;
  param_1[2] = iVar11;
  param_1[3] = iVar17;
  param_1[4] = iVar2;
  param_1[5] = iVar8;
  *param_1 = local_40[0];
  if (local_50 != 0) {
LAB_00654048:
    FUN_01340398(&local_4c);
  }
LAB_00654050:
  FUN_0134aee0(local_60,local_5c,4,4);
  return;
code_r0x00653e48:
  iVar2 = FUN_00661e54(local_4c,local_48,uVar13);
  uVar14 = 1;
  if (iVar2 != 0) goto LAB_00653df8;
LAB_00653e64:
  FUN_0065facc(&local_60,uVar13);
  if (uVar18 != 0) {
    FUN_006619b0(&local_4c,uVar13);
  }
  uVar18 = *(uint *)(param_2 + 0x1ac);
  if (uVar1 < 2) {
    if (uVar18 <= uVar13) {
      puVar10 = &DAT_01c034a8;
      local_64 = uVar13;
      uVar12 = uVar18;
      goto LAB_00654094;
    }
    iVar2 = *(int *)(param_2 + 0x1a8) + uVar13 * 0x14;
    if (*(int *)(iVar2 + 8) != 0) {
      *(undefined4 *)(iVar2 + 0xc) = 0;
      goto LAB_00653fe8;
    }
  }
  if (uVar15 < uVar18) {
    iVar2 = *(int *)(param_2 + 0x1a8);
    uVar7 = *(uint *)(iVar2 + uVar15 * 0x14 + 0xc);
    if (uVar7 < uVar18) {
      do {
        puVar3 = (uint *)(iVar2 + uVar7 * 0x14);
        puVar9 = puVar3;
        if (puVar3[1] == 0) {
          do {
            uVar4 = *puVar9;
            if (uVar4 == 0) goto LAB_00653f28;
            if (uVar12 <= uVar4) goto LAB_0065408c;
            pbVar5 = (byte *)(iVar17 + uVar4 * 9);
            puVar9 = (uint *)(pbVar5 + 5);
          } while (*pbVar5 < uVar16);
          if ((uVar16 == *pbVar5) && (*(int *)(pbVar5 + 1) != 1)) goto LAB_00653f78;
        }
        else {
          uVar4 = puVar3[1] + (uint)*(byte *)(param_2 + 0x1ec + uVar16);
          if (*(uint *)(param_2 + 0x1c4) <= uVar4) {
            puVar10 = &DAT_01d08f88;
            local_64 = uVar4;
            uVar12 = *(uint *)(param_2 + 0x1c4);
            goto LAB_00654094;
          }
          iVar8 = *(int *)(*(int *)(param_2 + 0x1c0) + uVar4 * 4);
          if (iVar8 != 1) goto LAB_00653fb4;
        }
LAB_00653f28:
        uVar7 = *(uint *)(iVar2 + uVar7 * 0x14 + 0xc);
        if (uVar18 <= uVar7) break;
      } while( true );
    }
    puVar10 = &DAT_01d08f78;
    local_64 = uVar7;
    uVar12 = uVar18;
  }
  else {
    puVar10 = &DAT_01c034b8;
    local_64 = uVar15;
    uVar12 = uVar18;
  }
  goto LAB_00654094;
  while( true ) {
    if (uVar12 <= uVar4) goto LAB_0065408c;
    pbVar5 = (byte *)(iVar17 + uVar4 * 9);
    uVar7 = (uint)*pbVar5;
    puVar3 = (uint *)(pbVar5 + 5);
    if (uVar16 < uVar7 || uVar16 == uVar7) break;
LAB_00653f78:
    uVar4 = *puVar3;
    if (uVar4 == 0) {
      iVar8 = 1;
      goto LAB_00653fb4;
    }
  }
  iVar8 = *(int *)(pbVar5 + 1);
  if (uVar16 != uVar7) {
    iVar8 = 1;
  }
LAB_00653fb4:
  if (uVar18 <= uVar13) {
    puVar10 = &DAT_01c034c8;
    local_64 = uVar13;
    uVar12 = uVar18;
    goto LAB_00654094;
  }
  *(int *)(iVar2 + uVar13 * 0x14 + 0xc) = iVar8;
  FUN_00654224(local_40,iVar11,iVar8,uVar13);
  if (local_40[0] != 3) goto LAB_00654020;
LAB_00653fe8:
  uVar14 = 1;
  goto LAB_00653df8;
LAB_0065408c:
  puVar10 = &DAT_01d08f58;
  local_64 = uVar4;
  goto LAB_00654094;
}

