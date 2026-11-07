// FUN_005f04f0 @ 005f04f0 size=2368 calls_out=2 calls_in=0
// strings: *  (MW)

undefined4 FUN_005f04f0(int param_1,undefined4 *param_2)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  char *pcVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  undefined *puVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  uint unaff_r6;
  uint uVar22;
  code *pcVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  undefined4 uVar29;
  uint uVar30;
  uint uVar31;
  uint local_68;
  uint local_58;
  uint local_48;
  undefined1 local_42;
  undefined1 local_41;
  uint *local_40;
  code *local_3c;
  uint *local_38;
  code *local_34;
  uint *local_30;
  code *local_2c;
  uint local_28;
  
  iVar20 = param_2[1];
  uVar29 = *param_2;
  pcVar23 = *(code **)(iVar20 + 0xc);
  iVar3 = (*pcVar23)(uVar29,&DAT_0033d58a,10);
  if (iVar3 == 0) {
    uVar28 = *(uint *)(param_1 + 0x34);
    if (uVar28 != 0) {
      uVar13 = *(uint *)(param_1 + 0x14c);
      uVar14 = *(uint *)(param_1 + 0x150);
      uVar15 = *(uint *)(param_1 + 0x154);
      uVar16 = *(uint *)(param_1 + 0x3c) & 0x1f;
      iVar19 = *(int *)(param_1 + 0x10);
      iVar3 = *(int *)(param_1 + 4);
      uVar4 = *(uint *)(param_1 + 8);
      uVar5 = *(uint *)(param_1 + 0x14);
      uVar6 = (uint)*(byte *)(param_1 + 0x13f);
      uVar7 = 0;
LAB_005f05cc:
      local_68 = uVar7 << uVar16;
      if (uVar28 < 3) {
        if (uVar7 == 1) {
          local_40 = &local_28;
          local_3c = (code *)&LAB_00fac484;
          local_28 = local_68;
          iVar3 = FUN_00fa948c(uVar29,iVar20,&DAT_0033d5fb,&local_40);
          if (iVar3 != 0) {
            return 1;
          }
          goto LAB_005f0b78;
        }
      }
      else if (uVar7 == 1) {
        local_40 = &local_28;
        local_3c = (code *)&LAB_00fac484;
        local_28 = local_68;
        iVar8 = FUN_00fa948c(uVar29,iVar20,&DAT_0033d5fb,&local_40);
        if (iVar8 != 0) {
          return 1;
        }
        uVar7 = 2;
        local_68 = 2 << uVar16;
      }
      if (local_68 == 0) {
        pcVar11 = "D ";
      }
      else {
        bVar12 = local_68 != uVar14;
        bVar1 = local_68 != uVar15;
        if (uVar13 < local_68) {
          if (bVar12 && bVar1) {
            pcVar11 = "  ";
          }
          else {
            pcVar11 = " >";
          }
        }
        else if (bVar12 && bVar1) {
          pcVar11 = "*  (MW)";
        }
        else {
          pcVar11 = &DAT_0033d59e;
        }
      }
      iVar8 = (*pcVar23)(uVar29,pcVar11,2);
      if (iVar8 != 0) {
        return 1;
      }
      local_40 = &local_48;
      local_48 = local_68;
      local_3c = (code *)&LAB_00fac484;
      iVar8 = FUN_00fa948c(uVar29,iVar20,&DAT_003cd928,&local_40);
      if (iVar8 != 0) {
        return 1;
      }
      iVar8 = 0;
      uVar25 = 0;
      bVar12 = false;
      uVar7 = uVar7 + 1;
      do {
        uVar10 = local_58;
        if (uVar6 < uVar25) {
          uVar30 = (unaff_r6 & 0xffff) >> 8;
          if (!bVar12) goto LAB_005f098c;
          bVar12 = false;
          uVar27 = uVar25;
          uVar22 = unaff_r6;
          uVar2 = local_58;
          uVar24 = unaff_r6;
        }
        else {
          uVar24 = uVar25 + local_68;
          if (uVar4 <= uVar24) {
LAB_005f0de8:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar24,uVar4,&DAT_01856f38);
          }
          uVar24 = *(uint *)(iVar3 + uVar24 * 4);
          if (bVar12) {
            if (uVar24 != local_58) {
              uVar27 = uVar25 + 1;
              uVar31 = (unaff_r6 & 0xffff) >> 8;
LAB_005f08dc:
              bVar12 = true;
              uVar22 = uVar25 | uVar25 << 8;
              uVar30 = uVar31;
              uVar10 = uVar24 | uVar25 >> 0x18;
              uVar2 = local_58;
              uVar24 = unaff_r6;
              goto joined_r0x005f08b0;
            }
            uVar22 = unaff_r6 & 0xffff00ff | (uVar25 & 0xff) << 8;
          }
          else {
            uVar10 = uVar24 | uVar25 >> 0x18;
            uVar22 = uVar25 | uVar25 << 8;
            local_58 = uVar24;
          }
          bVar12 = false;
          uVar27 = uVar6 + 1;
          uVar30 = (uVar22 & 0xffff) >> 8;
          uVar2 = uVar10;
          uVar24 = uVar22;
          if (uVar25 != uVar6) {
            uVar17 = uVar25 * 0x100;
            uVar26 = uVar25;
            uVar31 = uVar25;
            do {
              unaff_r6 = uVar22;
              uVar17 = uVar17 + 0x100;
              if (uVar4 <= local_68 + 1 + uVar26) {
                uVar24 = uVar4;
                goto LAB_005f0de8;
              }
              uVar24 = *(uint *)(iVar3 + 4 + local_68 * 4 + uVar26 * 4);
              uVar21 = uVar26 + 1;
              uVar25 = uVar21 & 0xff;
              if (local_58 != uVar24) {
                uVar27 = uVar26 + 2;
                goto LAB_005f08dc;
              }
              uVar22 = unaff_r6 & 0xffff00ff | (uVar17 >> 8 & 0xff) << 8;
              uVar26 = uVar21;
              uVar31 = uVar25;
              uVar30 = uVar6;
              uVar24 = unaff_r6;
            } while (uVar6 != uVar21);
          }
        }
joined_r0x005f08b0:
        local_58 = uVar10;
        unaff_r6 = uVar22;
        uVar25 = uVar27;
        if ((iVar8 != 0) && (iVar9 = (*pcVar23)(uVar29,&DAT_0041950f,2), iVar9 != 0)) {
          return 1;
        }
        iVar8 = iVar8 + 1;
        local_41 = (undefined1)uVar24;
        if ((uVar24 & 0xff) == uVar30) {
          local_34 = FUN_007883b8;
          local_38 = &local_28;
          local_40 = (uint *)&local_41;
          puVar18 = &DAT_0057a481;
        }
        else {
          local_38 = (uint *)&local_41;
          local_2c = FUN_007883b8;
          local_30 = &local_28;
          local_34 = FUN_005fe558;
          local_40 = (uint *)&local_42;
          puVar18 = &DAT_00592599;
          local_42 = local_41;
          local_41 = (char)uVar30;
        }
        local_3c = FUN_005fe558;
        local_28 = uVar2;
        iVar9 = FUN_00fa948c(uVar29,iVar20,puVar18,&local_40);
        if (iVar9 != 0) {
          return 1;
        }
      } while( true );
    }
