// FUN_0127ae58 @ 0127ae58 size=964 calls_out=10 calls_in=7
// strings: Tried to shrink to a larger capacitymax line length exceeded

void FUN_0127ae58(uint *param_1,uint *param_2,uint param_3,uint param_4)

{
  code *pcVar1;
  byte bVar2;
  undefined4 uVar3;
  uint *puVar4;
  uint *puVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int unaff_r4;
  uint unaff_r5;
  uint uVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  bool bVar17;
  uint *local_44;
  uint local_40;
  uint *local_3c;
  uint local_38;
  uint local_30;
  uint *local_2c;
  uint local_28;
  
  uVar11 = *param_2;
  if (param_3 == 0) {
    local_44 = (uint *)param_2[1];
    if (uVar11 == 0x80000000) {
      uVar13 = local_44[2];
      bVar17 = 0x3ffffffe < uVar13;
      bVar16 = uVar13 == 0x3fffffff;
      uVar9 = uVar13 * 4;
      if (uVar13 < 0x40000000) {
        bVar17 = 0x7ffffffb < uVar9;
        bVar16 = uVar9 == 0x7ffffffc;
      }
      if (bVar17 && !bVar16) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(0,uVar9);
      }
      uVar15 = local_44[1];
      if (uVar9 == 0) {
        puVar4 = (uint *)&DAT_00000004;
        uVar14 = 0;
      }
      else {
        puVar4 = (uint *)thunk_FUN_016d4a50(uVar9,uVar15);
        uVar14 = uVar13;
        if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(4,uVar9);
        }
      }
      FUN_016dd1aa(puVar4,uVar15,uVar9);
      local_3c = puVar4;
      local_40 = uVar14;
    }
    else {
      uVar13 = param_2[2];
      local_3c = local_44;
      local_40 = uVar11;
    }
    local_38 = uVar13;
    if ((param_4 & 0xff) == 0) goto joined_r0x0127b0cc;
LAB_0127af4c:
    uVar9 = local_38;
    if (local_38 < param_3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(param_3,local_38,local_38,&DAT_0188b7f4);
    }
    uVar13 = param_3;
    if (param_3 == local_38) goto joined_r0x0127b0cc;
    iVar6 = param_3 << 2;
    uVar13 = 0;
    do {
      uVar15 = *(uint *)((int)local_3c + iVar6);
      *(uint *)((int)local_3c + iVar6) = uVar13 | uVar15 << (param_4 & 0x1f);
      iVar6 = iVar6 + 4;
      uVar13 = uVar15 >> (-param_4 & 0x1f);
    } while (local_38 * 4 != iVar6);
    if (uVar13 != 0) {
      if (local_38 == local_40) {
        FUN_0127ac28(&local_40);
      }
      local_3c[uVar9] = uVar13;
      uVar13 = uVar9 + 1;
      local_38 = uVar13;
      goto joined_r0x0127b0cc;
    }
    uVar13 = local_38;
    if (local_38 != 0) goto LAB_0127b0d0;
LAB_0127b130:
    uVar13 = 0;
    uVar9 = local_40;
    if (local_40 >> 2 != 0) {
LAB_0127b13c:
      if (local_40 < uVar13) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa478("Tried to shrink to a larger capacitymax line length exceeded",0x49,
                     &DAT_018ad594);
      }
      if (local_40 != 0) {
        uVar9 = uVar13;
        if (uVar13 == 0) {
          thunk_FUN_016d3fb4(local_3c);
          puVar4 = (uint *)&DAT_00000004;
        }
        else {
          puVar4 = (uint *)thunk_FUN_016d4ea4(local_3c,uVar13 << 2);
          if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(4,uVar13 << 2);
          }
        }
        goto LAB_0127b188;
      }
      uVar9 = 0;
    }
  }
  else {
    local_44 = (uint *)param_2[1];
    if (uVar11 == 0x80000000) {
      param_2 = local_44;
    }
    uVar13 = param_3 + param_2[2] + 1;
    uVar3 = 0;
    if (CARRY4(param_3,param_2[2] + 1)) {
      uVar13 = 0xffffffff;
    }
    if ((0x3fffffff < uVar13) || (unaff_r5 = uVar13 * 4, 0x7ffffffc < unaff_r5)) {
LAB_0127b030:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar3,unaff_r5);
    }
    puVar4 = (uint *)thunk_FUN_016d4a50(unaff_r5);
    if (puVar4 == (uint *)0x0) {
      uVar3 = 4;
      goto LAB_0127b030;
    }
    puVar5 = puVar4;
    local_30 = uVar13;
    local_2c = puVar4;
    if (param_3 != 1) {
      FUN_016dd606(puVar4,0,param_3 * 4 + -4);
      puVar5 = puVar4 + (param_3 - 1);
    }
    *puVar5 = 0;
    uVar9 = param_2[2];
    uVar15 = param_2[1];
    local_28 = param_3;
    if (uVar13 - param_3 < uVar9) {
      FUN_0127ade8(&local_30,param_3,uVar9);
      puVar4 = local_2c;
    }
    uVar13 = local_28;
    FUN_016dd1aa(puVar4 + local_28,uVar15,uVar9 << 2);
    local_38 = uVar13 + uVar9;
    local_40 = local_30;
    local_3c = local_2c;
    uVar13 = local_38;
    if ((param_4 & 0xff) != 0) goto LAB_0127af4c;
