// FUN_0136d3e0 @ 0136d3e0 size=3120 calls_out=11 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0136d3e0(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  undefined4 ***pppuVar12;
  int iVar13;
  undefined4 ***pppuVar14;
  uint ***pppuVar15;
  uint uVar16;
  uint **ppuVar17;
  undefined *puVar18;
  undefined4 ***pppuVar19;
  uint uVar20;
  undefined4 uVar21;
  code *pcVar22;
  undefined4 ***pppuVar23;
  uint uVar24;
  undefined4 uVar25;
  uint uVar26;
  uint uVar27;
  int iVar28;
  uint *puVar29;
  uint *puVar30;
  undefined4 ***pppuVar31;
  undefined4 ***pppuVar32;
  uint ***pppuVar33;
  undefined4 ***pppuVar34;
  uint ***pppuVar35;
  int iVar36;
  uint uVar37;
  uint ***pppuVar38;
  uint ***pppuVar39;
  uint ***pppuVar40;
  uint uVar41;
  uint uVar42;
  uint *puVar43;
  bool bVar44;
  bool bVar45;
  uint local_50;
  uint **local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 ****local_40;
  code *local_3c;
  undefined4 ****local_38;
  code *local_34;
  undefined4 ****local_30;
  code *local_2c;
  uint ***local_28;
  
  uVar25 = *param_2;
  iVar36 = param_2[1];
  pcVar22 = *(code **)(iVar36 + 0xc);
  iVar2 = (*pcVar22)(uVar25,&DAT_003cd8c8,0xc);
  if (iVar2 != 0) {
    return 1;
  }
  pppuVar34 = *(undefined4 ****)(param_1 + 0x58);
  uVar27 = *(uint *)(param_1 + 0x15c) & 0x1f;
  if (pppuVar34 != (undefined4 ***)0x0) {
    iVar2 = *(int *)(param_1 + 0x54);
    pppuVar31 = (undefined4 ***)(1 << uVar27);
    iVar28 = 0;
    uVar41 = 0;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      uVar41 = uVar27;
    }
    uVar42 = ~(-1 << uVar27);
    uVar3 = *(uint *)(param_1 + 4);
    uVar4 = *(uint *)(param_1 + 8);
    uVar5 = *(uint *)(param_1 + 0xc);
    uVar6 = *(uint *)(param_1 + 0x10);
    uVar7 = *(uint *)(param_1 + 0x14);
    uVar8 = *(uint *)(param_1 + 0x18);
    uVar9 = *(uint *)(param_1 + 0x1c);
    bVar1 = *(byte *)(param_1 + 0x15b);
    uVar10 = bVar1 + 2;
    pppuVar23 = pppuVar34;
LAB_0136d4d4:
    pppuVar32 = (undefined4 ***)((int)pppuVar23 - (int)pppuVar31);
    if (pppuVar23 < pppuVar31) {
      pppuVar32 = (undefined4 ***)0x0;
    }
    if ((pppuVar34 <= (undefined4 ***)(iVar28 << uVar27)) || ((uVar42 & iVar28 << uVar27) != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_003cd6a1,0x23,&DAT_018925d0);
    }
    uVar37 = iVar28 << uVar27;
    if ((CARRY4(uVar10,uVar37)) || (pppuVar34 < (undefined4 ***)(uVar10 + uVar37))) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar37,(undefined4 ***)(uVar10 + uVar37),pppuVar34,&DAT_018925e0);
    }
    if (uVar37 == 0) {
      iVar11 = (*pcVar22)(uVar25,"D",1);
      if (iVar11 != 0) {
        return 1;
      }
      iVar11 = (*pcVar22)(uVar25,&DAT_0041545b,1);
      if (iVar11 != 0) {
        return 1;
      }
      goto LAB_0136d590;
    }
    if (uVar3 == uVar37) {
      iVar11 = (*pcVar22)(uVar25,"Q ",2);
    }
    else {
      bVar45 = uVar37 <= uVar8;
      bVar44 = uVar8 == uVar37;
      if (!bVar45 || bVar44) {
        bVar45 = uVar9 <= uVar37;
        bVar44 = uVar37 == uVar9;
      }
      if (!bVar45 || bVar44) {
        bVar45 = uVar37 <= uVar6;
        bVar44 = uVar6 == uVar37;
        if (!bVar45 || bVar44) {
          bVar45 = uVar7 <= uVar37;
          bVar44 = uVar37 == uVar7;
        }
        if (bVar45 && !bVar44) {
          iVar11 = (*pcVar22)(uVar25," >",2);
          goto joined_r0x0136d9a0;
        }
        iVar11 = (*pcVar22)(uVar25,"A>",2);
      }
      else {
        bVar45 = uVar37 <= uVar4;
        bVar44 = uVar4 == uVar37;
        if (!bVar45 || bVar44) {
          bVar45 = uVar5 <= uVar37;
          bVar44 = uVar37 == uVar5;
        }
        if (!bVar45 || bVar44) {
          if (uVar6 <= uVar37 && uVar37 <= uVar7) {
            iVar11 = (*pcVar22)(uVar25,"A*",2);
            goto joined_r0x0136d9a0;
          }
          iVar11 = (*pcVar22)(uVar25," *",2);
        }
        else {
          if (uVar6 <= uVar37 && uVar37 <= uVar7) {
            iVar11 = (*pcVar22)(uVar25,"A ",2);
joined_r0x0136d9a0:
            if (iVar11 != 0) {
              return 1;
            }
            goto LAB_0136d590;
          }
          iVar11 = (*pcVar22)(uVar25,"  ",2);
        }
      }
    }
    if (iVar11 != 0) {
      return 1;
    }
