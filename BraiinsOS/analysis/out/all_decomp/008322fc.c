// FUN_008322fc @ 008322fc size=836 calls_out=4 calls_in=0
// strings: 

void FUN_008322fc(uint *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  int unaff_r4;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 uVar13;
  undefined2 uVar14;
  int iVar15;
  uint uVar16;
  int iVar17;
  int *piVar18;
  uint *puVar19;
  int *piVar20;
  uint uVar21;
  uint *local_58;
  uint local_50;
  uint local_4c;
  uint *local_48;
  uint local_44;
  int *local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  undefined4 local_30;
  undefined2 uStack_2c;
  undefined2 local_2a;
  undefined1 uStack_28;
  undefined1 uStack_27;
  undefined2 uStack_26;
  
  iVar4 = param_2[2];
  iVar15 = *param_2;
  piVar18 = (int *)param_2[1];
  uVar21 = 0;
  local_58 = (uint *)&DAT_00000004;
  piVar7 = piVar18 + iVar4 * 4;
  local_44 = 0;
  local_48 = (uint *)&DAT_00000004;
  local_4c = 0;
  local_50 = uVar21;
  local_40 = piVar18;
  local_3c = piVar18;
  local_38 = iVar15;
  local_34 = piVar7;
  if (iVar4 != 0) {
    uVar11 = iVar4 << 4;
    local_50 = 0;
    piVar6 = piVar18;
    do {
      piVar20 = piVar6 + 4;
      uVar11 = uVar11 - 0x10;
      iVar4 = *piVar6;
      if (iVar4 == -0x80000000) goto LAB_008325e8;
      iVar10 = piVar6[2];
      puVar19 = (uint *)piVar6[1];
      if (iVar10 != 4) {
        uStack_28 = (undefined1)iVar10;
        uStack_27 = (undefined1)((uint)iVar10 >> 8);
        uStack_26 = (undefined2)((uint)iVar10 >> 0x10);
        uStack_2c = 4;
        local_2a = 0;
        local_30 = 6;
        local_3c = piVar20;
        uVar21 = FUN_00832880(iVar10,&local_30);
        *param_1 = 0x80000000;
        param_1[1] = uVar21;
        if (iVar4 != 0) {
          thunk_FUN_016d3fb4(puVar19);
        }
        for (uVar21 = 0; uVar11 >> 4 != uVar21; uVar21 = uVar21 + 1) {
          if (piVar20[uVar21 * 4] != 0) {
            thunk_FUN_016d3fb4(piVar20[uVar21 * 4 + 1]);
          }
        }
        if (iVar15 != 0) {
          thunk_FUN_016d3fb4(piVar18);
        }
        if (local_4c == 0) {
          return;
        }
        if (local_58 == (uint *)0x0) {
          return;
        }
        iVar4 = FUN_016d3bc8();
        uVar21 = *(byte *)((int)local_58 + -3) & 0x1f;
        if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
           (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar15 = uVar11 - 0x10, uVar11 == 0)) {
          iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                   << 4;
        }
        uVar11 = (uint)(*(byte *)((int)local_58 + -3) >> 5);
        iVar17 = *(int *)(iVar4 + 8) + 0x10;
        iVar10 = iVar15 * uVar21 + iVar15 + -4;
        iVar15 = iVar17 + iVar10;
        if (4 < uVar11) {
          if (uVar11 != 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4018);
            (*pcVar1)();
          }
          uVar11 = *(uint *)(iVar15 + -4);
          if (uVar11 < 5) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4022);
            (*pcVar1)();
          }
          if (*(char *)(iVar15 + -5) != '\0') {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d402a);
            (*pcVar1)();
          }
        }
        if ((uint)(iVar15 - (int)local_58) < uVar11) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar15 - uVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar17 + iVar10) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar4 + 0x14);
        uVar11 = 1 << uVar21;
        *(undefined1 *)((int)local_58 + -3) = 0xff;
        *(undefined2 *)((int)local_58 + -2) = 0;
        do {
          uVar5 = *(uint *)(iVar4 + 0x10);
          uVar16 = *(uint *)(iVar4 + 0xc) | uVar5;
          if ((uVar11 & uVar16) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar1)();
          }
          if ((uVar5 == 0) || (uVar16 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&uStack_28,iVar4,uVar21);
            FUN_016dddc0(&DAT_018ddd48);
            if (unaff_r4 == 0) {
              return;
            }
            puVar12 = (undefined4 *)FUN_016d2bc8();
            uVar13 = *puVar12;
            FUN_016d6ac4(CONCAT22(uStack_26,CONCAT11(uStack_27,uStack_28)),unaff_r4);
            *puVar12 = uVar13;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar4 + 0x10) = uVar11 + uVar5;
            return;
          }
          puVar19 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar19);
            uVar16 = *puVar19;
            if (uVar5 != uVar16) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar19);
          } while (!bVar3);
          *puVar19 = uVar11 + uVar5;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar5 == uVar16) {
            return;
          }
        } while( true );
      }
      uVar5 = *puVar19;
      iVar10 = piVar6[3];
      uVar16 = uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10;
      uVar14 = 1;
      switch(uVar16 >> 0x10) {
      case 0x1362:
      case 0x1366:
      case 0x1368:
      case 0x1370:
      case 0x1372:
      case 4999:
      case 0x1396:
      case 0x1397:
      case 0x1398:
        uVar14 = 0;
      }
      uStack_28 = (undefined1)(uVar5 >> 0x10);
      uStack_27 = (undefined1)(uVar5 >> 0x18);
      local_2a = (undefined2)(uVar16 >> 0x10);
      uVar13 = CONCAT13(uStack_27,CONCAT12(uStack_28,local_2a));
      if (local_50 == local_4c) {
        FUN_007f57b0(&local_4c);
        local_58 = local_48;
      }
      piVar6 = (int *)((int)local_58 + uVar21);
      *piVar6 = iVar10;
      *(undefined4 *)((int)piVar6 + 6) = uVar13;
      *(undefined2 *)(piVar6 + 1) = uVar14;
      local_50 = local_50 + 1;
      local_44 = local_50;
      if (iVar4 != 0) {
        thunk_FUN_016d3fb4(puVar19);
      }
      uVar21 = uVar21 + 0xc;
      piVar6 = piVar20;
    } while (piVar20 != piVar7);
    piVar20 = piVar7;
