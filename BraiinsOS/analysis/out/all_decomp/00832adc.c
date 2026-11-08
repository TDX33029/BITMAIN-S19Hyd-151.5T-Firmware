// FUN_00832adc @ 00832adc size=576 calls_out=5 calls_in=1
// strings: 

void FUN_00832adc(uint *param_1,int *param_2)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int *piVar7;
  int unaff_r4;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  int iVar14;
  int iVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  int *piVar19;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  int *local_40;
  int *local_3c;
  int local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  piVar8 = (int *)param_2[1];
  iVar15 = *param_2;
  uVar17 = 0;
  iVar4 = param_2[2];
  local_44 = 0;
  local_50 = 4;
  piVar6 = piVar8 + iVar4 * 4;
  local_48 = 4;
  local_4c = 0;
  local_40 = piVar8;
  local_3c = piVar8;
  local_38 = iVar15;
  local_34 = piVar6;
  if (iVar4 != 0) {
    uVar11 = iVar4 << 4;
    piVar9 = piVar8;
    do {
      uVar11 = uVar11 - 0x10;
      piVar9 = piVar9 + 4;
      piVar19 = piVar8 + uVar17 * 4;
      iVar4 = *piVar19;
      if (iVar4 == -0x80000000) goto LAB_00832c80;
      puVar13 = (uint *)piVar19[1];
      local_28 = piVar19[2];
      if (local_28 != 4) {
        local_2c = 4;
        local_30 = 6;
        local_3c = piVar9;
        uVar17 = FUN_00832e68(local_28,&local_30);
        *param_1 = 0x80000000;
        param_1[1] = uVar17;
        if (iVar4 != 0) {
          thunk_FUN_016d3fb4(puVar13);
        }
        for (uVar17 = 0; uVar11 >> 4 != uVar17; uVar17 = uVar17 + 1) {
          if (piVar9[uVar17 * 4] != 0) {
            thunk_FUN_016d3fb4(piVar9[uVar17 * 4 + 1]);
          }
        }
        if (iVar15 != 0) {
          thunk_FUN_016d3fb4(piVar8);
        }
        if (local_4c == 0) {
          return;
        }
        if (local_50 == 0) {
          return;
        }
        iVar4 = FUN_016d3bc8();
        uVar17 = *(byte *)(local_50 - 3) & 0x1f;
        if (((*(byte *)(iVar4 + 0x14) & 0x1f) != 0) ||
           (uVar11 = *(uint *)(iVar4 + 0x14) & 0xfffff000, iVar15 = uVar11 - 0x10, uVar11 == 0)) {
          iVar15 = (uint)*(ushort *)(&DAT_0042567c + ((*(ushort *)(iVar4 + 0x14) & 0xfff) >> 6) * 2)
                   << 4;
        }
        uVar11 = (uint)(*(byte *)(local_50 - 3) >> 5);
        iVar14 = *(int *)(iVar4 + 8) + 0x10;
        iVar16 = iVar15 * uVar17 + iVar15 + -4;
        iVar15 = iVar14 + iVar16;
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
        if (iVar15 - local_50 < uVar11) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4032);
          (*pcVar1)();
        }
        if (*(char *)(iVar15 - uVar11) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d403a);
          (*pcVar1)();
        }
        if (*(char *)(iVar14 + iVar16) != '\0') {
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xff,0x16d4040);
          (*pcVar1)();
        }
        bVar2 = *(byte *)(iVar4 + 0x14);
        uVar11 = 1 << uVar17;
        *(undefined1 *)(local_50 - 3) = 0xff;
        *(undefined2 *)(local_50 - 2) = 0;
        do {
          uVar12 = *(uint *)(iVar4 + 0x10);
          uVar18 = *(uint *)(iVar4 + 0xc) | uVar12;
          if ((uVar11 & uVar18) != 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xff,0x16d4074);
            (*pcVar1)();
          }
          if ((uVar12 == 0) || (uVar18 + uVar11 == (2 << (bVar2 & 0x1f)) + -1)) {
            if (DAT_018ddb0b != '\0') {
              FUN_016ddcc0(&DAT_018ddd48);
            }
            FUN_016d3ca8(&local_28,iVar4,uVar17);
            FUN_016dddc0(&DAT_018ddd48);
            if (unaff_r4 == 0) {
              return;
            }
            puVar5 = (undefined4 *)FUN_016d2bc8();
            uVar10 = *puVar5;
            FUN_016d6ac4(local_28,unaff_r4);
            *puVar5 = uVar10;
            return;
          }
          if (DAT_018ddb0b == '\0') {
            *(uint *)(iVar4 + 0x10) = uVar11 + uVar12;
            return;
          }
          puVar13 = (uint *)(iVar4 + 0x10);
          DataMemoryBarrier(0x1b);
          do {
            ExclusiveAccess(puVar13);
            uVar18 = *puVar13;
            if (uVar12 != uVar18) goto LAB_016d409c;
            bVar3 = (bool)hasExclusiveAccess(puVar13);
          } while (!bVar3);
          *puVar13 = uVar11 + uVar12;
LAB_016d409c:
          DataMemoryBarrier(0x1b);
          if (uVar12 == uVar18) {
            return;
          }
        } while( true );
      }
      iVar16 = piVar19[3];
      uVar18 = *puVar13;
      if (uVar17 == local_4c) {
        FUN_007f5750(&local_4c);
        local_50 = local_48;
      }
      piVar7 = (int *)(local_50 + uVar17 * 8);
      *piVar7 = iVar16;
      uVar17 = uVar17 + 1;
      piVar7[1] = uVar18 << 0x18 | (uVar18 >> 8 & 0xff) << 0x10 | (uVar18 >> 0x10 & 0xff) << 8 |
                  uVar18 >> 0x18;
      local_44 = uVar17;
      if (iVar4 != 0) {
        thunk_FUN_016d3fb4(puVar13);
      }
    } while (piVar19 + 4 != piVar6);
    piVar9 = piVar6;
LAB_00832c80:
    local_3c = piVar9;
  }
  piVar9 = local_3c + 1;
  for (uVar11 = (uint)((int)piVar6 - (int)local_3c) >> 4; uVar11 != 0; uVar11 = uVar11 - 1) {
    if (piVar9[-1] != 0) {
      thunk_FUN_016d3fb4(*piVar9);
    }
    piVar9 = piVar9 + 4;
  }
  if (iVar15 != 0) {
    thunk_FUN_016d3fb4(piVar8);
  }
  uVar18 = local_48;
  uVar11 = local_4c;
  if (1 < uVar17) {
    if (uVar17 < 0x15) {
      FUN_0061361c(local_48,uVar17);
    }
    else {
      FUN_00832d74(local_48,uVar17);
    }
  }
  *param_1 = uVar11;
  param_1[1] = uVar18;
  param_1[2] = uVar17;
  return;
}