LAB_0136d590:
    local_4c = (uint **)(uVar37 >> uVar41);
    local_3c = FUN_007883b8;
    local_40 = (undefined4 ****)&local_4c;
    iVar11 = FUN_00fa948c(uVar25,iVar36,&DAT_003cd928,&local_40);
    if (iVar11 != 0) {
      return 1;
    }
    iVar11 = 0;
    iVar28 = iVar28 + 1;
    puVar29 = (uint *)(iVar2 + uVar37 * 4);
    pppuVar39 = (uint ***)0x0;
    puVar43 = puVar29 + uVar10;
    local_50 = 0;
    pppuVar12 = pppuVar34;
    pppuVar14 = pppuVar34;
    uVar37 = 2;
    uVar20 = uVar42;
    if (puVar29 == puVar43) goto LAB_0136d700;
LAB_0136d60c:
    pppuVar19 = (undefined4 ***)((int)pppuVar39 << 0x10 | 1);
    puVar30 = puVar29;
    pppuVar14 = pppuVar12;
    do {
      pppuVar33 = pppuVar39;
      puVar29 = puVar30 + 1;
      uVar24 = *puVar30;
      if ((uint ***)(bVar1 + 1) == pppuVar33) {
        local_28 = pppuVar33;
        if ((uint ***)0x100 < pppuVar33) {
          local_40 = &local_28;
          local_3c = (code *)&LAB_00fac484;
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0058924e,&local_40,&DAT_01892ee0);
        }
        uVar26 = (uint)pppuVar19 & 0xff;
        pppuVar12 = pppuVar19;
        if (uVar26 == 2) {
          pppuVar12 = pppuVar14;
          puVar29 = puVar30 + 1;
          goto LAB_0136d6c8;
        }
      }
      else {
        if ((uint ***)0xff < pppuVar33) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8(&DAT_003cd5ef,0x23,&local_40,&DAT_01892750,&DAT_018924c0);
        }
        pppuVar12 = (undefined4 ***)((int)pppuVar33 << 8);
        uVar26 = 0;
      }
      pppuVar39 = (uint ***)((int)pppuVar33 + 1);
      if (uVar37 == 2) {
LAB_0136d620:
        local_50 = (uint)pppuVar12 >> 8;
        uVar37 = uVar26;
        uVar20 = uVar24;
      }
      else if (uVar20 != uVar24 || ((uint)pppuVar12 & 1) != 0) {
        if (uVar20 == 0) goto LAB_0136d620;
        ppuVar17 = (uint **)(uVar37 | local_50 << 8);
        local_50 = (uint)pppuVar12 >> 8;
        if (uVar37 != 2) goto LAB_0136d738;
        goto LAB_0136d874;
      }
      pppuVar19 = pppuVar19 + 0x4000;
      puVar30 = puVar29;
      pppuVar14 = pppuVar12;
    } while (puVar29 != puVar43);
    puVar29 = puVar43;