LAB_008325e8:
    local_3c = piVar20;
  }
  piVar6 = local_3c + 1;
  for (uVar21 = (uint)((int)piVar7 - (int)local_3c) >> 4; uVar21 != 0; uVar21 = uVar21 - 1) {
    if (piVar6[-1] != 0) {
      thunk_FUN_016d3fb4(*piVar6);
    }
    piVar6 = piVar6 + 4;
  }
  if (iVar15 != 0) {
    thunk_FUN_016d3fb4(piVar18);
  }
  puVar19 = local_48;
  uVar21 = local_4c;
  if (1 < local_50) {
    if (local_50 < 0x15) {
      puVar8 = local_48 + 3;
      iVar4 = 0;
      do {
        uVar11 = *puVar8;
        if (uVar11 < puVar8[-3]) {
          uVar5 = puVar8[1];
          uVar16 = puVar8[2];
          iVar15 = iVar4;
          do {
            iVar10 = iVar15;
            puVar12 = (undefined4 *)((int)local_48 + iVar10);
            puVar12[3] = *puVar12;
            puVar12[4] = puVar12[1];
            puVar12[5] = puVar12[2];
            if (iVar10 == 0) {
              puVar9 = local_48;
              goto LAB_00832688;
            }
            iVar15 = iVar10 + -0xc;
          } while (uVar11 < *(uint *)((int)local_48 + iVar10 + -0xc));
          puVar9 = (uint *)((int)local_48 + iVar10);
LAB_00832688:
          *puVar9 = uVar11;
          puVar9[1] = uVar5;
          puVar9[2] = uVar16;
        }
        puVar8 = puVar8 + 3;
        iVar4 = iVar4 + 0xc;
      } while (puVar8 != local_48 + local_50 * 3);
    }
    else {
      FUN_00832774(local_48,local_50);
    }
  }
  *param_1 = uVar21;
  param_1[1] = (uint)puVar19;
  param_1[2] = local_50;
  return;
}

