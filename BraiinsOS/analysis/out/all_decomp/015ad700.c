// FUN_015ad700 @ 015ad700 size=508 calls_out=4 calls_in=1
// strings: 

void FUN_015ad700(int *param_1,undefined4 param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  short *psVar4;
  short sVar5;
  short *psVar6;
  int iVar7;
  uint uVar8;
  int unaff_r4;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  uint uVar16;
  uint *puVar17;
  int local_88;
  int iStack_84;
  int iStack_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int local_6c;
  short *local_68;
  int local_64;
  undefined4 local_60;
  undefined4 local_5c;
  short local_58;
  undefined4 local_50;
  undefined4 local_4c;
  short local_48;
  undefined4 local_40;
  undefined4 local_3c;
  short local_38;
  short local_30;
  undefined4 local_2e;
  undefined2 local_2a;
  undefined2 uStack_28;
  short local_26;
  
  local_88 = 7;
  FUN_015aee80(&local_30,param_2,&local_88);
  sVar5 = local_30;
  if (local_30 != 6) {
    local_5c = CONCAT22(uStack_28,local_2a);
    local_38 = local_26;
    local_40 = local_2e;
    if (local_30 != 5) {
      local_58 = local_26;
      local_60 = local_2e;
      local_3c = local_5c;
      psVar6 = (short *)thunk_FUN_016d4a50(0x30);
      if (psVar6 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,0x30);
      }
      *psVar6 = sVar5;
      puVar10 = (undefined4 *)((uint)&local_30 | 2);
      *(undefined4 *)(psVar6 + 1) = local_60;
      *(undefined4 *)(psVar6 + 3) = local_5c;
      psVar6[5] = local_58;
      local_64 = 1;
      local_6c = 4;
      iVar7 = 0;
      local_68 = psVar6;
      while( true ) {
        iVar15 = local_64;
        FUN_015aee80(&local_30,param_2,&local_88);
        sVar5 = local_30;
        psVar4 = local_68;
        if (local_30 != 6) {
          local_38 = *(short *)(puVar10 + 2);
          local_40 = *puVar10;
          local_3c = puVar10[1];
        }
        if (local_30 == 6 || local_30 == 5) break;
        local_48 = local_38;
        local_4c = local_3c;
        local_50 = local_40;
        if (iVar15 == local_6c) {
          FUN_015afa68(&local_6c,iVar15,1,4,0xc);
          psVar6 = local_68;
        }
        local_64 = iVar15 + 1;
        *(short *)((int)psVar6 + iVar7 + 0xc) = sVar5;
        *(undefined4 *)((int)psVar6 + iVar7 + 0xe) = local_50;
        *(undefined4 *)((int)psVar6 + iVar7 + 0x12) = local_4c;
        *(short *)((int)psVar6 + iVar7 + 0x16) = local_48;
        iVar7 = iVar7 + 0xc;
      }
      if (local_88 != 7) {
        *param_1 = local_88;
        param_1[1] = iStack_84;
        param_1[2] = iStack_80;
        param_1[3] = iStack_7c;
        param_1[4] = iStack_78;
        param_1[5] = iStack_74;
        if (local_6c == 0) {
          return;
        }
        if (local_68 == (short *)0x0) {
          return;
        }
        iVar15 = FUN_016d3bc8();
        uVar16 = *(byte *)((int)psVar4 + -3) & 0x1f;
        if (((*(byte *)(iVar15 + 0x14) & 0x1f) != 0) ||
           (uVar11 = *(uint *)(iVar15 + 0x14) & 0xfffff000, iVar7 = uVar11 - 0x10, uVar11 == 0)) {
          iVar7 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar15 + 0x14) & 0xfff) >> 6) * 2)
                  << 4;
        }
        uVar11 = (uint)(*(byte *)((int)psVar4 + -3) >> 5);
        iVar14 = *(int *)(iVar15 + 8) + 0x10;
        iVar12 = iVar7 * uVar16 + iVar7 + -4;
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
        if ((uint)(iVar7 - (int)psVar4) < uVar11) {
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
        bVar2 = *(byte *)(iVar15 + 0x14);
        uVar11 = 1 << uVar16;
        *(undefined1 *)((int)psVar4 + -3) = 0xff;
        psVar4[-1] = 0;
        do {
          uVar13 = *(uint *)(iVar15 + 0x10);
          uVar8 = *(uint *)(iVar15 + 0xc) | uVar13;
          if ((uVar11 & uVar8) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar1)();
          }
          if ((uVar13 == 0) || (uVar8 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar15,uVar16);
            FUN_016dddc0(&DAT_018ddd48);
            if (unaff_r4 == 0) {
              return;
            }
            puVar10 = (undefined4 *)FUN_016d2bc8();
            uVar9 = *puVar10;
            FUN_016d6ac4(CONCAT22(local_26,uStack_28),unaff_r4);
            *puVar10 = uVar9;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar15 + 0x10) = uVar11 + uVar13;
            return;
          }
          puVar17 = (uint *)(iVar15 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar17);
            uVar8 = *puVar17;
            if (uVar13 != uVar8) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar17);
          } while (!bVar3);
          *puVar17 = uVar11 + uVar13;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar13 == uVar8) {
            return;
          }
        } while( true );
      }
      goto LAB_015ad8b8;
    }
  }
  if (local_88 != 7) {
    *param_1 = local_88;
    param_1[1] = iStack_84;
    param_1[2] = iStack_80;
    param_1[3] = iStack_7c;
    param_1[4] = iStack_78;
    param_1[5] = iStack_74;
    return;
  }
  local_68 = (short *)&DAT_00000004;
  local_6c = 0;
  iVar15 = 0;
LAB_015ad8b8:
  param_1[2] = (int)local_68;
  *param_1 = 7;
  param_1[1] = local_6c;
  param_1[3] = iVar15;
  return;
}

