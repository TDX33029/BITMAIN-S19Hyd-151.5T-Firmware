// FUN_006a9ff8 @ 006a9ff8 size=2240 calls_out=13 calls_in=1
// strings: 

void FUN_006a9ff8(int *param_1,int param_2)

{
  ushort uVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  undefined4 uVar13;
  int *piVar14;
  ushort *puVar15;
  int iVar16;
  undefined4 uVar17;
  ushort *puVar18;
  int iVar19;
  uint uVar20;
  int local_314;
  uint local_30c;
  uint local_308;
  uint local_300;
  int local_2fc;
  uint local_2f8;
  int *local_2f4;
  int local_2f0 [2];
  int *local_2e8;
  undefined1 auStack_2e0 [112];
  undefined1 auStack_270 [108];
  int local_204;
  int local_200;
  int local_1fc;
  undefined1 auStack_1f8 [104];
  int local_190;
  int local_18c;
  int local_188;
  undefined1 auStack_184 [76];
  int local_138;
  int local_118;
  uint local_114;
  int local_110;
  uint local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined4 local_100;
  undefined1 auStack_f8 [104];
  int local_90 [2];
  int *local_88;
  
  uVar20 = *(uint *)(param_2 + 0x54);
  uVar13 = 0;
  if ((int)uVar20 < 0) {
LAB_006aa014:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar13,uVar20);
  }
  uVar17 = *(undefined4 *)(param_2 + 0x50);
  if (uVar20 == 0) {
    iVar3 = 1;
    local_30c = 0;
  }
  else {
    uVar13 = 1;
    iVar3 = FUN_01298504(uVar20,1);
    if (iVar3 == 0) goto LAB_006aa014;
    local_30c = uVar20;
  }
  FUN_01bed4e2(iVar3,uVar17,uVar20);
  piVar14 = param_1 + 0x13;
  iVar4 = *piVar14;
  if (iVar4 != 0) {
    iVar6 = param_1[0x14];
    do {
      uVar1 = *(ushort *)(iVar4 + 0x502);
      iVar16 = iVar4 + 0x47c;
      piVar10 = (int *)&DAT_ffffffff;
      iVar19 = (int)(uint)uVar1 * 0xc;
      do {
        if (iVar19 == 0) {
          piVar10 = (int *)(uint)uVar1;
          goto LAB_006aa11c;
        }
        uVar11 = *(uint *)(iVar16 + 8);
        uVar12 = uVar11;
        if (uVar20 < uVar11) {
          uVar12 = uVar20;
        }
        iVar5 = FUN_01bed842(iVar3,*(undefined4 *)(iVar16 + 4),uVar12);
        if (iVar5 == 0) {
          iVar5 = uVar20 - uVar11;
        }
        iVar19 = iVar19 + -0xc;
        piVar10 = (int *)((int)piVar10 + 1);
        iVar16 = iVar16 + 0xc;
      } while ((char)((0 < iVar5) - (iVar5 < 0)) == '\x01');
      if (0 < iVar5 == iVar5 < 0) {
        FUN_019bb7e0(local_30c,iVar3);
        piVar14 = piVar10;
        iVar3 = iVar4;
        goto LAB_006aa158;
      }
LAB_006aa11c:
      if (iVar6 == 0) goto LAB_006aa260;
      iVar6 = iVar6 + -1;
      iVar4 = *(int *)(iVar4 + (int)piVar10 * 4 + 0x508);
    } while( true );
  }
  iVar4 = 0;
  piVar10 = param_1;
  goto LAB_006aa198;
LAB_006aa260:
  if (local_30c == 0x80000000) {
LAB_006aa158:
    iVar3 = (int)piVar14 * 0x68 + iVar3;
    FUN_01bed4e2(&local_190,iVar3,0x68);
    FUN_01bed4e2(iVar3,param_2,0x68);
    if (local_138 == -0x80000000) {
      return;
    }
    FUN_006aaa2c(&local_190);
    return;
  }
