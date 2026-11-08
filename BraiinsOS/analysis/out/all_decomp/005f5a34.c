// FUN_005f5a34 @ 005f5a34 size=3360 calls_out=6 calls_in=0
// strings: *  (MW)

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_005f5a34(int param_1,undefined4 *param_2)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint ****ppppuVar5;
  uint ****ppppuVar6;
  int iVar7;
  uint uVar8;
  uint ***pppuVar9;
  int iVar10;
  uint ****ppppuVar11;
  uint uVar12;
  undefined1 *puVar13;
  uint ***pppuVar14;
  uint ***pppuVar15;
  uint ***pppuVar16;
  uint ****ppppuVar17;
  uint ****ppppuVar18;
  uint ***pppuVar19;
  uint ****ppppuVar20;
  int iVar21;
  uint ***pppuVar22;
  uint ***pppuVar23;
  uint ***pppuVar24;
  uint *puVar25;
  uint ***pppuVar26;
  uint ***pppuVar27;
  uint ***pppuVar28;
  uint ***pppuVar29;
  code *pcVar30;
  uint ****ppppuVar31;
  uint ****ppppuVar32;
  undefined4 uVar33;
  uint ***pppuVar34;
  uint ****local_88;
  uint ***local_74;
  int local_54;
  uint *local_50;
  uint ****local_4c;
  undefined1 local_45;
  uint ***local_44;
  uint ****local_40;
  code *local_3c;
  uint ****local_38;
  code *local_34;
  uint ****local_30;
  code *local_2c;
  
  iVar21 = param_2[1];
  uVar33 = *param_2;
  pcVar30 = *(code **)(iVar21 + 0xc);
  iVar4 = (*pcVar30)(uVar33,&DAT_0033d5c3,0x11);
  if (iVar4 != 0) {
    return 1;
  }
  pppuVar14 = *(uint ****)(param_1 + 0x28);
  iVar4 = *(int *)(param_1 + 4);
  pppuVar34 = (uint ***)((int)pppuVar14 + 2);
  ppppuVar17 = *(uint *****)(param_1 + 0x13c);
  ppppuVar11 = *(uint *****)(param_1 + 8);
  ppppuVar31 = *(uint *****)(param_1 + 0x138);
  ppppuVar5 = *(uint *****)(param_1 + 0x140);
  ppppuVar18 = (uint ****)0x0;
  do {
    pppuVar29 = (uint ***)((int)ppppuVar11 - (int)ppppuVar18);
    if (pppuVar29 == (uint ***)0x0) {
      local_40 = (uint ****)(param_1 + 0x144);
      local_3c = FUN_005f6848;
      iVar4 = FUN_00fa948c(uVar33,iVar21,&DAT_00572f35,&local_40);
      if (iVar4 != 0) {
        return 1;
      }
      iVar7 = *(int *)(param_1 + 0x1c);
      local_3c = (code *)&LAB_00788378;
      local_40 = &local_44;
      local_44 = (uint ***)CONCAT31(local_44._1_3_,iVar7 != 0);
      iVar4 = FUN_00fa948c(uVar33,iVar21,&DAT_00573230,&local_40);
      if (iVar4 == 0) {
        local_40 = (uint ****)(param_1 + 0x18);
        local_3c = FUN_007883b8;
        iVar4 = FUN_00fa948c(uVar33,iVar21,&DAT_0057b4de,&local_40);
        if (iVar4 == 0) {
          pppuVar14 = *(uint ****)(param_1 + 0x14);
          local_40 = &local_44;
          local_44 = pppuVar14;
          local_3c = FUN_007883b8;
          iVar4 = FUN_00fa948c(uVar33,iVar21,&DAT_00592dbf,&local_40);
          if (iVar4 == 0) {
            local_40 = (uint ****)(param_1 + 300);
            local_3c = FUN_007883b8;
            iVar4 = FUN_00fa948c(uVar33,iVar21,&DAT_00582f9e,&local_40);
            if (iVar4 == 0) {
              local_40 = (uint ****)(param_1 + 0x130);
              local_3c = FUN_007883b8;
              iVar4 = FUN_00fa948c(uVar33,iVar21,&DAT_0057412f,&local_40);
              if (iVar4 == 0) {
                local_40 = (uint ****)(param_1 + 0x28);
                local_3c = FUN_007883b8;
                iVar4 = FUN_00fa948c(uVar33,iVar21,&DAT_00574ed2,&local_40);
                if (iVar4 == 0) {
                  local_3c = FUN_005ffabc;
                  local_40 = (uint ****)(param_1 + 0x2c);
                  iVar4 = FUN_00fa948c(uVar33,iVar21,&DAT_00594ae1,&local_40);
                  if (iVar4 == 0) {
                    puVar13 = (undefined1 *)((int)pppuVar14 + (int)ppppuVar11);
                    local_44 = (uint ***)(*(int *)(param_1 + 0x24) + (int)puVar13 * 4);
                    if (iVar7 == 0) {
                      local_44 = (uint ***)((int)puVar13 * 4);
                    }
                    local_3c = FUN_007883b8;
                    local_40 = &local_44;
                    iVar4 = FUN_00fa948c(uVar33,iVar21,&DAT_00580471,&local_40);
                    if (iVar4 == 0) {
                      uVar33 = (*pcVar30)(uVar33,&DAT_003cea26,2);
                      return uVar33;
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
    }
    puVar25 = (uint *)(iVar4 + (int)ppppuVar18 * 4);
    ppppuVar6 = (uint ****)((int)ppppuVar18 + -1);
    local_88 = (uint ****)0x0;
    uVar12 = *puVar25;
    pppuVar22 = (uint ***)(uVar12 & 0xff);
    if (ppppuVar6 < ppppuVar31) {
      if (pppuVar22 == (uint ***)0xff) {
        pppuVar19 = pppuVar34;
        if (pppuVar29 <= pppuVar34) {
LAB_005f66d0:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(pppuVar34,pppuVar29,&DAT_01894568);
        }
      }
      else {
        iVar7 = ((uint)pppuVar22 >> 2) + 2;
        if ((uVar12 & 3) != 0) {
          iVar7 = ((uint)pppuVar22 >> 2) + 3;
        }
        pppuVar19 = (uint ***)((int)pppuVar22 + iVar7);
        if (pppuVar29 <= pppuVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(pppuVar19,pppuVar29,&DAT_01894558);
        }
      }
      local_88 = (uint ****)puVar25[(int)pppuVar19];
      if ((uint ****)0x7fffffff < local_88) {
        local_88 = (uint ****)&DAT_00000001;
      }
    }
    if (pppuVar22 == (uint ***)0xfe) {
      if (pppuVar29 < (uint ***)0x2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(1,1,&DAT_01856fc8);
      }
      if (pppuVar29 == (uint ***)0x2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(2,2,&DAT_01856fd8);
      }
      local_74 = (uint ***)(uVar12 >> 8);
      pppuVar15 = (uint ***)puVar25[2];
      local_54 = 1;
      pppuVar26 = (uint ***)puVar25[1];
      pppuVar19 = pppuVar34;
    }
    else if (pppuVar22 == (uint ***)0xff) {
      if (pppuVar29 < (uint ***)0x2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(1,1,&DAT_01856fe8);
      }
      if ((uint ***)((int)pppuVar29 + -2) < pppuVar14) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,pppuVar14,(uint ***)((int)pppuVar29 + -2),&DAT_01856ff8);
      }
      pppuVar15 = (uint ***)(puVar25 + 2);
      pppuVar26 = (uint ***)puVar25[1];
      local_54 = 2;
      pppuVar19 = pppuVar14;
    }
    else {
      if (pppuVar29 < (uint ***)0x2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(1,1,&DAT_01856f98);
      }
      pppuVar19 = (uint ***)((uint)pppuVar22 >> 2);
      if ((uVar12 & 3) != 0) {
        pppuVar19 = (uint ***)(((uint)pppuVar22 >> 2) + 1);
      }
      if ((uint ***)((int)pppuVar29 + -2) < pppuVar19) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,pppuVar19,(uint ***)((int)pppuVar29 + -2),&DAT_01856fb8);
      }
      pppuVar26 = (uint ***)((int)pppuVar29 - ((int)pppuVar19 + 2));
      if (pppuVar26 < pppuVar22) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,pppuVar22,pppuVar26,&DAT_01856fa8);
      }
      local_50 = puVar25 + (int)((int)pppuVar19 + 2);
      pppuVar15 = (uint ***)(puVar25 + 2);
      pppuVar26 = (uint ***)puVar25[1];
      local_54 = 0;
    }
    if (ppppuVar18 == (uint ****)0x0) {
      iVar7 = (*pcVar30)(uVar33,"D ",2);
    }
    else {
      bVar2 = ppppuVar18 == ppppuVar17;
      bVar3 = ppppuVar18 == ppppuVar5;
      if (ppppuVar31 < ppppuVar18) {
        if (bVar2 || bVar3) {
          iVar7 = (*pcVar30)(uVar33," >",2);
        }
        else {
          iVar7 = (*pcVar30)(uVar33,"  ",2);
        }
      }
      else if (bVar2 || bVar3) {
        iVar7 = (*pcVar30)(uVar33,&DAT_0033d59e,2);
      }
      else {
        iVar7 = (*pcVar30)(uVar33,"*  (MW)",2);
      }
    }
    if (iVar7 != 0) {
      return 1;
    }
    local_38 = &local_44;
    local_40 = (uint ****)&local_4c;
    local_34 = (code *)&LAB_00fac484;
    local_3c = (code *)&LAB_00fac484;
    local_4c = ppppuVar18;
    local_44 = pppuVar26;
    iVar7 = FUN_00fa948c(uVar33,iVar21,&DAT_0033d5d4,&local_40);
    if (iVar7 != 0) {
      return 1;
    }
    iVar7 = 0;
    bVar2 = false;
    uVar12 = (uint)local_74 & 0xff;
    pppuVar24 = (uint ***)0x0;
    ppppuVar20 = ppppuVar31;
LAB_005f5d5c:
    pppuVar23 = pppuVar24;
LAB_005f5d9c:
    ppppuVar32 = ppppuVar20;
    pppuVar16 = pppuVar26;
    if (local_54 == 2) {
      if (pppuVar19 <= pppuVar24) goto LAB_005f5eb4;
      pppuVar16 = (uint ***)pppuVar15[(int)pppuVar24];
      if (!bVar2) {
        ppppuVar32 = (uint ****)((uint)pppuVar24 & 0xff | ((uint)pppuVar24 & 0xff) << 8);
        pppuVar27 = pppuVar16;
joined_r0x005f5edc:
        if ((uint ***)((int)pppuVar24 + 1) == pppuVar19) {
          pppuVar24 = pppuVar19;
          ppppuVar20 = ppppuVar32;
          goto LAB_005f5d84;
        }
        uVar8 = (int)pppuVar24 * 0x100;
        pppuVar9 = (uint ***)((int)pppuVar24 + 1);
        do {
          uVar8 = uVar8 + 0x100;
          pppuVar28 = (uint ***)pppuVar15[(int)pppuVar9];
          pppuVar24 = (uint ***)((int)pppuVar9 + 1);
          if (pppuVar16 != pppuVar28) goto LAB_005f5f48;
          ppppuVar32 = (uint ****)((uint)ppppuVar32 & 0xffff00ff | (uVar8 >> 8 & 0xff) << 8);
          pppuVar9 = pppuVar24;
        } while (pppuVar19 != pppuVar24);
        pppuVar24 = pppuVar19;
        goto LAB_005f5e50;
      }
      if (pppuVar26 == pppuVar16) {
        ppppuVar32 = (uint ****)((uint)ppppuVar32 & 0xffff00ff | ((uint)pppuVar24 & 0xff) << 8);
        pppuVar27 = pppuVar26;
        goto joined_r0x005f5edc;
      }
      pppuVar9 = pppuVar24;
LAB_005f5f58:
      pppuVar24 = (uint ***)((int)pppuVar24 + 1);
      pppuVar28 = pppuVar16;
      pppuVar16 = pppuVar26;
      goto LAB_005f5f68;
    }
    if (local_54 == 1) {
      if (pppuVar24 != (uint ***)0x0) goto LAB_005f5eb4;
      pppuVar24 = (uint ***)0x1;
      pppuVar27 = pppuVar15;
      ppppuVar20 = (uint ****)(uVar12 | uVar12 << 8);
      if (!bVar2) goto LAB_005f5d84;
      if (pppuVar26 != pppuVar15) {
        pppuVar9 = local_74;
        pppuVar28 = pppuVar15;
        goto LAB_005f5f68;
      }
      ppppuVar32 = (uint ****)(uVar12 << 8 | (uint)ppppuVar32 & 0xffff00ff);
      pppuVar27 = pppuVar26;
LAB_005f5e50:
      ppppuVar20 = ppppuVar32;
LAB_005f5d84:
      ppppuVar32 = ppppuVar20;
      bVar2 = false;
      pppuVar23 = pppuVar24;
      pppuVar26 = pppuVar27;
      ppppuVar20 = ppppuVar32;
      pppuVar16 = pppuVar27;
      goto LAB_005f5d94;
    }
    if (pppuVar24 < pppuVar22) {
      uVar8 = (uint)pppuVar24 >> 2;
      if (pppuVar19 <= (uint ***)((uint)pppuVar24 >> 2)) {
LAB_005f6644:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar8,pppuVar19,&DAT_01856f68);
      }
      local_40 = (uint ****)pppuVar15[uVar8];
      pppuVar16 = (uint ***)local_50[(int)pppuVar24];
      bVar1 = *(byte *)((uint)&local_40 | (uint)pppuVar24 & 3);
      if (bVar2) {
        pppuVar9 = (uint ***)(uint)bVar1;
        if (pppuVar26 != pppuVar16) goto LAB_005f5f58;
        ppppuVar32 = (uint ****)((uint)ppppuVar32 & 0xffff00ff | (int)(uint)bVar1 << 8);
        pppuVar24 = (uint ***)((int)pppuVar24 + 1);
        pppuVar16 = pppuVar26;
      }
      else {
        ppppuVar32 = (uint ****)(uint)CONCAT11(bVar1,bVar1);
        pppuVar24 = (uint ***)((int)pppuVar24 + 1);
      }
      while (pppuVar24 != pppuVar22) {
        uVar8 = (uint)pppuVar24 >> 2;
        if (pppuVar19 <= (uint ***)((uint)pppuVar24 >> 2)) goto LAB_005f6644;
        local_40 = (uint ****)pppuVar15[uVar8];
        uVar8 = (uint)pppuVar24 & 3;
        pppuVar28 = (uint ***)local_50[(int)pppuVar24];
        pppuVar24 = (uint ***)((int)pppuVar24 + 1);
        pppuVar9 = (uint ***)(uint)*(byte *)((uint)&local_40 | uVar8);
        if (pppuVar16 != pppuVar28) goto LAB_005f5f48;
        ppppuVar32 = (uint ****)((uint)ppppuVar32 & 0xffff00ff | (int)pppuVar9 << 8);
      }
      pppuVar24 = pppuVar22;
      pppuVar27 = pppuVar16;
      ppppuVar20 = ppppuVar32;
      goto LAB_005f5d84;
    }
LAB_005f5eb4:
    if (bVar2) {
      bVar2 = false;
      ppppuVar20 = ppppuVar32;
      goto LAB_005f5d94;
    }
    iVar7 = (*pcVar30)(uVar33,&DAT_0041950e,1);
    if (iVar7 != 0) {
      return 1;
    }
    if (ppppuVar31 <= ppppuVar6) goto LAB_005f625c;
    iVar7 = (*pcVar30)(uVar33,&DAT_0033d5e9,0x12);
    if (iVar7 != 0) {
      return 1;
    }
    if (local_88 == (uint ****)0x0) goto LAB_005f6234;
    bVar1 = (byte)*puVar25;
    pppuVar22 = pppuVar34;
    if (bVar1 != 0xff) {
      iVar7 = (uint)bVar1 + (uint)(bVar1 >> 2);
      pppuVar22 = (uint ***)(iVar7 + 2);
      if ((bVar1 & 3) != 0) {
        pppuVar22 = (uint ***)(iVar7 + 3);
      }
    }
    if (pppuVar29 <= pppuVar22) goto LAB_005f6654;
    if ((int)puVar25[(int)pppuVar22] < 0) {
      local_44 = (uint ***)(puVar25[(int)pppuVar22] & 0x7fffffff);
    }
    else {
      pppuVar22 = (uint ***)((int)pppuVar22 + 1);
      if (pppuVar29 <= pppuVar22) goto LAB_005f6664;
      local_44 = (uint ***)puVar25[(int)pppuVar22];
    }
    local_3c = (code *)&LAB_00fac484;
    local_40 = &local_44;
    iVar7 = FUN_00fa948c(uVar33,iVar21,&DAT_00590e71,&local_40);
    if (iVar7 != 0) {
      return 1;
    }
    if (local_88 != (uint ****)&DAT_00000001) {
      ppppuVar20 = (uint ****)&DAT_00000001;
      do {
        bVar1 = (byte)*puVar25;
        pppuVar22 = pppuVar34;
        if (bVar1 != 0xff) {
          iVar7 = (uint)bVar1 + (uint)(bVar1 >> 2);
          pppuVar22 = (uint ***)(iVar7 + 2);
          if ((bVar1 & 3) != 0) {
            pppuVar22 = (uint ***)(iVar7 + 3);
          }
        }
        local_40 = ppppuVar20;
        if (pppuVar29 <= pppuVar22) {
LAB_005f6654:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(pppuVar22,pppuVar29,&DAT_01894528);
        }
        if ((int)puVar25[(int)pppuVar22] < 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb3aac(0,&DAT_00568f30,&local_40,0);
        }
        pppuVar22 = (uint ***)((int)ppppuVar20 + (int)((int)pppuVar22 + 1));
        if (pppuVar29 <= pppuVar22) {
LAB_005f6664:
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(pppuVar22,pppuVar29,&DAT_01894538);
        }
        pppuVar22 = (uint ***)puVar25[(int)pppuVar22];
        iVar7 = (*pcVar30)(uVar33,&DAT_0041950f,2);
        if (iVar7 != 0) {
          return 1;
        }
        local_3c = (code *)&LAB_00fac484;
        local_40 = &local_44;
        local_44 = pppuVar22;
        iVar7 = FUN_00fa948c(uVar33,iVar21,&DAT_00590e71,&local_40);
        if (iVar7 != 0) {
          return 1;
        }
        ppppuVar20 = (uint ****)((int)ppppuVar20 + 1);
      } while (local_88 != ppppuVar20);
    }
LAB_005f6234:
    iVar7 = (*pcVar30)(uVar33,&DAT_0041950e,1);
    if (iVar7 != 0) {
      return 1;
    }
LAB_005f625c:
    if (ppppuVar18 == (uint ****)0x0) {
      local_44 = (uint ***)&DAT_00000001;
      local_3c = (code *)&LAB_00fac484;
      local_40 = &local_44;
      iVar7 = FUN_00fa948c(uVar33,iVar21,&DAT_0033d5fb,&local_40);
      if (iVar7 != 0) {
        return 1;
      }
    }
    iVar7 = 2;
    bVar1 = (byte)*puVar25;
    pppuVar19 = (uint ***)(uint)bVar1;
    pppuVar22 = pppuVar14;
    if (pppuVar19 != (uint ***)0xff) {
      if (pppuVar19 == (uint ***)0xfe) {
        pppuVar22 = (uint ***)0x1;
      }
      else {
        uVar12 = (uint)(bVar1 >> 2);
        if ((bVar1 & 3) != 0) {
          uVar12 = (bVar1 >> 2) + 1;
        }
        iVar7 = uVar12 + 2;
        pppuVar22 = pppuVar19;
      }
    }
    iVar10 = 0;
    if (ppppuVar6 < ppppuVar31) {
      if (pppuVar19 == (uint ***)0xff) {
        if (pppuVar29 <= pppuVar34) goto LAB_005f66d0;
        uVar12 = puVar25[(int)pppuVar34];
      }
      else {
        iVar10 = (bVar1 >> 2) + 2;
        if ((bVar1 & 3) != 0) {
          iVar10 = (bVar1 >> 2) + 3;
        }
        pppuVar19 = (uint ***)((int)pppuVar19 + iVar10);
        if (pppuVar29 <= pppuVar19) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(pppuVar19,pppuVar29,&DAT_01894558);
        }
        uVar12 = puVar25[(int)pppuVar19];
      }
      iVar10 = 1;
      if ((-1 < (int)uVar12) && (iVar10 = 1, uVar12 != 1)) {
        iVar10 = uVar12 + 1;
      }
    }
    ppppuVar6 = (uint ****)((int)pppuVar22 + (int)((int)ppppuVar18 + iVar10 + iVar7));
    if (ppppuVar6 < ppppuVar18) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(&DAT_01857188);
    }
    if ((uint ****)0x7ffffffe < ppppuVar6) {
      local_3c = (code *)0x0;
      local_40 = ppppuVar6;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_40,&DAT_01857168,&DAT_01857178);
    }
    ppppuVar18 = ppppuVar6;
    if (ppppuVar11 < ppppuVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(ppppuVar6,ppppuVar11,ppppuVar11,&DAT_01857198);
    }
  } while( true );
