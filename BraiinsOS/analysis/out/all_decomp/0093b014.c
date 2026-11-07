// FUN_0093b014 @ 0093b014 size=6836 calls_out=27 calls_in=1
// strings: hashrate_ths | board_name | columns | connector_position | top_left | right_top

/* WARNING: Type propagation algorithm not settling */

int FUN_0093b014(char *param_1,undefined8 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  char cVar3;
  code cVar4;
  undefined2 uVar5;
  code *pcVar6;
  code *pcVar7;
  bool bVar8;
  int iVar9;
  undefined8 *puVar10;
  uint ***pppuVar11;
  code *pcVar12;
  code *pcVar13;
  undefined4 ****ppppuVar14;
  int iVar15;
  int iVar16;
  uint ***pppuVar17;
  int iVar18;
  int iVar19;
  uint uVar20;
  char *pcVar21;
  uint ***pppuVar22;
  uint ***pppuVar23;
  int *piVar24;
  undefined4 *puVar25;
  code *pcVar26;
  uint uVar27;
  code *pcVar28;
  code *pcVar29;
  uint ***pppuVar30;
  int iVar31;
  int iVar32;
  uint ***pppuVar33;
  uint uVar34;
  uint uVar35;
  undefined4 uVar36;
  uint ***pppuVar37;
  code *pcVar38;
  undefined8 uVar39;
  ulonglong uVar40;
  code *local_f8;
  undefined4 *local_f4;
  undefined *local_f0;
  uint local_d8;
  undefined4 ****local_b8;
  code *local_b4;
  undefined4 ****local_b0;
  code *local_ac;
  undefined4 ***local_a4;
  undefined4 local_a0;
  uint ***local_98;
  undefined4 *local_94;
  uint ***local_90;
  uint ***local_88;
  code *local_84;
  uint ***local_80;
  uint ***local_78;
  code *local_74;
  uint ***local_70;
  undefined4 ****local_68;
  code *local_64;
  uint ****ppppuStack_60;
  undefined2 uStack_5a;
  uint ****local_58;
  code *local_54;
  uint ****local_50;
  code *local_4c;
  undefined4 local_48;
  uint ***local_44;
  uint ***local_40;
  code *local_3c;
  uint ***local_38;
  undefined1 local_34;
  undefined4 ****local_30;
  code *local_2c;
  uint ****ppppuStack_28;
  
  if (*param_1 != '\0') {
LAB_0093cc24:
    local_58 = (undefined4 ****)0xa;
    iVar9 = FUN_0157c50c(&local_58,0,0);
    return iVar9;
  }
  iVar9 = FUN_00947ca4(param_1,&DAT_0035b871,10);
  if (iVar9 != 0) {
    return iVar9;
  }
  if (*param_1 == '\x01') {
LAB_0093cd20:
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  pcVar38 = *(code **)(param_1 + 4);
  piVar24 = *(int **)pcVar38;
  iVar9 = piVar24[2];
  if ((uint)(*piVar24 - iVar9) < 2) {
    FUN_00933680(piVar24,iVar9,2,1,1);
    iVar9 = piVar24[2];
  }
  piVar24[2] = iVar9 + 2;
  *(undefined2 *)(piVar24[1] + iVar9) = 0x203a;
  piVar24 = *(int **)pcVar38;
  iVar31 = *(int *)(pcVar38 + 0xc);
  pcVar38[0x10] = (code)0x0;
  *(int *)(pcVar38 + 0xc) = iVar31 + 1;
  iVar9 = piVar24[2];
  if (*piVar24 == iVar9) {
    FUN_00933680(piVar24,iVar9,1,1,1);
    iVar9 = piVar24[2];
  }
  *(undefined1 *)(piVar24[1] + iVar9) = 0x5b;
  piVar24[2] = iVar9 + 1;
  if (param_3 != 0) {
    puVar10 = param_2 + param_3 * 9;
    local_f0 = &DAT_018a9324;
    bVar8 = true;
LAB_0093b1ac:
    piVar24 = *(int **)pcVar38;
    if (bVar8) {
      iVar9 = piVar24[2];
      if (*piVar24 == iVar9) {
        FUN_00933680(piVar24,iVar9,1,1,1);
        iVar9 = piVar24[2];
      }
      iVar31 = iVar9 + 1;
      *(undefined1 *)(piVar24[1] + iVar9) = 10;
    }
    else {
      iVar9 = piVar24[2];
      if ((uint)(*piVar24 - iVar9) < 2) {
        FUN_00933680(piVar24,iVar9,2,1,1);
        iVar9 = piVar24[2];
      }
      iVar31 = iVar9 + 2;
      *(undefined2 *)(piVar24[1] + iVar9) = 0xa2c;
    }
    iVar9 = *(int *)(pcVar38 + 0xc);
    uVar36 = *(undefined4 *)(pcVar38 + 4);
    uVar34 = *(uint *)(pcVar38 + 8);
    piVar24[2] = iVar31;
    if (iVar9 == 0) {
      iVar9 = 1;
    }
    else {
      do {
        if ((uint)(*piVar24 - iVar31) < uVar34) {
          FUN_00933680(piVar24,iVar31,uVar34,1,1);
          iVar31 = piVar24[2];
        }
        FUN_016dd1aa(piVar24[1] + iVar31,uVar36,uVar34);
        iVar31 = iVar31 + uVar34;
        iVar9 = iVar9 + -1;
        piVar24[2] = iVar31;
      } while (iVar9 != 0);
      iVar9 = *(int *)(pcVar38 + 0xc) + 1;
    }
    piVar24 = *(int **)pcVar38;
    iVar31 = *(int *)(param_2 + 1);
    iVar15 = *(int *)((int)param_2 + 0x2c);
    iVar18 = *(int *)(param_2 + 4);
    pcVar38[0x10] = (code)0x0;
    iVar16 = piVar24[2];
    iVar19 = *piVar24;
    *(int *)(pcVar38 + 0xc) = iVar9;
    iVar9 = *(int *)((int)param_2 + 0x14);
    if (iVar19 == iVar16) {
      FUN_00933680(piVar24,iVar16,1,1,1);
      iVar16 = piVar24[2];
    }
    uVar34 = *(uint *)(param_2 + 8);
    *(undefined1 *)(piVar24[1] + iVar16) = 0x7b;
    piVar24[2] = iVar16 + 1;
    local_b8 = (undefined4 ****)CONCAT22(local_b8._2_2_,0x100);
    local_b4 = pcVar38;
    iVar16 = FUN_00947ca4(&local_b8,&DAT_00564570,0x10);
    pcVar6 = local_b4;
    if (iVar16 != 0) {
      return iVar16;
    }
    if ((char)local_b8 == '\x01') goto LAB_0093cd20;
    piVar24 = *(int **)local_b4;
    iVar16 = piVar24[2];
    if ((uint)(*piVar24 - iVar16) < 2) {
      FUN_00933680(piVar24,iVar16,2,1,1);
      iVar16 = piVar24[2];
    }
    piVar24[2] = iVar16 + 2;
    *(undefined2 *)(piVar24[1] + iVar16) = 0x203a;
    piVar24 = *(int **)pcVar6;
    if (uVar34 < 10000) {
      uVar40 = (ulonglong)uVar34;
      iVar16 = 0x14;
      if (uVar34 < 100) goto LAB_0093b430;
LAB_0093b470:
      iVar19 = iVar16 + -2;
      uVar27 = (uint)((short)((uVar34 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)&uStack_5a + iVar16) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar34 + uVar27 * -100 & 0xffff) * 2);
      if (9 < uVar27) goto LAB_0093b440;
LAB_0093b4b8:
      iVar16 = iVar19 + -1;
      *(byte *)((int)&uStack_5a + iVar19 + 1) = (byte)uVar27 | 0x30;
    }
    else {
      uVar40 = (ulonglong)uVar34;
      iVar19 = 0;
      do {
        iVar16 = iVar19;
        iVar32 = (int)(uVar40 >> 0x20);
        uVar35 = (uint)uVar40;
        uVar40 = FUN_01846088(uVar35,iVar32,10000,0);
        uVar34 = (uint)uVar40;
        uVar20 = uVar35 + uVar34 * -10000;
        uVar27 = (uint)((short)((uVar20 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)&local_48 + iVar16) = *(undefined2 *)(&DAT_0040f4ca + uVar27 * 2);
        *(undefined2 *)((int)&local_48 + iVar16 + 2) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar20 + uVar27 * -100 & 0xffff) * 2);
        iVar19 = iVar16 + -4;
      } while ((uint)(uVar35 < 100000000) <= (uint)-iVar32);
      iVar16 = iVar16 + 0x10;
      if ((uint)(uVar34 < 100) <= (uint)-(int)(uVar40 >> 0x20)) goto LAB_0093b470;
LAB_0093b430:
      uVar34 = (uint)(uVar40 >> 0x20);
      uVar27 = (uint)uVar40;
      iVar19 = iVar16;
      if (!(uVar34 != 0 || uVar34 < (9 < uVar27))) goto LAB_0093b4b8;
LAB_0093b440:
      iVar16 = iVar19 + -2;
      *(undefined2 *)((int)&uStack_5a + iVar19) = *(undefined2 *)(&DAT_0040f4ca + uVar27 * 2);
    }
    uVar34 = 0x14 - iVar16;
    iVar19 = piVar24[2];
    if ((uint)(*piVar24 - iVar19) < uVar34) {
      FUN_00933680(piVar24,iVar19,uVar34,1,1);
      iVar19 = piVar24[2];
    }
    FUN_016dd1aa(piVar24[1] + iVar19,(int)&local_58 + iVar16,uVar34);
    piVar24[2] = iVar19 + uVar34;
    uVar39 = *param_2;
    pcVar6[0x10] = (code)0x1;
    iVar16 = FUN_0094a19c((int)uVar39,&local_b8,"hashrate_ths",0xc);
    if (iVar16 != 0) {
      return iVar16;
    }
    if (iVar31 != -0x80000000) {
      if ((char)local_b8 != '\0') goto LAB_0093cc24;
      iVar31 = FUN_00949b58(&local_b8,&DAT_00409140,0xd,param_2 + 1);
      if (iVar31 != 0) {
        return iVar31;
      }
    }
    if (iVar9 != -0x80000000) {
      if ((char)local_b8 != '\0') goto LAB_0093cc24;
      iVar9 = FUN_00949b58(&local_b8,"board_name",10,(int *)((int)param_2 + 0x14));
      if (iVar9 != 0) {
        return iVar9;
      }
    }
    if (iVar18 != -0x80000000) {
      if ((char)local_b8 != '\0') goto LAB_0093cc24;
      iVar9 = FUN_00949b58(&local_b8,&DAT_005672a4,4,param_2 + 4);
      if (iVar9 != 0) {
        return iVar9;
      }
    }
    if (iVar15 == -0x80000000) goto LAB_0093b17c;
    if ((char)local_b8 != '\0') goto LAB_0093cc24;
    iVar9 = FUN_00947ca4(&local_b8,&DAT_0056a038,8);
    pcVar6 = local_b4;
    if (iVar9 != 0) {
      return iVar9;
    }
    if ((char)local_b8 == '\x01') goto LAB_0093cd20;
    piVar24 = *(int **)local_b4;
    iVar9 = piVar24[2];
    if ((uint)(*piVar24 - iVar9) < 2) {
      FUN_00933680(piVar24,iVar9,2,1,1);
      iVar9 = piVar24[2];
    }
    piVar24[2] = iVar9 + 2;
    iVar31 = *(int *)((int)param_2 + 0x2c);
    *(undefined2 *)(piVar24[1] + iVar9) = 0x203a;
    if (iVar31 == -0x80000000) {
      piVar24 = *(int **)pcVar6;
      iVar9 = piVar24[2];
      if ((uint)(*piVar24 - iVar9) < 4) {
        FUN_00933680(piVar24,iVar9,4,1,1);
        iVar9 = piVar24[2];
      }
      *(undefined4 *)(piVar24[1] + iVar9) = 0x6c6c756e;
      piVar24[2] = iVar9 + 4;
      goto LAB_0093b170;
    }
    piVar24 = *(int **)pcVar6;
    cVar1 = *(char *)((int)param_2 + 0x3c);
    cVar2 = *(char *)((int)param_2 + 0x3d);
    cVar3 = *(char *)((int)param_2 + 0x3e);
    iVar9 = piVar24[2];
    iVar31 = *piVar24;
    pcVar6[0x10] = (code)0x0;
    *(int *)(pcVar6 + 0xc) = *(int *)(pcVar6 + 0xc) + 1;
    if (iVar31 == iVar9) {
      FUN_00933680(piVar24,iVar9,1,1,1);
      iVar9 = piVar24[2];
    }
    local_ac = pcVar6;
    uVar5 = *(undefined2 *)(param_2 + 7);
    *(undefined1 *)(piVar24[1] + iVar9) = 0x7b;
    piVar24[2] = iVar9 + 1;
    local_b0 = (undefined4 ****)CONCAT22(local_b0._2_2_,0x100);
    iVar9 = FUN_0094912c(&local_b0,"columns",7,uVar5);
    if (iVar9 != 0) {
      return iVar9;
    }
    if ((char)local_b0 == '\x01') goto LAB_0093cc24;
    iVar9 = FUN_0094912c(&local_b0,&DAT_00568804,4,*(undefined2 *)((int)param_2 + 0x3a));
    if (iVar9 != 0) {
      return iVar9;
    }
    uVar34 = (uint)local_b0 & 0xff;
    if (cVar3 == '\b') {
      if (cVar2 == '\x06') {
        if (uVar34 == 0) goto LAB_0093b9ec;
      }
      else if (uVar34 == 0) goto LAB_0093b8d0;
      goto LAB_0093cc24;
    }
    if (uVar34 == 0) {
      iVar9 = FUN_00947ca4(&local_b0,"connector_position",0x12);
      pcVar7 = local_ac;
      if (iVar9 != 0) {
        return iVar9;
      }
      if ((char)local_b0 != '\x01') {
        piVar24 = *(int **)local_ac;
        iVar9 = piVar24[2];
        if ((uint)(*piVar24 - iVar9) < 2) {
          FUN_00933680(piVar24,iVar9,2,1,1);
          iVar9 = piVar24[2];
        }
        piVar24[2] = iVar9 + 2;
        *(undefined2 *)(piVar24[1] + iVar9) = 0x203a;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(cVar3) {
        case '\0':
          uVar36 = 8;
          pcVar21 = &DAT_00569e70;
          break;
        case '\x01':
          uVar36 = 0xb;
          pcVar21 = "left_bottom";
          break;
        case '\x02':
          uVar36 = 9;
          pcVar21 = "right_top";
          break;
        case '\x03':
          pcVar21 = "right_bottom";
          goto LAB_0093b864;
        case '\x04':
          uVar36 = 8;
          pcVar21 = "top_left";
          break;
        case '\x05':
          uVar36 = 9;
          pcVar21 = "top_right";
          break;
        case '\x06':
          uVar36 = 0xb;
          pcVar21 = "bottom_left";
          break;
        case '\a':
          pcVar21 = "bottom_rightBUG: No hashboards provided to calculate missing hashboards from";
LAB_0093b864:
          uVar36 = 0xc;
        }
        FUN_00947e44(&local_58,*(undefined4 *)pcVar7,pcVar21,uVar36);
        if (((char)local_58 != '\x04') && (iVar9 = FUN_0157c4a0(local_58,local_54), iVar9 != 0)) {
          return iVar9;
        }
        pcVar7[0x10] = (code)0x1;
        if (cVar2 != '\x06') {
LAB_0093b8d0:
          iVar9 = FUN_00947ca4(&local_b0,"heat_direction",0xe);
          pcVar7 = local_ac;
          if (iVar9 != 0) {
            return iVar9;
          }
          if ((char)local_b0 == '\x01') goto LAB_0093cd20;
          piVar24 = *(int **)local_ac;
          iVar9 = piVar24[2];
          if ((uint)(*piVar24 - iVar9) < 2) {
            FUN_00933680(piVar24,iVar9,2,1,1);
            iVar9 = piVar24[2];
          }
          piVar24[2] = iVar9 + 2;
          *(undefined2 *)(piVar24[1] + iVar9) = 0x203a;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
          switch(cVar2) {
          case '\0':
            uVar36 = 10;
            pcVar21 = "right_left";
            break;
          case '\x01':
            uVar36 = 10;
            pcVar21 = "left_right";
            break;
          case '\x02':
            uVar36 = 10;
            pcVar21 = "top_bottom";
            break;
          case '\x03':
            uVar36 = 10;
            pcVar21 = "bottom_top";
            break;
          case '\x04':
            uVar36 = 5;
            pcVar21 = "hydro";
            break;
          case '\x05':
            uVar36 = 9;
            pcVar21 = "immersion";
          }
          FUN_00947e44(&local_58,*(undefined4 *)pcVar7,pcVar21,uVar36);
          if (((char)local_58 != '\x04') && (iVar9 = FUN_0157c4a0(local_58,local_54), iVar9 != 0)) {
            return iVar9;
          }
          pcVar7[0x10] = (code)0x1;
        }
LAB_0093b9ec:
        iVar9 = FUN_00947ca4(&local_b0,"chip_chain",10);
        pcVar7 = local_ac;
        if (iVar9 != 0) {
          return iVar9;
        }
        if ((char)local_b0 != '\x01') {
          piVar24 = *(int **)local_ac;
          iVar9 = piVar24[2];
          if ((uint)(*piVar24 - iVar9) < 2) {
            FUN_00933680(piVar24,iVar9,2,1,1);
            iVar9 = piVar24[2];
          }
          pppuVar30 = *(uint ****)((int)param_2 + 0x34);
          pppuVar37 = *(uint ****)(param_2 + 6);
          piVar24[2] = iVar9 + 2;
          *(undefined2 *)(piVar24[1] + iVar9) = 0x203a;
          piVar24 = *(int **)pcVar7;
          FUN_00926f04(&local_a4,0xe);
          uVar36 = 0;
          if ((uint ***)0xaaaaaaa < pppuVar30) {
LAB_0093cda4:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar36,local_f4);
          }
          puVar25 = (undefined4 *)((int)pppuVar30 * 0xc);
          if (puVar25 == (undefined4 *)0x0) {
            local_f4 = (undefined4 *)&DAT_00000004;
            local_68 = (undefined4 ****)0x0;
          }
          else {
            local_f4 = (undefined4 *)thunk_FUN_016d4a50(puVar25);
            if (local_f4 == (undefined4 *)0x0) {
              uVar36 = 4;
              local_f4 = puVar25;
              goto LAB_0093cda4;
            }
            local_68 = (undefined4 ****)pppuVar30;
          }
          pppuVar33 = (uint ***)0x0;
          local_64 = (code *)local_f4;
          if (pppuVar30 != (uint ***)0x0) {
            pppuVar33 = (uint ***)0x0;
            puVar25 = local_f4;
            do {
              local_78 = (uint ***)((int)pppuVar37 + 2);
              local_50 = &local_78;
              local_58 = &local_88;
              local_4c = FUN_00f2fc40;
              local_54 = FUN_00f2fc40;
              local_88 = pppuVar37;
              FUN_00600d2c(&local_30,&DAT_00348b94,&local_58);
              pppuVar33 = (uint ***)((int)pppuVar33 + 1);
              pppuVar37 = pppuVar37 + 1;
              *puVar25 = local_30;
              puVar25[1] = local_2c;
              puVar25[2] = ppppuStack_28;
              puVar25 = puVar25 + 3;
            } while (pppuVar30 != pppuVar33);
            pppuVar33 = pppuVar30;
          }
          pcVar29 = local_64;
          local_98 = (uint ***)local_68;
          local_94 = (undefined4 *)local_64;
          local_90 = pppuVar33;
          if (pppuVar33 == (uint ***)0x0) {
            pppuVar30 = (uint ***)0x0;
            local_f8 = (code *)&DAT_00000004;
            local_70 = (uint ***)0x0;
            local_74 = (code *)&DAT_00000004;
            local_78 = (uint ***)0x0;
          }
          else {
            pppuVar37 = (uint ***)((uint)pppuVar33 / 10 + 1);
            uVar36 = 0;
            pppuVar30 = (uint ***)((uint)pppuVar33 / 10);
            if (0x19999999 <
                ((uint)((int)pppuVar33 * -0x33333333) >> 1 | (int)pppuVar33 * -0x80000000)) {
              pppuVar30 = pppuVar37;
            }
            if ((uint ***)0xaaaaaaa < pppuVar30) {
LAB_0093cdc8:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(uVar36,local_f8);
            }
            pcVar26 = (code *)((int)pppuVar30 * 0xc);
            if (pcVar26 == (code *)0x0) {
              local_f8 = (code *)&DAT_00000004;
              pppuVar30 = (uint ***)0x0;
            }
            else {
              local_f8 = (code *)thunk_FUN_016d4a50(pcVar26);
              if (local_f8 == (code *)0x0) {
                uVar36 = 4;
                local_f8 = pcVar26;
                goto LAB_0093cdc8;
              }
            }
            local_70 = (uint ***)0x0;
            if ((uint)pppuVar33 % 10 == 0) {
              pppuVar37 = (uint ***)((uint)pppuVar33 / 10);
            }
            local_78 = pppuVar30;
            local_74 = local_f8;
            if (pppuVar30 < pppuVar37) {
              FUN_00933680(&local_78,0,pppuVar37,4,0xc);
            }
            pcVar13 = local_74 + (int)local_70 * 0xc;
            pcVar26 = pcVar29;
            pppuVar37 = pppuVar33;
            pppuVar30 = local_70;
            do {
              pppuVar11 = (uint ***)0xa;
              if (pppuVar37 < (uint ***)0xa) {
                pppuVar11 = pppuVar37;
              }
              FUN_009345b8(&local_30,pcVar26,pppuVar11,&DAT_0041950f);
              local_58 = &local_a4;
              local_54 = (code *)&DAT_006043a8;
              local_50 = (uint ****)&local_30;
              local_4c = (code *)&DAT_006043a8;
              FUN_00600d2c(&local_68,&DAT_00570dec,&local_58);
              if (local_30 != (undefined4 ****)0x0) {
                thunk_FUN_016d3fb4(local_2c);
              }
              pppuVar37 = (uint ***)((int)pppuVar37 - (int)pppuVar11);
              pppuVar30 = (uint ***)((int)pppuVar30 + 1);
              pcVar26 = (code *)((int)pcVar26 + (int)pppuVar11 * 3 * 4);
              *(undefined4 *****)pcVar13 = local_68;
              *(code **)(pcVar13 + 4) = local_64;
              *(uint *****)(pcVar13 + 8) = ppppuStack_60;
              pcVar13 = pcVar13 + 0xc;
            } while (pppuVar37 != (uint ***)0x0);
          }
          pcVar26 = local_74;
          local_88 = local_78;
          local_84 = local_74;
          local_80 = pppuVar30;
          FUN_009345b8(&local_58,local_74,pppuVar30,&DAT_00414a81);
          local_68 = local_58;
          local_64 = local_54;
          ppppuStack_60 = local_50;
          FUN_00926f04(&local_58,0xc);
          local_30 = local_58;
          local_2c = local_54;
          ppppuStack_28 = local_50;
          local_50 = (uint ****)&local_30;
          local_58 = (uint ****)&local_68;
          local_54 = (code *)&DAT_006043a8;
          local_4c = (code *)&DAT_006043a8;
          FUN_00600d2c(&local_78,&DAT_0056fe83,&local_58);
          if (local_30 != (undefined4 ****)0x0) {
            thunk_FUN_016d3fb4(local_2c);
          }
          if (local_68 != (undefined4 ****)0x0) {
            thunk_FUN_016d3fb4(local_64);
          }
          pppuVar37 = local_70;
          pcVar13 = local_74;
          local_38 = local_70;
          local_3c = local_74;
          local_44 = (uint ***)0x0;
          local_48 = local_70;
          local_4c = local_74;
          local_34 = 0x80;
          local_54 = (code *)0x1;
          local_58 = (undefined4 ****)0x0;
          if (local_70 == (uint ***)0x0) {
LAB_0093be0c:
            local_50 = (uint ****)0x0;
            local_40 = local_44;
            if (local_44 < local_70) {
              local_d8 = 0;
              uVar34 = 0;
              pcVar28 = local_74;
              pppuVar11 = local_70;
LAB_0093be30:
              uVar27 = (uint)(byte)pcVar28[(int)local_44];
              switch(uVar27) {
              case 9:
              case 10:
              case 0xd:
              case 0x20:
                local_44 = (uint ***)((int)local_44 + 1);
                if (pppuVar11 == local_44) goto LAB_0093c498;
                goto LAB_0093be30;
              case 0xb:
              case 0xc:
              case 0xe:
              case 0xf:
              case 0x10:
              case 0x11:
              case 0x12:
              case 0x13:
              case 0x14:
              case 0x15:
              case 0x16:
              case 0x17:
              case 0x18:
              case 0x19:
              case 0x1a:
              case 0x1b:
              case 0x1c:
              case 0x1d:
              case 0x1e:
              case 0x1f:
              case 0x21:
              case 0x23:
              case 0x24:
              case 0x25:
              case 0x26:
              case 0x27:
              case 0x28:
              case 0x29:
              case 0x2a:
              case 0x2b:
              case 0x2c:
switchD_0093be48_caseD_b:
                if (9 < uVar27 - 0x30) {
                  local_30 = (undefined4 ****)&DAT_0000000a;
                  pppuVar11 = (uint ***)FUN_008f9984(&local_58,&local_30);
                  goto LAB_0093c4b4;
                }
                pppuVar11 = (uint ***)FUN_0157b84c(&local_58);
                break;
              case 0x22:
                local_44 = (uint ***)((int)local_44 + 1);
                pppuVar11 = (uint ***)FUN_0157d450(&local_4c);
                break;
              case 0x2d:
                local_44 = (uint ***)((int)local_44 + 1);
                pppuVar11 = (uint ***)FUN_0157b84c(&local_58);
                break;
              default:
                switch(uVar27) {
                case 0x5b:
                case 0x7b:
                  if ((uint)((int)local_58 - (int)local_50) < uVar34) {
                    FUN_0157eaa8(&local_58);
                  }
                  if (uVar34 != 0) {
                    *(char *)((int)local_54 + (int)local_50) = (char)local_d8;
                  }
                  bVar8 = false;
                  if (uVar34 != 0) {
                    local_50 = (uint ****)((int)local_50 + 1);
                  }
                  local_44 = (uint ***)((int)local_44 + 1);
                  goto LAB_0093c1a0;
                default:
                  goto switchD_0093be48_caseD_b;
                case 0x66:
                  pppuVar22 = (uint ***)((int)local_44 + 1);
                  pppuVar17 = pppuVar11;
                  if (pppuVar11 < pppuVar22) {
                    pppuVar17 = pppuVar22;
                  }
                  if (pppuVar22 < pppuVar11) {
                    pppuVar23 = (uint ***)((int)local_44 + 2);
                    pppuVar11 = pppuVar23;
                    if (pcVar28[(int)pppuVar22] == (code)0x61) {
                      pppuVar22 = pppuVar23;
                      if (pppuVar23 == pppuVar17) goto LAB_0093c8c4;
                      pppuVar22 = (uint ***)((int)local_44 + 3);
                      pppuVar11 = pppuVar22;
                      if (pcVar28[(int)pppuVar23] == (code)0x6c) {
                        if (pppuVar22 == pppuVar17) goto LAB_0093c8c4;
                        pppuVar23 = local_44 + 1;
                        pppuVar11 = pppuVar23;
                        if (pcVar28[(int)pppuVar22] == (code)0x73) {
                          pppuVar22 = pppuVar23;
                          if (pppuVar23 == pppuVar17) goto LAB_0093c8c4;
                          local_44 = (uint ***)((int)local_44 + 5);
                          pppuVar11 = local_44;
                          if (pcVar28[(int)pppuVar23] == (code)0x65) goto LAB_0093c170;
                        }
                      }
                    }
                    local_44 = pppuVar11;
                    local_30 = (undefined4 ****)&DAT_00000009;
                    pppuVar11 = (uint ***)FUN_005b8c9c(&local_58,&local_30);
                  }
                  else {
LAB_0093c8c4:
                    local_44 = pppuVar22;
                    local_30 = (undefined4 ****)&DAT_00000005;
                    pppuVar11 = (uint ***)FUN_005b8c9c(&local_58,&local_30);
                  }
                  break;
                case 0x6e:
                  pppuVar22 = (uint ***)((int)local_44 + 1);
                  pppuVar17 = pppuVar11;
                  if (pppuVar11 < pppuVar22) {
                    pppuVar17 = pppuVar22;
                  }
                  if (pppuVar22 < pppuVar11) {
                    pppuVar23 = (uint ***)((int)local_44 + 2);
                    pppuVar11 = pppuVar23;
                    if (pcVar28[(int)pppuVar22] == (code)0x75) {
                      pppuVar22 = pppuVar23;
                      if (pppuVar23 == pppuVar17) goto LAB_0093c8e8;
                      pppuVar22 = (uint ***)((int)local_44 + 3);
                      pppuVar11 = pppuVar22;
                      if (pcVar28[(int)pppuVar23] != (code)0x6c) goto LAB_0093cb80;
                      if (pppuVar22 == pppuVar17) goto LAB_0093c8e8;
                      local_44 = local_44 + 1;
                      pppuVar11 = local_44;
                      if (pcVar28[(int)pppuVar22] != (code)0x6c) goto LAB_0093cb80;
                      goto LAB_0093c170;
                    }
LAB_0093cb80:
                    local_44 = pppuVar11;
                    local_30 = (undefined4 ****)&DAT_00000009;
                    pppuVar11 = (uint ***)FUN_005b8c9c(&local_58,&local_30);
                  }
                  else {
LAB_0093c8e8:
                    local_44 = pppuVar22;
                    local_30 = (undefined4 ****)&DAT_00000005;
                    pppuVar11 = (uint ***)FUN_005b8c9c(&local_58,&local_30);
                  }
                  break;
                case 0x74:
                  pppuVar22 = (uint ***)((int)local_44 + 1);
                  pppuVar17 = pppuVar11;
                  if (pppuVar11 < pppuVar22) {
                    pppuVar17 = pppuVar22;
                  }
                  if (pppuVar22 < pppuVar11) {
                    pppuVar23 = (uint ***)((int)local_44 + 2);
                    pppuVar11 = pppuVar23;
                    if (pcVar28[(int)pppuVar22] == (code)0x72) {
                      pppuVar22 = pppuVar23;
                      if (pppuVar23 == pppuVar17) goto LAB_0093c904;
                      pppuVar22 = (uint ***)((int)local_44 + 3);
                      pppuVar11 = pppuVar22;
                      if (pcVar28[(int)pppuVar23] == (code)0x75) {
                        if (pppuVar22 == pppuVar17) goto LAB_0093c904;
                        local_44 = local_44 + 1;
                        pppuVar11 = local_44;
                        if (pcVar28[(int)pppuVar22] == (code)0x65) goto LAB_0093c170;
                      }
                    }
                    local_44 = pppuVar11;
                    local_30 = (undefined4 ****)&DAT_00000009;
                    pppuVar11 = (uint ***)FUN_005b8c9c(&local_58,&local_30);
                  }
                  else {
LAB_0093c904:
                    local_44 = pppuVar22;
                    local_30 = (undefined4 ****)&DAT_00000005;
                    pppuVar11 = (uint ***)FUN_005b8c9c(&local_58,&local_30);
                  }
                }
                goto LAB_0093c4b4;
              }
              if (pppuVar11 != (uint ***)0x0) goto LAB_0093c4b4;
LAB_0093c170:
              bVar8 = true;
              if (uVar34 == 0) {
                if (local_50 == (uint ****)0x0) {
LAB_0093c96c:
                  if (local_44 < local_40) goto LAB_0093cde4;
                  if (local_40 != (uint ***)0x0) {
                    if (local_40 < local_38) {
                      if ((char)local_3c[(int)local_40] < -0x40) goto LAB_0093cde4;
                    }
                    else if (local_40 != local_38) goto LAB_0093cde4;
                  }
                  if (local_44 != (uint ***)0x0) {
                    if (local_44 < local_38) {
                      if ((char)local_3c[(int)local_44] < -0x40) goto LAB_0093cde4;
                    }
                    else if (local_44 != local_38) {
LAB_0093cde4:
                    /* WARNING: Subroutine does not return */
                      FUN_00faa8ac();
                    }
                  }
                  pcVar28 = local_3c + (int)local_40;
                  pppuVar11 = (uint ***)((int)local_44 - (int)local_40);
                  if (local_48 <= local_44) goto LAB_0093c4b8;
                  goto LAB_0093ca10;
                }
                local_50 = (uint ****)((int)local_50 - 1);
                uVar27 = (uint)*(byte *)((int)local_54 + (int)local_50);
              }
              else {
                uVar27 = local_d8;
              }
LAB_0093c1a0:
              if (local_44 < local_48) {
                do {
                  cVar4 = local_4c[(int)local_44];
                  switch(cVar4) {
                  case (code)0x9:
                  case (code)0xa:
                  case (code)0xd:
                  case (code)0x20:
                    local_44 = (uint ***)((int)local_44 + 1);
                    if (local_48 == local_44) goto LAB_0093c780;
                    break;
                  case (code)0xb:
                  case (code)0xc:
                  case (code)0xe:
                  case (code)0xf:
                  case (code)0x10:
                  case (code)0x11:
                  case (code)0x12:
                  case (code)0x13:
                  case (code)0x14:
                  case (code)0x15:
                  case (code)0x16:
                  case (code)0x17:
                  case (code)0x18:
                  case (code)0x19:
                  case (code)0x1a:
                  case (code)0x1b:
                  case (code)0x1c:
                  case (code)0x1d:
                  case (code)0x1e:
                  case (code)0x1f:
                  case (code)0x21:
                  case (code)0x22:
                  case (code)0x23:
                  case (code)0x24:
                  case (code)0x25:
                  case (code)0x26:
                  case (code)0x27:
                  case (code)0x28:
                  case (code)0x29:
                  case (code)0x2a:
                  case (code)0x2b:
                    goto switchD_0093c1d8_caseD_b;
                  case (code)0x2c:
                    if (bVar8) {
                      local_44 = (uint ***)((int)local_44 + 1);
                    }
                    goto LAB_0093c2fc;
                  default:
                    if (cVar4 == (code)0x5d) {
                      if (uVar27 != 0x5b) goto LAB_0093c2dc;
                    }
                    else {
                      if (cVar4 != (code)0x7d) goto switchD_0093c1d8_caseD_b;
                      if (uVar27 != 0x7b) goto LAB_0093c2dc;
                    }
                    local_44 = (uint ***)((int)local_44 + 1);
                    if (local_50 == (uint ****)0x0) goto LAB_0093c96c;
                    local_50 = (uint ****)((int)local_50 - 1);
                    bVar8 = true;
                    uVar27 = (uint)*(byte *)((int)local_54 + (int)local_50);
                    if (local_48 <= local_44) goto LAB_0093c780;
                  }
                } while( true );
              }
LAB_0093c780:
              ppppuVar14 = (undefined4 ****)&SUB_00000002;
              if (uVar27 != 0x5b) {
                if (uVar27 != 0x7b) goto LAB_0093ce04;
                ppppuVar14 = (undefined4 ****)0x3;
              }
              local_30 = ppppuVar14;
              pppuVar11 = (uint ***)FUN_008f9984(&local_58,&local_30);
              goto LAB_0093c4b4;
            }
          }
          else {
            do {
              if ((0x17 < (byte)local_74[(int)local_44] - 9) ||
                 ((1 << ((byte)local_74[(int)local_44] - 9 & 0xff) & 0x800013U) == 0))
              goto LAB_0093be0c;
              local_44 = (uint ***)((int)local_44 + 1);
            } while (local_70 != local_44);
            local_40 = local_70;
            local_50 = (uint ****)0x0;
          }
LAB_0093c498:
          local_30 = (undefined4 ****)&DAT_00000005;
          pppuVar11 = (uint ***)FUN_008f9984(&local_58,&local_30);
LAB_0093c4b4:
          pcVar28 = (code *)0x0;
          goto LAB_0093c4b8;
        }
      }
      goto LAB_0093cd20;
    }
    goto LAB_0093cc24;
  }
  *(int *)(pcVar38 + 0xc) = iVar31;
  iVar15 = piVar24[2];
  if (*piVar24 != iVar15) goto LAB_0093b12c;
