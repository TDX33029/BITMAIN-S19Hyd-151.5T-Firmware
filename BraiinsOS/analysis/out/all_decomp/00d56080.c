// FUN_00d56080 @ 00d56080 size=1744 calls_out=10 calls_in=1
// strings: a Display implementation returned an error unexpectedly

void FUN_00d56080(undefined4 *param_1,int param_2,int *param_3,int param_4,undefined1 param_5,
                 int param_6)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  undefined4 **ppuVar4;
  undefined1 *puVar5;
  undefined4 *puVar6;
  undefined2 *puVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined2 *puVar10;
  uint uVar11;
  int iVar12;
  undefined4 *puVar13;
  int iVar14;
  undefined4 **ppuVar15;
  undefined4 *puVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  undefined1 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint *puVar26;
  uint *puVar25;
  uint *puVar27;
  undefined4 uVar28;
  undefined4 uVar29;
  undefined1 *puVar30;
  uint uVar31;
  bool bVar32;
  bool bVar33;
  double dVar34;
  undefined4 unaff_s18;
  double dVar35;
  int local_104;
  int local_100;
  undefined4 local_fc;
  int local_f8;
  uint local_f4;
  ushort local_d0;
  ushort local_94;
  undefined4 **local_90;
  undefined4 **local_88;
  undefined4 **local_80;
  undefined4 *local_78;
  int iStack_74;
  undefined4 *puStack_70;
  undefined4 local_68;
  undefined4 **local_64;
  undefined1 *local_60;
  undefined4 *local_58;
  undefined2 *local_54;
  undefined4 *local_50;
  uint local_4c;
  uint uStack_48;
  undefined4 uStack_44;
  
  iVar12 = *(int *)(param_2 + 0x588);
  iVar14 = *(int *)(param_2 + 0x58c);
  dVar34 = *(double *)(param_2 + 0x590);
  puVar9 = (undefined4 *)FUN_00c70f88(&DAT_003573d9,0x3a);
  if (iVar12 == 6 && iVar14 == 0) {
    (**(code **)*puVar9)();
    local_f8 = (int)(longlong)dVar34;
    local_94 = (ushort)(local_f8 + 0x8000U < 0x10000);
  }
  else {
    (**(code **)*puVar9)();
    local_94 = 0;
  }
  FUN_00d56ab8(&local_58,param_2);
  if (local_58 != (undefined4 *)0x5 || local_54 != (undefined2 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x00d56194. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00d56198 + *(int *)(&DAT_00d56198 + (int)local_58 * 4)))
              (local_50,local_4c,uStack_48,uStack_44);
    return;
  }
  (**(code **)*local_50)();
  uVar21 = 0;
  local_64 = (undefined4 **)0x0;
  local_68 = 0;
  local_60 = (undefined1 *)0x0;
  FUN_015f3c24(&local_58,param_4 + 0x48,&local_68);
  if (((uint)local_58 & 1) == 0) {
    uVar11 = (uint)(ZEXT48(local_50) * 1000);
    lVar2 = (ulonglong)local_4c * 1000 + (ZEXT48(local_50) * 1000 >> 0x20);
    uVar18 = (uint)lVar2;
    uVar17 = (uint)((ulonglong)lVar2 >> 0x20);
    uStack_48 = uStack_48 / 1000000;
    local_104 = uVar11 + uStack_48;
    uVar21 = 0;
    bVar32 = CARRY4(uVar18,(uint)CARRY4(uVar11,uStack_48));
    local_100 = uVar18 + CARRY4(uVar11,uStack_48);
    bVar33 = CARRY4(uVar17,(uint)bVar32);
    if (!bVar33 && (uVar17 + bVar32 != 0) <= bVar33) {
      uVar21 = 1;
    }
  }
  FUN_015f3b0c(&local_58,1);
  puVar8 = local_50;
  puVar7 = local_54;
  puVar9 = local_58;
  puVar30 = *(undefined1 **)(param_2 + 0x5c0);
  if (puVar30 == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_003575eb,0x30,&DAT_01877bd0);
  }
  uVar24 = *(undefined4 *)(param_2 + 0x5b8);
  uVar22 = *(undefined4 *)(param_2 + 0x5bc);
  FUN_015f3b0c(&local_58,1);
  local_78 = local_58;
  iStack_74 = (int)local_54;
  puStack_70 = local_50;
  local_68 = uVar24;
  local_64 = (undefined4 **)uVar22;
  local_60 = puVar30;
  FUN_015f3c24(&local_58,&local_78,&local_68);
  uVar11 = local_4c;
  puVar16 = local_50;
  puVar6 = local_58;
  local_60 = (undefined1 *)0x0;
  local_68 = 0;
  local_4c = 0;
  local_64 = (undefined4 **)&DAT_00000001;
  local_50 = (undefined4 *)&DAT_60000020;
  local_54 = (undefined2 *)&DAT_018780f8;
  local_58 = &local_68;
  iVar12 = FUN_00baea48(param_4 + 0x5c,&local_58);
  puVar5 = local_60;
  ppuVar4 = local_64;
  uVar3 = local_68;
  if (iVar12 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_78,
                 &DAT_01878120,&DAT_018af130);
  }
  if ((*param_3 == 0 && param_3[4] == 0) && (param_3[1] == 0 && param_3[5] == 0)) {
    local_d0 = 0;
  }
  else {
    iVar12 = 8;
    if ((param_3[4] & 1U) != 0) {
      iVar12 = 0x18;
    }
    local_f4 = (uint)(0.0 < *(double *)((int)param_3 + iVar12)) *
               (int)(longlong)*(double *)((int)param_3 + iVar12);
    local_d0 = (ushort)(local_f4 < 0x8000);
  }
  iVar12 = *(int *)(param_4 + 0x8c);
  uVar17 = param_3[0x1c];
  uVar18 = param_3[0x1d];
  bVar32 = *(int *)(iVar12 + 0x20) == 1;
  ppuVar15 = (undefined4 **)(uint)bVar32;
  if (bVar32) {
    dVar34 = (double)(ulonglong)*(uint *)(iVar12 + 0x24);
  }
  bVar32 = *(int *)(iVar12 + 0x28) == 1;
  if (bVar32) {
    unaff_s18 = *(undefined4 *)(iVar12 + 0x2c);
  }
  iVar12 = param_3[0x1b];
  dVar35 = *(double *)(param_3 + 0x14);
  uVar19 = param_3[0x1f];
  if (iVar12 != 0) {
    puVar27 = (uint *)param_3[0x1a] + iVar12;
    iVar12 = iVar12 << 2;
    puVar26 = (uint *)param_3[0x1a];
    do {
      puVar25 = puVar26 + 1;
      uVar23 = *puVar26;
      if (uVar23 < 0x8000) {
        puVar10 = (undefined2 *)thunk_FUN_016d4a50(8);
        if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(2,8);
        }
        puVar13 = (undefined4 *)0x1;
        local_88 = (undefined4 **)&DAT_00000004;
        *puVar10 = (short)uVar23;
        local_50 = (undefined4 *)0x1;
        local_58 = (undefined4 *)0x4;
        local_80 = ppuVar4;
        local_54 = puVar10;
        if (puVar25 == puVar27) goto LAB_00d56558;
        goto LAB_00d564e8;
      }
      iVar12 = iVar12 + -4;
      puVar26 = puVar25;
    } while (iVar12 != 0);
  }
  local_54 = (undefined2 *)&SUB_00000002;
  puVar13 = (undefined4 *)0x0;
  local_88 = ppuVar15;
  local_80 = local_64;
  local_58 = (undefined4 *)0x0;
  goto LAB_00d56558;
  while( true ) {
    if (puVar13 == local_58) {
      FUN_00d653ec(&local_58,puVar13,1,2,2);
      puVar10 = local_54;
      local_80 = &local_58;
    }
    local_88 = (undefined4 **)(puVar10 + (int)puVar13);
    puVar13 = (undefined4 *)((int)puVar13 + 1);
    *(short *)local_88 = (short)uVar23;
    local_50 = puVar13;
    if (puVar26 == puVar27) break;
LAB_00d564e8:
    puVar26 = puVar25 + 1;
    uVar23 = *puVar25;
    puVar25 = puVar26;
    if (0x7fff < uVar23) {
      if (puVar26 == puVar27) break;
      goto LAB_00d564e8;
    }
  }