LAB_005f5f48:
LAB_005f5f68:
  ppppuVar32 = (uint ****)((uint)ppppuVar32 & 0xffff);
  bVar2 = true;
  pppuVar23 = pppuVar24;
  pppuVar26 = pppuVar28;
  ppppuVar20 = (uint ****)((uint)pppuVar9 & 0xff | ((uint)pppuVar9 & 0xff) << 8);
LAB_005f5d94:
  if (pppuVar16 != (uint ***)&DAT_00000001) goto LAB_005f5f80;
  goto LAB_005f5d9c;
LAB_005f5f80:
  if ((iVar7 != 0) && (iVar10 = (*pcVar30)(uVar33,&DAT_0041950f,2), iVar10 != 0)) {
    return 1;
  }
  iVar7 = iVar7 + 1;
  local_44 = pppuVar16;
  if (((uint)ppppuVar32 & 0xff) == ((uint)ppppuVar32 >> 8 & 0xff)) {
    local_4c = (uint ****)CONCAT31(local_4c._1_3_,(char)ppppuVar32);
    local_34 = FUN_007883b8;
    local_38 = &local_44;
    local_3c = FUN_005fe558;
    local_40 = (uint ****)&local_4c;
    iVar10 = FUN_00fa948c(uVar33,iVar21,&DAT_0057a481,&local_40);
  }
  else {
    local_4c = (uint ****)CONCAT31(local_4c._1_3_,(char)((uint)ppppuVar32 >> 8));
    local_2c = FUN_007883b8;
    local_30 = &local_44;
    local_38 = (uint ****)&local_4c;
    local_40 = (uint ****)&local_45;
    local_34 = FUN_005fe558;
    local_3c = FUN_005fe558;
    local_45 = (char)ppppuVar32;
    iVar10 = FUN_00fa948c(uVar33,iVar21,&DAT_00592599,&local_40);
  }
  pppuVar24 = pppuVar23;
  if (iVar10 != 0) {
    return 1;
  }
  goto LAB_005f5d5c;
}