LAB_0093ccfc:
  FUN_00933680(piVar24,iVar15,1,1,1);
  iVar15 = piVar24[2];
LAB_0093b12c:
  *(undefined1 *)(piVar24[1] + iVar15) = 0x5d;
  piVar24[2] = iVar15 + 1;
  pcVar38[0x10] = (code)0x1;
  return 0;
  while (local_44 = (uint ***)((int)local_44 + 1), local_48 != local_44) {
LAB_0093ca10:
    if ((0x17 < (byte)local_4c[(int)local_44] - 9) ||
       ((1 << ((byte)local_4c[(int)local_44] - 9 & 0xff) & 0x800013U) == 0)) {
      local_30 = (undefined4 ****)&DAT_00000016;
      pppuVar11 = (uint ***)FUN_008f9984(&local_58,&local_30);
      pcVar28 = (code *)0x0;
      break;
    }
  }
LAB_0093c4b8:
  if (local_58 != (undefined4 ****)0x0) {
    thunk_FUN_016d3fb4(local_54);
  }
  if (pcVar28 == (code *)0x0) {
    pcVar12 = (code *)0x0;
LAB_0093c564:
    if (local_78 != (uint ***)0x0) {
      thunk_FUN_016d3fb4(pcVar13);
    }
    if (pcVar12 == (code *)0x0) {
      iVar9 = FUN_00954bd0(pppuVar11);
      pcVar13 = pcVar26 + 4;
      for (; pppuVar30 != (uint ***)0x0; pppuVar30 = (uint ***)((int)pppuVar30 - 1)) {
        if (*(int *)(pcVar13 + -4) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)pcVar13);
        }
        pcVar13 = pcVar13 + 0xc;
      }
      if (local_88 != (uint ***)0x0) {
        thunk_FUN_016d3fb4(pcVar26);
      }
      puVar25 = (undefined4 *)((int)pcVar29 + 4);
      for (; pppuVar33 != (uint ***)0x0; pppuVar33 = (uint ***)((int)pppuVar33 - 1)) {
        if (puVar25[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar25);
        }
        puVar25 = puVar25 + 3;
      }
      goto LAB_0093c70c;
    }
    pppuVar37 = pppuVar11;
    pcVar13 = pcVar12;
  }
  else {
    if (pppuVar11 < pppuVar37) {
      if (pppuVar11 == (uint ***)0x0) {
        pcVar12 = (code *)&DAT_00000001;
      }
      else {
        pcVar12 = (code *)thunk_FUN_016d4a50(pppuVar11);
        if (pcVar12 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,pppuVar11);
        }
      }
      FUN_016dd1aa(pcVar12,pcVar28,pppuVar11);
      goto LAB_0093c564;
    }
    if (pppuVar37 < local_78) {
      if (pppuVar37 == (uint ***)0x0) {
        thunk_FUN_016d3fb4(pcVar13);
        pcVar13 = (code *)&DAT_00000001;
      }
      else {
        pcVar13 = (code *)thunk_FUN_016d4ea4(pcVar13,pppuVar37);
        if (pcVar13 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,pppuVar37);
        }
      }
    }
  }
  iVar9 = piVar24[2];
  if ((uint ***)(*piVar24 - iVar9) < pppuVar37) {
    FUN_00933680(piVar24,iVar9,pppuVar37,1,1);
    iVar9 = piVar24[2];
  }
  FUN_016dd1aa(piVar24[1] + iVar9,pcVar13,pppuVar37);
  piVar24[2] = iVar9 + (int)pppuVar37;
  if (pppuVar37 != (uint ***)0x0) {
    thunk_FUN_016d3fb4(pcVar13);
    pppuVar30 = local_80;
    pcVar26 = local_84;
  }
  pcVar29 = pcVar26 + 4;
  for (; pppuVar30 != (uint ***)0x0; pppuVar30 = (uint ***)((int)pppuVar30 - 1)) {
    if (*(int *)(pcVar29 + -4) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)pcVar29);
    }
    pcVar29 = pcVar29 + 0xc;
  }
  if (local_88 != (uint ***)0x0) {
    thunk_FUN_016d3fb4(pcVar26);
  }
  pcVar29 = (code *)local_94;
  puVar25 = local_94 + 1;
  for (pppuVar30 = local_90; pppuVar30 != (uint ***)0x0; pppuVar30 = (uint ***)((int)pppuVar30 - 1))
  {
    if (puVar25[-1] != 0) {
      thunk_FUN_016d3fb4(*puVar25);
    }
    puVar25 = puVar25 + 3;
  }
  iVar9 = 0;