LAB_00d56558:
  uVar28 = 0;
  uVar23 = *(uint *)(param_4 + 0x58);
  uVar29 = 0;
  DataMemoryBarrier(0xb);
  if (DAT_018d7d14 == 0) {
    local_88 = *(undefined4 ***)(DAT_018d7d78 + 8);
    ClearExclusiveLocal();
    local_80 = local_88;
    if (*(uint *)(DAT_018d7d78 + 0xc) == 0 &&
        (uint)((undefined4 **)0x7fffffff < local_88) <= *(uint *)(DAT_018d7d78 + 0xc)) {
      uVar28 = 1;
    }
  }
  DataMemoryBarrier(0xb);
  if (DAT_018d7d14 == 0) {
    local_88 = *(undefined4 ***)(DAT_018d7d7c + 8);
    ClearExclusiveLocal();
    if (*(uint *)(DAT_018d7d7c + 0xc) == 0 &&
        (uint)((undefined4 **)0x7fffffff < local_88) <= *(uint *)(DAT_018d7d7c + 0xc)) {
      uVar29 = 1;
    }
  }
  uVar31 = 0;
  DataMemoryBarrier(0xb);
  local_90 = local_88;
  if (DAT_018d7d14 == 0) {
    local_90 = *(undefined4 ***)(DAT_018d7d80 + 8);
    ClearExclusiveLocal();
    uVar31 = (uint)(*(int *)(DAT_018d7d80 + 0xc) + (uint)((undefined4 **)0x7fffffff < local_90) == 0
                   );
  }
  uVar1 = (uint)(0.0 < dVar35) * (int)(longlong)dVar35;
  *param_1 = uVar21;
  param_1[2] = local_104;
  param_1[0x16] = puVar9;
  *(short *)((int)param_1 + 0x92) = (short)local_f8;
  param_1[0x1a] = uVar24;
  *(ushort *)(param_1 + 0x24) = local_94;
  param_1[0x18] = puVar8;
  param_1[7] = local_fc;
  param_1[0x23] = puVar5;
  param_1[6] = 0;
  param_1[0x22] = ppuVar4;
  param_1[0x17] = puVar7;
  param_1[0x21] = uVar3;
  param_1[0x1b] = uVar22;
  param_1[1] = 0;
  param_1[3] = local_100;
  *(short *)((int)param_1 + 0x96) = (short)uVar18;
  *(ushort *)(param_1 + 0x25) = (ushort)(uVar18 < 0x8000);
  bVar33 = ((uint)puVar6 & 1) != 0;
  if (bVar33) {
    puVar16 = (undefined4 *)0x0;
  }
  param_1[8] = ~uVar17 >> 0x1f;
  if (bVar33) {
    uVar11 = 0;
  }
  *(short *)((int)param_1 + 0x9a) = (short)local_f4;
  *(ushort *)(param_1 + 0x26) = local_d0;
  *(short *)((int)param_1 + 0xa2) = (short)uVar19;
  param_1[0xc] = (uint)bVar32;
  param_1[10] = ppuVar15;
  param_1[0x1f] = local_54;
  param_1[0x1e] = local_58;
  param_1[4] = (uint)(uVar11 == 0 && ((undefined4 *)0x7fffffff < puVar16) <= uVar11);
  *(ushort *)(param_1 + 0x28) = (ushort)(uVar19 < 0x8000);
  uVar20 = 2;
  if (param_6 != 0) {
    uVar20 = 1;
  }
  param_1[0x20] = puVar13;
  *(undefined1 *)((int)param_1 + 0xa5) = uVar20;
  param_1[0xf] = uVar23;
  param_1[0x11] = local_80;
  param_1[0x13] = local_88;
  param_1[0x15] = local_90;
  param_1[0x1c] = puVar30;
  *(undefined1 *)(param_1 + 0x29) = param_5;
  param_1[9] = uVar17;
  param_1[5] = puVar16;
  param_1[0xd] = unaff_s18;
  param_1[0xb] = SUB84(dVar34,0);
  param_1[0xe] = ~uVar23 >> 0x1f;
  param_1[0x10] = uVar28;
  param_1[0x12] = uVar29;
  param_1[0x14] = uVar31;
  *(short *)((int)param_1 + 0x9e) = (short)uVar1;
  *(ushort *)(param_1 + 0x27) = (ushort)(uVar1 < 0x8000);
  return;
}

