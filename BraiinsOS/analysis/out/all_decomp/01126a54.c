// FUN_01126a54 @ 01126a54 size=484 calls_out=6 calls_in=2
// strings: 

void FUN_01126a54(int *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 extraout_r1;
  undefined1 extraout_r1_00;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  undefined1 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint *puVar16;
  int local_60;
  int local_5c;
  int local_58;
  uint local_54;
  int local_50;
  undefined4 local_4c;
  int *local_48;
  int local_44;
  undefined1 *local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  undefined4 uStack_2c;
  int *local_28;
  
  if ((param_2[2] & 1U) == 0) {
    local_48 = &local_60;
    local_58 = param_2[1];
    local_60 = 0x110002;
    local_4c = 0;
    local_50 = 2;
    local_54 = param_2[2];
    uVar4 = FUN_0111eb80(&local_58);
    puVar10 = &DAT_00000001;
    iVar15 = 0;
    iVar5 = 0;
    if ((uVar4 & 1) != 0) {
      if (((*local_48 == 0x110002) && (local_54 != 0)) && (local_50 == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faf2a4(&DAT_0188b814);
      }
      puVar10 = (undefined1 *)thunk_FUN_016d4a50(8);
      if (puVar10 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,8);
      }
      *puVar10 = extraout_r1;
      local_3c = 1;
      local_44 = 8;
      local_38 = local_58;
      local_34 = local_54;
      local_30 = local_50;
      uStack_2c = local_4c;
      local_28 = local_48;
      local_40 = puVar10;
      while (iVar15 = local_3c, uVar4 = FUN_0111eb80(&local_38), (uVar4 & 1) != 0) {
        if (iVar15 == local_44) {
          if (((*local_28 == 0x110002) && (local_34 != 0)) && (local_30 == 0)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faf2a4(&DAT_0188b814);
          }
          FUN_00f58340(&local_44,iVar15,1);
          puVar10 = local_40;
        }
        puVar10[iVar15] = extraout_r1_00;
        local_3c = iVar15 + 1;
      }
      iVar5 = local_44;
    }
    if (local_60 == 0x110002) {
      *param_1 = iVar5;
      param_1[1] = (int)puVar10;
      param_1[2] = iVar15;
    }
    else {
      *param_1 = -0x80000000;
      param_1[1] = local_60;
      param_1[2] = local_5c;
      if (iVar5 != 0) {
        thunk_FUN_016d3fb4(puVar10);
      }
    }
  }
  else {
    *param_1 = -0x80000000;
    param_1[1] = (int)&DAT_00110000;
  }
  if (*param_2 == 0) {
    return;
  }
  iVar15 = param_2[1];
  if (iVar15 == 0) {
    return;
  }
  iVar5 = FUN_016d3bc8();
  uVar4 = *(byte *)(iVar15 + -3) & 0x1f;
  if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
    iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar15 + -3) >> 5);
  iVar14 = *(int *)(iVar5 + 8) + 0x10;
  iVar12 = iVar7 * uVar4 + iVar7 + -4;
  iVar7 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar7 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar7 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar7 - iVar15) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar7 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar5 + 0x14);
  uVar11 = 1 << uVar4;
  *(undefined1 *)(iVar15 + -3) = 0xff;
  *(undefined2 *)(iVar15 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar5 + 0x10);
    uVar8 = *(uint *)(iVar5 + 0xc) | uVar13;
    if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&local_28,iVar5,uVar4);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar6 = (undefined4 *)FUN_016d2bc8();
      uVar9 = *puVar6;
      FUN_016d6ac4(local_28,unaff_r4);
      *puVar6 = uVar9;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar5 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar16 = (uint *)(iVar5 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar8 = *puVar16;
      if (uVar13 != uVar8) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar8) {
      return;
    }
  } while( true );
}