LAB_0093c70c:
  if (local_98 != (uint ***)0x0) {
    thunk_FUN_016d3fb4(pcVar29);
  }
  if (local_a4 != (undefined4 ***)0x0) {
    thunk_FUN_016d3fb4(local_a0);
  }
  if (iVar9 != 0) {
    return iVar9;
  }
  pcVar7[0x10] = (code)0x1;
  if ((cVar1 != '\0') &&
     (iVar9 = FUN_0093e998(&local_b0,*(undefined1 *)((int)param_2 + 0x3c)), iVar9 != 0)) {
    return iVar9;
  }
  local_58 = local_b0;
  local_54 = local_ac;
  FUN_009074c0(&local_58);
LAB_0093b170:
  pcVar6[0x10] = (code)0x1;
LAB_0093b17c:
  param_2 = param_2 + 9;
  local_58 = local_b8;
  local_54 = local_b4;
  FUN_009074c0(&local_58);
  bVar8 = false;
  pcVar38[0x10] = (code)0x1;
  if (param_2 == puVar10) goto LAB_0093cc4c;
  goto LAB_0093b1ac;
switchD_0093c1d8_caseD_b:
LAB_0093c2dc:
  if (bVar8) {
    ppppuVar14 = (undefined4 ****)&DAT_00000007;
    if (uVar27 != 0x5b) {
      if (uVar27 != 0x7b) {
        local_f0 = &DAT_018a9334;
LAB_0093ce04:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,local_f0);
      }
      ppppuVar14 = (undefined4 ****)&DAT_00000008;
    }
    local_30 = ppppuVar14;
    pppuVar11 = (uint ***)FUN_008f9984(&local_58,&local_30);
    goto LAB_0093c4b4;
  }
