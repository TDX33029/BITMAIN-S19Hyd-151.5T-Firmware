// FUN_0065aad0 @ 0065aad0 size=2844 calls_out=6 calls_in=0
// strings: D  (MW)

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0065aad0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  uint ***pppuVar6;
  uint ***pppuVar7;
  int iVar8;
  uint ****ppppuVar9;
  uint uVar10;
  uint ****ppppuVar11;
  int iVar12;
  uint ****ppppuVar13;
  uint uVar14;
  char *pcVar15;
  uint ****ppppuVar16;
  uint ****ppppuVar17;
  undefined *puVar18;
  uint ***pppuVar19;
  uint **ppuVar20;
  uint ****ppppuVar21;
  uint uVar22;
  uint ***pppuVar23;
  uint ***pppuVar24;
  uint ****ppppuVar25;
  uint ***pppuVar26;
  uint *puVar27;
  uint ***pppuVar28;
  uint uVar29;
  uint ***pppuVar30;
  uint ***pppuVar31;
  uint ***pppuVar32;
  int iVar33;
  undefined4 uVar34;
  uint ***pppuVar35;
  uint ***local_7c;
  uint ***local_70;
  int local_68;
  uint ***local_58;
  uint local_54;
  uint ***local_50;
  uint ****local_4c;
  undefined1 local_45;
  uint ***local_44;
  uint ****local_40;
  code *local_3c;
  uint ****local_38;
  code *local_34;
  uint ****local_30;
  undefined1 *local_2c;
  
  pppuVar7 = (uint ***)param_2[1];
  uVar34 = *param_2;
  ppuVar20 = pppuVar7[3];
  iVar8 = (*(code *)ppuVar20)(uVar34,&DAT_003d404e,0x11);
  if (iVar8 != 0) {
    return 1;
  }
  pppuVar35 = *(uint ****)(param_1 + 0x28);
  iVar8 = *(int *)(param_1 + 4);
  uVar29 = (int)pppuVar35 + 2;
  ppppuVar16 = *(uint *****)(param_1 + 0x138);
  ppppuVar17 = *(uint *****)(param_1 + 0x13c);
  ppppuVar13 = *(uint *****)(param_1 + 8);
  ppppuVar9 = *(uint *****)(param_1 + 0x140);
  ppppuVar21 = (uint ****)0x0;
