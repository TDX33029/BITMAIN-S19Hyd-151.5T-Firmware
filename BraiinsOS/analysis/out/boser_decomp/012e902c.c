// FUN_012e902c @ 012e902c size=1176 calls_out=6 calls_in=0
// strings: overflow when adding duration to instant

void FUN_012e902c(uint *param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  undefined4 uVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  undefined4 uVar17;
  uint *puVar18;
  int *piVar19;
  uint uVar20;
  uint *puVar21;
  bool bVar22;
  undefined8 uVar23;
  uint uStack_f8;
  undefined1 *puStack_f4;
  uint uStack_c8;
  uint *puStack_c4;
  uint uStack_c0;
  uint uStack_b8;
  uint *puStack_b4;
  uint uStack_b0;
  uint uStack_a8;
  uint *puStack_a4;
  uint uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  uint local_8c;
  uint local_88;
  uint local_84;
  undefined4 local_80;
  uint *local_7c;
  uint *local_78;
  uint *puStack_74;
  uint *local_70;
  code *UNRECOVERED_JUMPTABLE;
  uint *local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_40;
  uint local_3c;
  uint local_38;
  undefined4 uStack_34;
  undefined4 local_30;
  
  if ((char)param_2[4] != '\0') {
    do {
      FUN_019b3934(1000,0,0);
    } while( true );
  }
  puVar21 = param_2 + 4;
  puVar18 = &local_38;
  local_64 = param_1;
  while( true ) {
    FUN_019ac130(&local_40,1);
    local_8c = *param_2;
    uVar12 = param_2[1];
    local_84 = param_2[2];
    local_88 = (uint)(local_84 <= local_38);
    uVar15 = (uint)((int)(local_3c - (uVar12 + (local_40 < local_8c))) < 0 ==
                   (SBORROW4(local_3c,uVar12) !=
                   SBORROW4(local_3c - uVar12,(uint)(local_40 < local_8c))));
    if (local_40 == local_8c && local_3c == uVar12) {
      uVar15 = local_88;
    }
    if (uVar15 == 1) break;
    local_4c = local_3c;
    local_48 = local_38;
    local_50 = local_40;
    local_60 = local_8c;
    local_5c = uVar12;
    local_58 = local_84;
    FUN_019ac248(&local_40,&local_60,&local_50);
    uVar11 = local_30;
    uVar17 = uStack_34;
    uVar15 = local_38;
    if ((local_40 & 1) != 0) {
      uVar15 = 0;
      uVar17 = 0;
      uVar11 = 0;
    }
    FUN_019b3934(uVar15,uVar17,uVar11);
  }
  DataMemoryBarrier(0xb);
  do {
    uVar15 = *puVar21;
    bVar4 = (bool)hasExclusiveAccess(puVar21);
  } while (!bVar4);
  *(char *)puVar21 = '\x01';
  DataMemoryBarrier(0xb);
  if ((char)uVar15 == '\0') {
    uVar15 = param_2[1];
    uVar12 = param_2[2];
    *local_64 = *param_2;
    local_64[1] = uVar15;
    local_64[2] = uVar12;
    return;
  }
  uVar23 = FUN_01319a80();
  puVar9 = (uint *)((ulonglong)uVar23 >> 0x20);
  puVar7 = (uint *)uVar23;
  UNRECOVERED_JUMPTABLE = (code *)0x12e914c;
  local_80 = 1;
  iVar1 = ((uint)puVar9 % 0x43) * 0x20;
  piVar13 = (int *)(&DAT_01d51180 + iVar1);
  piVar19 = (int *)(&DAT_01d51184 + iVar1);
  local_7c = &local_40;
  local_78 = puVar21;
  puStack_74 = param_2;
  local_70 = puVar18;
  do {
    DataMemoryBarrier(0xb);
    DataMemoryBarrier(0xb);
    puVar21 = puVar18;
    if (*(int *)(&DAT_01d51184 + iVar1) == 1) {
LAB_012e91d0:
      do {
        iVar8 = *piVar19;
        bVar4 = (bool)hasExclusiveAccess(piVar19);
      } while (!bVar4);
      *piVar19 = 1;
      DataMemoryBarrier(0xb);
      if (iVar8 == 1) {
        uVar15 = 0;
        do {
          if (uVar15 < 7) {
            uVar12 = 1;
            do {
              uVar2 = uVar12 >> (uVar15 & 0xff);
              uVar12 = uVar12 + 1;
              HintYield();
            } while (uVar2 == 0);
            uVar15 = uVar15 + 1;
          }
          else {
            FUN_01bea67c();
            if (uVar15 < 0xb) {
              uVar15 = uVar15 + 1;
            }
          }
          do {
            iVar8 = *piVar19;
            bVar4 = (bool)hasExclusiveAccess(piVar19);
          } while (!bVar4);
          *piVar19 = 1;
          DataMemoryBarrier(0xb);
        } while (iVar8 == 1);
      }
      DataMemoryBarrier(0xb);
      uVar15 = *puVar9;
      puVar18 = (uint *)puVar9[1];
      uVar12 = puVar9[2];
      DataMemoryBarrier(0xb);
      *piVar19 = iVar8;
    }
    else {
      uVar12 = puVar9[2];
      puVar21 = (uint *)puVar9[3];
      uVar15 = *puVar9;
      puVar18 = (uint *)puVar9[1];
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*piVar13 != *piVar13 || *(int *)(&DAT_01d51184 + iVar1) != *(int *)(&DAT_01d51184 + iVar1)
         ) goto LAB_012e91d0;
    }
    FUN_019ac130(&uStack_a8,1);
    uVar6 = uStack_a0;
    puVar5 = puStack_a4;
    uVar2 = uStack_a8;
    bVar4 = (int)((int)puStack_a4 - ((int)puVar18 + (uint)(uStack_a8 < uVar15))) < 0 ==
            (SBORROW4((int)puStack_a4,(int)puVar18) !=
            SBORROW4((int)puStack_a4 - (int)puVar18,(uint)(uStack_a8 < uVar15)));
    if (uStack_a8 == uVar15 && puStack_a4 == puVar18) {
      bVar4 = uVar12 <= uStack_a0;
    }
    puVar10 = puStack_a4;
    uVar16 = uStack_a8;
    if (!bVar4) {
      puVar10 = puVar18;
      uVar16 = uVar15;
    }
    uVar14 = puVar9[5];
    uVar20 = uVar16 + puVar9[4];
    uStack_f8 = (int)puVar10 + CARRY4(uVar16,puVar9[4]) + uVar14;
    if ((int)uVar14 < 0 != (int)(((uint)puVar10 ^ uStack_f8) & ~((uint)puVar10 ^ uVar14)) < 0) {
LAB_012e9404:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("overflow when adding duration to instant",0x28,&DAT_01d281d4);
    }
    uVar16 = uStack_a0;
    if (!bVar4) {
      uVar16 = uVar12;
    }
    puStack_f4 = (undefined1 *)(puVar9[6] + uVar16);
    if (&DAT_3b9aca00 <= puStack_f4) {
      bVar22 = 0xfffffffe < uVar20;
      uVar20 = uVar20 + 1;
      uVar16 = uStack_f8 + bVar22;
      if ((int)((uStack_f8 ^ uVar16) & ~uStack_f8) < 0) goto LAB_012e9404;
      puStack_f4 = puStack_f4 + -1000000000;
      uStack_f8 = uVar16;
    }
    do {
      iVar8 = *piVar19;
      bVar22 = (bool)hasExclusiveAccess(piVar19);
    } while (!bVar22);
    *piVar19 = 1;
    DataMemoryBarrier(0xb);
    if (iVar8 == 1) {
      uVar16 = 0;
      do {
        if (uVar16 < 7) {
          uVar14 = 1;
          do {
            uVar3 = uVar14 >> (uVar16 & 0xff);
            uVar14 = uVar14 + 1;
            HintYield();
          } while (uVar3 == 0);
          uVar16 = uVar16 + 1;
        }
        else {
          FUN_01bea67c();
          if (uVar16 < 0xb) {
            uVar16 = uVar16 + 1;
          }
        }
        do {
          iVar8 = *piVar19;
          bVar22 = (bool)hasExclusiveAccess(piVar19);
        } while (!bVar22);
        *piVar19 = 1;
        DataMemoryBarrier(0xb);
      } while (iVar8 == 1);
    }
    DataMemoryBarrier(0xb);
    if ((*puVar9 == uVar15 && (uint *)puVar9[1] == puVar18) && (puVar9[2] == uVar12)) {
      puVar9[1] = uStack_f8;
      *puVar9 = uVar20;
      puVar9[2] = (uint)puStack_f4;
      if (iVar8 + 2 == 0) {
        DataMemoryBarrier(0xb);
        *piVar13 = *piVar13 + 1;
      }
      DataMemoryBarrier(0xb);
      *piVar19 = iVar8 + 2;
      if (!bVar4) {
        puStack_b4 = puVar5;
        uStack_b8 = uVar2;
        uStack_b0 = uVar6;
        uStack_c8 = uVar15;
        puStack_c4 = puVar18;
        uStack_c0 = uVar12;
        FUN_019ac248(&uStack_a8,&uStack_c8,&uStack_b8,puVar21);
        if ((uStack_a8 & 1) != 0) {
          uStack_a0 = 0;
          uStack_9c = 0;
          uStack_98 = 0;
        }
        FUN_019b3934(uStack_a0,uStack_9c,uStack_98);
      }
      *puVar7 = uVar15;
      puVar7[1] = (uint)puVar18;
      puVar7[2] = uVar12;
                    /* WARNING: Could not recover jumptable at 0x012e94c0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)();
      return;
    }
    DataMemoryBarrier(0xb);
    *piVar19 = iVar8;
  } while( true );
}

