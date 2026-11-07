// FUN_00659488 @ 00659488 size=1976 calls_out=2 calls_in=0
// strings: D  (MW)

undefined4 FUN_00659488(int param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  char *pcVar15;
  int iVar16;
  undefined *puVar17;
  code *pcVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  uint uVar25;
  uint uVar26;
  int iVar27;
  uint uVar28;
  uint local_58;
  int local_48;
  undefined1 local_42;
  undefined1 local_41;
  uint *local_40;
  code *local_3c;
  uint *local_38;
  code *local_34;
  uint *local_30;
  undefined1 *local_2c;
  uint local_28;
  
  uVar24 = *param_2;
  iVar27 = param_2[1];
  pcVar18 = *(code **)(iVar27 + 0xc);
  iVar4 = (*pcVar18)(uVar24,&DAT_003d4017,10);
  if (iVar4 == 0) {
    uVar26 = *(uint *)(param_1 + 0x34);
    if (uVar26 != 0) {
      uVar9 = *(uint *)(param_1 + 0x14c);
      uVar20 = 0;
      uVar10 = *(uint *)(param_1 + 0x150);
      uVar11 = *(uint *)(param_1 + 0x154);
      uVar12 = *(uint *)(param_1 + 8);
      uVar13 = *(uint *)(param_1 + 0x14);
      uVar14 = (uint)*(byte *)(param_1 + 0x13f);
      uVar5 = *(uint *)(param_1 + 0x3c) & 0x1f;
      iVar4 = *(int *)(param_1 + 4);
      iVar16 = *(int *)(param_1 + 0x10);
LAB_00659544:
      uVar7 = uVar20 << uVar5;
      if (uVar20 != 1) {
        if (uVar7 == 0) {
          pcVar15 = "D  (MW)";
        }
        else {
          bVar3 = uVar7 != uVar10;
          bVar1 = uVar7 != uVar11;
          if (uVar9 < uVar7) {
            if (bVar3 && bVar1) {
              pcVar15 = "  ";
            }
            else {
              pcVar15 = &DAT_004ce5c0;
            }
          }
          else if (bVar3 && bVar1) {
            pcVar15 = "* ";
          }
          else {
            pcVar15 = &DAT_003d4094;
          }
        }
        iVar6 = (*pcVar18)(uVar24,pcVar15,2);
        if (iVar6 != 0) {
          return 1;
        }
        local_3c = FUN_012fd02c;
        local_40 = &local_28;
        local_28 = uVar7;
        iVar6 = FUN_012fa178(uVar24,iVar27,&DAT_004ce925,&local_40);
        if (iVar6 != 0) {
          return 1;
        }
        uVar20 = uVar20 + 1;
        uVar19 = 0;
        bVar3 = false;
        uVar21 = 0;
        local_48 = 0;
        local_58 = 0;
        uVar23 = uVar26;
        do {
          uVar25 = uVar21;
          uVar28 = local_58;
          if (uVar14 < uVar19) {
            bVar1 = !bVar3;
            uVar22 = uVar23;
            bVar3 = false;
            if (bVar1) goto LAB_00659858;
          }
          else {
            uVar22 = uVar21;
            uVar2 = uVar19;
            do {
              local_58 = uVar2;
              if (uVar12 <= uVar7 + local_58) {
                uVar26 = uVar19 + uVar7;
                if (uVar19 + uVar7 < uVar12) {
                  uVar26 = uVar12;
                }
                    /* WARNING: Subroutine does not return */
                FUN_012fb12c(uVar26,uVar12,&DAT_01c03a48);
              }
              uVar21 = *(uint *)(iVar4 + uVar7 * 4 + local_58 * 4);
              if (bVar3) {
                if (uVar25 != uVar21) {
                  uVar19 = local_58 + 1;
                  uVar22 = local_58;
                  bVar3 = true;
                  goto LAB_00659758;
                }
              }
              else {
                uVar22 = uVar21;
                uVar23 = local_58;
                uVar25 = uVar21;
              }
              uVar21 = uVar22;
              bVar3 = true;
              uVar22 = uVar21;
              uVar2 = local_58 + 1;
              uVar28 = local_58;
            } while (uVar14 + 1 != local_58 + 1);
            uVar19 = uVar14 + 1;
            uVar25 = uVar21;
            uVar22 = uVar23;
            uVar28 = uVar14;
            local_58 = uVar14;
            bVar3 = false;
          }
LAB_00659758:
          if ((local_48 != 0) && (iVar6 = (*pcVar18)(uVar24,&DAT_00533bc1,2), iVar6 != 0)) {
            return 1;
          }
          local_48 = local_48 + 1;
          if ((uVar23 & 0xff) == (uVar28 & 0xff)) {
            local_34 = (code *)&LAB_01a6a304;
            local_38 = &local_28;
            local_40 = (uint *)&local_41;
            puVar17 = &DAT_0057d11c;
            local_41 = (char)uVar23;
          }
          else {
            local_38 = (uint *)&local_41;
            local_41 = (undefined1)uVar28;
            local_2c = &LAB_01a6a304;
            local_30 = &local_28;
            local_34 = FUN_0065fd74;
            local_40 = (uint *)&local_42;
            puVar17 = &DAT_00591f01;
            local_42 = (char)uVar23;
          }
          local_3c = FUN_0065fd74;
          local_28 = uVar25;
          iVar6 = FUN_012fa178(uVar24,iVar27,puVar17,&local_40);
          uVar23 = uVar22;
          if (iVar6 != 0) {
            return 1;
          }
        } while( true );
      }
      local_3c = FUN_012fd02c;
      local_40 = &local_28;
      local_28 = uVar7;
      iVar6 = FUN_012fa178(uVar24,iVar27,&DAT_003d4086,&local_40);
      uVar20 = 2;
      if (iVar6 != 0) {
        return 1;
      }
      goto LAB_006595dc;
    }
LAB_006599b8:
    local_40 = (uint *)(param_1 + 0x158);
    local_3c = FUN_00659ce8;
    iVar4 = FUN_012fa178(uVar24,iVar27,&DAT_005771d3,&local_40);
    if (iVar4 == 0) {
      iVar16 = *(int *)(param_1 + 0x28);
      local_28 = CONCAT31(local_28._1_3_,iVar16 != 0);
      local_3c = (code *)&LAB_01a705e0;
      local_40 = &local_28;
      iVar4 = FUN_012fa178(uVar24,iVar27,&DAT_0059f234,&local_40);
      if (iVar4 == 0) {
        local_3c = (code *)&LAB_01a6a304;
        local_40 = (uint *)(param_1 + 0x34);
        iVar4 = FUN_012fa178(uVar24,iVar27,&DAT_005a5c20,&local_40);
        if (iVar4 == 0) {
          uVar26 = *(uint *)(param_1 + 0x20);
          local_3c = (code *)&LAB_01a6a304;
          local_40 = &local_28;
          local_28 = uVar26;
          iVar4 = FUN_012fa178(uVar24,iVar27,&DAT_005b808a,&local_40);
          if (iVar4 == 0) {
            local_40 = (uint *)(param_1 + 0x140);
            local_3c = (code *)&LAB_01a6a304;
            iVar4 = FUN_012fa178(uVar24,iVar27,&DAT_005ab611,&local_40);
            if (iVar4 == 0) {
              local_40 = (uint *)(param_1 + 0x144);
              local_3c = (code *)&LAB_01a6a304;
              iVar4 = FUN_012fa178(uVar24,iVar27,&DAT_0057814c,&local_40);
              if (iVar4 == 0) {
                local_40 = (uint *)(param_1 + 0x38);
                local_3c = (code *)&LAB_01a6a304;
                iVar4 = FUN_012fa178(uVar24,iVar27,&DAT_00578c34,&local_40);
                if (iVar4 != 0) {
                  return 1;
                }
                local_28 = 1 << (*(uint *)(param_1 + 0x3c) & 0x1f);
                local_3c = (code *)&DAT_00659d24;
                local_40 = &local_28;
                iVar4 = FUN_012fa178(uVar24,iVar27,&DAT_005b489b,&local_40);
                if (iVar4 != 0) {
                  return 1;
                }
                local_40 = (uint *)(param_1 + 0x40);
                local_3c = FUN_0065ff64;
                iVar4 = FUN_012fa178(uVar24,iVar27,&DAT_005b96ab,&local_40);
                if (iVar4 != 0) {
                  return 1;
                }
                local_28 = *(int *)(param_1 + 0x14) * 0xc + (*(int *)(param_1 + 8) + uVar26) * 4 +
                           *(int *)(param_1 + 0x24);
                if (iVar16 != 0) {
                  local_28 = local_28 + *(int *)(param_1 + 0x30);
                }
                local_3c = (code *)&LAB_01a6a304;
                local_40 = &local_28;
                iVar4 = FUN_012fa178(uVar24,iVar27,&DAT_005a9757,&local_40);
                if (iVar4 == 0) {
                  uVar24 = (*pcVar18)(uVar24,")\n",2);
                  return uVar24;
                }
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return 1;
LAB_00659858:
  iVar6 = (*pcVar18)(uVar24,"\n",1);
  if (iVar6 != 0) {
    return 1;
  }
  if (uVar7 - 1 < uVar9) {
    iVar6 = (*pcVar18)(uVar24,&DAT_003d4021,10);
    if (iVar6 != 0) {
      return 1;
    }
    uVar7 = (uVar7 >> uVar5) - 2;
    if (uVar13 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(uVar7,uVar13,&DAT_01d09170);
    }
    iVar6 = iVar16 + uVar7 * 0xc;
    uVar7 = *(uint *)(iVar6 + 8);
    if (uVar7 != 0) {
      uVar19 = 0;
      do {
        if ((uVar19 != 0) && (iVar8 = (*pcVar18)(uVar24,&DAT_00533bc1,2), iVar8 != 0)) {
          return 1;
        }
        if (*(uint *)(iVar6 + 8) <= uVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar19,*(uint *)(iVar6 + 8),&DAT_01d09160);
        }
        local_28 = *(uint *)(*(int *)(iVar6 + 4) + uVar19 * 4);
        local_3c = FUN_012fd02c;
        local_40 = &local_28;
        iVar8 = FUN_012fa178(uVar24,iVar27,&DAT_00590e5f,&local_40);
        if (iVar8 != 0) {
          return 1;
        }
        uVar19 = uVar19 + 1;
      } while (uVar7 != uVar19);
    }
    iVar6 = (*pcVar18)(uVar24,"\n",1);
    if (iVar6 != 0) {
      return 1;
    }
  }
LAB_006595dc:
  if (uVar26 <= uVar20) goto LAB_006599b8;
  goto LAB_00659544;
}

