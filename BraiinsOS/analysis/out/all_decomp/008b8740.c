// FUN_008b8740 @ 008b8740 size=820 calls_out=6 calls_in=0
// strings: 

void FUN_008b8740(int *param_1,int param_2)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int unaff_r4;
  int iVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  bool bVar16;
  bool bVar17;
  uint local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  int local_98;
  int *local_94;
  int local_90;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint local_2c;
  uint uStack_28;
  
  if (*(int *)(param_2 + 0xbc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00345203,0x1b,&DAT_01863de4);
  }
  local_a4 = *(int *)(param_2 + 0xbc) - 1;
  local_a8 = *(uint *)(param_2 + 0xb8);
  local_a0 = CONCAT31(local_a0._1_3_,1);
  local_ac = 0;
  local_c0 = 0;
  local_d0 = 0;
  local_b0 = param_2;
  FUN_008cf540(&local_88,&local_d0);
  if (local_88 == 2) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    if (local_d0 != 0 && local_c8 != 0) {
      thunk_FUN_016d3fb4();
      local_c8 = extraout_r1;
    }
    iVar14 = local_c0;
    if (local_c0 != 0) {
      local_c8 = local_b8;
    }
    if (local_c0 == 0 || local_c8 == 0) {
      return;
    }
    if (local_c0 == 0) {
      return;
    }
    iVar6 = FUN_016d3bc8();
    uVar8 = *(byte *)(iVar14 + -3) & 0x1f;
    if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
       (uVar3 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar10 = uVar3 - 0x10, uVar3 == 0)) {
      iVar10 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) <<
               4;
    }
    uVar3 = (uint)(*(byte *)(iVar14 + -3) >> 5);
    iVar13 = *(int *)(iVar6 + 8) + 0x10;
    iVar11 = iVar10 * uVar8 + iVar10 + -4;
    iVar10 = iVar13 + iVar11;
    if (4 < uVar3) {
      if (uVar3 != 5) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4018);
        (*pcVar1)();
      }
      uVar3 = *(uint *)(iVar10 + -4);
      if (uVar3 < 5) {
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
    if ((uint)(iVar10 - iVar14) < uVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4032);
      (*pcVar1)();
    }
    if (*(char *)(iVar10 - uVar3) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d403a);
      (*pcVar1)();
    }
    if (*(char *)(iVar13 + iVar11) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4040);
      (*pcVar1)();
    }
    bVar2 = *(byte *)(iVar6 + 0x14);
    uVar3 = 1 << uVar8;
    *(undefined1 *)(iVar14 + -3) = 0xff;
    *(undefined2 *)(iVar14 + -2) = 0;
    do {
      uVar12 = *(uint *)(iVar6 + 0x10);
      uVar9 = *(uint *)(iVar6 + 0xc) | uVar12;
      if ((uVar3 & uVar9) != 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xff,0x16d4074);
        (*pcVar1)();
      }
      if ((uVar12 == 0) || (uVar9 + uVar3 == (2 << (bVar2 & 0x1f)) + -1)) {
        if (DAT_018ddb0b != '\0') {
          FUN_016ddcc0(&DAT_018ddd48);
        }
        FUN_016d3ca8(&uStack_28,iVar6,uVar8);
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
        *(uint *)(iVar6 + 0x10) = uVar3 + uVar12;
        return;
      }
      puVar15 = (uint *)(iVar6 + 0x10);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(puVar15);
        uVar9 = *puVar15;
        if (uVar12 != uVar9) goto LAB_016d409c;
        bVar16 = (bool)hasExclusiveAccess(puVar15);
      } while (!bVar16);
      *puVar15 = uVar3 + uVar12;
