// FUN_0082302c @ 0082302c size=596 calls_out=7 calls_in=1
// strings: 

void FUN_0082302c(undefined2 *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined8 *puVar4;
  undefined4 *puVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  uint *puVar17;
  undefined1 local_60;
  undefined1 local_5f;
  byte local_5e;
  undefined4 local_54;
  undefined1 auStack_50 [12];
  undefined8 local_44;
  undefined4 *puStack_3c;
  undefined4 local_38;
  undefined4 *local_34;
  undefined4 *local_30;
  undefined1 *local_2c;
  undefined4 **local_28;
  undefined1 *local_24;
  
  FUN_00873008(&local_38);
  puVar5 = local_30;
  puVar9 = local_34;
  puVar4 = local_38;
  if (local_38 == (undefined8 *)&DAT_80000000) {
    *(undefined4 **)(param_1 + 2) = local_34;
    *param_1 = 1;
    return;
  }
  uVar6 = local_28._0_1_;
  uVar12 = (uint)local_28 & 0xff;
  FUN_008223c0(&local_38);
  if ((char)local_38 == '\x01') {
LAB_00823088:
    *param_1 = 1;
    *(undefined4 **)(param_1 + 2) = local_34;
    if (puVar4 == (undefined8 *)0x0) {
      return;
    }
    if (puVar9 == (undefined4 *)0x0) {
      return;
    }
    iVar8 = FUN_016d3bc8();
    uVar12 = *(byte *)((int)puVar9 + -3) & 0x1f;
    if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
       (uVar13 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar10 = uVar13 - 0x10, uVar13 == 0)) {
      iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar13 = (uint)(*(byte *)((int)puVar9 + -3) >> 5);
    iVar16 = *(int *)(iVar8 + 8) + 0x10;
    iVar14 = iVar10 * uVar12 + iVar10 + -4;
    iVar10 = iVar16 + iVar14;
    if (4 < uVar13) {
      if (uVar13 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar13 = *(uint *)(iVar10 + -4);
      if (uVar13 < 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4022);
        (*pcVar1)();
      }
      if (*(char *)(iVar10 + -5) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d402a);
        (*pcVar1)();
      }
    }
    if ((uint)(iVar10 - (int)puVar9) < uVar13) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar10 - uVar13) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar16 + iVar14) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar8 + 0x14);
    uVar13 = 1 << uVar12;
    *(undefined1 *)((int)puVar9 + -3) = 0xff;
    *(undefined2 *)((int)puVar9 + -2) = 0;
    do {
      uVar15 = *(uint *)(iVar8 + 0x10);
      uVar11 = *(uint *)(iVar8 + 0xc) | uVar15;
      if ((uVar13 & uVar11) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar15 == 0) || (uVar11 + uVar13 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&local_28,iVar8,uVar12);
        FUN_016dddc0(&DAT_018ddd48);
        if (local_24 == (undefined1 *)0x0) {
          return;
        }
        puVar9 = (undefined4 *)FUN_016d2bc8();
        uVar7 = *puVar9;
        FUN_016d6ac4(local_28,local_24);
        *puVar9 = uVar7;
        return;
      }
      if (DAT_018ddb0b == '\0') {
        *(uint *)(iVar8 + 0x10) = uVar13 + uVar15;
        return;
      }
      puVar17 = (uint *)(iVar8 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar17);
        uVar11 = *puVar17;
        if (uVar15 != uVar11) goto LAB_016d409c;
        bVar3 = (bool)hasExclusiveAccess(puVar17);
      } while (!bVar3);
      *puVar17 = uVar13 + uVar15;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar15 == uVar11) {
        return;
      }
    } while( true );
  }
  if (uVar12 != local_38._1_1_) {
    local_5e = local_38._1_1_;
    local_5f = uVar6;
    local_60 = 4;
    local_34 = (undefined4 *)FUN_0080b0cc(&local_60);
    goto LAB_00823088;
  }
  if (param_4 == '\0') {
    local_54 = 2;
    if (puVar5 == (undefined4 *)&SUB_00000002) goto LAB_008231c4;
    local_44 = FUN_0081e8e8();
    puStack_3c = puVar5;
    local_28 = &puStack_3c;
    local_30 = &local_54;
    local_38 = &local_44;
    local_24 = &LAB_00fac484;
    local_2c = &LAB_00fac484;
    local_34 = &DAT_0157d360;
    FUN_00600d2c(auStack_50,&DAT_00588618,&local_38);
    uVar7 = FUN_00808de4(auStack_50);
  }
  else if (param_4 == '\x01') {
    local_54 = 2;
    if (puVar5 == (undefined4 *)&SUB_00000002) goto LAB_008231c4;
    local_44 = FUN_0081e8e8();
    puStack_3c = puVar5;
    local_28 = &puStack_3c;
    local_30 = &local_54;
    local_38 = &local_44;
    local_24 = &LAB_00fac484;
    local_2c = &LAB_00fac484;
    local_34 = &DAT_0157d360;
    FUN_00600d2c(auStack_50,&DAT_00588618,&local_38);
    uVar7 = FUN_00808de4(auStack_50);
  }
  else {
    local_54 = 2;
    if (puVar5 == (undefined4 *)&SUB_00000002) {
LAB_008231c4:
      local_54 = 2;
      param_1[1] = *(undefined2 *)puVar9;
      *param_1 = 0;
      goto joined_r0x008231d8;
    }
    local_44 = FUN_0081e8e8();
    puStack_3c = puVar5;
    local_28 = &puStack_3c;
    local_30 = &local_54;
    local_38 = &local_44;
    local_24 = &LAB_00fac484;
    local_2c = &LAB_00fac484;
    local_34 = &DAT_0157d360;
    FUN_00600d2c(auStack_50,&DAT_00588618,&local_38);
    uVar7 = FUN_00808de4(auStack_50);
  }
  *(undefined4 *)(param_1 + 2) = uVar7;
  *param_1 = 1;
joined_r0x008231d8:
  if (puVar4 == (undefined8 *)0x0) {
    return;
  }
  thunk_FUN_016d3fb4(puVar9);
  return;
}

