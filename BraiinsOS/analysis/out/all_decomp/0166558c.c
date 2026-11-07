// FUN_0166558c @ 0166558c size=1136 calls_out=9 calls_in=4
// strings: provided length would overflow after adjustmentLengthDelimitedCodecError

void FUN_0166558c(undefined4 *param_1,int *param_2,int *param_3)

{
  undefined4 **ppuVar1;
  uint *puVar2;
  undefined4 **ppuVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 **ppuVar6;
  undefined1 *puVar7;
  uint **ppuVar8;
  undefined4 **ppuVar9;
  int iVar10;
  undefined4 **ppuVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined4 **ppuVar15;
  uint uVar16;
  undefined4 **ppuVar17;
  bool bVar18;
  uint local_60;
  uint local_5c;
  int local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 **local_44;
  uint **local_40;
  undefined4 **local_3c;
  uint **local_38;
  code *local_34;
  undefined4 **local_30;
  uint local_2c;
  undefined1 auStack_28 [4];
  
  if (param_2[7] == 1) {
    local_5c = param_2[8];
    if ((uint)param_3[1] < local_5c) goto LAB_01665950;
  }
  else {
    local_40 = (uint **)param_2[3];
    ppuVar11 = (undefined4 **)param_2[4];
    puVar2 = &local_60;
    ppuVar6 = (undefined4 **)param_2[1];
    uVar14 = 0;
    ppuVar3 = (undefined4 **)((int)local_40 + (int)ppuVar11);
    iVar12 = *param_2;
    ppuVar17 = (undefined4 **)param_3[1];
    ppuVar15 = ppuVar3;
    if (ppuVar3 < ppuVar6) {
      ppuVar15 = ppuVar6;
    }
    if (iVar12 == 0) {
      ppuVar15 = ppuVar3;
    }
    if (ppuVar15 <= ppuVar17) {
      if (ppuVar17 < ppuVar11) goto LAB_01665990;
      if ((char)param_2[6] == '\0') {
        local_2c = 0;
        local_30 = (undefined4 **)0x0;
        if (local_40 < (undefined4 **)0x9) {
          local_3c = (undefined4 **)0x0;
          if (ppuVar11 <= ppuVar17) {
            local_3c = (undefined4 **)((int)ppuVar17 - (int)ppuVar11);
          }
          if (local_3c < local_40) {
                    /* WARNING: Subroutine does not return */
            FUN_00f600c0(&local_40);
          }
          if (local_40 == (undefined4 **)0x0) {
            puVar4 = (uint *)0x0;
            ppuVar15 = (undefined4 **)(uint *)0x0;
          }
          else {
            iVar13 = *param_3;
            ppuVar8 = (uint **)&local_30;
            iVar10 = 0;
            do {
              ppuVar15 = (undefined4 **)((int)ppuVar17 - (int)ppuVar11);
              ppuVar1 = ppuVar11;
              if (ppuVar17 < ppuVar11) {
                ppuVar15 = (undefined4 **)0x0;
                ppuVar1 = ppuVar17;
              }
              if (iVar10 != 0) {
                ppuVar1 = ppuVar17;
              }
              if (iVar10 != 0) {
                ppuVar15 = (undefined4 **)0x0;
              }
              ppuVar9 = (undefined4 **)((int)ppuVar17 - (int)ppuVar1);
              if (local_40 < (undefined4 **)((int)ppuVar17 - (int)ppuVar1)) {
                ppuVar9 = local_40;
              }
              FUN_016dd1aa(ppuVar8,iVar13 + (int)ppuVar1,ppuVar9);
              if (ppuVar15 < ppuVar9) {
                local_40 = ppuVar9;
                local_3c = ppuVar15;
                    /* WARNING: Subroutine does not return */
                FUN_00f600c0(&local_40);
              }
              bVar18 = CARRY4((uint)ppuVar11,(uint)ppuVar9);
              ppuVar11 = (undefined4 **)((int)ppuVar11 + (int)ppuVar9);
              ppuVar8 = (uint **)((int)ppuVar8 + (int)ppuVar9);
              iVar10 = iVar10 + (uint)bVar18;
              local_40 = (uint **)((int)local_40 - (int)ppuVar9);
            } while (local_40 != (undefined4 **)0x0);
            puVar4 = (uint *)-(local_2c + (local_30 > (uint *)param_2[2]));
            ppuVar15 = local_30;
            if ((uint)(local_30 <= (uint *)param_2[2]) <= -local_2c) goto LAB_016657dc;
          }
          goto LAB_01665818;
        }
      }
      else if (local_40 < (undefined4 **)0x9) {
        local_3c = (undefined4 **)((int)ppuVar17 - (int)ppuVar11);
        if (ppuVar17 < ppuVar11) {
          local_3c = (undefined4 **)0x0;
        }
        local_2c = 0;
        local_30 = (undefined4 **)0x0;
        if (local_3c < local_40) {
                    /* WARNING: Subroutine does not return */
          FUN_00f600c0(&local_40);
        }
        if (local_40 != (undefined4 **)0x0) {
          iVar13 = *param_3;
          puVar7 = auStack_28 + -(int)local_40;
          iVar10 = 0;
          do {
            ppuVar15 = (undefined4 **)((int)ppuVar17 - (int)ppuVar11);
            ppuVar1 = ppuVar11;
            if (ppuVar17 < ppuVar11) {
              ppuVar15 = (undefined4 **)0x0;
              ppuVar1 = ppuVar17;
            }
            if (iVar10 != 0) {
              ppuVar1 = ppuVar17;
            }
            if (iVar10 != 0) {
              ppuVar15 = (undefined4 **)0x0;
            }
            ppuVar9 = (undefined4 **)((int)ppuVar17 - (int)ppuVar1);
            if (local_40 < (undefined4 **)((int)ppuVar17 - (int)ppuVar1)) {
              ppuVar9 = local_40;
            }
            FUN_016dd1aa(puVar7,iVar13 + (int)ppuVar1,ppuVar9);
            if (ppuVar15 < ppuVar9) {
              local_40 = ppuVar9;
              local_3c = ppuVar15;
                    /* WARNING: Subroutine does not return */
              FUN_00f600c0(&local_40);
            }
            bVar18 = CARRY4((uint)ppuVar11,(uint)ppuVar9);
            ppuVar11 = (undefined4 **)((int)ppuVar11 + (int)ppuVar9);
            puVar7 = puVar7 + (int)ppuVar9;
            iVar10 = iVar10 + (uint)bVar18;
            local_40 = (uint **)((int)local_40 - (int)ppuVar9);
          } while (local_40 != (undefined4 **)0x0);
        }
        uVar14 = (int)local_30 << 0x18 | ((uint)local_30 >> 8 & 0xff) << 0x10 |
                 ((uint)local_30 >> 0x10 & 0xff) << 8 | (uint)local_30 >> 0x18;
        ppuVar15 = (undefined4 **)
                   (local_2c << 0x18 | (local_2c >> 8 & 0xff) << 0x10 |
                    (local_2c >> 0x10 & 0xff) << 8 | local_2c >> 0x18);
        puVar4 = (uint *)-(uVar14 + (ppuVar15 > (uint *)param_2[2]));
        if ((uint)(ppuVar15 <= (uint *)param_2[2]) <= -uVar14) {
LAB_016657dc:
          FUN_016654c8(puVar2,0x15);
          goto LAB_016657e4;
        }
LAB_01665818:
        uVar14 = param_2[5];
        if ((int)uVar14 < 0) {
          puVar4 = (uint *)-uVar14;
          if (puVar4 <= ppuVar15) goto LAB_01665860;
        }
        else if (!CARRY4(uVar14,(uint)ppuVar15)) {
LAB_01665860:
          uVar14 = uVar14 + (int)ppuVar15;
          local_44 = ppuVar3;
          if (iVar12 != 0) {
            local_44 = ppuVar6;
          }
          if (ppuVar17 < local_44) {
            local_38 = (uint **)&local_30;
            local_34 = FUN_007883b8;
            local_3c = (undefined4 **)FUN_007883b8;
            local_40 = (uint **)&local_44;
            local_30 = ppuVar17;
                    /* WARNING: Subroutine does not return */
            FUN_00faa478(&DAT_00584155,&local_40,&DAT_018ad5a4);
          }
          FUN_00f5f804(param_3,local_44,puVar4);
          uVar5 = param_3[1];
          uVar16 = uVar14 - uVar5;
          if (uVar14 < uVar5) {
            uVar16 = 0;
          }
          if (param_3[2] - uVar5 < uVar16) {
            FUN_00f5f538(param_3);
          }
          puVar2 = &local_5c;
          local_60 = 1;
          goto LAB_016658ac;
        }
        FUN_015e79d4(puVar2,0x14,
                     "provided length would overflow after adjustmentLengthDelimitedCodecError",0x2f
                    );
LAB_016657e4:
        param_1[1] = local_60;
        param_1[2] = local_5c;
        *param_1 = 1;
        return;
      }
      FUN_00f60108(8,local_40);
LAB_01665990:
      local_40 = ppuVar11;
      local_3c = ppuVar17;
                    /* WARNING: Subroutine does not return */
      FUN_00f600c0(&local_40);
    }
LAB_016658ac:
    *puVar2 = uVar14;
    if (local_60 != 1) goto LAB_01665950;
    param_2[7] = 1;
    param_2[8] = local_5c;
    if ((uint)param_3[1] < local_5c) goto LAB_01665950;
  }
  FUN_00f5f8dc(&local_58,param_3,local_5c);
  if (local_58 != 0) {
    uVar5 = param_2[3] + param_2[4];
    uVar16 = param_3[1];
    iVar12 = param_3[2];
    uVar14 = param_2[1];
    if ((uint)param_2[1] <= uVar5) {
      uVar14 = uVar5;
    }
    if (*param_2 == 0) {
      uVar14 = uVar5;
    }
    uVar5 = uVar14 - uVar16;
    param_2[7] = 0;
    if (uVar14 < uVar16) {
      uVar5 = 0;
    }
    if (iVar12 - uVar16 < uVar5) {
      FUN_00f5f538(param_3);
    }
    param_1[1] = local_58;
    param_1[2] = uStack_54;
    param_1[3] = uStack_50;
    param_1[4] = uStack_4c;
    *param_1 = 0;
    return;
  }
LAB_01665950:
  param_1[1] = 0;
  *param_1 = 0;
  return;
}