LAB_0065ab68:
  uVar14 = (int)ppppuVar13 - (int)ppppuVar21;
  if (uVar14 == 0) {
    local_40 = (uint ****)(param_1 + 0x144);
    local_3c = FUN_0065b6d8;
    iVar8 = FUN_012fa178(uVar34,pppuVar7,&DAT_005771d3,&local_40);
    if (iVar8 != 0) {
      return 1;
    }
    iVar33 = *(int *)(param_1 + 0x1c);
    local_3c = (code *)&LAB_01a705e0;
    local_40 = &local_44;
    local_44 = (uint ***)CONCAT31(local_44._1_3_,iVar33 != 0);
    iVar8 = FUN_012fa178(uVar34,pppuVar7,&DAT_0059f234,&local_40);
    if (iVar8 != 0) {
      return 1;
    }
    local_40 = (uint ****)(param_1 + 0x18);
    local_3c = (code *)&LAB_01a6a304;
    iVar8 = FUN_012fa178(uVar34,pppuVar7,&DAT_005a5c20,&local_40);
    if (iVar8 != 0) {
      return 1;
    }
    pppuVar35 = *(uint ****)(param_1 + 0x14);
    local_40 = &local_44;
    local_44 = pppuVar35;
    local_3c = (code *)&LAB_01a6a304;
    iVar8 = FUN_012fa178(uVar34,pppuVar7,&DAT_005b808a,&local_40);
    if (iVar8 != 0) {
      return 1;
    }
    local_40 = (uint ****)(param_1 + 300);
    local_3c = (code *)&LAB_01a6a304;
    iVar8 = FUN_012fa178(uVar34,pppuVar7,&DAT_005ab611,&local_40);
    if (iVar8 != 0) {
      return 1;
    }
    local_40 = (uint ****)(param_1 + 0x130);
    local_3c = (code *)&LAB_01a6a304;
    iVar8 = FUN_012fa178(uVar34,pppuVar7,&DAT_0057814c,&local_40);
    if (iVar8 != 0) {
      return 1;
    }
    local_40 = (uint ****)(param_1 + 0x28);
    local_3c = (code *)&LAB_01a6a304;
    iVar8 = FUN_012fa178(uVar34,pppuVar7,&DAT_00578c34,&local_40);
    if (iVar8 != 0) {
      return 1;
    }
    local_40 = (uint ****)(param_1 + 0x2c);
    local_3c = FUN_0065ff64;
    iVar8 = FUN_012fa178(uVar34,pppuVar7,&DAT_005b96ab,&local_40);
    if (iVar8 != 0) {
      return 1;
    }
    iVar8 = (int)pppuVar35 + (int)ppppuVar13;
    local_44 = (uint ***)(*(int *)(param_1 + 0x24) + iVar8 * 4);
    if (iVar33 == 0) {
      local_44 = (uint ***)(iVar8 * 4);
    }
    local_3c = (code *)&LAB_01a6a304;
    local_40 = &local_44;
    iVar8 = FUN_012fa178(uVar34,pppuVar7,&DAT_005a9757,&local_40);
    if (iVar8 == 0) {
      uVar34 = (*(code *)ppuVar20)(uVar34,")\n",2);
      return uVar34;
    }
    return 1;
  }
  puVar27 = (uint *)(iVar8 + (int)ppppuVar21 * 4);
  if (ppppuVar21 == (uint ****)0x0) {
    uVar22 = *puVar27;
    local_70 = (uint ***)(uVar22 & 0xff);
LAB_0065abc8:
    bVar5 = false;
    ppppuVar11 = (uint ****)0x0;
  }
  else {
    uVar22 = *puVar27;
    local_70 = (uint ***)(uVar22 & 0xff);
    if (ppppuVar16 < ppppuVar21) goto LAB_0065abc8;
    if (local_70 == (uint ***)0xff) {
      uVar10 = uVar29;
      if (uVar14 <= uVar29) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar29,uVar14,&DAT_01d08f48);
      }
    }
    else {
      iVar33 = ((uint)local_70 >> 2) + 2;
      if ((uVar22 & 3) != 0) {
        iVar33 = ((uint)local_70 >> 2) + 3;
      }
      uVar10 = (int)local_70 + iVar33;
      if (uVar14 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar10,uVar14,&DAT_01d08f38);
      }
    }
    ppppuVar11 = (uint ****)puVar27[uVar10];
    bVar5 = true;
    if ((uint ****)0x7fffffff < ppppuVar11) {
      ppppuVar11 = (uint ****)0x1;
    }
  }
  if ((uVar22 & 0xff) == 0xfe) {
    if (uVar14 == 1) {
      puVar18 = &DAT_01c03ab8;
      goto LAB_0065b5a0;
    }
    if (uVar14 == 2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(2,2,&DAT_01c03ac8);
    }
    pppuVar30 = (uint ***)puVar27[1];
    local_58 = (uint ***)(uVar22 >> 8);
    pppuVar19 = (uint ***)puVar27[2];
    iVar33 = 1;
    pppuVar26 = pppuVar7;
  }
  else if ((uVar22 & 0xff) == 0xff) {
    if (uVar14 == 1) {
      puVar18 = &DAT_01c03ad8;
LAB_0065b5a0:
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(1,1,puVar18);
    }
    if ((uint ***)(uVar14 - 2) < pppuVar35) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,pppuVar35,(uint ***)(uVar14 - 2),&DAT_01c03ae8);
    }
    pppuVar19 = (uint ***)(puVar27 + 2);
    pppuVar30 = (uint ***)puVar27[1];
    iVar33 = 2;
    pppuVar26 = pppuVar35;
  }
  else {
    if (uVar14 == 1) {
      puVar18 = &DAT_01c03a88;
      goto LAB_0065b5a0;
    }
    pppuVar26 = (uint ***)((uint)local_70 >> 2);
    if ((uVar22 & 3) != 0) {
      pppuVar26 = (uint ***)(((uint)local_70 >> 2) + 1);
    }
    if ((uint ***)(uVar14 - 2) < pppuVar26) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,pppuVar26,(uint ***)(uVar14 - 2),&DAT_01c03a98);
    }
    pppuVar19 = (uint ***)(uVar14 - ((int)pppuVar26 + 2U));
    if (pppuVar19 < local_70) {
                    /* WARNING: Subroutine does not return */
      FUN_012faff4(0,local_70,pppuVar19,&DAT_01c03aa8);
    }
    pppuVar30 = (uint ***)puVar27[1];
    pppuVar19 = (uint ***)(puVar27 + 2);
    iVar33 = 0;
    local_7c = (uint ***)(puVar27 + (int)pppuVar26 + 2U);
  }
  if (ppppuVar21 == (uint ****)0x0) {
    pcVar15 = "D  (MW)";
  }
  else {
    bVar3 = ppppuVar21 != ppppuVar17;
    bVar4 = ppppuVar21 != ppppuVar9;
    if (ppppuVar16 < ppppuVar21) {
      if (bVar3 && bVar4) {
        pcVar15 = "  ";
      }
      else {
        pcVar15 = &DAT_004ce5c0;
      }
    }
    else if (bVar3 && bVar4) {
      pcVar15 = "* ";
    }
    else {
      pcVar15 = &DAT_003d4094;
    }
  }
  iVar12 = (*(code *)ppuVar20)(uVar34,pcVar15,2);
  if (iVar12 != 0) {
    return 1;
  }
  local_38 = &local_44;
  local_40 = (uint ****)&local_4c;
  local_34 = FUN_012fd02c;
  local_3c = FUN_012fd02c;
  local_4c = ppppuVar21;
  local_44 = pppuVar30;
  iVar12 = FUN_012fa178(uVar34,pppuVar7,&DAT_003d405f,&local_40);
  if (iVar12 != 0) {
    return 1;
  }
  pppuVar31 = (uint ***)0x0;
  pppuVar23 = (uint ***)0x0;
  pppuVar30 = (uint ***)0x0;
  bVar3 = false;
  local_68 = 0;
