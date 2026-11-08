// FUN_010e5ca0 @ 010e5ca0 size=572 calls_out=8 calls_in=1
// strings: 

void FUN_010e5ca0(int *param_1,undefined4 *param_2,uint param_3)

{
  undefined2 uVar1;
  code *pcVar2;
  byte bVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined2 *puVar9;
  int *piVar10;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  uint *puVar17;
  bool bVar18;
  bool bVar19;
  uint local_48;
  int local_44;
  uint local_40;
  int local_3c;
  undefined2 *puStack_38;
  int iStack_34;
  undefined4 local_30 [2];
  undefined4 uStack_28;
  
  uVar15 = param_3 * 8;
  bVar19 = 0x1ffffffe < param_3;
  bVar18 = param_3 == 0x1fffffff;
  local_48 = 0;
  if (param_3 < 0x20000000) {
    bVar19 = 0x7ffffffb < uVar15;
    bVar18 = uVar15 == 0x7ffffffc;
  }
  if (bVar19 && !bVar18) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  uVar16 = 0;
  if (uVar15 == 0) {
    iVar4 = 4;
  }
  else {
    iVar4 = thunk_FUN_016d4a50(uVar15);
    local_48 = param_3;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar15);
    }
  }
  local_44 = iVar4;
  for (; local_40 = uVar16, param_3 != uVar16; uVar16 = uVar16 + 1) {
    puVar9 = (undefined2 *)*param_2;
    if ((uint)(param_2[1] - (int)puVar9) < 2) {
      local_3c = -0x7ffffffb;
      iStack_34 = 2;
LAB_010e5e00:
      iVar4 = local_44;
      *param_1 = local_3c;
      param_1[1] = (int)puVar9;
      param_1[2] = iStack_34;
      if (uVar16 != 0) {
        piVar10 = (int *)(local_44 + 4);
        do {
          if (*piVar10 != 0) {
            thunk_FUN_016d3fb4(piVar10[-1]);
          }
          piVar10 = piVar10 + 2;
          uVar16 = uVar16 - 1;
        } while (uVar16 != 0);
      }
      if (local_48 == 0) {
        return;
      }
      if (iVar4 == 0) {
        return;
      }
      iVar6 = FUN_016d3bc8();
      uVar15 = *(byte *)(iVar4 + -3) & 0x1f;
      if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
         (uVar16 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar7 = uVar16 - 0x10, uVar16 == 0)) {
        iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar16 = (uint)(*(byte *)(iVar4 + -3) >> 5);
      iVar14 = *(int *)(iVar6 + 8) + 0x10;
      iVar12 = iVar7 * uVar15 + iVar7 + -4;
      iVar7 = iVar14 + iVar12;
      if (4 < uVar16) {
        if (uVar16 != 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar2)();
        }
        uVar16 = *(uint *)(iVar7 + -4);
        if (uVar16 < 5) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar2)();
        }
        if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar2)();
        }
      }
      if ((uint)(iVar7 - iVar4) < uVar16) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar2)();
      }
      if (*(char *)(iVar7 - uVar16) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar2)();
      }
      if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
        pcVar2 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar2)();
      }
      bVar3 = *(byte *)(iVar6 + 0x14);
      uVar16 = 1 << uVar15;
      *(undefined1 *)(iVar4 + -3) = 0xff;
      *(undefined2 *)(iVar4 + -2) = 0;
      do {
        uVar13 = *(uint *)(iVar6 + 0x10);
        uVar8 = *(uint *)(iVar6 + 0xc) | uVar13;
        if ((uVar16 & uVar8) != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar2)();
        }
        if ((uVar13 == 0) || (uVar8 + uVar16 == (2 << (bVar3 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar6,uVar15);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar5 = (undefined4 *)FUN_016d2bc8();
          uVar11 = *puVar5;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar5 = uVar11;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar6 + 0x10) = uVar16 + uVar13;
          return;
        }
        puVar17 = (uint *)(iVar6 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar17);
          uVar8 = *puVar17;
          if (uVar13 != uVar8) goto LAB_016d409c;
          bVar18 = (bool)hasExclusiveAccess(puVar17);
        } while (!bVar18);
        *puVar17 = uVar16 + uVar13;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar13 == uVar8) {
          return;
        }
      } while( true );
    }
    local_30[0] = 0x80000005;
    FUN_00f2cc28(local_30);
    uVar1 = *puVar9;
    *param_2 = puVar9 + 1;
    FUN_0161be60(&local_3c,param_2,uVar1);
    iVar6 = iStack_34;
    puVar9 = puStack_38;
    if (local_3c != -0x7ffffff6) goto LAB_010e5e00;
    if (puStack_38 == (undefined2 *)0x0) break;
    if (uVar16 == local_48) {
      FUN_010e549c(&local_48);
      iVar4 = local_44;
    }
    puVar5 = (undefined4 *)(iVar4 + uVar16 * 8);
    *puVar5 = puVar9;
    puVar5[1] = iVar6;
  }
  uVar15 = local_40;
  iVar4 = local_44;
  if (local_40 < local_48) {
    if (local_40 == 0) {
      thunk_FUN_016d3fb4(local_44);
      iVar4 = 4;
      goto LAB_010e5de4;
    }
    iVar6 = local_40 << 3;
    iVar4 = thunk_FUN_016d4ea4(local_44,iVar6);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar6);
    }
  }
  if (0xffff < uVar15) {
    uVar16 = 0;
    do {
      if (*(int *)(iVar4 + uVar16 * 8 + 4) != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(iVar4 + uVar16 * 8));
      }
      uVar16 = uVar16 + 1;
    } while (uVar15 != uVar16);
    thunk_FUN_016d3fb4(iVar4);
    FUN_01613578(param_1,uVar15,"",&DAT_018abad0);
    return;
  }
LAB_010e5de4:
  *param_1 = -0x7ffffff6;
  param_1[1] = iVar4;
  param_1[2] = uVar15;
  return;
}

