// FUN_016b4cc0 @ 016b4cc0 size=924 calls_out=9 calls_in=1
// strings: match states should be a proper subset of all states | invalid StateID valueonepass::DFA( 

void FUN_016b4cc0(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint extraout_r1;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  undefined4 uVar9;
  uint *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  undefined4 uVar17;
  undefined *puVar18;
  uint uVar19;
  int iVar20;
  uint local_44;
  uint local_30;
  int local_2c;
  uint local_28;
  
  uVar16 = *(uint *)(param_1 + 0x14);
  uVar2 = *(uint *)(param_1 + 0x130) & 0x1f;
  uVar1 = uVar16 >> uVar2;
  if (uVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d089d8);
  }
  iVar3 = FUN_01298504(uVar1 << 2,4);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,uVar1 << 2);
  }
  uVar4 = 0;
  do {
    *(uint *)(iVar3 + uVar4 * 4) = uVar4;
    uVar4 = uVar4 + 1;
  } while (uVar1 != uVar4);
  iVar5 = *(int *)(param_1 + 0x10);
  local_44 = uVar1;
  uVar4 = uVar1;
  do {
    local_44 = local_44 - 1;
    uVar7 = uVar4;
    do {
      if (uVar7 == 0) {
        FUN_01299464(&local_30,iVar3,uVar1);
        uVar4 = 0;
        puVar18 = &DAT_01d08aa8;
        goto LAB_016b4e84;
      }
      uVar4 = uVar7 - 1;
      if ((int)uVar7 < 1) {
        local_2c = 0;
        local_30 = uVar4;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc("invalid StateID valueonepass::DFA(\n",0x15,&local_30,&DAT_01d08b18,
                     &DAT_01d097b8);
      }
      FUN_016b54d8(param_1,uVar4);
      uVar7 = uVar4;
    } while (0xfffffbff < extraout_r1);
    if (local_44 != uVar4) {
      uVar19 = 0;
      uVar7 = uVar16 - (uVar4 << uVar2);
      if (uVar16 < uVar4 << uVar2) {
        uVar7 = 0;
      }
      uVar8 = uVar16 - (local_44 << uVar2);
      if (uVar16 < local_44 << uVar2) {
        uVar8 = 0;
      }
      iVar20 = local_44 << uVar2;
      puVar11 = (undefined4 *)(iVar5 + iVar20 * 8);
      puVar13 = (undefined4 *)(iVar5 + (uVar4 << uVar2) * 8);
      do {
        if (uVar8 == uVar19) {
LAB_016b501c:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(iVar20 + uVar19,uVar16,&DAT_01d089c8);
        }
        if (uVar7 == uVar19) {
          iVar20 = uVar4 << uVar2;
          goto LAB_016b501c;
        }
        uVar9 = *puVar11;
        uVar17 = puVar11[1];
        uVar19 = uVar19 + 1;
        uVar6 = puVar13[1];
        *puVar11 = *puVar13;
        puVar11[1] = uVar6;
        puVar11 = puVar11 + 2;
        *puVar13 = uVar9;
        puVar13[1] = uVar17;
        puVar13 = puVar13 + 2;
      } while (uVar19 >> uVar2 == 0);
      if (uVar1 <= local_44) {
LAB_016b505c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(local_44,uVar1,&DAT_01d08a98);
      }
      if (uVar1 <= uVar4) {
        local_44 = uVar4;
        goto LAB_016b505c;
      }
      uVar6 = *(undefined4 *)(iVar3 + local_44 * 4);
      *(undefined4 *)(iVar3 + local_44 * 4) = *(undefined4 *)(iVar3 + uVar4 * 4);
      *(undefined4 *)(iVar3 + uVar4 * 4) = uVar6;
    }
    *(uint *)(param_1 + 0x28) = local_44;
    if (local_44 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("match states should be a proper subset of all states",0x34,&DAT_01d08918);
    }
  } while( true );
  while( true ) {
    uVar19 = *(uint *)(local_2c + uVar4 * 4);
    if (uVar4 != uVar19) {
      do {
        uVar7 = uVar19;
        if (local_28 <= uVar7) {
          puVar18 = &DAT_01d08ab8;
          goto LAB_016b4fc8;
        }
        uVar19 = *(uint *)(local_2c + uVar7 * 4);
      } while (uVar4 != uVar19);
      *(uint *)(iVar3 + uVar4 * 4) = uVar7;
    }
    uVar4 = uVar4 + 1;
    if (uVar4 == uVar1) break;
LAB_016b4e84:
    if (uVar4 == local_28) {
      uVar7 = local_28;
      goto LAB_016b4fc8;
    }
  }
  uVar4 = 0;
  iVar20 = *(int *)(param_1 + 300);
  do {
    if (iVar20 != 0) {
      uVar7 = uVar4 << uVar2;
      puVar11 = (undefined4 *)(iVar5 + uVar7 * 8);
      iVar12 = iVar20;
      uVar19 = uVar7;
      if (uVar16 < uVar7) {
        uVar19 = uVar16;
      }
      do {
        if (uVar16 == uVar19) {
          local_28 = uVar16;
          puVar18 = &DAT_01d08a68;
          goto LAB_016b4fc8;
        }
        uVar14 = puVar11[1];
        uVar8 = uVar14 >> 0xb;
        if (uVar1 <= uVar14 >> 0xb) goto LAB_016b4fb4;
        iVar15 = *(int *)(iVar3 + uVar8 * 4);
        uVar7 = uVar7 + 1;
        uVar19 = uVar19 + 1;
        iVar12 = iVar12 + -1;
        *puVar11 = *puVar11;
        puVar11[1] = uVar14 & 0x7ff | iVar15 << 0xb;
        puVar11 = puVar11 + 2;
      } while (iVar12 != 0);
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != uVar1);
  iVar5 = *(int *)(param_1 + 0x20);
  if (iVar5 != 0) {
    puVar10 = *(uint **)(param_1 + 0x1c);
    do {
      uVar8 = *puVar10;
      if (uVar1 <= uVar8) {
LAB_016b4fb4:
        uVar7 = uVar8;
        local_28 = uVar1;
        puVar18 = &DAT_01d08ad8;
LAB_016b4fc8:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar7,local_28,puVar18);
      }
      iVar5 = iVar5 + -1;
      *puVar10 = *(uint *)(iVar3 + uVar8 * 4);
      puVar10 = puVar10 + 1;
    } while (iVar5 != 0);
  }
  FUN_0134aee0(local_30,local_2c,4,4);
  FUN_0134aee0(uVar1,iVar3,4,4);
  return;
}

