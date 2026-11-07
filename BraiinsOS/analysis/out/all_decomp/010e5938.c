// FUN_010e5938 @ 010e5938 size=772 calls_out=8 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010e5938(int *param_1,int *param_2,uint param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  int unaff_r4;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  int *piVar16;
  uint uVar17;
  int *piVar18;
  uint *puVar19;
  uint local_58;
  int local_54;
  uint local_50;
  int local_48;
  int *local_44;
  int *local_40;
  int local_3c;
  int *local_38;
  int *local_34;
  undefined4 local_30 [2];
  undefined4 uStack_28;
  
  iVar10 = param_3 * 0xc;
  if (0xaaaaaaa < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  iVar13 = 0;
  if (iVar10 == 0) {
    iVar5 = 4;
    local_58 = 0;
  }
  else {
    iVar5 = thunk_FUN_016d4a50(iVar10);
    local_58 = param_3;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,iVar10);
    }
  }
  local_54 = iVar5;
  for (uVar17 = 0; local_50 = uVar17, param_3 != uVar17; uVar17 = uVar17 + 1) {
    piVar8 = (int *)*param_2;
    iVar10 = param_2[1];
    if ((uint)(iVar10 - (int)piVar8) < 4) {
      local_40 = (int *)0x4;
      local_48 = -0x7ffffffb;
      local_44 = piVar8;
LAB_010e5b18:
      goto LAB_010e5b38;
    }
    local_30[0] = 0x80000005;
    FUN_00f2cc28(local_30);
    piVar16 = piVar8 + 1;
    piVar18 = (int *)*piVar8;
    *param_2 = (int)piVar16;
    if ((uint)(iVar10 - (int)piVar16) < 2) {
      local_3c = -0x7ffffffb;
      local_34 = (int *)0x2;
LAB_010e5b28:
      local_48 = local_3c;
      local_44 = piVar16;
      local_40 = local_34;
LAB_010e5b38:
      iVar10 = local_54;
      *param_1 = local_48;
      param_1[1] = (int)local_44;
      param_1[2] = (int)local_40;
      if (uVar17 != 0) {
        piVar8 = (int *)(local_54 + 4);
        do {
          if (*piVar8 != 0) {
            thunk_FUN_016d3fb4(piVar8[-1]);
          }
          piVar8 = piVar8 + 3;
          uVar17 = uVar17 - 1;
        } while (uVar17 != 0);
      }
      if (local_58 == 0) {
        return;
      }
      if (iVar10 == 0) {
        return;
      }
      iVar13 = FUN_016d3bc8();
      uVar17 = *(byte *)(iVar10 + -3) & 0x1f;
      if (((*(byte *)(iVar13 + 0x14) & 0x1f) != 0) ||
         (uVar15 = *(uint *)(iVar13 + 0x14) & 0xfffff000, iVar5 = uVar15 - 0x10, uVar15 == 0)) {
        iVar5 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar13 + 0x14) & 0xfff) >> 6) * 2)
                << 4;
      }
      uVar15 = (uint)(*(byte *)(iVar10 + -3) >> 5);
      iVar14 = *(int *)(iVar13 + 8) + 0x10;
      iVar11 = iVar5 * uVar17 + iVar5 + -4;
      iVar5 = iVar14 + iVar11;
      if (4 < uVar15) {
        if (uVar15 != 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar1)();
        }
        uVar15 = *(uint *)(iVar5 + -4);
        if (uVar15 < 5) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar1)();
        }
        if (*(char *)(iVar5 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar1)();
        }
      }
      if ((uint)(iVar5 - iVar10) < uVar15) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar1)();
      }
      if (*(char *)(iVar5 - uVar15) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar1)();
      }
      if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar1)();
      }
      bVar2 = *(byte *)(iVar13 + 0x14);
      uVar15 = 1 << uVar17;
      *(undefined1 *)(iVar10 + -3) = 0xff;
      *(undefined2 *)(iVar10 + -2) = 0;
      do {
        uVar12 = *(uint *)(iVar13 + 0x10);
        uVar7 = *(uint *)(iVar13 + 0xc) | uVar12;
        if ((uVar15 & uVar7) != 0) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar1)();
        }
        if ((uVar12 == 0) || (uVar7 + uVar15 == (2 << (bVar2 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar13,uVar17);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar6 = (undefined4 *)FUN_016d2bc8();
          uVar9 = *puVar6;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar6 = uVar9;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar13 + 0x10) = uVar15 + uVar12;
          return;
        }
        puVar19 = (uint *)(iVar13 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar19);
          uVar7 = *puVar19;
          if (uVar12 != uVar7) goto LAB_016d409c;
          bVar3 = (bool)hasExclusiveAccess(puVar19);
        } while (!bVar3);
        *puVar19 = uVar15 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar7) {
          return;
        }
      } while( true );
    }
    local_30[0] = 0x80000005;
    FUN_00f2cc28(local_30);
    iVar10 = piVar8[1];
    *param_2 = (int)piVar8 + 6;
    FUN_0161be60(&local_3c,param_2,(short)iVar10);
    piVar4 = local_34;
    piVar8 = local_38;
    piVar16 = local_38;
    if (local_3c != -0x7ffffff6) goto LAB_010e5b28;
    if (local_38 == (int *)0x0) {
      FUN_01613578(&local_48,1,&DAT_018859b8,&DAT_018ab990);
      goto LAB_010e5b18;
    }
    local_44 = local_34;
    local_40 = piVar18;
    if (uVar17 == local_58) {
      FUN_010e543c(&local_58);
      iVar5 = local_54;
    }
    puVar6 = (undefined4 *)(iVar5 + iVar13);
    *puVar6 = piVar8;
    iVar13 = iVar13 + 0xc;
    puVar6[1] = piVar4;
    puVar6[2] = piVar18;
  }
  iVar10 = local_54;
  if (uVar17 < local_58) {
    if (uVar17 == 0) {
      thunk_FUN_016d3fb4(local_54);
      iVar10 = 4;
      goto LAB_010e5af0;
    }
    iVar10 = thunk_FUN_016d4ea4(local_54,uVar17 * 0xc);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar17 * 0xc);
    }
  }
  if (0xffff < uVar17) {
    piVar8 = (int *)(iVar10 + 4);
    uVar15 = uVar17;
    do {
      if (*piVar8 != 0) {
        thunk_FUN_016d3fb4(piVar8[-1]);
      }
      piVar8 = piVar8 + 3;
      uVar15 = uVar15 - 1;
    } while (uVar15 != 0);
    thunk_FUN_016d3fb4(iVar10);
    FUN_01613578(param_1,uVar17,"",&DAT_018abad0);
    return;
  }
LAB_010e5af0:
  *param_1 = -0x7ffffff6;
  param_1[1] = iVar10;
  param_1[2] = uVar17;
  return;
}

