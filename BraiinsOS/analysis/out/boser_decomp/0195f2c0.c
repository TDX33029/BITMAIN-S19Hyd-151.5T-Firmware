// FUN_0195f2c0 @ 0195f2c0 size=1892 calls_out=9 calls_in=5
// strings: assertion failed: edge.height == self.node.height - 1

void FUN_0195f2c0(undefined4 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  ushort *puVar11;
  ushort *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int local_5a8;
  int local_58c;
  uint local_588;
  uint local_584;
  undefined4 uStack_580;
  undefined4 local_57c;
  undefined4 local_578;
  undefined4 local_574;
  int local_570;
  int iStack_56c;
  uint uStack_568;
  uint uStack_564;
  int local_560;
  undefined1 auStack_55c [252];
  int local_460;
  uint local_45c;
  uint local_458;
  int local_368;
  int iStack_364;
  uint uStack_360;
  uint uStack_35c;
  int local_358;
  int iStack_354;
  uint uStack_350;
  uint uStack_34c;
  int local_258;
  int local_254;
  uint local_250;
  uint local_24c;
  int local_248;
  undefined1 auStack_244 [248];
  int local_14c;
  uint local_148;
  int local_144;
  uint local_140;
  int local_138;
  int local_134;
  int local_130;
  int iStack_12c;
  uint uStack_128;
  uint uStack_124;
  undefined1 auStack_120 [252];
  
  iVar10 = *param_2;
  if (iVar10 == 0) {
    uStack_580 = *param_3;
    local_57c = param_3[1];
    local_578 = param_3[2];
    local_574 = param_3[3];
  }
  else {
    FUN_0194f848(&local_258,iVar10,param_2[1],param_3);
    uVar5 = local_250;
    iVar7 = local_254;
    if (local_258 == 0) {
      iVar10 = local_254 + local_24c * 0xfc + 0xb4;
      FUN_01bed4e2(param_1,iVar10,0xfc);
      FUN_01bed4e2(iVar10,param_4,0xfc);
      return;
    }
    uStack_580 = *param_3;
    local_57c = param_3[1];
    local_578 = param_3[2];
    local_574 = param_3[3];
    if (local_254 != 0) {
      local_588 = local_250;
      local_584 = local_24c;
      puVar11 = (ushort *)(local_254 + 0xb8a);
      local_58c = local_254;
      if (*puVar11 < 0xb) {
        FUN_0194f160(&local_258,&local_58c,&uStack_580,param_4);
      }
      else {
        uVar8 = 4;
        bVar2 = false;
        uVar15 = local_24c;
        if (4 < local_24c) {
          if (local_24c == 5) {
            uVar8 = 5;
          }
          else {
            if (local_24c == 6) {
              uVar8 = 5;
              uVar15 = 0;
            }
            else {
              uVar15 = local_24c - 7;
              uVar8 = 6;
            }
            bVar2 = true;
          }
        }
        local_5a8 = FUN_0195b438();
        *(undefined2 *)(local_5a8 + 0xb8a) = 0;
        *(undefined4 *)(local_5a8 + 0xb0) = 0;
        uVar9 = ~uVar8 + (uint)*puVar11;
        *(undefined2 *)(local_5a8 + 0xb8a) = (short)uVar9;
        FUN_01bed4e2(&local_570,iVar7 + uVar8 * 0x10,0x10);
        FUN_01bed4e2(&local_258,iVar7 + 0xb4 + uVar8 * 0xfc,0xfc);
        if (0xb < uVar9) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar9,0xb,&DAT_01d2ff10);
        }
        FUN_01bed4e2(local_5a8,iVar7 + (uVar8 + 1) * 0x10,uVar9 * 0x10);
        FUN_01bed4e2(local_5a8 + 0xb4,iVar7 + 0xb4 + (uVar8 + 1) * 0xfc,uVar9 * 0xfc);
        iVar14 = local_258;
        *puVar11 = (ushort)uVar8;
        local_358 = local_570;
        iStack_354 = iStack_56c;
        uStack_350 = uStack_568;
        uStack_34c = uStack_564;
        FUN_01bed4e2(auStack_120,(uint)&local_258 | 4,0xf8);
        if (bVar2) {
          local_460 = local_5a8;
          local_45c = 0;
        }
        else {
          local_460 = iVar7;
          local_45c = uVar5;
        }
        local_458 = uVar15;
        FUN_0194f160(&local_258,&local_460,&uStack_580,param_4);
        if (iVar14 != -0x80000000) {
          local_570 = local_358;
          iStack_56c = iStack_354;
          uStack_568 = uStack_350;
          uStack_564 = uStack_34c;
          local_560 = iVar14;
          FUN_01bed4e2(auStack_55c,auStack_120,0xf8);
          iVar14 = *(int *)(iVar7 + 0xb0);
          if (iVar14 == 0) {
            uVar8 = 0;
          }
          else {
            uVar8 = 0;
            do {
              uVar15 = (uint)*(ushort *)(iVar7 + 0xb88);
              FUN_01bed4e2(&local_358,&local_560,0xfc);
              if (uVar8 != uVar5) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0ec("assertion failed: edge.height == self.node.height - 1",0x35,
                             &DAT_01d2ff30);
              }
              puVar11 = (ushort *)(iVar14 + 0xb8a);
              uVar1 = *puVar11;
              if (uVar1 < 0xb) {
                FUN_0194f25c(iVar14,uVar15,&local_570,&local_358,local_5a8);
                goto LAB_0195f57c;
              }
              piVar6 = &local_134;
              uVar9 = 4;
              if (4 < uVar15) {
                if (uVar15 == 5) {
                  uVar9 = 5;
                }
                else {
                  piVar6 = &local_138;
                  if (uVar15 == 6) {
                    uVar15 = 0;
                    uVar9 = 5;
                  }
                  else {
                    uVar15 = uVar15 - 7;
                    uVar9 = 6;
                  }
                }
              }
              iVar10 = FUN_0195b458();
              puVar12 = (ushort *)(iVar10 + 0xb8a);
              *puVar12 = 0;
              *(undefined4 *)(iVar10 + 0xb0) = 0;
              uVar8 = ~uVar9 + (uint)*puVar11;
              *puVar12 = (ushort)uVar8;
              FUN_01bed4e2(&local_130,iVar14 + uVar9 * 0x10,0x10);
              FUN_01bed4e2(auStack_120,iVar14 + 0xb4 + uVar9 * 0xfc,0xfc);
              if (0xb < uVar8) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,uVar8,0xb,&DAT_01d2ff10);
              }
              FUN_01bed4e2(iVar10,iVar14 + (uVar9 + 1) * 0x10,uVar8 * 0x10);
              FUN_01bed4e2(iVar10 + 0xb4,iVar14 + 0xb4 + (uVar9 + 1) * 0xfc,uVar8 * 0xfc);
              *puVar11 = (ushort)uVar9;
              local_258 = local_130;
              local_254 = iStack_12c;
              local_250 = uStack_128;
              local_24c = uStack_124;
              FUN_01bed4e2(&local_248,auStack_120,0xfc);
              uVar13 = (uint)*puVar12;
              iVar7 = uVar13 + 1;
              if (0xb < uVar13) {
                    /* WARNING: Subroutine does not return */
                FUN_012faff4(0,iVar7,0xc,&DAT_01d2ff20);
              }
              if (uVar1 - uVar9 != iVar7) {
                    /* WARNING: Subroutine does not return */
                FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
              }
              uVar8 = uVar5 + 1;
              FUN_01bed4e2(iVar10 + 0xb8c,iVar14 + uVar9 * 4 + 0xb90,iVar7 * 4);
              iVar3 = local_248;
              uVar5 = 0;
              do {
                iVar7 = *(int *)(iVar10 + 0xb8c + uVar5 * 4);
                *(short *)(iVar7 + 0xb88) = (short)uVar5;
                *(int *)(iVar7 + 0xb0) = iVar10;
                if (uVar13 <= uVar5) break;
                uVar5 = uVar5 + 1;
              } while (uVar5 <= uVar13);
              local_130 = local_258;
              iStack_12c = local_254;
              uStack_128 = local_250;
              uStack_124 = local_24c;
              FUN_01bed4e2(auStack_120,auStack_244,0xf8);
              local_138 = iVar10;
              local_134 = iVar14;
              FUN_0194f25c(*piVar6,uVar15,&local_570,&local_358,local_5a8);
              local_368 = local_130;
              iStack_364 = iStack_12c;
              uStack_360 = uStack_128;
              uStack_35c = uStack_124;
              FUN_01bed4e2(&local_460,auStack_120,0xf8);
              iVar7 = local_134;
              local_5a8 = local_138;
              if (iVar3 == -0x80000000) goto LAB_0195f57c;
              local_570 = local_368;
              iStack_56c = iStack_364;
              uStack_568 = uStack_360;
              uStack_564 = uStack_35c;
              local_560 = iVar3;
              FUN_01bed4e2(auStack_55c,&local_460,0xf8);
              iVar14 = *(int *)(iVar7 + 0xb0);
              uVar5 = uVar8;
            } while (iVar14 != 0);
            iVar10 = *param_2;
          }
          FUN_01bed4e2(&local_258,&local_570,0x10c);
          local_14c = iVar7;
          local_148 = uVar5;
          local_144 = local_5a8;
          local_140 = uVar8;
          if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d2fee0);
          }
          uVar5 = param_2[1];
          piVar6 = (int *)FUN_0195b458();
          *(undefined2 *)((int)piVar6 + 0xb8a) = 0;
          piVar6[0x2e3] = iVar10;
          piVar6[0x2c] = 0;
          if (0xfffffffe < uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0cc(&DAT_01d305e8);
          }
          *(undefined2 *)(iVar10 + 0xb88) = 0;
          *(int **)(iVar10 + 0xb0) = piVar6;
          *param_2 = (int)piVar6;
          param_2[1] = uVar5 + 1;
          if (uVar8 != uVar5) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
          }
          *(undefined2 *)((int)piVar6 + 0xb8a) = 1;
          *piVar6 = local_570;
          piVar6[1] = iStack_56c;
          piVar6[2] = uStack_568;
          piVar6[3] = uStack_564;
          FUN_01bed4e2(piVar6 + 0x2d,&local_560,0xfc);
          piVar6[0x2e4] = local_5a8;
          *(int **)(local_5a8 + 0xb0) = piVar6;
          *(undefined2 *)(local_5a8 + 0xb88) = 1;
        }
      }
      goto LAB_0195f57c;
    }
  }
  puVar4 = (undefined4 *)FUN_0195b438();
  *(undefined2 *)((int)puVar4 + 0xb8a) = 1;
  puVar4[0x2c] = 0;
  *param_2 = (int)puVar4;
  param_2[1] = 0;
  *puVar4 = uStack_580;
  puVar4[1] = local_57c;
  puVar4[2] = local_578;
  puVar4[3] = local_574;
  FUN_01bed4e2(puVar4 + 0x2d,param_4,0xfc);
LAB_0195f57c:
  param_2[2] = param_2[2] + 1;
  *param_1 = 0x80000000;
  return;
}

