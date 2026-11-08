// FUN_01494648 @ 01494648 size=2144 calls_out=13 calls_in=5
// strings: assertion failed: edge.height == self.node.height - 1

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01494648(undefined4 *param_1,int *param_2,int *param_3,undefined4 param_4)

{
  ushort uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *unaff_r5;
  bool bVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  ushort *puVar15;
  int iVar16;
  uint uVar17;
  uint uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  int local_af8;
  int local_af0;
  int local_aec;
  int iStack_ae8;
  int iStack_ae4;
  int *local_ae0;
  int local_adc [2];
  int *local_ad4;
  undefined1 auStack_ad0 [376];
  int local_958 [2];
  int *local_950;
  undefined4 local_7e0;
  undefined4 uStack_7dc;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined1 auStack_7d0 [376];
  undefined4 local_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 local_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  int local_638 [94];
  undefined4 local_4c0;
  undefined4 local_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  int local_4b0;
  undefined1 auStack_4ac [372];
  int local_338;
  int local_334;
  int local_330;
  int local_32c;
  int local_328;
  int local_324;
  int local_320;
  undefined1 auStack_318 [376];
  undefined4 local_1a0;
  undefined4 uStack_19c;
  undefined4 uStack_198;
  
  iVar13 = *param_2;
  if (iVar13 == 0) {
    local_aec = *param_3;
    iVar14 = param_3[1];
    iVar16 = param_3[2];
    iVar13 = 0;
LAB_014946dc:
    if (local_aec != -0x80000000) {
      local_adc[1] = 0;
      iStack_ae8 = iVar14;
      iStack_ae4 = iVar16;
      local_ae0 = param_2;
      local_adc[0] = iVar13;
      local_ad4 = unaff_r5;
      FUN_01bed4e2(auStack_ad0,param_4,0x178);
      if (iVar13 == 0) {
        iVar13 = FUN_01adb6cc();
        *(undefined4 *)(&DAT_00001028 + iVar13) = 0;
        *(undefined2 *)(iVar13 + 0x10b2) = 0;
        *param_2 = iVar13;
        param_2[1] = 0;
        FUN_01bed4e2(&local_4c0,param_4,0x178);
        FUN_01ad2d98(&local_328,iVar13,&local_aec,&local_4c0);
      }
      else {
        FUN_01bed4e2(local_638,param_4,0x178);
        if (*(ushort *)(iVar13 + 0x10b2) < 0xb) {
          FUN_014894fc(&local_4c0,local_adc,&local_aec,param_4);
        }
        else {
          uVar17 = 4;
          bVar10 = false;
          if (&SUB_00000004 < unaff_r5) {
            if (unaff_r5 == (int *)&DAT_00000005) {
              uVar17 = 5;
            }
            else {
              if (unaff_r5 == (int *)&DAT_00000006) {
                uVar17 = 5;
                unaff_r5 = (int *)0x0;
              }
              else {
                unaff_r5 = (int *)((int)unaff_r5 + -7);
                uVar17 = 6;
              }
              bVar10 = true;
            }
          }
          local_af8 = FUN_01adb6cc();
          *(undefined4 *)(&DAT_00001028 + local_af8) = 0;
          *(undefined2 *)(local_af8 + 0x10b2) = 0;
          puVar8 = (undefined4 *)(iVar13 + 0x102c + uVar17 * 0xc);
          uVar2 = *puVar8;
          uVar9 = ~uVar17 + (uint)*(ushort *)(iVar13 + 0x10b2);
          uVar3 = puVar8[2];
          uVar12 = puVar8[1];
          *(short *)(local_af8 + 0x10b2) = (short)uVar9;
          FUN_01bed4e2(&local_1a0,uVar17 * 0x178 + iVar13,0x178);
          if (0xb < uVar9) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar9,0xb,&DAT_01d2ff10);
          }
          FUN_01bed4e2(local_af8 + 0x102c,iVar13 + 0x102c + (uVar17 + 1) * 0xc,uVar9 * 0xc);
          FUN_01bed4e2(local_af8,(uVar17 + 1) * 0x178 + iVar13,uVar9 * 0x178);
          *(short *)(iVar13 + 0x10b2) = (short)uVar17;
          FUN_01bed4e2((uint)&local_328 | 4,&local_1a0,0x178);
          local_4c0 = uVar2;
          local_4bc = uVar12;
          local_4b8 = uVar3;
          FUN_01bed4e2(&uStack_4b4,&local_328,0x17c);
          local_32c = 0;
          local_334 = 0;
          local_958[1] = 0;
          local_958[0] = local_af8;
          if (!bVar10) {
            local_958[0] = iVar13;
          }
          local_950 = unaff_r5;
          local_338 = iVar13;
          local_330 = local_af8;
          FUN_014894fc(&local_328,local_958,&local_aec,param_4);
          local_af0 = local_4b0;
          local_658 = local_4c0;
          uStack_654 = local_4bc;
          uStack_650 = local_4b8;
          uStack_64c = uStack_4b4;
          FUN_01bed4e2(auStack_7d0,auStack_4ac,0x174);
          if (local_af0 != 8) {
            local_7e0 = local_658;
            uStack_7dc = uStack_654;
            uStack_7d8 = uStack_650;
            uStack_7d4 = uStack_64c;
            FUN_01bed4e2(local_958,auStack_7d0,0x174);
            iVar14 = *(int *)(&DAT_00001028 + iVar13);
            if (iVar14 == 0) {
              iVar11 = 0;
              iVar16 = 0;
            }
            else {
              iVar16 = 0;
              iVar11 = 0;
              do {
                uVar17 = (uint)*(ushort *)(&DAT_000010b0 + iVar13);
                local_648 = local_7e0;
                uStack_644 = uStack_7dc;
                uStack_640 = uStack_7d8;
                local_638[0] = local_af0;
                FUN_01bed4e2((uint)local_638 | 4,local_958,0x174);
                if (iVar11 != iVar16) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec("assertion failed: edge.height == self.node.height - 1",0x35,
                               &DAT_01d2ff30);
                }
                puVar15 = (ushort *)(iVar14 + 0x10b2);
                uVar1 = *puVar15;
                if (uVar1 < 0xb) {
                  FUN_01bed4e2(&local_4c0,local_638,0x178);
                  FUN_014895e4(iVar14,uVar17,&local_648,&local_4c0,local_af8);
                  goto LAB_014949ac;
                }
                uVar9 = 4;
                piVar4 = &local_338;
                if (4 < uVar17) {
                  if (uVar17 == 5) {
                    uVar9 = 5;
                    piVar4 = &local_338;
                  }
                  else {
                    if (uVar17 == 6) {
                      uVar17 = 0;
                      uVar9 = 5;
                    }
                    else {
                      uVar17 = uVar17 - 7;
                      uVar9 = 6;
                    }
                    piVar4 = &local_330;
                  }
                }
                iVar13 = FUN_01adb62c();
                *(undefined4 *)(&DAT_00001028 + iVar13) = 0;
                *(undefined2 *)(iVar13 + 0x10b2) = 0;
                piVar6 = (int *)(iVar14 + 0x102c + uVar9 * 0xc);
                iVar11 = *piVar6;
                uVar18 = ~uVar9 + (uint)*puVar15;
                iVar5 = piVar6[1];
                iVar7 = piVar6[2];
                *(short *)(iVar13 + 0x10b2) = (short)uVar18;
                FUN_01bed4e2(&local_1a0,uVar9 * 0x178 + iVar14,0x178);
                if (0xb < uVar18) {
                    /* WARNING: Subroutine does not return */
                  FUN_012faff4(0,uVar18,0xb,&DAT_01d2ff10);
                }
                FUN_01bed4e2(iVar13 + 0x102c,iVar14 + 0x102c + (uVar9 + 1) * 0xc,uVar18 * 0xc);
                FUN_01bed4e2(iVar13,(uVar9 + 1) * 0x178 + iVar14,uVar18 * 0x178);
                *puVar15 = (ushort)uVar9;
                local_328 = iVar11;
                local_324 = iVar5;
                local_320 = iVar7;
                FUN_01bed4e2(auStack_318,&local_1a0,0x178);
                uVar18 = (uint)*(ushort *)(iVar13 + 0x10b2);
                iVar11 = uVar18 + 1;
                if (0xb < uVar18) {
                    /* WARNING: Subroutine does not return */
                  FUN_012faff4(0,iVar11,0xc,&DAT_01d2ff20);
                }
                if (uVar1 - uVar9 != iVar11) {
                    /* WARNING: Subroutine does not return */
                  FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
                }
                FUN_01bed4e2(iVar13 + 0x10b8,iVar14 + uVar9 * 4 + 0x10bc,iVar11 * 4);
                uVar9 = 0;
                do {
                  iVar11 = *(int *)(iVar13 + 0x10b8 + uVar9 * 4);
                  *(int *)(&DAT_00001028 + iVar11) = iVar13;
                  *(short *)(&DAT_000010b0 + iVar11) = (short)uVar9;
                  if (uVar18 <= uVar9) break;
                  uVar9 = uVar9 + 1;
                } while (uVar9 <= uVar18);
                FUN_01bed4e2(&local_4c0,&local_328,0x188);
                iVar11 = *piVar4;
                local_338 = iVar14;
                local_334 = iVar16 + 1;
                local_330 = iVar13;
                local_32c = iVar16 + 1;
                FUN_01bed4e2(&local_328,local_638,0x178);
                FUN_014895e4(iVar11,uVar17,&local_648,&local_328,local_af8);
                local_af0 = local_4b0;
                local_658 = local_4c0;
                uStack_654 = local_4bc;
                uStack_650 = local_4b8;
                uStack_64c = uStack_4b4;
                FUN_01bed4e2(auStack_7d0,auStack_4ac,0x174);
                iVar11 = local_32c;
                iVar16 = local_334;
                iVar13 = local_338;
                if (local_af0 == 8) goto LAB_014949ac;
                local_af8 = local_330;
                local_7e0 = local_658;
                uStack_7dc = uStack_654;
                uStack_7d8 = uStack_650;
                uStack_7d4 = uStack_64c;
                FUN_01bed4e2(local_958,auStack_7d0,0x174);
                iVar14 = *(int *)(&DAT_00001028 + iVar13);
              } while (iVar14 != 0);
            }
            local_4c0 = local_7e0;
            local_4bc = uStack_7dc;
            local_4b8 = uStack_7d8;
            uStack_4b4 = uStack_7d4;
            local_4b0 = local_af0;
            FUN_01bed4e2(auStack_4ac,local_958,0x174);
            local_330 = local_af8;
            local_338 = iVar13;
            local_334 = iVar16;
            local_32c = iVar11;
            if (*param_2 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0cc(&DAT_01d2fee0);
            }
            uVar20 = FUN_01ad3824(*param_2,param_2[1]);
            *(undefined8 *)param_2 = uVar20;
            local_1a0 = local_7e0;
            uStack_19c = uStack_7dc;
            uStack_198 = uStack_7d8;
            local_328 = local_af0;
            FUN_01bed4e2((uint)&local_328 | 4,local_958,0x174);
            FUN_01ad36b4((int)uVar20,(int)((ulonglong)uVar20 >> 0x20),&local_1a0,&local_328,
                         local_af8,iVar11);
          }
        }
      }
LAB_014949ac:
      param_2[2] = param_2[2] + 1;
      *param_1 = 8;
      return;
    }
    unaff_r5 = param_2;
    iVar13 = iVar14;
  }
  else {
    iVar14 = param_3[1];
    iVar16 = param_3[2];
    iVar11 = param_2[1];
    while( true ) {
      uVar19 = FUN_01ad4ea4(iVar13,iVar14,iVar16);
      unaff_r5 = (int *)(uVar19 >> 0x20);
      if ((uVar19 & 1) == 0) break;
      if (iVar11 == 0) {
        local_aec = *param_3;
        goto LAB_014946dc;
      }
      iVar11 = iVar11 + -1;
      iVar13 = *(int *)(iVar13 + (int)unaff_r5 * 4 + 0x10b8);
    }
    FUN_019bb7e0(*param_3,iVar14);
  }
  iVar13 = (int)unaff_r5 * 0x178 + iVar13;
  FUN_01bed4e2(param_1,iVar13,0x178);
  FUN_01bed4e2(iVar13,param_4,0x178);
  return;
}

