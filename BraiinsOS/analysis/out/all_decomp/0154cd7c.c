// FUN_0154cd7c @ 0154cd7c size=1064 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0154cd7c(uint *param_1,int *param_2)

{
  undefined1 uVar1;
  code *pcVar2;
  byte bVar3;
  undefined4 uVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 *puVar7;
  uint uVar8;
  int unaff_r4;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  undefined2 uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  int iVar20;
  bool bVar21;
  bool bVar22;
  uint local_bc;
  uint local_b8;
  undefined1 local_b4;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_9c;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  
  local_34 = (uint)local_34._1_3_ << 8;
  uVar17 = param_2[2];
  iVar10 = param_2[1];
  if (uVar17 == 0) {
    local_74 = 4;
    local_78 = 0;
  }
  else {
    iVar9 = uVar17 * 0x3c;
    local_74 = thunk_FUN_016d4a50(iVar9);
    if (local_74 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar9);
    }
    iVar20 = 0;
    uVar15 = 0;
    do {
      local_78 = uVar17;
      if (iVar9 == iVar20) break;
      iVar18 = iVar10 + iVar20;
      if (*(int *)(iVar10 + iVar20) == -0x80000000) {
        uVar8 = *(uint *)(iVar18 + 0xc);
        uVar4 = 0;
        uVar11 = local_9c;
        if ((int)uVar8 < 0) {
LAB_0154d184:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar4,uVar11);
        }
        uVar14 = *(undefined2 *)(iVar18 + 0x12);
        uVar4 = *(undefined4 *)(iVar18 + 8);
        uVar19 = (uint)*(ushort *)(iVar18 + 0x10);
        if (uVar8 == 0) {
          uVar5 = 1;
          uVar11 = 0;
        }
        else {
          uVar5 = thunk_FUN_016d4a50(uVar8,local_9c);
          if (uVar5 == 0) {
            uVar4 = 1;
            uVar11 = uVar8;
            goto LAB_0154d184;
          }
          uVar11 = uVar8;
        }
        FUN_016dd1aa(uVar5,uVar4);
        local_a4 = 0x80000000;
        local_9c = uVar5;
      }
      else {
        uVar5 = *(uint *)(iVar18 + 8);
        uVar4 = 0;
        uVar11 = local_7c;
        if ((int)uVar5 < 0) goto LAB_0154d184;
        uVar4 = *(undefined4 *)(iVar18 + 4);
        local_4c = *(uint *)(iVar18 + 0x18);
        uVar1 = *(undefined1 *)(iVar18 + 0x1c);
        if (uVar5 == 0) {
          uVar11 = 1;
          local_a4 = 0;
        }
        else {
          uVar11 = thunk_FUN_016d4a50(uVar5,local_7c);
          if (uVar11 == 0) {
            uVar4 = 1;
            uVar11 = uVar5;
            goto LAB_0154d184;
          }
          local_a4 = uVar5;
        }
        uVar12 = 0;
        FUN_016dd1aa(uVar11,uVar4);
        local_50 = *(uint *)(iVar18 + 0x14);
        bVar22 = 0x1ffffffe < local_50;
        bVar21 = local_50 == 0x1fffffff;
        uVar16 = uVar15;
        if (local_50 < 0x20000000) {
          uVar16 = local_50 << 3;
          bVar22 = 0x7ffffffd < uVar16;
          bVar21 = uVar16 == 0x7ffffffe;
        }
        if (bVar22 && !bVar21) {
LAB_0154d194:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar12,local_bc);
        }
        uVar4 = *(undefined4 *)(iVar18 + 0x10);
        if (uVar16 == 0) {
          uVar19 = 2;
          uVar8 = 0;
        }
        else {
          uVar19 = thunk_FUN_016d4a50(uVar16,uVar4);
          if (uVar19 == 0) {
            uVar12 = 2;
            local_bc = uVar16;
            goto LAB_0154d194;
          }
          uVar8 = local_50;
        }
        FUN_016dd1aa(uVar19,uVar4,uVar16);
        local_34 = CONCAT31(local_34._1_3_,uVar1);
        uVar16 = *(uint *)(iVar18 + 0x30);
        local_ac = *(uint *)(iVar18 + 0x34);
        local_b4 = *(undefined1 *)(iVar18 + 0x38);
        local_a8 = 0x80000000;
        if (*(int *)(iVar18 + 0x2c) == -0x80000000) {
          local_b8 = uVar16;
        }
        else {
          if (local_ac == 0) {
            local_b8 = 1;
          }
          else {
            local_b8 = thunk_FUN_016d4a50(local_ac);
            if (local_b8 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,local_ac);
            }
          }
          FUN_016dd1aa(local_b8,uVar16,local_ac);
          local_a8 = local_ac;
        }
        FUN_01497b38(&local_30,*(undefined4 *)(iVar18 + 0x24),*(undefined4 *)(iVar18 + 0x28));
        local_48 = local_34;
        uVar14 = (undefined2)(uVar19 >> 0x10);
        local_44 = local_30;
        local_40 = uStack_2c;
        local_3c = uStack_28;
        local_bc = uVar19;
        local_7c = uVar11;
      }
      puVar6 = (uint *)(local_74 + iVar20);
      *puVar6 = local_a4;
      uVar15 = uVar15 + 1;
      *(undefined2 *)((int)puVar6 + 0x12) = uVar14;
      iVar20 = iVar20 + 0x3c;
      *(short *)(puVar6 + 4) = (short)uVar19;
      puVar6[1] = uVar11;
      puVar6[2] = uVar5;
      puVar6[3] = uVar8;
      puVar6[5] = local_50;
      puVar6[6] = local_4c;
      puVar6[7] = local_48;
      puVar6[8] = local_44;
      puVar6[9] = local_40;
      puVar6[10] = local_3c;
      *(undefined1 *)(puVar6 + 0xe) = local_b4;
      puVar6[0xb] = local_a8;
      puVar6[0xc] = local_b8;
      puVar6[0xd] = local_ac;
    } while (uVar17 != uVar15);
  }
  *param_1 = local_78;
  param_1[1] = local_74;
  param_1[2] = uVar17;
  iVar9 = iVar10;
  for (; uVar17 != 0; uVar17 = uVar17 - 1) {
    FUN_01496be4(iVar9);
    iVar9 = iVar9 + 0x3c;
  }
  if (*param_2 == 0) {
    return;
  }
  if (iVar10 == 0) {
    return;
  }
  iVar9 = FUN_016d3bc8();
  uVar17 = *(byte *)(iVar10 + -3) & 0x1f;
  if (((*(byte *)(iVar9 + 0x14) & 0x1f) != 0) ||
     (uVar15 = *(uint *)(iVar9 + 0x14) & 0xfffff000, iVar20 = uVar15 - 0x10, uVar15 == 0)) {
    iVar20 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar9 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar15 = (uint)(*(byte *)(iVar10 + -3) >> 5);
  iVar13 = *(int *)(iVar9 + 8) + 0x10;
  iVar18 = iVar20 * uVar17 + iVar20 + -4;
  iVar20 = iVar13 + iVar18;
  if (4 < uVar15) {
    if (uVar15 != 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar2)();
    }
    uVar15 = *(uint *)(iVar20 + -4);
    if (uVar15 < 5) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar2)();
    }
    if (*(char *)(iVar20 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar2)();
    }
  }
  if ((uint)(iVar20 - iVar10) < uVar15) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar2)();
  }
  if (*(char *)(iVar20 - uVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar2)();
  }
  if (*(char *)(iVar13 + iVar18) != '\0') {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar2)();
  }
  bVar3 = *(byte *)(iVar9 + 0x14);
  uVar15 = 1 << uVar17;
  *(undefined1 *)(iVar10 + -3) = 0xff;
  *(undefined2 *)(iVar10 + -2) = 0;
  do {
    uVar5 = *(uint *)(iVar9 + 0x10);
    uVar11 = *(uint *)(iVar9 + 0xc) | uVar5;
    if ((uVar15 & uVar11) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar2)();
    }
    if ((uVar5 == 0) || (uVar11 + uVar15 == (2 << (bVar3 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar9,uVar17);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar4 = *puVar7;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar7 = uVar4;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar9 + 0x10) = uVar15 + uVar5;
      return;
    }
    puVar6 = (uint *)(iVar9 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar6);
      uVar11 = *puVar6;
      if (uVar5 != uVar11) goto LAB_016d409c;
      bVar21 = (bool)hasExclusiveAccess(puVar6);
    } while (!bVar21);
    *puVar6 = uVar15 + uVar5;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar5 == uVar11) {
      return;
    }
  } while( true );
}