LAB_0136d6c8:
    pppuVar39 = (uint ***)((int)pppuVar33 + 1);
    pppuVar14 = pppuVar12;
    do {
      uVar16 = uVar37;
      if (uVar20 == 0) {
        uVar16 = 2;
      }
      if (uVar37 == 2) {
        uVar16 = uVar37;
      }
      uVar26 = 2;
      ppuVar17 = (uint **)(uVar16 | local_50 << 8);
      pppuVar12 = pppuVar14;
      uVar24 = uVar20;
      if (uVar16 == 2) goto LAB_0136d874;
LAB_0136d738:
      local_28 = (uint ***)(uVar20 >> uVar41);
      local_48 = ppuVar17;
      local_44 = pppuVar14;
      if (iVar11 != 0) {
        iVar13 = (*pcVar22)(uVar25,&DAT_0041950f,2);
        if (iVar13 != 0) {
          return 1;
        }
        pppuVar14 = (undefined4 ***)((uint)local_44 & 0xff);
        ppuVar17 = (uint **)((uint)local_48 & 0xff);
      }
      if (((uint)ppuVar17 & 0xff) == ((uint)pppuVar14 & 0xff)) {
        if (((uint)pppuVar14 & 1) == 0) {
          if (local_48._1_1_ != local_44._1_1_) goto LAB_0136d7ac;
        }
        else if (local_48._2_2_ != local_44._2_2_) goto LAB_0136d7ac;
        local_38 = &local_28;
        local_40 = (undefined4 ****)&local_48;
        local_34 = FUN_007883b8;
        local_3c = (code *)&LAB_01392e20;
        iVar13 = FUN_00fa948c(uVar25,iVar36,&DAT_0057a481,&local_40);
      }
      else {
LAB_0136d7ac:
        local_30 = &local_28;
        local_38 = (undefined4 ****)&local_44;
        local_40 = (undefined4 ****)&local_48;
        local_2c = FUN_007883b8;
        local_34 = (code *)&LAB_01392e20;
        local_3c = (code *)&LAB_01392e20;
        iVar13 = FUN_00fa948c(uVar25,iVar36,&DAT_00592599,&local_40);
      }
      if (iVar13 != 0) {
        return 1;
      }
      iVar11 = iVar11 + 1;
      pppuVar14 = pppuVar12;
      uVar37 = uVar26;
      uVar20 = uVar24;
      if (puVar29 != puVar43) goto LAB_0136d60c;
LAB_0136d700:
      puVar29 = puVar43;
    } while( true );
  }
LAB_0136da24:
  iVar2 = (*pcVar22)(uVar25,&DAT_0041950e,1);
  if (iVar2 == 0) {
    pppuVar39 = *(uint ****)(param_1 + 0x1a8);
    if (pppuVar39 != (uint ***)0x0) {
      pppuVar33 = *(uint ****)(param_1 + 0x2ac);
      if (pppuVar33 == (uint ***)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7c58(&DAT_01892490);
      }
      iVar2 = *(int *)(param_1 + 0x1a4);
      pppuVar40 = (uint ***)0x0;
      uVar41 = 0;
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        uVar41 = uVar27;
      }
      pppuVar38 = (uint ***)0x0;
      do {
        pppuVar15 = (uint ***)((int)pppuVar38 + 1);
        pppuVar35 = (uint ***)0x0;
        if (pppuVar15 != pppuVar33) {
          pppuVar35 = pppuVar15;
        }
        if ((uint ***)0x5 < pppuVar38) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018924b0);
        }
        iVar28 = 0;
        if ((pppuVar33 <= pppuVar40) &&
           (iVar28 = 1, pppuVar15 = (uint ***)((int)pppuVar33 << 1),
           (uint ***)((int)pppuVar33 << 1) <= pppuVar40)) {
          pppuVar15 = (uint ***)FUN_018462e8((int)pppuVar33 * -2 + (int)pppuVar40,pppuVar33);
          iVar28 = 2;
          if ((uint ***)0x7ffffffe < pppuVar15) {
            local_3c = (code *)0x0;
            local_40 = (undefined4 ****)pppuVar15;
                    /* WARNING: Subroutine does not return */
            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_01892780,&DAT_018924a0);
          }
        }
        local_48 = (uint **)CONCAT31(local_48._1_3_,(char)pppuVar38);
        local_44 = (undefined4 ***)(*(uint *)(iVar2 + (int)pppuVar40 * 4) >> uVar41);
        if (pppuVar38 == (uint ***)0x0) {
          if (iVar28 == 0) {
            uVar21 = 0x18;
            puVar18 = &DAT_003cd8e7;
          }
          else {
            if (iVar28 != 1) {
              local_3c = FUN_013bbcdc;
              local_40 = &local_28;
              local_28 = pppuVar15;
              iVar28 = FUN_00fa948c(uVar25,iVar36,&DAT_00596d8c,&local_40);
              if (iVar28 != 0) {
                return 1;
              }
              goto LAB_0136dba0;
            }
            uVar21 = 0x16;
            puVar18 = &DAT_003cd8ff;
          }
          iVar28 = (*pcVar22)(uVar25,puVar18,uVar21);
          if (iVar28 != 0) {
            return 1;
          }
        }