LAB_005f0b78:
    local_40 = (uint *)(param_1 + 0x158);
    local_3c = FUN_005f0ee0;
    iVar3 = FUN_00fa948c(uVar29,iVar20,&DAT_00572f35,&local_40);
    if (iVar3 == 0) {
      iVar19 = *(int *)(param_1 + 0x28);
      local_28 = CONCAT31(local_28._1_3_,iVar19 != 0);
      local_3c = (code *)&LAB_00788378;
      local_40 = &local_28;
      iVar3 = FUN_00fa948c(uVar29,iVar20,&DAT_00573230,&local_40);
      if (iVar3 == 0) {
        local_3c = FUN_007883b8;
        local_40 = (uint *)(param_1 + 0x34);
        iVar3 = FUN_00fa948c(uVar29,iVar20,&DAT_0057b4de,&local_40);
        if (iVar3 == 0) {
          uVar28 = *(uint *)(param_1 + 0x20);
          local_3c = FUN_007883b8;
          local_40 = &local_28;
          local_28 = uVar28;
          iVar3 = FUN_00fa948c(uVar29,iVar20,&DAT_00592dbf,&local_40);
          if (iVar3 == 0) {
            local_40 = (uint *)(param_1 + 0x140);
            local_3c = FUN_007883b8;
            iVar3 = FUN_00fa948c(uVar29,iVar20,&DAT_00582f9e,&local_40);
            if (iVar3 == 0) {
              local_40 = (uint *)(param_1 + 0x144);
              local_3c = FUN_007883b8;
              iVar3 = FUN_00fa948c(uVar29,iVar20,&DAT_0057412f,&local_40);
              if (iVar3 == 0) {
                local_40 = (uint *)(param_1 + 0x38);
                local_3c = FUN_007883b8;
                iVar3 = FUN_00fa948c(uVar29,iVar20,&DAT_00574ed2,&local_40);
                if (iVar3 != 0) {
                  return 1;
                }
                local_28 = 1 << (*(uint *)(param_1 + 0x3c) & 0x1f);
                local_3c = FUN_005f0f1c;
                local_40 = &local_28;
                iVar3 = FUN_00fa948c(uVar29,iVar20,&DAT_0058e32e,&local_40);
                if (iVar3 == 0) {
                  local_40 = (uint *)(param_1 + 0x40);
                  local_3c = FUN_005ffabc;
                  iVar3 = FUN_00fa948c(uVar29,iVar20,&DAT_00594ae1,&local_40);
                  if (iVar3 == 0) {
                    local_28 = *(int *)(param_1 + 0x14) * 0xc + (*(int *)(param_1 + 8) + uVar28) * 4
                               + *(int *)(param_1 + 0x24);
                    if (iVar19 != 0) {
                      local_28 = local_28 + *(int *)(param_1 + 0x30);
                    }
                    local_3c = FUN_007883b8;
                    local_40 = &local_28;
                    iVar3 = FUN_00fa948c(uVar29,iVar20,&DAT_00580471,&local_40);
                    if (iVar3 == 0) {
                      uVar29 = (*pcVar23)(uVar29,&DAT_003cea26,2);
                      return uVar29;
                    }
                    return 1;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 1;
LAB_005f098c:
  iVar8 = (*pcVar23)(uVar29,&DAT_0041950e,1);
  if (iVar8 != 0) {
    return 1;
  }
  if (local_68 - 1 < uVar13) {
    iVar8 = (*pcVar23)(uVar29,&DAT_0033d594,10);
    if (iVar8 != 0) {
      return 1;
    }
    uVar25 = (local_48 >> uVar16) - 2;
    if (uVar5 <= uVar25) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar25,uVar5,&DAT_01894738);
    }
    uVar25 = *(uint *)(iVar19 + uVar25 * 0xc + 8);
    if (uVar25 != 0) {
      uVar10 = (local_68 >> uVar16) - 2;
      if (uVar5 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar10,uVar5,&DAT_01894718);
      }
      iVar8 = iVar19 + uVar10 * 0xc;
      if (*(int *)(iVar8 + 8) == 0) {
        uVar10 = 0;
        uVar24 = 0;
LAB_005f0e20:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar24,uVar10,&DAT_01894728);
      }
      local_28 = **(uint **)(iVar8 + 4);
      local_40 = &local_28;
      local_3c = (code *)&LAB_00fac484;
      iVar9 = FUN_00fa948c(uVar29,iVar20,&DAT_00590e71,&local_40);
      if (iVar9 != 0) {
        return 1;
      }
      if (uVar25 != 1) {
        uVar24 = 1;
        do {
          iVar9 = (*pcVar23)(uVar29,&DAT_0041950f,2);
          if (iVar9 != 0) {
            return 1;
          }
          uVar10 = *(uint *)(iVar8 + 8);
          if (uVar10 <= uVar24) goto LAB_005f0e20;
          local_28 = *(uint *)(*(int *)(iVar8 + 4) + uVar24 * 4);
          local_3c = (code *)&LAB_00fac484;
          local_40 = &local_28;
          iVar9 = FUN_00fa948c(uVar29,iVar20,&DAT_00590e71,&local_40);
          if (iVar9 != 0) {
            return 1;
          }
          uVar24 = uVar24 + 1;
        } while (uVar25 != uVar24);
      }
    }
    iVar8 = (*pcVar23)(uVar29,&DAT_0041950e,1);
    if (iVar8 != 0) {
      return 1;
    }
  }
  if (uVar28 <= uVar7) goto LAB_005f0b78;
  goto LAB_005f05cc;
}

