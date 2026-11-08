// FUN_010cbb88 @ 010cbb88 size=512 calls_out=6 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_010cbb88(int *param_1,int param_2)

{
  byte bVar1;
  bool bVar2;
  undefined4 *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  code *pcVar7;
  int iVar8;
  uint uVar9;
  int unaff_r4;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  uint local_d8;
  int iStack_d4;
  int local_cc;
  uint local_88;
  uint uStack_84;
  undefined4 *puStack_80;
  uint uStack_7c;
  uint local_78;
  uint uStack_74;
  uint uStack_70;
  uint uStack_6c;
  uint local_68;
  uint uStack_64;
  undefined4 *puStack_60;
  uint uStack_5c;
  uint local_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint uStack_44;
  undefined4 *local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  undefined4 uStack_28;
  
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(puVar3 + 2) = 0;
  *puVar3 = 1;
  puVar3[1] = 1;
  local_cc = CONCAT22(local_cc._2_2_,1);
  local_d8 = 0;
  if (param_2 == -1) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ad11c);
  }
  FUN_015f3e00(&local_88,param_2);
  FUN_015f39a8(&local_68,param_2);
  uStack_2c = uStack_4c;
  uStack_30 = uStack_50;
  uStack_34 = local_54;
  local_38 = local_58;
  uStack_3c = uStack_5c;
  local_40 = puStack_60;
  uStack_44 = uStack_64;
  local_48 = local_68;
  uVar6 = local_88 & 0xffff;
  uVar10 = local_68 & 0xffff;
  if (uVar6 != 2 && uVar10 != 2) {
    local_68 = local_88;
    uStack_64 = uStack_84;
    puStack_60 = puStack_80;
    uStack_5c = uStack_7c;
    local_58 = local_78;
    local_54 = uStack_74;
    uStack_50 = uStack_70;
    uStack_4c = uStack_6c;
    puVar4 = (uint *)thunk_FUN_016d4a50(0x40);
    if (puVar4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x40);
    }
    *puVar4 = local_68;
    puVar4[1] = uStack_64;
    puVar4[2] = (uint)puStack_60;
    puVar4[3] = uStack_5c;
    puVar4[4] = local_58;
    puVar4[5] = local_54;
    puVar4[6] = uStack_50;
    puVar4[7] = uStack_4c;
    puVar4[8] = local_48;
    puVar4[9] = uStack_44;
    puVar4[10] = (uint)local_40;
    puVar4[0xb] = uStack_3c;
    puVar4[0xc] = local_38;
    puVar4[0xd] = uStack_34;
    puVar4[0xe] = uStack_30;
    puVar4[0xf] = uStack_2c;
    *param_1 = (int)puVar4;
    param_1[1] = (int)&DAT_01885310;
    param_1[2] = (int)puVar3;
    param_1[3] = local_cc;
    return;
  }
  *param_1 = 0;
  param_1[1] = iStack_d4;
  param_1[2] = (int)puVar3;
  param_1[3] = local_cc;
  if (uVar6 == 2) {
    local_d8 = uStack_84 & 0xff;
  }
  if (uVar6 == 2 && local_d8 == 3) {
    uVar13 = *puStack_80;
    puVar3 = (undefined4 *)puStack_80[1];
    pcVar7 = (code *)*puVar3;
    if (pcVar7 != (code *)0x0) {
      (*pcVar7)(uVar13);
    }
    if (puVar3[1] != 0) {
      thunk_FUN_016d3fb4(uVar13);
    }
    uVar6 = thunk_FUN_016d3fb4(puStack_80);
    if (uVar10 == 2) {
      uVar6 = uStack_64 & 0xff;
    }
    if (uVar10 == 2 && uVar6 == 3) goto LAB_010cbd34;
  }
  else {
    if (uVar10 == 2) {
      local_d8 = uStack_64 & 0xff;
    }
    if (uVar10 == 2 && local_d8 == 3) {
LAB_010cbd34:
      uVar13 = *puStack_60;
      puVar3 = (undefined4 *)puStack_60[1];
      pcVar7 = (code *)*puVar3;
      if (pcVar7 != (code *)0x0) {
        (*pcVar7)(uVar13);
      }
      if (puVar3[1] != 0) {
        thunk_FUN_016d3fb4(uVar13);
      }
      if (puStack_60 == (undefined4 *)0x0) {
        return;
      }
      iVar5 = FUN_016d3bc8();
      uVar6 = *(byte *)((int)puStack_60 + -3) & 0x1f;
      if (((*(byte *)(iVar5 + 0x14) & 0x1f) != 0) ||
         (uVar10 = *(uint *)(iVar5 + 0x14) & 0xfffff000, iVar8 = uVar10 - 0x10, uVar10 == 0)) {
        iVar8 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar5 + 0x14) & 0xfff) >> 6) * 2) <<
                4;
      }
      uVar10 = (uint)(*(byte *)((int)puStack_60 + -3) >> 5);
      iVar14 = *(int *)(iVar5 + 8) + 0x10;
      iVar11 = iVar8 * uVar6 + iVar8 + -4;
      iVar8 = iVar14 + iVar11;
      if (4 < uVar10) {
        if (uVar10 != 5) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d4018);
          (*pcVar7)();
        }
        uVar10 = *(uint *)(iVar8 + -4);
        if (uVar10 < 5) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d4022);
          (*pcVar7)();
        }
        if (*(char *)(iVar8 + -5) != '\0') {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d402a);
          (*pcVar7)();
        }
      }
      if ((uint)(iVar8 - (int)puStack_60) < uVar10) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d4032);
        (*pcVar7)();
      }
      if (*(char *)(iVar8 - uVar10) != '\0') {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d403a);
        (*pcVar7)();
      }
      if (*(char *)(iVar14 + iVar11) != '\0') {
                    /* WARNING: Does not return */
        pcVar7 = (code *)software_udf(0xff,0x16d4040);
        (*pcVar7)();
      }
      bVar1 = *(byte *)(iVar5 + 0x14);
      uVar10 = 1 << uVar6;
      *(undefined1 *)((int)puStack_60 + -3) = 0xff;
      *(undefined2 *)((int)puStack_60 + -2) = 0;
      do {
        uVar12 = *(uint *)(iVar5 + 0x10);
        uVar9 = *(uint *)(iVar5 + 0xc) | uVar12;
        if ((uVar10 & uVar9) != 0) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)software_udf(0xff,0x16d4074);
          (*pcVar7)();
        }
        if ((uVar12 == 0) || (uVar9 + uVar10 == (2 << (bVar1 & 0x1f)) + -1)) {
          if (DAT_018ddb0b != '\0') {
            FUN_016ddcc0(&DAT_018ddd48);
          }
          FUN_016d3ca8(&uStack_28,iVar5,uVar6);
          FUN_016dddc0(&DAT_018ddd48);
          if (unaff_r4 == 0) {
            return;
          }
          puVar3 = (undefined4 *)FUN_016d2bc8();
          uVar13 = *puVar3;
          FUN_016d6ac4(uStack_28,unaff_r4);
          *puVar3 = uVar13;
          return;
        }
        if (DAT_018ddb0b == '\0') {
          *(uint *)(iVar5 + 0x10) = uVar10 + uVar12;
          return;
        }
        puVar4 = (uint *)(iVar5 + 0x10);
        DataMemoryBarrier(0x1b);
        do {
          ExclusiveAccess(puVar4);
          uVar9 = *puVar4;
          if (uVar12 != uVar9) goto LAB_016d409c;
          bVar2 = (bool)hasExclusiveAccess(puVar4);
        } while (!bVar2);
        *puVar4 = uVar10 + uVar12;
LAB_016d409c:
        DataMemoryBarrier(0x1b);
        if (uVar12 == uVar9) {
          return;
        }
      } while( true );
    }
  }
  return;
}

