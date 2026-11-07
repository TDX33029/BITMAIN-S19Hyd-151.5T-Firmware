// FUN_016b3c58 @ 016b3c58 size=2412 calls_out=11 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_016b3c58(int param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  code **ppcVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  code ****ppppcVar13;
  int iVar14;
  code ***pppcVar15;
  int iVar16;
  int iVar17;
  ushort uVar18;
  uint uVar19;
  char *pcVar20;
  code ****ppppcVar21;
  int extraout_r1;
  uint uVar22;
  uint uVar23;
  undefined4 uVar24;
  undefined *puVar25;
  code *pcVar26;
  uint uVar27;
  int iVar28;
  undefined4 uVar29;
  undefined4 uVar30;
  int iVar31;
  bool bVar32;
  bool bVar33;
  code ***local_1a8;
  undefined4 local_1a4;
  uint local_1a0;
  int local_19c;
  undefined4 local_198;
  code **local_194;
  int local_190;
  uint local_18c;
  uint local_188;
  code ***local_184;
  code ****local_180;
  code ****local_17c;
  code ***local_178;
  code **local_174;
  code **local_170;
  undefined4 local_16c;
  int local_168;
  int local_164;
  undefined4 local_68;
  undefined4 local_64;
  int local_60;
  undefined1 local_5c;
  undefined4 local_58;
  int local_54;
  undefined4 local_4c;
  undefined4 local_48;
  code ***local_44;
  code ****local_40;
  code ***local_3c;
  code ***local_38;
  undefined *local_34;
  code ***local_30;
  undefined1 *local_2c;
  
  uVar30 = *param_2;
  iVar31 = param_2[1];
  pcVar26 = *(code **)(iVar31 + 0xc);
  iVar4 = (*pcVar26)(uVar30,&DAT_004ce8c5,0xc);
  if (iVar4 != 0) {
    return 1;
  }
  local_1a4 = *(undefined4 *)(param_1 + 0x54);
  uVar22 = *(uint *)(param_1 + 0x58);
  uVar19 = *(uint *)(param_1 + 0x15c) & 0x1f;
  local_1a8 = (code ***)(param_1 + 0x50);
  local_19c = 1 << uVar19;
  uVar23 = param_2[2];
  uVar5 = 0;
  if ((uVar23 & 0x800000) == 0) {
    uVar5 = uVar19;
  }
  uVar6 = *(uint *)(param_1 + 4);
  uVar7 = *(uint *)(param_1 + 8);
  uVar8 = *(uint *)(param_1 + 0xc);
  uVar9 = *(uint *)(param_1 + 0x10);
  uVar10 = *(uint *)(param_1 + 0x14);
  uVar11 = *(uint *)(param_1 + 0x18);
  uVar12 = *(uint *)(param_1 + 0x1c);
  local_198 = 0;
  local_1a0 = uVar22;
  while( true ) {
    FUN_016ac4c4(&local_194,&local_1a8);
    uVar27 = local_18c;
    ppcVar2 = local_194;
    if (local_194 == (code **)0x0) break;
    if (local_18c == 0) {
      iVar4 = (*pcVar26)(uVar30,&DAT_004ce5c6,1);
      if (iVar4 != 0) {
        return 1;
      }
      uVar24 = 1;
      pcVar20 = &DAT_005319c3;
    }
    else {
      if (uVar6 == local_18c) {
        pcVar20 = &DAT_004ce5c4;
      }
      else {
        bVar33 = local_18c <= uVar11;
        bVar32 = uVar11 == local_18c;
        if (!bVar33 || bVar32) {
          bVar33 = uVar12 <= local_18c;
          bVar32 = local_18c == uVar12;
        }
        if (!bVar33 || bVar32) {
          bVar33 = local_18c <= uVar9;
          bVar32 = uVar9 == local_18c;
          if (!bVar33 || bVar32) {
            bVar33 = uVar10 <= local_18c;
            bVar32 = local_18c == uVar10;
          }
          if (!bVar33 || bVar32) {
            pcVar20 = &UNK_004ce5c2;
          }
          else {
            pcVar20 = &DAT_004ce5c0;
          }
        }
        else {
          bVar33 = local_18c <= uVar7;
          bVar32 = uVar7 == local_18c;
          if (!bVar33 || bVar32) {
            bVar33 = uVar8 <= local_18c;
            bVar32 = local_18c == uVar8;
          }
          if (!bVar33 || bVar32) {
            if (local_18c < uVar9 || uVar10 < local_18c) {
              pcVar20 = &UNK_004ce5bc;
            }
            else {
              pcVar20 = &UNK_004ce5be;
            }
          }
          else if (local_18c < uVar9 || uVar10 < local_18c) {
            pcVar20 = "  ";
          }
          else {
            pcVar20 = &UNK_004ce5ba;
          }
        }
      }
      uVar24 = 2;
    }
    iVar4 = (*pcVar26)(uVar30,pcVar20,uVar24);
    if (iVar4 != 0) {
      return 1;
    }
    local_184 = (code ***)(uVar27 >> uVar5);
    local_180 = &local_184;
    local_17c = (code ****)&LAB_01a6a304;
    iVar4 = FUN_012fa178(uVar30,iVar31,&DAT_004ce925,&local_180);
    if (iVar4 != 0) {
      return 1;
    }
    local_168 = local_190;
    uVar27 = 0;
    local_170 = ppcVar2 + local_190;
    local_164 = 0;
    local_16c = 0;
    local_174 = ppcVar2;
    local_180 = (code ****)CONCAT31(local_180._1_3_,2);
    if ((uVar23 & 0x800000) == 0) {
      uVar27 = local_188 & 0x1f;
    }
    while( true ) {
      while( true ) {
        FUN_016ac58c(&local_40,&local_174);
        pppcVar15 = local_178;
        ppppcVar13 = local_17c;
        ppppcVar21 = local_180;
        if ((char)local_40 == '\x02') break;
        if ((char)local_180 == '\x02') {
          local_178 = local_3c;
          local_17c = local_40;
          local_180 = local_40;
        }
        else if (local_178 == local_3c && ((uint)local_40 & 1) == 0) {
          local_17c = local_40;
        }
        else {
          bVar32 = local_178 != (code ***)0x0;
          local_178 = local_3c;
          local_17c = local_40;
          local_180 = local_40;
          if (bVar32) {
            bVar32 = ((uint)ppppcVar21 & 0xff) == 2;
            goto LAB_016b3ed8;
          }
        }
      }
      local_180 = (code ****)CONCAT31(local_180._1_3_,2);
      if (((uint)ppppcVar21 & 0xff) == 2) break;
      bVar32 = local_178 == (code ***)0x0;
LAB_016b3ed8:
      if (bVar32) break;
      local_44 = (code ***)((uint)pppcVar15 >> uVar27);
      local_4c = ppppcVar21;
      iVar4 = local_164 + 1;
      bVar32 = local_164 != 0;
      local_48 = ppppcVar13;
      local_164 = iVar4;
      if (bVar32) {
        iVar4 = (*pcVar26)(uVar30,&DAT_00533bc1,2);
        if (iVar4 != 0) {
          return 1;
        }
        ppppcVar13 = (code ****)((uint)local_48 & 0xff);
        ppppcVar21 = (code ****)((uint)local_4c & 0xff);
      }
      if (((uint)ppppcVar21 & 0xff) == ((uint)ppppcVar13 & 0xff)) {
        if (((uint)ppppcVar13 & 1) == 0) {
          uVar3 = (ushort)local_48._1_1_;
          uVar18 = (ushort)local_4c._1_1_;
        }
        else {
          uVar3 = local_48._2_2_;
          uVar18 = local_4c._2_2_;
        }
        if (uVar18 != uVar3) goto LAB_016b3fb0;
        local_38 = (code ***)&local_44;
        local_34 = &LAB_01a6a304;
        puVar25 = &DAT_0057d11c;
      }
      else {
LAB_016b3fb0:
        local_30 = (code ***)&local_44;
        local_38 = (code ***)&local_48;
        local_2c = &LAB_01a6a304;
        local_34 = &DAT_016c6bac;
        puVar25 = &DAT_00591f01;
      }
      local_3c = (code ***)&DAT_016c6bac;
      local_40 = (code ****)&local_4c;
      iVar4 = FUN_012fa178(uVar30,iVar31,puVar25,&local_40);
      if (iVar4 != 0) {
        return 1;
      }
    }
    iVar4 = (*pcVar26)(uVar30,"\n",1);
    if (iVar4 != 0) {
      return 1;
    }
  }
  iVar4 = (*pcVar26)(uVar30,"\n",1);
  if (iVar4 != 0) {
    return 1;
  }
  uVar24 = *(undefined4 *)(param_1 + 0x1a4);
  uVar29 = *(undefined4 *)(param_1 + 0x1a8);
  uVar1 = *(undefined1 *)(param_1 + 0x2b0);
  FUN_01bed4e2(&local_168,param_1 + 0x1ac,0x100);
  local_54 = 0;
  local_17c = *(code *****)(param_1 + 0x18c);
  local_178 = *(code ****)(param_1 + 400);
  local_174 = *(code ***)(param_1 + 0x194);
  local_170 = *(code ***)(param_1 + 0x198);
  local_16c = *(undefined4 *)(param_1 + 0x19c);
  local_58 = 0;
  local_180 = *(code *****)(param_1 + 0x188);
  iVar4 = *(int *)(param_1 + 0x2ac);
  local_68 = uVar24;
  local_64 = uVar29;
  local_60 = iVar4;
  local_5c = uVar1;
  do {
    FUN_016ac1f0(&local_40,&local_180);
    pppcVar15 = local_3c;
    ppppcVar21 = local_40;
    iVar14 = local_54;
    if (local_40 == (code ****)&DAT_00000003) {
      pppcVar15 = *(code ****)(param_1 + 0x178);
      if ((code ***)0x1 < pppcVar15) {
        iVar4 = (*pcVar26)(uVar30,"\n",1);
        if (iVar4 != 0) {
          return 1;
        }
        uVar23 = *(uint *)(param_1 + 0x168);
        iVar4 = *(int *)(param_1 + 0x164);
        local_180 = (code ****)(uVar23 & 1);
        if (local_180 != (code ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_01304210(0,&DAT_00533278,&local_180,0);
        }
        if (uVar23 != 0) {
          uVar7 = 0;
          iVar14 = *(int *)(param_1 + 0x170);
          uVar6 = *(uint *)(param_1 + 0x174);
          local_180 = (code ****)0x0;
          do {
            uVar8 = FUN_016ac838(param_1);
            local_1a8 = (code ***)(uVar8 >> uVar5);
            local_17c = (code ****)&LAB_01a6a304;
            local_180 = &local_1a8;
            iVar16 = FUN_012fa178(uVar30,iVar31,&DAT_004ce8d1,&local_180);
            if (iVar16 != 0) {
              return 1;
            }
            if (uVar23 <= uVar7 * 2) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar7 << 1,uVar23,&DAT_01d0866c);
            }
            uVar8 = uVar7 << 1 | 1;
            if (uVar23 <= uVar8) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb12c(uVar8,uVar23,&DAT_01d0860c);
            }
            uVar9 = *(uint *)(iVar4 + uVar7 * 8);
            uVar8 = *(uint *)(iVar4 + uVar8 * 4);
            if ((CARRY4(uVar8,uVar9)) || (uVar6 < uVar8 + uVar9)) {
                    /* WARNING: Subroutine does not return */
              FUN_012faff4(uVar9,uVar8 + uVar9,uVar6,&DAT_01d0867c);
            }
            if (uVar8 != 0) {
              iVar16 = uVar8 << 2;
              iVar28 = 0;
              do {
                local_40 = *(code *****)(iVar14 + uVar9 * 4 + iVar28 * -4);
                if ((iVar28 != 0) && (iVar17 = (*pcVar26)(uVar30,&DAT_00533bc1,2), iVar17 != 0)) {
                  return 1;
                }
                local_17c = (code ****)FUN_016cb558;
                local_180 = (code ****)&local_40;
                iVar17 = FUN_012fa178(uVar30,iVar31,&DAT_00590e5f,&local_180);
                if (iVar17 != 0) {
                  return 1;
                }
                iVar28 = iVar28 + -1;
                iVar16 = iVar16 + -4;
              } while (iVar16 != 0);
            }
            iVar16 = (*pcVar26)(uVar30,"\n",1);
            if (iVar16 != 0) {
              return 1;
            }
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar23 >> 1);
        }
      }
      local_40 = (code ****)(uVar22 >> uVar19);
      local_17c = (code ****)&LAB_01a6a304;
      local_180 = (code ****)&local_40;
      iVar4 = FUN_012fa178(uVar30,iVar31,&DAT_005a5c20,&local_180);
      if (iVar4 == 0) {
        local_17c = (code ****)&LAB_01a6a304;
        local_180 = (code ****)&local_40;
        local_40 = (code ****)pppcVar15;
        iVar4 = FUN_012fa178(uVar30,iVar31,&DAT_005b808a,&local_180);
        if (iVar4 == 0) {
          local_180 = (code ****)(param_1 + 0x2b4);
          local_17c = (code ****)FUN_016b4688;
          iVar4 = FUN_012fa178(uVar30,iVar31,&DAT_005798ec,&local_180);
          if (iVar4 == 0) {
            uVar30 = (*pcVar26)(uVar30,")\n",2);
            return uVar30;
          }
          return 1;
        }
      }
      return 1;
    }
    local_44 = (code ***)CONCAT31(local_44._1_3_,local_34._0_1_);
    local_194 = (code **)((uint)local_38 >> uVar5);
    local_54 = local_54 + 1;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013079d0(&DAT_01d08908);
    }
    FUN_01bf0fd4(iVar14,iVar4);
    if (extraout_r1 == 0) {
      if (ppppcVar21 == (code ****)0x0) {
        uVar24 = 0x18;
        puVar25 = &DAT_004ce8e4;
LAB_016b4234:
        iVar14 = (*pcVar26)(uVar30,puVar25,uVar24);
      }
      else {
        if (ppppcVar21 == (code ****)&DAT_00000001) {
          uVar24 = 0x16;
          puVar25 = &DAT_004ce8fc;
          goto LAB_016b4234;
        }
        local_1a8 = pppcVar15;
        local_3c = (code ***)FUN_016cb558;
        local_40 = &local_1a8;
        iVar14 = FUN_012fa178(uVar30,iVar31,&DAT_00595b9f,&local_40);
      }
      if (iVar14 != 0) {
        return 1;
      }
    }
    local_40 = &local_44;
    local_34 = &LAB_01a6a304;
    local_3c = (code ***)FUN_016b4730;
    local_38 = &local_194;
    iVar14 = FUN_012fa178(uVar30,iVar31,&DAT_004ce912,&local_40);
    if (iVar14 != 0) {
      return 1;
    }
  } while( true );
}

