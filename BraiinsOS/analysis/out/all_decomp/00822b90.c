// FUN_00822b90 @ 00822b90 size=528 calls_out=8 calls_in=1
// strings: 

void FUN_00822b90(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  ushort uVar1;
  code *pcVar2;
  byte bVar3;
  bool bVar4;
  undefined8 *puVar5;
  ushort *puVar6;
  undefined1 uVar7;
  int iVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint *puVar18;
  uint in_fpscr;
  undefined1 local_60;
  undefined1 local_5f;
  byte local_5e;
  undefined4 local_54;
  undefined1 auStack_50 [12];
  undefined8 local_44;
  undefined4 *puStack_3c;
  undefined4 local_38;
  ushort *local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  undefined4 **local_28;
  undefined1 *local_24;
  
  FUN_00873008(&local_38);
  puVar9 = local_30;
  puVar6 = local_34;
  puVar5 = local_38;
  if (local_38 == (undefined8 *)&DAT_80000000) {
    *param_1 = 1;
    param_1[1] = local_34;
    return;
  }
  uVar7 = local_28._0_1_;
  uVar17 = (uint)local_28 & 0xff;
  FUN_00822778(&local_38,param_4);
  if ((char)local_38 == '\x01') {
LAB_00822bec:
    *param_1 = 1;
    param_1[1] = local_34;
    if (puVar5 == (undefined8 *)0x0) {
      return;
    }
    if (puVar6 == (ushort *)0x0) {
      return;
    }
    iVar8 = FUN_016d3bc8();
    uVar17 = *(byte *)((int)puVar6 + -3) & 0x1f;
    if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
       (uVar13 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar11 = uVar13 - 0x10, uVar13 == 0)) {
      iVar11 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar13 = (uint)(*(byte *)((int)puVar6 + -3) >> 5);
    iVar16 = *(int *)(iVar8 + 8) + 0x10;
    iVar14 = iVar11 * uVar17 + iVar11 + -4;
    iVar11 = iVar16 + iVar14;
    if (4 < uVar13) {
      if (uVar13 != 5) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar2)();
      }
      uVar13 = *(uint *)(iVar11 + -4);
      if (uVar13 < 5) {
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
    if ((uint)(iVar11 - (int)puVar6) < uVar13) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar2)();
    }
    if (*(char *)(iVar11 - uVar13) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar2)();
    }
    if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar2)();
    }
    bVar3 = *(byte *)(iVar8 + 0x14);
    uVar13 = 1 << uVar17;
    *(undefined1 *)((int)puVar6 + -3) = 0xff;
    puVar6[-1] = 0;
    do {
      uVar15 = *(uint *)(iVar8 + 0x10);
      uVar12 = *(uint *)(iVar8 + 0xc) | uVar15;
      if ((uVar13 & uVar12) != 0) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar2)();
      }
      if ((uVar15 == 0) || (uVar12 + uVar13 == (2 << (bVar3 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&local_28,iVar8,uVar17);
        FUN_016dddc0(&DAT_018ddd48);
        if (local_24 == (undefined1 *)0x0) {
          return;
        }
        puVar9 = (undefined4 *)FUN_016d2bc8();
        uVar10 = *puVar9;
        FUN_016d6ac4(local_28,local_24);
        *puVar9 = uVar10;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar8 + 0x10) = uVar13 + uVar15;
        return;
      }
      puVar18 = (uint *)(iVar8 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar18);
        uVar12 = *puVar18;
        if (uVar15 != uVar12) goto LAB_016d409c;
        bVar4 = (bool)hasExclusiveAccess(puVar18);
      } while (!bVar4);
      *puVar18 = uVar13 + uVar15;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar15 == uVar12) {
        return;
      }
    } while( true );
  }
  if (uVar17 != local_38._1_1_) {
    local_5e = local_38._1_1_;
    local_5f = uVar7;
    local_60 = 4;
    local_34 = (ushort *)FUN_0080b0cc(&local_60);
    goto LAB_00822bec;
  }
  if ((param_4 & 0xff) == 0) {
    FUN_00822dd4(param_1);
LAB_00822c88:
  }
  else {
    if ((param_4 & 0xff) == 1) {
      local_54 = 4;
      if (puVar9 == (undefined4 *)&DAT_00000004) {
        uVar10 = *(undefined4 *)puVar6;
        *param_1 = 0;
        param_1[1] = uVar10;
        goto joined_r0x00822c8c;
      }
      local_44 = FUN_0081e808();
      puStack_3c = puVar9;
      local_28 = &puStack_3c;
      local_30 = &local_54;
      local_38 = &local_44;
      local_24 = &LAB_00fac484;
      local_2c = &LAB_00fac484;
      local_34 = (ushort *)&DAT_0157d360;
      FUN_00600d2c(auStack_50,&DAT_00588618,&local_38);
      uVar10 = FUN_00808de4(auStack_50);
    }
    else {
      local_54 = 2;
      if (puVar9 == (undefined4 *)&SUB_00000002) {
        uVar1 = *puVar6;
        *param_1 = 0;
        uVar10 = VectorUnsignedToFloat((uint)uVar1,(byte)(in_fpscr >> 0x16) & 3);
        param_1[1] = uVar10;
        goto LAB_00822c88;
      }
      local_44 = FUN_0081e808();
      puStack_3c = puVar9;
      local_28 = &puStack_3c;
      local_30 = &local_54;
      local_38 = &local_44;
      local_24 = &LAB_00fac484;
      local_2c = &LAB_00fac484;
      local_34 = (ushort *)&DAT_0157d360;
      FUN_00600d2c(auStack_50,&DAT_00588618,&local_38);
      uVar10 = FUN_00808de4(auStack_50);
    }
    *param_1 = 1;
    param_1[1] = uVar10;
  }
joined_r0x00822c8c:
  if (puVar5 == (undefined8 *)0x0) {
    return;
  }
  thunk_FUN_016d3fb4(puVar6);
  return;
}