LAB_0093c2fc:
  if (uVar27 == 0x7b) {
    if (local_44 < local_48) {
      while( true ) {
        uVar34 = (byte)local_4c[(int)local_44] - 9;
        if (0x19 < uVar34) goto LAB_0093cbf0;
        if ((1 << (uVar34 & 0xff) & 0x800013U) == 0) break;
        local_44 = (uint ***)((int)local_44 + 1);
        if (local_48 == local_44) goto LAB_0093c868;
      }
      if (uVar34 == 0x19) {
        local_44 = (uint ***)((int)local_44 + 1);
        pppuVar11 = (uint ***)FUN_0157d450(&local_4c);
        if (pppuVar11 == (uint ***)0x0) {
          if (local_44 < local_48) {
            do {
              switch(local_4c[(int)local_44]) {
              case (code)0x9:
              case (code)0xa:
              case (code)0xd:
              case (code)0x20:
                local_44 = (uint ***)((int)local_44 + 1);
                if (local_48 == local_44) goto LAB_0093c8a4;
                break;
              default:
                local_30 = (undefined4 ****)&DAT_00000006;
                pppuVar11 = (uint ***)FUN_008f9984(&local_58,&local_30);
                goto LAB_0093c4b4;
              case (code)0x3a:
                goto switchD_0093c390_caseD_3a;
              }
            } while( true );
          }
LAB_0093c8a4:
          local_30 = (undefined4 ****)0x3;
          pppuVar11 = (uint ***)FUN_008f9984(&local_58,&local_30);
        }
      }
      else {
LAB_0093cbf0:
        local_30 = (undefined4 ****)&DAT_00000011;
        pppuVar11 = (uint ***)FUN_008f9984(&local_58,&local_30);
      }
    }
    else {
LAB_0093c868:
      local_30 = (undefined4 ****)0x3;
      pppuVar11 = (uint ***)FUN_008f9984(&local_58,&local_30);
    }
    goto LAB_0093c4b4;
  }
