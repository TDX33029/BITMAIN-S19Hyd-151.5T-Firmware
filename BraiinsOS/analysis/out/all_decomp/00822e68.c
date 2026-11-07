// FUN_00822e68 @ 00822e68 size=404 calls_out=7 calls_in=1
// strings: 

void FUN_00822e68(undefined1 *param_1)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 *puVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  uint *puVar18;
  undefined1 local_58;
  undefined1 local_57;
  byte local_56;
  undefined4 local_4c;
  undefined8 *local_48;
  code *local_44;
  undefined8 local_3c;
  undefined4 *puStack_34;
  undefined4 local_30;
  ushort *local_2c;
  undefined4 *local_28;
  undefined1 *local_24;
  undefined4 **local_20;
  undefined1 *local_1c;
  
  FUN_00873008(&local_30);
  puVar10 = local_28;
  puVar6 = local_2c;
  puVar5 = local_30;
  if (local_30 == (undefined8 *)&DAT_80000000) {
    *(ushort **)(param_1 + 4) = local_2c;
    *param_1 = 1;
    return;
  }
  uVar7 = local_20._0_1_;
  uVar13 = (uint)local_20 & 0xff;
  FUN_00821cac(&local_30);
  if ((char)local_30 == '\x01') {
LAB_00822ec0:
    *param_1 = 1;
    *(ushort **)(param_1 + 4) = local_2c;
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    if (puVar6 == (ushort *)0x0) {
      return;
    }
    iVar9 = FUN_016d3bc8();
    uVar13 = *(byte *)((int)puVar6 + -3) & 0x1f;
    if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
       (uVar14 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar11 = uVar14 - 0x10, uVar14 == 0)) {
      iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar14 = (uint)(*(byte *)((int)puVar6 + -3) >> 5);
    iVar17 = *(int *)(iVar9 + 8) + 0x10;
    iVar15 = iVar11 * uVar13 + iVar11 + -4;
    iVar11 = iVar17 + iVar15;
    if (4 < uVar14) {
      if (uVar14 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar2)();
      }
      uVar14 = *(uint *)(iVar11 + -4);
      if (uVar14 < 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar2)();
      }
      if (*(char *)(iVar11 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar2)();
      }
    }
    if ((uint)(iVar11 - (int)puVar6) < uVar14) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar2)();
    }
    if (*(char *)(iVar11 - uVar14) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar2)();
    }
    if (*(char *)(iVar17 + iVar15) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar2)();
    }
    bVar3 = *(byte *)(iVar9 + 0x14);
    uVar14 = 1 << uVar13;
    *(undefined1 *)((int)puVar6 + -3) = 0xff;
    puVar6[-1] = 0;
    do {
      uVar16 = *(uint *)(iVar9 + 0x10);
      uVar12 = *(uint *)(iVar9 + 0xc) | uVar16;
      if ((uVar14 & uVar12) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar2)();
      }
      if ((uVar16 == 0) || (uVar12 + uVar14 == (2 << (bVar3 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&local_28,iVar9,uVar13);
        FUN_016dddc0(&DAT_018ddd48);
        if (local_24 == (undefined1 *)0x0) {
          return;
        }
        puVar10 = (undefined4 *)FUN_016d2bc8();
        uVar8 = *puVar10;
        FUN_016d6ac4(local_28,local_24);
        *puVar10 = uVar8;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar9 + 0x10) = uVar14 + uVar16;
        return;
      }
      puVar18 = (uint *)(iVar9 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar18);
        uVar12 = *puVar18;
        if (uVar16 != uVar12) goto LAB_016d409c;
        bVar4 = (bool)hasExclusiveAccess(puVar18);
      } while (!bVar4);
      *puVar18 = uVar14 + uVar16;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar16 == uVar12) {
        return;
      }
    } while( true );
  }
  if (uVar13 != local_30._1_1_) {
    local_56 = local_30._1_1_;
    local_57 = uVar7;
    local_58 = 4;
    local_2c = (ushort *)FUN_0080b0cc(&local_58);
    goto LAB_00822ec0;
  }
  local_4c = 2;
  if (puVar10 == (undefined4 *)&SUB_00000002) {
    uVar1 = *puVar6;
    local_3c._0_4_ = CONCAT22(local_3c._2_2_,uVar1);
    if (uVar1 < 2) {
      param_1[1] = (char)uVar1;
      *param_1 = 0;
      goto joined_r0x00822ff4;
    }
    local_48 = &local_3c;
    local_44 = FUN_00facd10;
    FUN_00600d2c(&local_30,&DAT_00343111,&local_48);
    uVar8 = FUN_00808de4(&local_30);
  }
  else {
    local_3c = FUN_0081e798();
    puStack_34 = puVar10;
    local_20 = &puStack_34;
    local_28 = &local_4c;
    local_30 = &local_3c;
    local_1c = &LAB_00fac484;
    local_24 = &LAB_00fac484;
    local_2c = (ushort *)&DAT_0157d360;
    FUN_00600d2c(&local_48,&DAT_00588618,&local_30);
    uVar8 = FUN_00808de4(&local_48);
  }
  *(undefined4 *)(param_1 + 4) = uVar8;
  *param_1 = 1;
joined_r0x00822ff4:
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  thunk_FUN_016d3fb4(puVar6);
  return;
}