LAB_0136dba0:
        local_38 = (undefined4 ****)&local_44;
        local_40 = (undefined4 ****)&local_48;
        local_34 = FUN_007883b8;
        local_3c = FUN_0136e598;
        iVar28 = FUN_00fa948c(uVar25,iVar36,&DAT_003cd915,&local_40);
        if (iVar28 != 0) {
          return 1;
        }
        pppuVar40 = (uint ***)((int)pppuVar40 + 1);
        pppuVar38 = pppuVar35;
      } while (pppuVar39 != pppuVar40);
    }
    pppuVar31 = *(undefined4 ****)(param_1 + 0x178);
    if ((undefined4 ***)0x1 < pppuVar31) {
      iVar2 = (*pcVar22)(uVar25,&DAT_0041950e,1);
      if (iVar2 != 0) {
        return 1;
      }
      uVar41 = *(uint *)(param_1 + 0x168);
      iVar2 = *(int *)(param_1 + 0x164);
      local_40 = (undefined4 ****)(uVar41 & 1);
      if (local_40 != (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb3aac(0,&DAT_00568f30,&local_40,0);
      }
      if (uVar41 != 0) {
        iVar28 = *(int *)(param_1 + 0x170);
        uVar5 = 0;
        uVar4 = *(uint *)(param_1 + 0x174);
        uVar3 = 0;
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          uVar3 = uVar27;
        }
        local_40 = (undefined4 ****)0x0;
        do {
          uVar6 = FUN_0136399c(param_1,uVar5);
          local_44 = (undefined4 ***)(uVar6 >> uVar3);
          local_3c = FUN_007883b8;
          local_40 = (undefined4 ****)&local_44;
          iVar11 = FUN_00fa948c(uVar25,iVar36,&DAT_003cd8d4,&local_40);
          if (iVar11 != 0) {
            return 1;
          }
          if (uVar41 <= uVar5 * 2) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar5 << 1,uVar41,&DAT_01894868);
          }
          uVar6 = uVar5 << 1 | 1;
          if (uVar41 <= uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar6,uVar41,&DAT_01894878);
          }
          uVar7 = *(uint *)(iVar2 + uVar5 * 8);
          uVar6 = *(uint *)(iVar2 + uVar6 * 4);
          if ((CARRY4(uVar6,uVar7)) || (uVar4 < uVar6 + uVar7)) {
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(uVar7,uVar6 + uVar7,uVar4,&DAT_01894888);
          }
          if (uVar6 != 0) {
            puVar29 = (uint *)(iVar28 + uVar7 * 4);
            local_28 = (uint ***)*puVar29;
            local_3c = FUN_013bbcdc;
            local_40 = &local_28;
            iVar11 = FUN_00fa948c(uVar25,iVar36,&DAT_00590e71,&local_40);
            if (iVar11 != 0) {
              return 1;
            }
            if (uVar6 != 1) {
              iVar11 = uVar6 * 4 + -4;
              do {
                puVar29 = puVar29 + 1;
                local_28 = (uint ***)*puVar29;
                iVar13 = (*pcVar22)(uVar25,&DAT_0041950f,2);
                if (iVar13 != 0) {
                  return 1;
                }
                local_40 = &local_28;
                local_3c = FUN_013bbcdc;
                iVar13 = FUN_00fa948c(uVar25,iVar36,&DAT_00590e71,&local_40);
                if (iVar13 != 0) {
                  return 1;
                }
                iVar11 = iVar11 + -4;
              } while (iVar11 != 0);
            }
          }
          iVar11 = (*pcVar22)(uVar25,&DAT_0041950e,1);
          if (iVar11 != 0) {
            return 1;
          }
          uVar5 = uVar5 + 1;
        } while (uVar5 != uVar41 >> 1);
      }
    }
    local_3c = FUN_007883b8;
    local_28 = (uint ***)((uint)pppuVar34 >> uVar27);
    local_40 = &local_28;
    iVar2 = FUN_00fa948c(uVar25,iVar36,&DAT_0057b4de,&local_40);
    if (iVar2 == 0) {
      local_3c = FUN_007883b8;
      local_40 = &local_28;
      local_28 = pppuVar31;
      iVar2 = FUN_00fa948c(uVar25,iVar36,&DAT_00592dbf,&local_40);
      if (iVar2 == 0) {
        local_40 = (undefined4 ****)(param_1 + 0x2b4);
        local_3c = FUN_0136e108;
        iVar2 = FUN_00fa948c(uVar25,iVar36,&DAT_00575c43,&local_40);
        if (iVar2 == 0) {
          uVar25 = (*pcVar22)(uVar25,&DAT_003cea26,2);
          return uVar25;
        }
        return 1;
      }
    }
  }
  return 1;
LAB_0136d874:
  iVar11 = (*pcVar22)(uVar25,&DAT_0041950e,1);
  if (iVar11 != 0) {
    return 1;
  }
  bVar44 = pppuVar23 <= pppuVar31;
  pppuVar23 = pppuVar32;
  if (bVar44) goto LAB_0136da24;
  goto LAB_0136d4d4;
}