LAB_0065adc8:
  pppuVar24 = pppuVar23;
  pppuVar6 = pppuVar30;
LAB_0065add8:
  pppuVar32 = pppuVar31;
  pppuVar28 = pppuVar6;
  if (iVar33 == 0) {
    if (local_70 <= pppuVar24) goto LAB_0065ae90;
    if (pppuVar26 <= (uint ***)((uint)pppuVar24 >> 2)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c((uint)pppuVar24 >> 2,pppuVar26,&DAT_01c03a58);
    }
    local_40 = (uint ****)pppuVar19[(uint)pppuVar24 >> 2];
    pppuVar31 = (uint ***)(uint)*(byte *)((uint)&local_40 | (uint)pppuVar24 & 3);
    pppuVar30 = local_7c;
LAB_0065ae44:
    pppuVar30 = (uint ***)pppuVar30[(int)pppuVar24];
    pppuVar23 = (uint ***)((int)pppuVar24 + 1);
LAB_0065ae4c:
    pppuVar24 = pppuVar23;
    if (!bVar3) {
      bVar3 = true;
      pppuVar6 = pppuVar30;
      local_50 = pppuVar31;
      goto LAB_0065add8;
    }
    bVar3 = true;
    pppuVar6 = pppuVar28;
    if (pppuVar28 == pppuVar30) goto LAB_0065add8;
    local_54 = (uint)local_50 & 0xff | ((uint)pppuVar32 & 0xff) << 8;
    local_50 = pppuVar31;
  }
  else {
    if (iVar33 == 1) {
      pppuVar23 = (uint ***)0x1;
      pppuVar30 = pppuVar19;
      pppuVar31 = local_58;
      if (pppuVar24 == (uint ***)0x0) goto LAB_0065ae4c;
    }
    else if (pppuVar24 < pppuVar26) {
      pppuVar30 = pppuVar19;
      pppuVar31 = pppuVar24;
      goto LAB_0065ae44;
    }
LAB_0065ae90:
    if (!bVar3) goto LAB_0065afdc;
    bVar3 = false;
    local_54 = (uint)local_50 & 0xff | ((uint)pppuVar32 & 0xff) << 8;
    pppuVar23 = pppuVar24;
    pppuVar30 = pppuVar28;
    pppuVar31 = pppuVar32;
  }
  pppuVar24 = pppuVar23;
  pppuVar6 = pppuVar30;
  if (pppuVar28 != (uint ***)&DAT_00000001) goto LAB_0065aed8;
  goto LAB_0065add8;
