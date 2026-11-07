// FUN_006c2a34 @ 006c2a34 size=2184 calls_out=10 calls_in=102
// strings: assertion failed: edge.height == self.node.height - 1

void FUN_006c2a34(int param_1,int *param_2,int *param_3,undefined4 param_4)

{
  ushort uVar1;
  bool bVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int iVar16;
  ushort *puVar17;
  int local_57c;
  uint local_574;
  int local_570;
  int local_56c;
  uint local_568;
  int *local_564;
  int local_560;
  int local_55c;
  int local_558;
  int *local_554;
  int local_550;
  uint local_54c;
  int *local_548;
  undefined1 auStack_540 [176];
  undefined1 auStack_490 [184];
  undefined1 auStack_3d8 [180];
  int local_324;
  int local_320;
  int local_31c;
  int local_318;
  uint local_314;
  int *local_310;
  int local_268;
  int local_264;
  uint local_260;
  int *local_25c [45];
  int local_1a8;
  uint local_1a4;
  int local_1a0;
  uint local_19c;
  undefined4 local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined1 auStack_188 [176];
  undefined1 auStack_d8 [180];
  
  if (*param_2 == 0) {
    iVar14 = param_3[1];
    iVar16 = param_3[2];
    iVar9 = 0;
    local_560 = *param_3;
  }
  else {
    iVar14 = param_3[1];
    iVar16 = param_3[2];
    FUN_006b32d4(&local_268,*param_2,param_2[1],iVar14,iVar16);
    if (local_268 == 0) {
      FUN_019bb7e0(*param_3,iVar14);
      param_2 = local_25c[0];
      goto LAB_006c2b74;
    }
    local_560 = *param_3;
    local_568 = local_260;
    local_564 = local_25c[0];
    iVar9 = local_264;
  }
  if (local_560 != -0x80000000) {
    local_54c = local_568;
    local_548 = local_564;
    local_55c = iVar14;
    local_558 = iVar16;
    local_554 = param_2;
    local_550 = iVar9;
    FUN_01bed4e2(auStack_540,param_4,0xb0);
    piVar10 = local_548;
    uVar15 = local_54c;
    if (iVar9 == 0) {
      iVar9 = FUN_00ab28a0();
      *(undefined4 *)(iVar9 + 0x790) = 0;
      *(undefined2 *)(iVar9 + 0x81a) = 0;
      *param_2 = iVar9;
      param_2[1] = 0;
      *(undefined2 *)(iVar9 + 0x81a) = 1;
      *(int *)(iVar9 + 0x794) = local_560;
      *(int *)(iVar9 + 0x798) = local_55c;
      *(int *)(iVar9 + 0x79c) = local_558;
      FUN_01bed4e2(iVar9,param_4,0xb0);
    }
    else {
      FUN_01bed4e2(auStack_d8,param_4,0xb0);
      puVar11 = (ushort *)(iVar9 + 0x81a);
      if (*puVar11 < 0xb) {
        FUN_006b268c(&local_268,&local_550,&local_560,param_4);
      }
      else {
        uVar8 = 4;
        bVar2 = false;
        if (&SUB_00000004 < piVar10) {
          if (piVar10 == (int *)&DAT_00000005) {
            uVar8 = 5;
          }
          else {
            if (piVar10 == (int *)&DAT_00000006) {
              uVar8 = 5;
              piVar10 = (int *)0x0;
            }
            else {
              piVar10 = (int *)((int)piVar10 + -7);
              uVar8 = 6;
            }
            bVar2 = true;
          }
        }
        local_57c = FUN_00ab28a0();
        *(undefined2 *)(local_57c + 0x81a) = 0;
        *(undefined4 *)(local_57c + 0x790) = 0;
        piVar7 = (int *)(iVar9 + 0x794 + uVar8 * 0xc);
        iVar14 = *piVar7;
        uVar12 = ~uVar8 + (uint)*puVar11;
        local_570 = piVar7[2];
        local_56c = piVar7[1];
        *(undefined2 *)(local_57c + 0x81a) = (short)uVar12;
        FUN_01bed4e2(auStack_490,uVar8 * 0xb0 + iVar9,0xb0);
        if (0xb < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar12,0xb,&DAT_01d2ff10);
        }
        FUN_01bed4e2(local_57c + 0x794,iVar9 + 0x794 + (uVar8 + 1) * 0xc,uVar12 * 0xc);
        FUN_01bed4e2(local_57c,(uVar8 + 1) * 0xb0 + iVar9,uVar12 * 0xb0);
        *puVar11 = (ushort)uVar8;
        FUN_01bed4e2((uint)&local_198 | 4,auStack_490,0xb0);
        local_268 = iVar14;
        local_264 = local_56c;
        local_260 = local_570;
        FUN_01bed4e2(local_25c,&local_198,0xb4);
        local_19c = 0;
        if (bVar2) {
          local_318 = local_57c;
          local_314 = 0;
        }
        else {
          local_318 = iVar9;
          local_314 = uVar15;
        }
        local_1a4 = uVar15;
        local_310 = piVar10;
        local_1a8 = iVar9;
        local_1a0 = local_57c;
        FUN_006b268c(&local_198,&local_318,&local_560,param_4);
        FUN_01bed4e2(auStack_3d8,local_25c,0xb4);
        if (iVar14 != -0x80000000) {
          FUN_01bed4e2(auStack_490,auStack_3d8,0xb4);
          iVar16 = *(int *)(iVar9 + 0x790);
          if (iVar16 == 0) {
            uVar8 = 0;
          }
          else {
            uVar12 = (uint)auStack_490 | 4;
            uVar8 = 0;
            do {
              local_574 = (uint)*(ushort *)(iVar9 + 0x818);
              local_31c = local_570;
              local_320 = local_56c;
              local_324 = iVar14;
              FUN_01bed4e2(&local_318,uVar12,0xb0);
              if (uVar8 != uVar15) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0ec("assertion failed: edge.height == self.node.height - 1",0x35,
                             &DAT_01d2ff30);
              }
              puVar11 = (ushort *)(iVar16 + 0x81a);
              uVar1 = *puVar11;
              if (uVar1 < 0xb) {
                FUN_01bed4e2(&local_268,uVar12,0xb0);
                FUN_006b2774(iVar16,local_574,&local_324,&local_268,local_57c);
                goto LAB_006c31e0;
              }
              uVar8 = 4;
              piVar10 = &local_1a8;
              if (4 < local_574) {
                if (local_574 == 5) {
                  uVar8 = 5;
                }
                else {
                  if (local_574 == 6) {
                    uVar8 = 5;
                    local_574 = 0;
                  }
                  else {
                    local_574 = local_574 - 7;
                    uVar8 = 6;
                  }
                  piVar10 = &local_1a0;
                }
              }
              iVar9 = FUN_006c8e88();
              puVar17 = (ushort *)(iVar9 + 0x81a);
              *puVar17 = 0;
              *(undefined4 *)(iVar9 + 0x790) = 0;
              puVar5 = (undefined4 *)(iVar16 + 0x794 + uVar8 * 0xc);
              uVar3 = *puVar5;
              uVar13 = ~uVar8 + (uint)*puVar11;
              uVar4 = puVar5[1];
              uVar6 = puVar5[2];
              *puVar17 = (ushort)uVar13;
              FUN_01bed4e2(auStack_d8,uVar8 * 0xb0 + iVar16,0xb0);
              if (0xb < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,uVar13,0xb,&DAT_01d2ff10);
              }
              FUN_01bed4e2(iVar9 + 0x794,iVar16 + 0x794 + (uVar8 + 1) * 0xc,uVar13 * 0xc);
              FUN_01bed4e2(iVar9,(uVar8 + 1) * 0xb0 + iVar16,uVar13 * 0xb0);
              *puVar11 = (ushort)uVar8;
              local_198 = uVar3;
              local_194 = uVar4;
              local_190 = uVar6;
              FUN_01bed4e2(auStack_188,auStack_d8,0xb0);
              uVar13 = (uint)*puVar17;
              iVar14 = uVar13 + 1;
              if (0xb < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,iVar14,0xc,&DAT_01d2ff20);
              }
              if (uVar1 - uVar8 != iVar14) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
              }
              FUN_01bed4e2(iVar9 + 0x820,iVar16 + uVar8 * 4 + 0x824,iVar14 * 4);
              uVar8 = 0;
              do {
                iVar14 = *(int *)(iVar9 + 0x820 + uVar8 * 4);
                *(short *)(iVar14 + 0x818) = (short)uVar8;
                *(int *)(iVar14 + 0x790) = iVar9;
                if (uVar13 <= uVar8) break;
                uVar8 = uVar8 + 1;
              } while (uVar8 <= uVar13);
              FUN_01bed4e2(&local_268,&local_198,0xc0);
              iVar14 = *piVar10;
              local_1a8 = iVar16;
              local_1a4 = uVar15 + 1;
              local_1a0 = iVar9;
              local_19c = uVar15 + 1;
              FUN_01bed4e2(&local_198,uVar12,0xb0);
              FUN_006b2774(iVar14,local_574,&local_324,&local_198,local_57c);
              local_56c = local_264;
              iVar14 = local_268;
              local_570 = local_260;
              FUN_01bed4e2(auStack_3d8,local_25c,0xb4);
              uVar8 = local_19c;
              uVar15 = local_1a4;
              iVar9 = local_1a8;
              if (iVar14 == -0x80000000) goto LAB_006c31e0;
              local_57c = local_1a0;
              FUN_01bed4e2(auStack_490,auStack_3d8,0xb4);
              iVar16 = *(int *)(iVar9 + 0x790);
            } while (iVar16 != 0);
          }
          local_260 = local_570;
          local_264 = local_56c;
          local_268 = iVar14;
          FUN_01bed4e2(local_25c,auStack_490,0xb4);
          local_1a0 = local_57c;
          iVar16 = *param_2;
          local_1a8 = iVar9;
          local_1a4 = uVar15;
          local_19c = uVar8;
          if (iVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fee0);
          }
          uVar15 = param_2[1];
          iVar9 = FUN_006c8e88();
          *(undefined2 *)(iVar9 + 0x81a) = 0;
          *(int *)(iVar9 + 0x820) = iVar16;
          *(undefined4 *)(iVar9 + 0x790) = 0;
          if (0xfffffffe < uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d305e8);
          }
          *(int *)(iVar16 + 0x790) = iVar9;
          *(undefined2 *)(iVar16 + 0x818) = 0;
          uVar12 = (uint)auStack_490 | 4;
          *param_2 = iVar9;
          param_2[1] = uVar15 + 1;
          FUN_01bed4e2(&local_198,uVar12,0xb0);
          if (uVar8 != uVar15) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
          }
          *(int *)(iVar9 + 0x794) = iVar14;
          *(int *)(iVar9 + 0x798) = local_56c;
          *(int *)(iVar9 + 0x79c) = local_570;
          *(undefined2 *)(iVar9 + 0x81a) = 1;
          FUN_01bed4e2(iVar9,uVar12,0xb0);
          *(int *)(iVar9 + 0x824) = local_57c;
          *(undefined2 *)(local_57c + 0x818) = 1;
          *(int *)(local_57c + 0x790) = iVar9;
        }
      }
    }
LAB_006c31e0:
    param_2[2] = param_2[2] + 1;
    *(undefined4 *)(param_1 + 0x10) = 0x80000006;
    return;
  }
  local_264 = iVar14;
LAB_006c2b74:
  iVar9 = (int)param_2 * 0xb0 + local_264;
  FUN_01bed4e2(param_1,iVar9,0xb0);
  FUN_01bed4e2(iVar9,param_4,0xb0);
  return;
}