joined_r0x0127b0cc:
    if (uVar13 == 0) goto LAB_0127b130;
LAB_0127b0d0:
    uVar9 = local_40;
    if (local_3c[uVar13 - 1] != 0) {
      if (local_40 >> 2 <= uVar13) goto LAB_0127b184;
      goto LAB_0127b13c;
    }
    iVar6 = uVar13 << 2;
    uVar15 = uVar13 & 0x3fffffff;
    do {
      uVar14 = uVar15;
      if (iVar6 == 0) goto LAB_0127b130;
      iVar8 = iVar6 + -4;
      iVar6 = iVar6 + -4;
      uVar15 = uVar14 - 1;
    } while (*(int *)((int)local_3c + iVar8) == 0);
    if (uVar14 < uVar13) {
      uVar13 = uVar14;
    }
    if (uVar13 < local_40 >> 2) goto LAB_0127b13c;
  }
LAB_0127b184:
  puVar4 = local_3c;
LAB_0127b188:
  param_1[1] = (uint)puVar4;
  param_1[2] = uVar13;
  *param_1 = uVar9;
  if (param_3 == 0 || (uVar11 & 0x7fffffff) == 0) {
    return;
  }
  if (local_44 == (uint *)0x0) {
    return;
  }
  iVar6 = FUN_016d3bc8();
  uVar11 = *(byte *)((int)local_44 + -3) & 0x1f;
  if (((*(byte *)(iVar6 + 0x14) & 0x1f) != 0) ||
     (uVar13 = *(uint *)(iVar6 + 0x14) & 0xfffff000, iVar8 = uVar13 - 0x10, uVar13 == 0)) {
    iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar6 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar13 = (uint)(*(byte *)((int)local_44 + -3) >> 5);
  iVar12 = *(int *)(iVar6 + 8) + 0x10;
  iVar10 = iVar8 * uVar11 + iVar8 + -4;
  iVar8 = iVar12 + iVar10;
  if (4 < uVar13) {
    if (uVar13 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar13 = *(uint *)(iVar8 + -4);
    if (uVar13 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar8 - (int)local_44) < uVar13) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar8 - uVar13) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar12 + iVar10) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar6 + 0x14);
  uVar13 = 1 << uVar11;
  *(undefined1 *)((int)local_44 + -3) = 0xff;
  *(undefined2 *)((int)local_44 + -2) = 0;
  do {
    uVar15 = *(uint *)(iVar6 + 0x10);
    uVar9 = *(uint *)(iVar6 + 0xc) | uVar15;
    if ((uVar13 & uVar9) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar15 == 0) || (uVar9 + uVar13 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar6,uVar11);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar7 = (undefined4 *)FUN_016d2bc8();
      uVar3 = *puVar7;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar7 = uVar3;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar6 + 0x10) = uVar13 + uVar15;
      return;
    }
    puVar4 = (uint *)(iVar6 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar4);
      uVar9 = *puVar4;
      if (uVar15 != uVar9) goto LAB_016d409c;
      bVar16 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar16);
    *puVar4 = uVar13 + uVar15;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar15 == uVar9) {
      return;
    }
  } while( true );
}