LAB_016d409c:
      DataMemoryBarrier(0x1b);
      if (uVar12 == uVar9) {
        return;
      }
    } while( true );
  }
  uVar8 = 0;
  if (local_d0 != 0) {
    uVar8 = (uint)(local_c4 - local_cc) >> 4;
  }
  if (local_c0 != 0) {
    uVar8 = uVar8 + ((uint)(local_b4 - local_bc) >> 4);
  }
  if ((char)local_a0 == '\x02') {
LAB_008b8824:
    puVar15 = &local_40;
    uVar3 = uVar8;
  }
  else if ((local_a0 & 1) == 0) {
    uVar9 = local_a8 - local_ac;
    uVar3 = 0;
    if (local_a8 < local_ac) {
      uVar9 = 0;
    }
    if (uVar9 <= local_a4) goto LAB_008b8824;
    puVar15 = &local_78;
  }
  else {
    if (local_a8 <= local_ac) goto LAB_008b8824;
    uVar3 = 0;
    puVar15 = &local_78;
  }
  *puVar15 = uVar3;
  uVar3 = uVar8;
  if (uVar8 < 4) {
    uVar3 = 3;
  }
  iVar14 = uVar3 + 1;
  uVar4 = 0;
  bVar17 = 0xffffffd < uVar8;
  bVar16 = uVar8 == 0xffffffe;
  uVar3 = iVar14 * 0x10;
  if (uVar8 < 0xfffffff) {
    bVar17 = 0x7ffffffb < uVar3;
    bVar16 = uVar3 == 0x7ffffffc;
  }
  if (!bVar17 || bVar16) {
    if (uVar3 == 0) {
      piVar5 = (int *)&DAT_00000004;
      iVar14 = 0;
    }
    else {
      piVar5 = (int *)thunk_FUN_016d4a50(uVar3);
      if (piVar5 == (int *)0x0) {
        uVar4 = 4;
        goto LAB_008b8854;
      }
    }
    local_90 = 1;
    *piVar5 = local_88;
    piVar5[1] = iStack_84;
    piVar5[2] = iStack_80;
    piVar5[3] = iStack_7c;
    local_78 = local_d0;
    local_74 = local_cc;
    local_70 = local_c8;
    local_6c = local_c4;
    local_68 = local_c0;
    local_64 = local_bc;
    local_60 = local_b8;
    local_5c = local_b4;
    local_58 = local_b0;
    local_54 = local_ac;
    local_50 = local_a8;
    local_4c = local_a4;
    local_48 = local_a0;
    local_98 = iVar14;
    local_94 = piVar5;
    do {
      iVar14 = local_90;
      FUN_008cf540(&local_40,&local_78);
      if (local_40 == 2) {
        iVar14 = extraout_r1_00;
        if (local_78 != 0) {
          iVar14 = local_70;
        }
        if (local_78 != 0 && iVar14 != 0) {
          thunk_FUN_016d3fb4();
          iVar14 = extraout_r1_01;
        }
        if (local_68 != 0) {
          iVar14 = local_60;
        }
        if (local_68 != 0 && iVar14 != 0) {
          thunk_FUN_016d3fb4();
        }
        *param_1 = local_98;
        param_1[1] = (int)local_94;
        param_1[2] = local_90;
        return;
      }
      if (iVar14 == local_98) {
        uVar8 = 0;
        if (local_78 != 0) {
          uVar8 = (uint)(local_6c - local_74) >> 4;
        }
        if (local_68 != 0) {
          uVar8 = uVar8 + ((uint)(local_5c - local_64) >> 4);
        }
        if ((char)local_48 == '\x02') {
LAB_008b89a8:
          puVar15 = &local_2c;
          uVar3 = uVar8;
        }
        else {
          puVar15 = &uStack_28;
          if ((local_48 & 1) == 0) {
            uVar9 = local_50 - local_54;
            uVar3 = 0;
            if (local_50 < local_54) {
              uVar9 = 0;
            }
            if (uVar9 <= local_4c) goto LAB_008b89a8;
          }
          else {
            uVar3 = 0;
            if (local_50 <= local_54) goto LAB_008b89a8;
          }
        }
        *puVar15 = uVar3;
        FUN_008cf370(&local_98,iVar14,uVar8 + 1,4,0x10);
        piVar5 = local_94;
      }
      puVar15 = (uint *)(piVar5 + iVar14 * 4);
      *puVar15 = local_40;
      local_90 = iVar14 + 1;
      puVar15[1] = uStack_3c;
      puVar15[2] = uStack_38;
      puVar15[3] = uStack_34;
    } while( true );
  }
LAB_008b8854:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar4,uVar3);
}

