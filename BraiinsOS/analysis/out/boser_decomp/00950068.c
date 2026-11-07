// FUN_00950068 @ 00950068 size=1804 calls_out=8 calls_in=1
// strings: assertion failed: edge.height == self.node.height - 1

int FUN_00950068(undefined4 *param_1,undefined4 param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  ushort *puVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  int *piVar16;
  ushort *puVar17;
  uint uVar18;
  int iVar19;
  int *local_620;
  uint local_600;
  int local_5fc;
  undefined4 local_5f8;
  undefined4 local_5f4;
  undefined4 local_5e8;
  undefined4 local_5e4;
  undefined4 local_5d8;
  undefined4 local_5d4;
  undefined4 local_5c8;
  undefined4 local_5c4;
  undefined4 local_5b8;
  undefined4 local_5b4;
  undefined4 local_5a8;
  undefined4 local_5a0;
  undefined4 local_59c;
  undefined4 local_590;
  undefined4 local_58c;
  undefined4 local_580;
  undefined4 local_57c;
  undefined4 local_570;
  undefined4 local_56c;
  undefined4 local_560;
  undefined4 local_55c;
  undefined4 local_550;
  undefined4 local_54c;
  undefined4 local_540;
  undefined4 local_53c;
  undefined4 local_530;
  undefined4 local_528;
  undefined1 auStack_520 [208];
  undefined1 auStack_450 [208];
  int local_380;
  int local_37c;
  int local_378 [52];
  int local_2a8 [2];
  int local_2a0 [2];
  undefined1 auStack_298 [208];
  int local_1c8;
  uint local_1c4;
  uint local_1c0;
  undefined1 auStack_f8 [212];
  
  piVar16 = (int *)*param_1;
  if (piVar16 == (int *)0x0) {
    return param_1[3] * 0xd8 + param_1[1];
  }
  iVar13 = 0;
  local_5f4 = 0;
  local_5b8 = 0;
  local_5b4 = 0;
  local_5c8 = 0;
  local_5c4 = 0;
  local_5d8 = 0;
  local_5d4 = 0;
  local_5e8 = 0;
  local_5e4 = 0;
  local_540 = 0;
  local_53c = 0;
  local_550 = 0;
  local_54c = 0;
  local_560 = 0;
  local_55c = 0;
  local_570 = 0;
  local_56c = 0;
  local_580 = 0;
  local_57c = 0;
  local_590 = 0;
  local_58c = 0;
  local_5a0 = 0;
  local_59c = 0;
  local_5f8 = 0;
  local_5a8 = 0;
  local_530 = 0;
  local_528 = param_2;
  if (param_1[2] == 0) {
    iVar3 = FUN_00ab28e0();
    *(undefined4 *)(iVar3 + 0x948) = 0;
    *(undefined2 *)(iVar3 + 0x97a) = 0;
    uVar8 = param_1[1];
    *piVar16 = iVar3;
    piVar16[1] = 0;
    *(undefined4 *)(iVar3 + 0x94c) = uVar8;
    *(undefined2 *)(iVar3 + 0x97a) = 1;
    FUN_01bed4e2(iVar3,&local_5f8,0xd8);
  }
  else {
    iVar13 = param_1[2];
    uVar8 = param_1[1];
    puVar17 = (ushort *)(iVar13 + 0x97a);
    if (*puVar17 < 0xb) {
      FUN_00976318(&local_380,param_1 + 2,uVar8,&local_5f8);
      iVar3 = local_380;
    }
    else {
      uVar4 = param_1[3];
      local_600 = param_1[4];
      uVar18 = 4;
      if (local_600 < 5) {
        bVar2 = false;
      }
      else if (local_600 == 5) {
        bVar2 = false;
        uVar18 = 5;
      }
      else {
        if (local_600 == 6) {
          uVar18 = 5;
          local_600 = 0;
        }
        else {
          local_600 = local_600 - 7;
          uVar18 = 6;
        }
        bVar2 = true;
      }
      iVar5 = FUN_00ab28e0();
      *(undefined4 *)(iVar5 + 0x948) = 0;
      *(undefined2 *)(iVar5 + 0x97a) = 0;
      iVar9 = *(int *)(iVar13 + 0x94c + uVar18 * 4);
      uVar14 = ~uVar18 + (uint)*puVar17;
      *(undefined2 *)(iVar5 + 0x97a) = (short)uVar14;
      piVar6 = (int *)(iVar13 + uVar18 * 0xd8);
      iVar10 = *piVar6;
      iVar19 = piVar6[1];
      FUN_01bed4e2(&local_380,piVar6 + 2,0xd0);
      if (0xb < uVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar14,0xb,&DAT_01d2ff10);
      }
      FUN_01bed4e2(iVar5 + 0x94c,iVar13 + 0x94c + (uVar18 + 1) * 4,uVar14 * 4);
      FUN_01bed4e2(iVar5,(uVar18 + 1) * 0xd8 + iVar13,uVar14 * 0xd8);
      *puVar17 = (ushort)uVar18;
      FUN_01bed4e2(auStack_f8,&local_380,0xd0);
      local_1c0 = local_600;
      if (bVar2) {
        local_1c8 = iVar5;
        local_1c4 = 0;
      }
      else {
        local_1c8 = iVar13;
        local_1c4 = uVar4;
      }
      FUN_00976318(&local_380,&local_1c8,uVar8,&local_5f8);
      iVar3 = local_380;
      if (iVar10 != 2 || iVar19 != 0) {
        FUN_01bed4e2(auStack_520,auStack_f8,0xd0);
        local_5fc = *(int *)(iVar13 + 0x948);
        if (local_5fc == 0) {
          uVar18 = 0;
        }
        else {
          uVar18 = 0;
          iVar15 = iVar9;
          do {
            local_600 = (uint)*(ushort *)(iVar13 + 0x978);
            local_380 = iVar10;
            local_37c = iVar19;
            FUN_01bed4e2(local_378,auStack_520,0xd0);
            if (uVar18 != uVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec("assertion failed: edge.height == self.node.height - 1",0x35,
                           &DAT_01d2ff30);
            }
            puVar17 = (ushort *)(local_5fc + 0x97a);
            uVar1 = *puVar17;
            if (uVar1 < 0xb) {
              FUN_00976730(local_5fc,local_600,iVar15,&local_380,iVar5);
              goto LAB_009506a4;
            }
            local_620 = local_2a0;
            uVar14 = 4;
            if (4 < local_600) {
              if (local_600 == 5) {
                uVar14 = 5;
              }
              else {
                local_620 = local_2a8;
                if (local_600 == 6) {
                  uVar14 = 5;
                  local_600 = 0;
                }
                else {
                  local_600 = local_600 - 7;
                  uVar14 = 6;
                }
              }
            }
            iVar13 = FUN_00ab2920();
            *(undefined4 *)(iVar13 + 0x948) = 0;
            puVar11 = (ushort *)(iVar13 + 0x97a);
            *puVar11 = 0;
            iVar9 = *(int *)(local_5fc + 0x94c + uVar14 * 4);
            uVar18 = ~uVar14 + (uint)*puVar17;
            *puVar11 = (ushort)uVar18;
            piVar6 = (int *)(local_5fc + uVar14 * 0xd8);
            iVar10 = *piVar6;
            iVar19 = piVar6[1];
            FUN_01bed4e2(auStack_f8,piVar6 + 2,0xd0);
            if (0xb < uVar18) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,uVar18,0xb,&DAT_01d2ff10);
            }
            FUN_01bed4e2(iVar13 + 0x94c,local_5fc + 0x94c + (uVar14 + 1) * 4,uVar18 * 4);
            FUN_01bed4e2(iVar13,(uVar14 + 1) * 0xd8 + local_5fc,uVar18 * 0xd8);
            *puVar17 = (ushort)uVar14;
            FUN_01bed4e2(&local_1c8,auStack_f8,0xd0);
            uVar12 = (uint)*puVar11;
            iVar7 = uVar12 + 1;
            if (0xb < uVar12) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,iVar7,0xc,&DAT_01d2ff20);
            }
            if (uVar1 - uVar14 != iVar7) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
            }
            uVar18 = uVar4 + 1;
            FUN_01bed4e2(iVar13 + 0x980,local_5fc + uVar14 * 4 + 0x984,iVar7 * 4);
            uVar4 = 0;
            do {
              iVar7 = *(int *)(iVar13 + 0x980 + uVar4 * 4);
              *(short *)(iVar7 + 0x978) = (short)uVar4;
              *(int *)(iVar7 + 0x948) = iVar13;
              if (uVar12 <= uVar4) break;
              uVar4 = uVar4 + 1;
            } while (uVar4 <= uVar12);
            FUN_01bed4e2(auStack_298,&local_1c8,0xd0);
            local_2a0[0] = local_5fc;
            local_2a8[0] = iVar13;
            FUN_00976730(*local_620,local_600,iVar15,&local_380,iVar5);
            FUN_01bed4e2(auStack_450,auStack_298,0xd0);
            iVar13 = local_2a0[0];
            iVar5 = local_2a8[0];
            if (iVar10 == 2 && iVar19 == 0) goto LAB_009506a4;
            FUN_01bed4e2(auStack_520,auStack_450,0xd0);
            local_5fc = *(int *)(iVar13 + 0x948);
            iVar15 = iVar9;
            uVar4 = uVar18;
          } while (local_5fc != 0);
        }
        iVar13 = *piVar16;
        if (iVar13 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fee0);
        }
        uVar4 = piVar16[1];
        piVar6 = (int *)FUN_00ab2920();
        *(undefined2 *)((int)piVar6 + 0x97a) = 0;
        piVar6[0x260] = iVar13;
        piVar6[0x252] = 0;
        if (0xfffffffe < uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d305e8);
        }
        *(undefined2 *)(iVar13 + 0x978) = 0;
        *(int **)(iVar13 + 0x948) = piVar6;
        *piVar16 = (int)piVar6;
        piVar16[1] = uVar4 + 1;
        if (uVar18 != uVar4) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
        }
        *(undefined2 *)((int)piVar6 + 0x97a) = 1;
        piVar6[0x253] = iVar9;
        *piVar6 = iVar10;
        piVar6[1] = iVar19;
        FUN_01bed4e2(piVar6 + 2,auStack_520,0xd0);
        piVar6[0x261] = iVar5;
        *(undefined2 *)(iVar5 + 0x978) = 1;
        *(int **)(iVar5 + 0x948) = piVar6;
LAB_009506a4:
        iVar13 = local_378[0];
        goto LAB_009506b0;
      }
    }
    iVar13 = local_378[0];
  }
LAB_009506b0:
  piVar16[2] = piVar16[2] + 1;
  return iVar13 * 0xd8 + iVar3;
}