LAB_0093c478:
  uVar34 = 1;
  pcVar28 = local_4c;
  pppuVar11 = local_48;
  local_d8 = uVar27;
  if (local_48 <= local_44) goto LAB_0093c498;
  goto LAB_0093be30;
switchD_0093c390_caseD_3a:
  local_44 = (uint ***)((int)local_44 + 1);
  goto LAB_0093c478;
LAB_0093cc4c:
  piVar24 = *(int **)pcVar38;
  iVar31 = piVar24[2];
  iVar9 = *(int *)(pcVar38 + 0xc) + -1;
  iVar15 = *piVar24;
  *(int *)(pcVar38 + 0xc) = iVar9;
  if (iVar15 == iVar31) {
    FUN_00933680(piVar24,iVar31,1,1,1);
    iVar31 = piVar24[2];
  }
  iVar15 = iVar31 + 1;
  uVar36 = *(undefined4 *)(pcVar38 + 4);
  uVar34 = *(uint *)(pcVar38 + 8);
  *(undefined1 *)(piVar24[1] + iVar31) = 10;
  piVar24[2] = iVar15;
  for (; iVar9 != 0; iVar9 = iVar9 + -1) {
    if ((uint)(*piVar24 - iVar15) < uVar34) {
      FUN_00933680(piVar24,iVar15,uVar34,1,1);
      iVar15 = piVar24[2];
    }
    FUN_016dd1aa(piVar24[1] + iVar15,uVar36,uVar34);
    iVar15 = iVar15 + uVar34;
    piVar24[2] = iVar15;
  }
  if (*piVar24 != iVar15) goto LAB_0093b12c;
  goto LAB_0093ccfc;
}