LAB_006aa198:
  local_2f0[1] = 0;
  local_300 = local_30c;
  local_2fc = iVar3;
  local_2f8 = uVar20;
  local_2f4 = piVar14;
  local_2f0[0] = iVar4;
  local_2e8 = piVar10;
  if (iVar4 == 0) {
    iVar3 = FUN_0134c0c0();
    *(undefined4 *)(iVar3 + 0x478) = 0;
    *(undefined2 *)(iVar3 + 0x502) = 0;
    *piVar14 = iVar3;
    param_1[0x14] = 0;
    *(undefined2 *)(iVar3 + 0x502) = 1;
    *(uint *)(iVar3 + 0x47c) = local_300;
    *(int *)(iVar3 + 0x480) = local_2fc;
    *(uint *)(iVar3 + 0x484) = local_2f8;
    FUN_01bed4e2(iVar3,param_2,0x68);
  }
  else {
    puVar15 = (ushort *)(iVar4 + 0x502);
    if (*puVar15 < 0xb) {
      FUN_006b2494(&local_190,local_2f0,&local_300,param_2);
    }
    else {
      uVar20 = 4;
      bVar2 = false;
      if (&SUB_00000004 < piVar10) {
        if (piVar10 == (int *)&DAT_00000005) {
          uVar20 = 5;
        }
        else {
          if (piVar10 == (int *)&DAT_00000006) {
            uVar20 = 5;
            piVar10 = (int *)0x0;
          }
          else {
            piVar10 = (int *)((int)piVar10 + -7);
            uVar20 = 6;
          }
          bVar2 = true;
        }
      }
      local_30c = FUN_0134c0c0();
      *(undefined2 *)(local_30c + 0x502) = 0;
      *(undefined4 *)(local_30c + 0x478) = 0;
      piVar9 = (int *)(iVar4 + 0x47c + uVar20 * 0xc);
      local_314 = *piVar9;
      uVar12 = ~uVar20 + (uint)*puVar15;
      iVar3 = piVar9[1];
      iVar6 = piVar9[2];
      *(undefined2 *)(local_30c + 0x502) = (short)uVar12;
      FUN_01bed4e2(auStack_2e0,uVar20 * 0x68 + iVar4,0x68);
      if (0xb < uVar12) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar12,0xb,&DAT_01d2ff10);
      }
      FUN_01bed4e2(local_30c + 0x47c,iVar4 + 0x47c + (uVar20 + 1) * 0xc,uVar12 * 0xc);
      FUN_01bed4e2(local_30c,(uVar20 + 1) * 0x68 + iVar4,uVar12 * 0x68);
      *puVar15 = (ushort)uVar20;
      FUN_01bed4e2((uint)&local_108 | 4,auStack_2e0,0x68);
      local_190 = local_314;
      local_18c = iVar3;
      local_188 = iVar6;
      FUN_01bed4e2(auStack_184,&local_108,0x6c);
      local_10c = 0;
      local_114 = 0;
      local_90[1] = 0;
      local_90[0] = local_30c;
      if (!bVar2) {
        local_90[0] = iVar4;
      }
      local_118 = iVar4;
      local_110 = local_30c;
      local_88 = piVar10;
      FUN_006b2494(&local_108,local_90,&local_300,param_2);
      FUN_01bed4e2(auStack_270,auStack_184,0x6c);
      if (local_314 != -0x80000000) {
        FUN_01bed4e2(auStack_2e0,auStack_270,0x6c);
        iVar19 = *(int *)(iVar4 + 0x478);
        if (iVar19 == 0) {
          uVar20 = 0;
        }
        else {
          uVar20 = 0;
          do {
            local_204 = local_314;
            local_308 = (uint)*(ushort *)(iVar4 + 0x500);
            local_200 = iVar3;
            local_1fc = iVar6;
            FUN_01bed4e2(auStack_1f8,(uint)auStack_2e0 | 4,0x68);
            puVar15 = (ushort *)(iVar19 + 0x502);
            uVar1 = *puVar15;
            if (uVar1 < 0xb) {
              FUN_006b2b2c(iVar19,local_308,&local_204,auStack_1f8,local_30c);
              goto LAB_006aa7d4;
            }
            uVar12 = 4;
            piVar10 = &local_118;
            if (4 < local_308) {
              if (local_308 == 5) {
                uVar12 = 5;
              }
              else {
                if (local_308 == 6) {
                  uVar12 = 5;
                  local_308 = 0;
                }
                else {
                  local_308 = local_308 - 7;
                  uVar12 = 6;
                }
                piVar10 = &local_110;
              }
            }
            iVar3 = FUN_006c8e28();
            puVar18 = (ushort *)(iVar3 + 0x502);
            *puVar18 = 0;
            *(undefined4 *)(iVar3 + 0x478) = 0;
            puVar7 = (undefined4 *)(iVar19 + 0x47c + uVar12 * 0xc);
            uVar13 = *puVar7;
            uVar11 = ~uVar12 + (uint)*puVar15;
            uVar17 = puVar7[1];
            uVar8 = puVar7[2];
            *puVar18 = (ushort)uVar11;
            FUN_01bed4e2(local_90,uVar12 * 0x68 + iVar19,0x68);
            if (0xb < uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,uVar11,0xb,&DAT_01d2ff10);
            }
            FUN_01bed4e2(iVar3 + 0x47c,iVar19 + 0x47c + (uVar12 + 1) * 0xc,uVar11 * 0xc);
            FUN_01bed4e2(iVar3,(uVar12 + 1) * 0x68 + iVar19,uVar11 * 0x68);
            *puVar15 = (ushort)uVar12;
            local_108 = uVar13;
            local_104 = uVar17;
            local_100 = uVar8;
            FUN_01bed4e2(auStack_f8,local_90,0x68);
            uVar11 = (uint)*puVar18;
            iVar4 = uVar11 + 1;
            if (0xb < uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(0,iVar4,0xc,&DAT_01d2ff20);
            }
            if (uVar1 - uVar12 != iVar4) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
            }
            uVar20 = uVar20 + 1;
            FUN_01bed4e2(iVar3 + 0x508,iVar19 + uVar12 * 4 + 0x50c,iVar4 * 4);
            uVar12 = 0;
            do {
              iVar4 = *(int *)(iVar3 + 0x508 + uVar12 * 4);
              *(short *)(iVar4 + 0x500) = (short)uVar12;
              *(int *)(iVar4 + 0x478) = iVar3;
              if (uVar11 <= uVar12) break;
              uVar12 = uVar12 + 1;
            } while (uVar12 <= uVar11);
            FUN_01bed4e2(&local_190,&local_108,0x78);
            local_118 = iVar19;
            local_114 = uVar20;
            local_110 = iVar3;
            local_10c = uVar20;
            FUN_006b2b2c(*piVar10,local_308,&local_204,auStack_1f8,local_30c);
            iVar6 = local_188;
            iVar3 = local_18c;
            local_314 = local_190;
            FUN_01bed4e2(auStack_270,auStack_184,0x6c);
            iVar4 = local_118;
            if (local_314 == -0x80000000) goto LAB_006aa7d4;
            local_30c = local_110;
            FUN_01bed4e2(auStack_2e0,auStack_270,0x6c);
            iVar19 = *(int *)(iVar4 + 0x478);
          } while (iVar19 != 0);
        }
        local_190 = local_314;
        local_18c = iVar3;
        local_188 = iVar6;
        FUN_01bed4e2(auStack_184,auStack_2e0,0x6c);
        iVar19 = *piVar14;
        local_110 = local_30c;
        local_118 = iVar4;
        local_114 = uVar20;
        local_10c = uVar20;
        if (iVar19 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d2fee0);
        }
        uVar12 = param_1[0x14];
        iVar4 = FUN_006c8e28();
        *(undefined2 *)(iVar4 + 0x502) = 0;
        *(int *)(iVar4 + 0x508) = iVar19;
        *(undefined4 *)(iVar4 + 0x478) = 0;
        if (0xfffffffe < uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d305e8);
        }
        uVar11 = (uint)auStack_2e0 | 4;
        *(undefined2 *)(iVar19 + 0x500) = 0;
        *(int *)(iVar19 + 0x478) = iVar4;
        *piVar14 = iVar4;
        param_1[0x14] = uVar12 + 1;
        FUN_01bed4e2(&local_108,uVar11,0x68);
        if (uVar20 != uVar12) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec(&DAT_00533a41,0x30,&DAT_01d305c8);
        }
        *(int *)(iVar4 + 0x480) = iVar3;
        *(int *)(iVar4 + 0x47c) = local_314;
        *(int *)(iVar4 + 0x484) = iVar6;
        *(undefined2 *)(iVar4 + 0x502) = 1;
        FUN_01bed4e2(iVar4,uVar11,0x68);
        *(uint *)(iVar4 + 0x50c) = local_30c;
        *(undefined2 *)(local_30c + 0x500) = 1;
        *(int *)(local_30c + 0x478) = iVar4;
      }
    }
  }
LAB_006aa7d4:
  param_1[0x15] = param_1[0x15] + 1;
  return;
}

