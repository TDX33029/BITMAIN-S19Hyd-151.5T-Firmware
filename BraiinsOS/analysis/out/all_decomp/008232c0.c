// FUN_008232c0 @ 008232c0 size=644 calls_out=9 calls_in=1
// strings: PSU: short reply

void FUN_008232c0(int *param_1,undefined4 param_2,undefined4 param_3,char param_4)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 *puVar9;
  uint uVar10;
  int unaff_r4;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int unaff_r10;
  uint *puVar16;
  int local_6c;
  uint local_68;
  undefined1 local_64;
  undefined1 local_63;
  byte local_62;
  undefined4 local_58;
  int local_54;
  uint local_50;
  int local_4c;
  uint local_48;
  int iStack_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  FUN_00873008(&local_58);
  uVar15 = local_50;
  iVar4 = local_54;
  iVar8 = local_58;
  if (local_58 == -0x80000000) {
    *param_1 = 2;
    param_1[1] = 0;
    param_1[2] = local_54;
    return;
  }
  uVar5 = (undefined1)local_48;
  uVar11 = local_48 & 0xff;
  FUN_00821f3c(&local_58);
  if ((char)local_58 != '\x01') {
    if (uVar11 == local_58._1_1_) {
      if (param_4 == '\x01') {
        if (1 < uVar15) {
          unaff_r10 = uVar15 - 2;
          if (unaff_r10 == 0) {
            local_6c = 0;
            iVar6 = 1;
          }
          else {
            iVar6 = thunk_FUN_016d4a50(unaff_r10);
            local_6c = unaff_r10;
            if (iVar6 == 0) {
LAB_008233c8:
              uVar7 = 1;
LAB_0082339c:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar7,unaff_r10);
            }
          }
          FUN_016dd1aa(iVar6,iVar4 + 2,unaff_r10);
          FUN_0083ea00(&local_58,iVar6,unaff_r10);
          if (local_58 != 2 || local_54 != 0) {
            local_68 = local_50;
            param_1[3] = local_4c;
            param_1[4] = local_48;
            param_1[5] = iStack_44;
            param_1[6] = iStack_40;
            param_1[7] = local_3c;
            param_1[8] = iStack_38;
            param_1[9] = iStack_34;
            param_1[10] = iStack_30;
            param_1[0xb] = iStack_2c;
            goto LAB_008234d8;
          }
          goto LAB_0082347c;
        }
        local_54 = FUN_00808f1c(&DAT_00343175,0x15);
      }
      else {
        if (uVar15 != 0) {
          if ((int)uVar15 < 1) {
            uVar7 = 0;
            goto LAB_0082339c;
          }
          unaff_r10 = uVar15 - 1;
          if (unaff_r10 == 0) {
            local_6c = 0;
            iVar6 = 1;
          }
          else {
            iVar6 = thunk_FUN_016d4a50(unaff_r10);
            local_6c = unaff_r10;
            if (iVar6 == 0) goto LAB_008233c8;
          }
          FUN_016dd1aa(iVar6,iVar4 + 1,unaff_r10);
          FUN_0083ea00(&local_58,iVar6,unaff_r10);
          if (local_58 != 2 || local_54 != 0) {
            local_68 = local_50;
            param_1[3] = local_4c;
            param_1[4] = local_48;
            param_1[5] = iStack_44;
            param_1[6] = iStack_40;
            param_1[7] = local_3c;
            param_1[8] = iStack_38;
            param_1[9] = iStack_34;
            param_1[10] = iStack_30;
            param_1[0xb] = iStack_2c;
LAB_008234d8:
            param_1[0xc] = local_6c;
            param_1[0xd] = iVar6;
            param_1[0xe] = unaff_r10;
            *param_1 = local_58;
            param_1[1] = local_54;
            param_1[2] = local_68;
            goto joined_r0x008234fc;
          }
LAB_0082347c:
          *param_1 = 2;
          param_1[1] = 0;
          param_1[2] = local_50;
          if (local_6c != 0) {
            thunk_FUN_016d3fb4(iVar6);
          }
          goto joined_r0x008234fc;
        }
        local_54 = FUN_00808f1c("PSU: short reply",0x10);
      }
    }
    else {
      local_62 = local_58._1_1_;
      local_63 = uVar5;
      local_64 = 4;
      local_54 = FUN_0080b0cc(&local_64);
    }
  }
  *param_1 = 2;
  param_1[1] = 0;
  param_1[2] = local_54;
joined_r0x008234fc:
  if (iVar8 == 0) {
    return;
  }
  if (iVar4 == 0) {
    return;
  }
  iVar8 = FUN_016d3bc8();
  uVar15 = *(byte *)(iVar4 + -3) & 0x1f;
  if (((*(byte *)(iVar8 + 0x14) & 0x1f) != 0) ||
     (uVar11 = *(uint *)(iVar8 + 0x14) & 0xfffff000, iVar6 = uVar11 - 0x10, uVar11 == 0)) {
    iVar6 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar8 + 0x14) & 0xfff) >> 6) * 2) << 4;
  }
  uVar11 = (uint)(*(byte *)(iVar4 + -3) >> 5);
  iVar14 = *(int *)(iVar8 + 8) + 0x10;
  iVar12 = iVar6 * uVar15 + iVar6 + -4;
  iVar6 = iVar14 + iVar12;
  if (4 < uVar11) {
    if (uVar11 != 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4018);
      (*pcVar1)();
    }
    uVar11 = *(uint *)(iVar6 + -4);
    if (uVar11 < 5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4022);
      (*pcVar1)();
    }
    if (*(char *)(iVar6 + -5) != '\0') {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d402a);
      (*pcVar1)();
    }
  }
  if ((uint)(iVar6 - iVar4) < uVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4032);
    (*pcVar1)();
  }
  if (*(char *)(iVar6 - uVar11) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d403a);
    (*pcVar1)();
  }
  if (*(char *)(iVar14 + iVar12) != '\0') {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xff,0x16d4040);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(iVar8 + 0x14);
  uVar11 = 1 << uVar15;
  *(undefined1 *)(iVar4 + -3) = 0xff;
  *(undefined2 *)(iVar4 + -2) = 0;
  do {
    uVar13 = *(uint *)(iVar8 + 0x10);
    uVar10 = *(uint *)(iVar8 + 0xc) | uVar13;
    if ((uVar11 & uVar10) != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xff,0x16d4074);
      (*pcVar1)();
    }
    if ((uVar13 == 0) || (uVar10 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
      if (DAT_018ddb0b != '\0') {
        FUN_016ddcc0(&DAT_018ddd48);
      }
      FUN_016d3ca8(&uStack_28,iVar8,uVar15);
      FUN_016dddc0(&DAT_018ddd48);
      if (unaff_r4 == 0) {
        return;
      }
      puVar9 = (undefined4 *)FUN_016d2bc8();
      uVar7 = *puVar9;
      FUN_016d6ac4(uStack_28,unaff_r4);
      *puVar9 = uVar7;
      return;
    }
    if (DAT_018ddb0b == '\0') {
      *(uint *)(iVar8 + 0x10) = uVar11 + uVar13;
      return;
    }
    puVar16 = (uint *)(iVar8 + 0x10);
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(puVar16);
      uVar10 = *puVar16;
      if (uVar13 != uVar10) goto LAB_016d409c;
      bVar3 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar3);
    *puVar16 = uVar11 + uVar13;
LAB_016d409c:
    DataMemoryBarrier(0x1b);
    if (uVar13 == uVar10) {
      return;
    }
  } while( true );
}

