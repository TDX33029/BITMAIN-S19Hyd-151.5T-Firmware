// FUN_00a3b7e0 @ 00a3b7e0 size=1196 calls_out=6 calls_in=0
// strings: cannot sample empty range | Uniform::new called with `low >= high` | Uniform::new_inclusive called with `low > high` | Uniform::new_inclusive called with `low > high` | Uniform::new_inclusive called with `low > high`

void FUN_00a3b7e0(longlong *param_1,int param_2,uint *param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  uint extraout_r1;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined1 *puVar9;
  uint uVar10;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  int iVar11;
  undefined1 *puVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  undefined8 uVar16;
  longlong lVar17;
  undefined8 local_50;
  uint local_48;
  uint local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 *local_30;
  
  uVar14 = *param_3;
  uVar13 = param_3[1];
  lVar17 = *(longlong *)param_3;
  puVar12 = (undefined1 *)param_3[2];
  uVar3 = param_3[4];
  uVar5 = param_3[5];
  puVar9 = (undefined1 *)param_3[6];
  bVar15 = puVar9 <= puVar12;
  if ((uVar14 ^ uVar3) != 0 || (uVar13 ^ uVar5) != 0) {
    bVar15 = uVar5 < uVar13 || uVar13 - uVar5 < (uint)(uVar3 <= uVar14);
  }
  if (bVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("cannot sample empty range",0x19,&DAT_01878130);
  }
  bVar15 = uVar13 <= uVar5 && (uint)(uVar3 <= uVar14) <= uVar13 - uVar5;
  if ((uVar14 ^ uVar3) == 0 && (uVar13 ^ uVar5) == 0) {
    bVar15 = puVar12 < puVar9;
  }
  if (!bVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("Uniform::new called with `low >= high`",0x26,&DAT_0186c978);
  }
  if (puVar9 == (undefined1 *)0x0) {
    if (uVar3 == 0 && uVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_004148cb,0x23,&DAT_018adf50);
    }
    bVar15 = uVar3 == 0;
    uVar3 = uVar3 - 1;
    puVar9 = (undefined1 *)0x3b9ac9ff;
    uVar5 = uVar5 - bVar15;
  }
  else {
    puVar9 = puVar9 + -1;
  }
  bVar15 = uVar13 < uVar5 || uVar5 - uVar13 < (uint)(uVar14 <= uVar3);
  if (uVar14 == uVar3 && uVar13 == uVar5) {
    bVar15 = puVar12 <= puVar9;
  }
  if (!bVar15) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("Uniform::new_inclusive called with `low > high`",0x2f,&DAT_0186c968);
  }
  bVar15 = uVar3 == 0;
  if (puVar9 < puVar12) {
    puVar9 = &DAT_3b9aca00 + (int)puVar9;
    uVar3 = uVar3 - 1;
    uVar5 = uVar5 - bVar15;
  }
  if (uVar3 == uVar14 && uVar5 == uVar13) {
    if (puVar9 < puVar12) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("Uniform::new_inclusive called with `low > high`",0x2f,&DAT_0186c9e0);
    }
    uVar3 = ((int)puVar9 - (int)puVar12) + 1;
    FUN_0184606c(~((int)puVar9 - (int)puVar12),uVar3);
    uVar5 = *(uint *)(param_2 + 0x108);
    do {
      if (0x3f < uVar5) {
        FUN_01627dc0(param_2 + 0x110,param_2 + 8);
        uVar5 = 0;
      }
      uVar6 = *(uint *)(param_2 + 8 + uVar5 * 4);
      uVar5 = uVar5 + 1;
      *(uint *)(param_2 + 0x108) = uVar5;
      lVar1 = (ulonglong)uVar3 * (ulonglong)uVar6;
    } while (~extraout_r1 < (uint)lVar1);
    puVar12 = puVar12 + (int)((ulonglong)lVar1 >> 0x20);
    if (puVar12 < &DAT_3b9aca00) goto LAB_00a3ba84;
    uVar5 = (uint)((ulonglong)((uint)puVar12 >> 9) * 0x44b83 >> 0x20);
    uVar3 = uVar5 >> 7;
    lVar17 = CONCAT44(uVar13 + CARRY4(uVar14,uVar3),uVar14 + uVar3);
    if (CARRY4(uVar13,(uint)CARRY4(uVar14,uVar3))) {
LAB_00a3bc5c:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_00414854,0x19,&DAT_018aded0);
    }
  }
  else {
    uVar7 = (uint)((ulonglong)uVar5 * 1000000000);
    uVar6 = (uint)((ulonglong)uVar3 * 1000000000);
    uVar10 = (uint)((ulonglong)uVar3 * 1000000000 >> 0x20);
    uVar8 = uVar10 + uVar7;
    local_30 = puVar12;
    if ((int)((ulonglong)uVar5 * 1000000000 >> 0x20) == 0 && !CARRY4(uVar10,uVar7)) {
      puVar4 = puVar9 + uVar6;
      uVar7 = uVar8 + CARRY4(uVar6,(uint)puVar9);
      if (!CARRY4(uVar8,(uint)CARRY4(uVar6,(uint)puVar9))) {
        lVar17 = (ulonglong)uVar14 * 1000000000 + CONCAT44(uVar13 * 1000000000,puVar12);
        puVar9 = (undefined1 *)lVar17;
        uVar5 = (uint)((ulonglong)lVar17 >> 0x20);
        if (uVar5 < uVar7 || uVar7 - uVar5 < (uint)(puVar9 <= puVar4)) {
          uVar3 = (int)puVar4 - (int)puVar9;
          local_40 = 0;
          uVar7 = uVar7 - (uVar5 + (puVar4 < puVar9));
          iVar11 = uVar7 + (0xfffffffe < uVar3);
          local_3c = 0;
          if (!CARRY4(uVar7,(uint)(0xfffffffe < uVar3))) {
            FUN_01846088(~uVar3,~uVar7,uVar3 + 1,iVar11);
            local_40 = extraout_r2;
            local_3c = extraout_r3;
          }
          local_50 = lVar17;
          local_48 = uVar3 + 1;
          local_44 = iVar11;
          uVar16 = FUN_00a3fec4(&local_50,param_2);
          lVar17 = FUN_01846088((int)uVar16,(int)((ulonglong)uVar16 >> 0x20),&DAT_3b9aca00,0);
          puVar12 = (undefined1 *)((int)uVar16 + (int)lVar17 * -1000000000);
          goto LAB_00a3ba84;
        }
        goto LAB_00a3bc44;
      }
    }
    if (uVar5 <= uVar13 && (uint)(uVar14 <= uVar3) <= uVar5 - uVar13) {
LAB_00a3bc44:
                    /* WARNING: Subroutine does not return */
      FUN_00faa464("Uniform::new_inclusive called with `low > high`",0x2f,&DAT_0186c9f0);
    }
    uVar6 = uVar3 - uVar14;
    local_38 = 0;
    uVar7 = uVar5 - (uVar13 + (uVar3 < uVar14));
    iVar11 = uVar7 + (0xfffffffe < uVar6);
    local_34 = 0;
    if (!CARRY4(uVar7,(uint)(0xfffffffe < uVar6))) {
      FUN_01846088(~uVar6,~uVar7,uVar6 + 1,iVar11);
      local_38 = extraout_r2_00;
      local_34 = extraout_r3_00;
    }
    local_50 = CONCAT44(uVar5,uVar3);
    local_48 = uVar14;
    local_44 = uVar13;
    local_40 = uVar6 + 1;
    local_3c = iVar11;
    do {
      lVar17 = FUN_00a3fec4(&local_48,param_2);
      uVar2 = (ulonglong)lVar17 >> 0x20;
      uVar13 = (uint)lVar17;
      uVar14 = *(uint *)(param_2 + 0x108);
      do {
        if (0x3f < uVar14) {
          FUN_01627dc0(param_2 + 0x110,param_2 + 8);
          uVar14 = 0;
        }
        uVar6 = *(uint *)(param_2 + 8 + uVar14 * 4);
        uVar14 = uVar14 + 1;
        *(uint *)(param_2 + 0x108) = uVar14;
        lVar1 = (ulonglong)uVar6 * 1000000000;
        uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
      } while (3999999999 < (uint)lVar1);
    } while ((lVar17 == CONCAT44(uVar5,uVar3)) && ((uint)((int)puVar9 - (int)puVar12) < uVar6));
    puVar12 = puVar12 + uVar6;
    if (puVar12 < &DAT_3b9aca00) goto LAB_00a3ba84;
    lVar17 = lVar17 + 1;
    if (CARRY4((uint)uVar2,(uint)(0xfffffffe < uVar13))) goto LAB_00a3bc5c;
    uVar5 = (uint)((ulonglong)((uint)puVar12 >> 9) * 0x44b83 >> 0x20);
  }
  puVar12 = puVar12 + (uVar5 >> 7) * -1000000000;
LAB_00a3ba84:
  *param_1 = lVar17;
  *(undefined1 **)(param_1 + 1) = puVar12;
  return;
}