LAB_0065afdc:
  iVar33 = (*(code *)ppuVar20)(uVar34,"\n",1);
  if (iVar33 != 0) {
    return 1;
  }
  if ((uint ****)((int)ppppuVar21 - 1U) < ppppuVar16) {
    iVar33 = (*(code *)ppuVar20)(uVar34,&DAT_003d4074,0x12);
    if (iVar33 != 0) {
      return 1;
    }
    if (ppppuVar11 != (uint ****)0x0) {
      ppppuVar25 = (uint ****)0x0;
      do {
        bVar1 = (byte)*puVar27;
        uVar22 = uVar29;
        if (bVar1 != 0xff) {
          iVar33 = (uint)bVar1 + (uint)(bVar1 >> 2);
          uVar22 = iVar33 + 2;
          if ((bVar1 & 3) != 0) {
            uVar22 = iVar33 + 3;
          }
        }
        local_40 = ppppuVar25;
        if (uVar14 <= uVar22) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar22,uVar14,&DAT_01d08ef8,&local_40);
        }
        if ((int)puVar27[uVar22] < 0) {
          if (ppppuVar25 != (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_01304210(0,&DAT_00533278,&local_40,0);
          }
          pppuVar26 = (uint ***)(puVar27[uVar22] & 0x7fffffff);
        }
        else {
          uVar22 = (int)ppppuVar25 + uVar22 + 1;
          if (uVar14 <= uVar22) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb12c(uVar22,uVar14,&DAT_01d08f08,&local_40);
          }
          pppuVar26 = (uint ***)puVar27[uVar22];
          if ((ppppuVar25 != (uint ****)0x0) &&
             (iVar33 = (*(code *)ppuVar20)(uVar34,&DAT_00533bc1,2), iVar33 != 0)) {
            return 1;
          }
        }
        local_40 = &local_44;
        local_3c = FUN_012fd02c;
        local_44 = pppuVar26;
        iVar33 = FUN_012fa178(uVar34,pppuVar7,&DAT_00590e5f,&local_40);
        if (iVar33 != 0) {
          return 1;
        }
        ppppuVar25 = (uint ****)((int)ppppuVar25 + 1);
      } while (ppppuVar11 != ppppuVar25);
    }
    iVar33 = (*(code *)ppuVar20)(uVar34,"\n",1);
    if (iVar33 != 0) {
      return 1;
    }
  }
  if (ppppuVar21 == (uint ****)0x0) {
    local_40 = &local_44;
    local_44 = (uint ***)&DAT_00000001;
    local_3c = FUN_012fd02c;
    iVar33 = FUN_012fa178(uVar34,pppuVar7,&DAT_003d4086,&local_40);
    if (iVar33 != 0) {
      return 1;
    }
  }
  bVar1 = (byte)*puVar27;
  pppuVar26 = (uint ***)(uint)bVar1;
  iVar33 = 2;
  if (pppuVar26 == (uint ***)0xfe) {
    pppuVar19 = (uint ***)0x1;
  }
  else {
    pppuVar19 = pppuVar35;
    if (pppuVar26 != (uint ***)0xff) {
      uVar22 = (uint)(bVar1 >> 2);
      if ((bVar1 & 3) != 0) {
        uVar22 = (bVar1 >> 2) + 1;
      }
      iVar33 = uVar22 + 2;
      pppuVar19 = pppuVar26;
    }
  }
  iVar12 = 0;
  if (bVar5) {
    if (pppuVar26 == (uint ***)0xff) {
      if (uVar14 <= uVar29) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar29,uVar14,&DAT_01d08f48);
      }
      uVar14 = puVar27[uVar29];
    }
    else {
      iVar12 = (bVar1 >> 2) + 2;
      if ((bVar1 & 3) != 0) {
        iVar12 = (bVar1 >> 2) + 3;
      }
      uVar22 = (int)pppuVar26 + iVar12;
      if (uVar14 <= uVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar22,uVar14,&DAT_01d08f38);
      }
      uVar14 = puVar27[uVar22];
    }
    iVar12 = 1;
    if ((-1 < (int)uVar14) && (uVar14 != 1)) {
      iVar12 = uVar14 + 1;
    }
  }
  ppppuVar11 = (uint ****)((int)ppppuVar21 + (int)pppuVar19 + iVar12 + iVar33);
  if (ppppuVar11 < ppppuVar21) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01c03c78);
  }
  if ((uint ****)0x7ffffffe < ppppuVar11) {
    local_3c = (code *)0x0;
    local_40 = ppppuVar11;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01c03c58,&DAT_01c03c88);
  }
  ppppuVar21 = ppppuVar11;
  if (ppppuVar13 < ppppuVar11) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(ppppuVar11,ppppuVar13,ppppuVar13,&DAT_01c03c68);
  }
  goto LAB_0065ab68;
LAB_0065aed8:
  if ((local_68 != 0) && (iVar12 = (*(code *)ppuVar20)(uVar34,&DAT_00533bc1,2), iVar12 != 0)) {
    return 1;
  }
  local_68 = local_68 + 1;
  if ((local_54 & 0xff) == local_54 >> 8) {
    local_34 = (code *)&LAB_01a6a304;
    local_38 = &local_44;
    local_40 = (uint ****)&local_4c;
    puVar18 = &DAT_0057d11c;
    uVar2 = (char)local_54;
  }
  else {
    uVar2 = (undefined1)(local_54 >> 8);
    local_2c = &LAB_01a6a304;
    local_30 = &local_44;
    local_38 = (uint ****)&local_4c;
    local_40 = (uint ****)&local_45;
    local_34 = FUN_0065fd74;
    puVar18 = &DAT_00591f01;
    local_45 = (char)local_54;
  }
  local_3c = FUN_0065fd74;
  local_4c = (uint ****)CONCAT31(local_4c._1_3_,uVar2);
  local_44 = pppuVar28;
  iVar12 = FUN_012fa178(uVar34,pppuVar7,puVar18,&local_40);
  if (iVar12 != 0) {
    return 1;
  }
  goto LAB_0065adc8;
}

