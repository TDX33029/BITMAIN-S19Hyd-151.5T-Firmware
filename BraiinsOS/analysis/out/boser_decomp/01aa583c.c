// FUN_01aa583c @ 01aa583c size=932 calls_out=10 calls_in=3
// strings: 

void FUN_01aa583c(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint extraout_r1;
  uint extraout_r1_00;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 *puVar10;
  uint uVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint *puVar14;
  bool bVar15;
  bool bVar16;
  undefined *local_88;
  undefined *local_84;
  undefined *local_80;
  undefined *local_7c;
  uint *local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint uStack_4c;
  uint uStack_48;
  uint *local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  undefined1 *puStack_30;
  
  puVar14 = param_1 + 6;
  do {
    if (*puVar14 != 0) {
      ClearExclusiveLocal();
      FUN_0197ade4(puVar14);
      goto LAB_01aa586c;
    }
    bVar15 = (bool)hasExclusiveAccess(puVar14);
  } while (!bVar15);
  *puVar14 = 1;
  DataMemoryBarrier(0xb);
LAB_01aa586c:
  uVar8 = 0;
  if ((DAT_01d51b08 & 0x7fffffff) != 0) {
    uVar8 = FUN_0197ac0c();
    uVar8 = uVar8 ^ 1;
  }
  if ((char)param_1[7] != '\0') {
    local_3c = CONCAT31(local_3c._1_3_,(char)uVar8);
    local_40 = puVar14;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00531117,0xf,&local_40,&DAT_01d2e3bc,&DAT_01d2e3ec);
  }
  FUN_019ac130(&local_40,1);
  uVar2 = local_38;
  puVar1 = local_40;
  local_50 = param_1[8];
  local_60 = local_40;
  uStack_4c = param_1[9];
  uStack_48 = param_1[10];
  local_5c = local_3c;
  local_58 = local_38;
  FUN_019ac248(&local_40,&local_60,&local_50);
  uVar5 = param_1[1];
  puVar13 = puStack_30;
  uVar9 = local_38;
  uVar12 = uStack_34;
  if (((uint)local_40 & 1) != 0) {
    uVar12 = 0;
    uVar9 = 0;
    puVar13 = (undefined1 *)0x0;
  }
  bVar15 = puVar13 < (undefined1 *)param_1[2];
  if (uVar9 != *param_1 || uVar12 != uVar5) {
    bVar15 = uVar12 <= uVar5 && (uint)(*param_1 <= uVar9) <= uVar12 - uVar5;
  }
  if (!bVar15) {
    puVar3 = param_1 + 0xf;
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar3;
      bVar15 = (bool)hasExclusiveAccess(puVar3);
    } while (!bVar15);
    *puVar3 = 0;
    DataMemoryBarrier(0xb);
    uVar11 = param_1[5];
    uVar4 = param_1[0xc];
    if (uVar11 <= uVar4) {
      local_84 = &DAT_01d2e3fc;
LAB_01aa5bbc:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar4,uVar11,local_84);
    }
    DataMemoryBarrier(0xb);
    *(uint *)(param_1[4] + uVar4 * 4) = uVar5;
    DataMemoryBarrier(0xb);
    uVar11 = param_1[5];
    if (uVar11 == 0) {
      local_88 = &DAT_01d2e40c;
LAB_01aa5be0:
                    /* WARNING: Subroutine does not return */
      FUN_013079d0(local_88);
    }
    uVar5 = param_1[1];
    bVar15 = uVar5 <= uVar12 && (uint)(uVar9 <= *param_1) <= uVar5 - uVar12;
    if (uVar9 == *param_1 && uVar12 == uVar5) {
      bVar15 = (undefined1 *)param_1[2] < puVar13;
    }
    FUN_01bf0fd4(param_1[0xc] + 1,uVar11);
    uVar5 = extraout_r1;
    if (bVar15) {
      local_84 = &DAT_01d2e41c;
      local_88 = &DAT_01d2e42c;
      local_80 = &DAT_01d2e3ac;
      local_7c = &DAT_005310af;
      uVar4 = extraout_r1;
      do {
        if (uVar11 <= uVar4) goto LAB_01aa5bbc;
        DataMemoryBarrier(0xb);
        *(undefined4 *)(param_1[4] + uVar4 * 4) = 0;
        uVar6 = 0x23;
        DataMemoryBarrier(0xb);
        uVar5 = *param_1;
        uVar7 = param_1[1];
        if (uVar12 <= uVar7 && (uint)(uVar5 <= uVar9) <= uVar12 - uVar7) {
LAB_01aa5b94:
          local_7c = &DAT_00531126;
          local_80 = &DAT_01d2e43c;
LAB_01aa5b3c:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c(local_7c,uVar6,local_80);
        }
        bVar15 = uVar9 < uVar5;
        uVar9 = uVar9 - uVar5;
        puVar10 = (undefined1 *)param_1[2];
        uVar12 = uVar12 - (uVar7 + bVar15);
        if (puVar13 < puVar10) {
          if (uVar9 == 0 && uVar12 == 0) goto LAB_01aa5b94;
          bVar15 = uVar9 == 0;
          uVar9 = uVar9 - 1;
          puVar13 = &DAT_3b9aca00 + (int)puVar13;
          uVar12 = uVar12 - bVar15;
        }
        puVar13 = puVar13 + -(int)puVar10;
        if (&DAT_3b9ac9ff < puVar13) {
          bVar16 = 0xfffffffe < uVar9;
          uVar9 = uVar9 + 1;
          bVar15 = CARRY4(uVar12,(uint)bVar16);
          uVar12 = uVar12 + bVar16;
          if (bVar15) {
            uVar6 = 0x19;
            goto LAB_01aa5b3c;
          }
          puVar13 = puVar13 + -1000000000;
        }
        uVar11 = param_1[5];
        if (uVar11 == 0) goto LAB_01aa5be0;
        bVar15 = uVar7 <= uVar12 && (uint)(uVar9 <= uVar5) <= uVar7 - uVar12;
        if (uVar9 == uVar5 && uVar12 == uVar7) {
          bVar15 = puVar10 < puVar13;
        }
        FUN_01bf0fd4(uVar4 + 1,uVar11);
        uVar5 = extraout_r1_00;
        uVar4 = extraout_r1_00;
      } while (bVar15);
    }
    param_1[0xc] = uVar5;
    param_1[10] = uVar2;
    param_1[8] = (uint)puVar1;
    param_1[9] = local_3c;
  }
  FUN_00a97e8c(puVar14,uVar8);
  return;
}

