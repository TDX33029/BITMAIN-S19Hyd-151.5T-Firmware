// FUN_0092db5c @ 0092db5c size=1172 calls_out=7 calls_in=0
// strings: 

void FUN_0092db5c(int *param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  undefined1 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int unaff_r4;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int *piVar19;
  int iVar20;
  int *piVar21;
  uint *puVar22;
  int *local_e4;
  int local_d0;
  undefined4 local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  int iStack_8c;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  undefined1 local_30;
  undefined4 uStack_28;
  
  iVar18 = *(int *)(param_2 + 0x14);
  piVar19 = *(int **)(param_2 + 0x10);
  iVar20 = *(int *)(param_2 + 0xc);
  local_e4 = piVar19;
  if (iVar18 != 0) {
    local_e4 = piVar19 + 0x1c;
    iVar15 = *piVar19;
    if (iVar15 != 4) {
      uVar13 = (uint)&local_a0 | 4;
      FUN_016dd1aa(uVar13,piVar19 + 1,0x6c);
      local_30 = 0;
      local_a0 = iVar15;
      FUN_009402e4(&local_d0,&local_a0);
      uVar4 = (undefined1)local_cc;
      if (local_d0 != 2) {
        FUN_016dd1aa((int)param_1 + 5,(int)&local_cc + 1,0x2b);
        *(undefined1 *)(param_1 + 1) = (undefined1)local_cc;
        *param_1 = local_d0;
        goto LAB_0092dbec;
      }
      if (iVar18 != 1) {
        iVar15 = piVar19[0x1c];
        local_e4 = piVar19 + 0x38;
        if (iVar15 != 4) {
          FUN_016dd1aa(uVar13,piVar19 + 0x1d,0x6c);
          local_30 = 0;
          local_a0 = iVar15;
          FUN_0094af0c(&local_d0,&local_a0);
          iVar6 = local_c4;
          iVar14 = local_c8;
          iVar15 = local_cc;
          piVar21 = param_1 + 2;
          if (local_d0 != 2) {
            param_1[4] = local_c0;
            param_1[5] = iStack_bc;
            param_1[6] = iStack_b8;
            param_1[7] = iStack_b4;
            param_1[8] = local_b0;
            param_1[9] = iStack_ac;
            param_1[10] = iStack_a8;
            param_1[0xb] = iStack_a4;
            *piVar21 = local_c8;
            *param_1 = local_d0;
            param_1[1] = local_cc;
            param_1[3] = local_c4;
            goto LAB_0092dbec;
          }
          if (local_cc == -0x80000000) goto LAB_0092dcac;
          if (iVar18 == 2) {
LAB_0092dd80:
            FUN_00f3cf48(&local_a0,2,&DAT_01867d18,&DAT_018ab990);
            *param_1 = local_a0;
            param_1[1] = iStack_9c;
            param_1[2] = iStack_98;
            param_1[3] = iStack_94;
            param_1[4] = iStack_90;
            param_1[5] = iStack_8c;
            param_1[6] = local_88;
            param_1[7] = iStack_84;
            param_1[8] = iStack_80;
            param_1[9] = iStack_7c;
            param_1[10] = iStack_78;
            param_1[0xb] = iStack_74;
          }
          else {
            iVar16 = piVar19[0x38];
            local_e4 = piVar19 + 0x54;
            if (iVar16 == 4) goto LAB_0092dd80;
            FUN_016dd1aa(uVar13,piVar19 + 0x39,0x6c);
            local_30 = 0;
            local_a0 = iVar16;
            FUN_0094af0c(&local_d0,&local_a0);
            iVar7 = local_c4;
            iVar5 = local_c8;
            iVar16 = local_cc;
            if (local_d0 == 2) {
              if (local_cc == -0x80000000) goto LAB_0092dd80;
              if (iVar18 == 3) {
LAB_0092de88:
                FUN_00f3cf48(&local_a0,3,&DAT_01867d18,&DAT_018ab990);
                *param_1 = local_a0;
                param_1[1] = iStack_9c;
                param_1[2] = iStack_98;
                param_1[3] = iStack_94;
                param_1[4] = iStack_90;
                param_1[5] = iStack_8c;
                param_1[6] = local_88;
                param_1[7] = iStack_84;
                param_1[8] = iStack_80;
                param_1[9] = iStack_7c;
                param_1[10] = iStack_78;
                param_1[0xb] = iStack_74;
              }
              else {
                iVar17 = piVar19[0x54];
                local_e4 = piVar19 + 0x70;
                if (iVar17 == 4) goto LAB_0092de88;
                FUN_016dd1aa(uVar13,piVar19 + 0x55,0x6c);
                local_30 = 0;
                local_a0 = iVar17;
                FUN_0093f420(&local_d0,&local_a0);
                if (local_d0 == 2) {
                  if (local_cc != -0x7fffffff) {
                    *param_1 = 2;
                    param_1[1] = iVar15;
                    param_1[2] = iVar14;
                    param_1[8] = local_c8;
                    param_1[3] = iVar6;
                    param_1[4] = iVar16;
                    param_1[5] = iVar5;
                    *(undefined1 *)(param_1 + 10) = uVar4;
                    param_1[6] = iVar7;
                    param_1[7] = local_cc;
                    param_1[9] = local_c4;
                    goto LAB_0092dbec;
                  }
                  goto LAB_0092de88;
                }
                param_1[4] = local_c0;
                param_1[5] = iStack_bc;
                param_1[6] = iStack_b8;
                param_1[7] = iStack_b4;
                param_1[8] = local_b0;
                param_1[9] = iStack_ac;
                param_1[10] = iStack_a8;
                param_1[0xb] = iStack_a4;
                *piVar21 = local_c8;
                param_1[3] = local_c4;
                *param_1 = local_d0;
                param_1[1] = local_cc;
              }
              if (iVar16 != 0) {
                thunk_FUN_016d3fb4(iVar5);
              }
            }
            else {
              param_1[4] = local_c0;
              param_1[5] = iStack_bc;
              param_1[6] = iStack_b8;
              param_1[7] = iStack_b4;
              param_1[8] = local_b0;
              param_1[9] = iStack_ac;
              param_1[10] = iStack_a8;
              param_1[0xb] = iStack_a4;
              *param_1 = local_d0;
              param_1[1] = local_cc;
              *piVar21 = local_c8;
              param_1[3] = local_c4;
            }
          }
          if (iVar15 != 0) {
            thunk_FUN_016d3fb4(iVar14);
          }
          goto LAB_0092dbec;
        }
      }
LAB_0092dcac:
      FUN_00f3cf48(&local_a0,1,&DAT_01867d18,&DAT_018ab990);
      *param_1 = local_a0;
      param_1[1] = iStack_9c;
      param_1[2] = iStack_98;
      param_1[3] = iStack_94;
      param_1[4] = iStack_90;
      param_1[5] = iStack_8c;
      param_1[6] = local_88;
      param_1[7] = iStack_84;
      param_1[8] = iStack_80;
      param_1[9] = iStack_7c;
      param_1[10] = iStack_78;
      param_1[0xb] = iStack_74;
      goto LAB_0092dbec;
    }
  }
  FUN_00f3cf48(&local_a0,0,&DAT_01867d18,&DAT_018ab990);
  *param_1 = local_a0;
  param_1[1] = iStack_9c;
  param_1[2] = iStack_98;
  param_1[3] = iStack_94;
  param_1[4] = iStack_90;
  param_1[5] = iStack_8c;
  param_1[6] = local_88;
  param_1[7] = iStack_84;
  param_1[8] = iStack_80;
  param_1[9] = iStack_7c;
  param_1[10] = iStack_78;
  param_1[0xb] = iStack_74;
LAB_0092dbec:
  iVar18 = ((uint)((int)piVar19 + (iVar18 * 0x70 - (int)local_e4)) >> 4) * -0x49249249 + 1;
  while (iVar18 = iVar18 + -1, iVar18 != 0) {
    FUN_009249a0(local_e4);
    local_e4 = local_e4 + 0x1c;
  }
  if (iVar20 == 0) {
    return;
  }
  if (piVar19 == (int *)0x0) {
    return;
  }
  iVar18 = FUN_016d3bc8();
  uVar13 = *(byte *)((int)piVar19 + -3) & 0x1f;
  if (((*(byte *)(iVar18 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar18 + 0x14) & 0xfffff000, iVar20 = uVar11 - 0x10, uVar11 == 0)) {
    iVar20 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar18 + 0x14) & 0xfff) >> 6) * 2) << 4
    ;
  }
  uVar11 = (uint)(*(byte *)((int)piVar19 + -3) >> 5);
  iVar14 = *(int *)(iVar18 + 8) + 0x10;
  iVar15 = iVar20 * uVar13 + iVar20 + -4;
  iVar20 = iVar14 + iVar15;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar20 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar20 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar20 - (int)piVar19) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar20 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar15) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar18 + 0x14);
  uVar11 = 1 << uVar13;
  *(undefined1 *)((int)piVar19 + -3) = 0xff;
  *(undefined2 *)((int)piVar19 + -2) = 0;
  do {
    uVar12 = *(uint *)(iVar18 + 0x10);
    uVar9 = *(uint *)(iVar18 + 0xc) | uVar12;
    if ((uVar11 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar12 == 0) || (uVar9 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar18,uVar13);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar8 = (undefined4 *)FUN_016d2bc8();
      uVar10 = *puVar8;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar8 = uVar10;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar18 + 0x10) = uVar11 + uVar12;
      return;
    }
    puVar22 = (uint *)(iVar18 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar22);
      uVar9 = *puVar22;
      if (uVar12 != uVar9) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar22);
    } while (!bVar3);
    *puVar22 = uVar11 + uVar12;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar12 == uVar9) {
      return;
    }
  } while( true );
}

