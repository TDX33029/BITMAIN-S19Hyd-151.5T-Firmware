// FUN_00bde15c @ 00bde15c size=2860 calls_out=18 calls_in=2
// strings: `Extensions` tracks values by type | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

/* WARNING: Type propagation algorithm not settling */

void FUN_00bde15c(undefined4 *param_1,int *param_2,undefined8 ******param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  ulonglong uVar3;
  undefined8 *****pppppuVar4;
  undefined4 uVar5;
  undefined8 *******pppppppuVar6;
  int iVar7;
  code *pcVar8;
  int iVar9;
  code *pcVar10;
  code cVar11;
  undefined8 *****pppppuVar12;
  uint uVar13;
  undefined8 ****ppppuVar14;
  uint uVar15;
  uint uVar16;
  undefined *puVar17;
  undefined4 *puVar18;
  uint *puVar19;
  undefined8 *******pppppppuVar20;
  uint uVar21;
  undefined8 *******pppppppuVar22;
  uint uVar23;
  undefined1 uVar24;
  undefined8 *****pppppuVar25;
  ulonglong local_90;
  undefined8 *******local_84;
  code *local_80;
  undefined8 *******local_7c;
  undefined8 *******local_78;
  code *local_74;
  undefined8 *******local_70;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined8 *******local_58;
  code *local_54;
  undefined8 *******local_50;
  undefined8 *******local_48;
  code *local_44;
  undefined8 *******local_40;
  undefined8 *******local_38;
  code *local_34;
  undefined8 *******local_30;
  undefined4 *local_2c;
  
  FUN_00fab1e0(&local_38,param_5,param_6);
  if (local_38 == (undefined8 *******)&DAT_00000001) {
    pppppuVar12 = param_3[0x1e];
    iVar9 = (int)param_3[0x1f] << 4;
    pppppuVar4 = (undefined8 *****)0xffffffff;
    do {
      if (iVar9 == 0) {
        puVar18 = (undefined4 *)0x0;
        goto LAB_00bde2d4;
      }
      ppppuVar14 = *pppppuVar12;
      pppppuVar25 = pppppuVar12 + 1;
      iVar9 = iVar9 + -0x10;
      pppppuVar1 = pppppuVar12 + 2;
      pppppuVar2 = pppppuVar12 + 3;
      pppppuVar4 = (undefined8 *****)((int)pppppuVar4 + 1);
      pppppuVar12 = pppppuVar12 + 4;
    } while ((ppppuVar14 != (undefined8 ****)0x81d215be ||
             *pppppuVar1 != (undefined8 ****)0xd07db95e) ||
             (*pppppuVar25 != (undefined8 ****)0x4c65521b ||
             *pppppuVar2 != (undefined8 ****)0x76f4a2ad));
    if (param_3[0x22] <= pppppuVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(pppppuVar4,param_3[0x22],&DAT_01880824);
    }
    ppppuVar14 = (param_3[0x21] + (int)pppppuVar4 * 6)[1];
    puVar18 = (undefined4 *)
              ((int)param_3[0x21][(int)pppppuVar4 * 6] + ((int)ppppuVar14[2] - 1U & 0xfffffff8) + 8)
    ;
    (*(code *)ppppuVar14[3])(&local_38,puVar18);
    if ((local_38 != (undefined8 *******)0x81d215be || local_30 != (undefined8 *******)0xd07db95e)
        || (local_34 != (code *)0x4c65521b || local_2c != (undefined4 *)0x76f4a2ad)) {
      puVar18 = (undefined4 *)0x0;
    }
    if (puVar18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
    }
LAB_00bde2d4:
    local_34 = (code *)&DAT_0035dc52;
    if (puVar18 != (undefined4 *)0x0) {
      local_34 = (code *)puVar18;
    }
    local_30 = (undefined8 *******)0x0;
    local_38 = (undefined8 *******)param_3;
    FUN_00fa04ec(&local_48,&local_38,4,0);
    uVar5 = FUN_00bdd0ac(param_3,&local_48);
    *param_1 = 1;
    param_1[1] = uVar5;
    return;
  }
  if (local_30 == (undefined8 *******)0x0) {
    uVar24 = 0;
  }
  else {
    if (local_30 == (undefined8 *******)&DAT_00000001) {
      cVar11 = *local_34;
      uVar24 = 1;
      if ((cVar11 == (code)0x2b) || (cVar11 == (code)0x2d)) goto joined_r0x00bde338;
    }
    else {
      cVar11 = *local_34;
    }
    pppppppuVar6 = local_30;
    pcVar10 = local_34;
    if (cVar11 == (code)0x2b) {
      pcVar10 = local_34 + 1;
      pppppppuVar6 = (undefined8 *******)((int)local_30 + -1);
    }
    if (pppppppuVar6 < &DAT_00000011) {
      if (pppppppuVar6 == (undefined8 *******)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        do {
          cVar11 = *pcVar10;
          if (9 < (byte)cVar11 - 0x30) goto LAB_00bde464;
          pcVar10 = pcVar10 + 1;
          pppppppuVar6 = (undefined8 *******)((int)pppppppuVar6 + -1);
          uVar3 = (uVar3 & 0xffffffff) * 10 +
                  CONCAT44((int)(uVar3 >> 0x20) * 10,(byte)cVar11 - 0x30);
        } while (pppppppuVar6 != (undefined8 *******)0x0);
      }
LAB_00bde570:
      uVar15 = (uint)(uVar3 >> 0x20);
      uVar23 = (uint)uVar3;
      iVar9 = *param_2;
      puVar19 = (uint *)(param_2 + 2);
      if (iVar9 == 0) {
        if ((uint)param_2[3] < uVar15 || uVar15 - param_2[3] < (uint)(*puVar19 <= uVar23))
        goto LAB_00bde5b4;
      }
      else if ((iVar9 != 1) ||
              ((uint)param_2[3] <= uVar15 && (uint)(uVar23 <= *puVar19) <= param_2[3] - uVar15)) {
LAB_00bde5b4:
        if (param_2[4] == 2) {
LAB_00bde5dc:
          *param_1 = 0;
          *(ulonglong *)(param_1 + 2) = uVar3;
          return;
        }
        if (param_2[4] == 1) {
          if (uVar15 <= (uint)param_2[7] &&
              (uint)((uint)param_2[6] <= uVar23) <= uVar15 - param_2[7]) goto LAB_00bde5dc;
        }
        else if (uVar15 < (uint)param_2[7] ||
                 param_2[7] - uVar15 < (uint)(uVar23 <= (uint)param_2[6])) goto LAB_00bde5dc;
      }
      local_90 = uVar3;
      if (param_4 == 0) {
        pppppppuVar6 = (undefined8 *******)0x3;
        local_80 = (code *)thunk_FUN_016d4a50(3);
        if (local_80 == (code *)0x0) goto LAB_00bdec9c;
        local_80[2] = (code)0x2e;
        *(undefined2 *)local_80 = 0x2e2e;
        local_7c = (undefined8 *******)0x3;
      }
      else {
        local_40 = (undefined8 *******)0x0;
        local_34 = (code *)&DAT_018725a4;
        local_38 = (undefined8 *******)&local_48;
        local_48 = (undefined8 *******)0x0;
        local_2c = (undefined4 *)0x0;
        local_44 = (code *)&DAT_00000001;
        local_30 = (undefined8 *******)&DAT_60000020;
        iVar7 = FUN_00f9d654(param_4,&local_38);
        if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_58,
                       &DAT_018725bc,&DAT_018af130);
        }
        local_7c = local_40;
        local_80 = local_44;
        pppppppuVar6 = local_48;
      }
      local_84 = pppppppuVar6;
      FUN_006008c8(&local_38,param_5,param_6);
      local_70 = local_30;
      pcVar10 = local_34;
      if (local_38 == (undefined8 *******)&DAT_80000000) {
        if ((int)local_30 < 0) {
          uVar5 = 0;
LAB_00bde71c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar5,local_70);
        }
        if (local_30 == (undefined8 *******)0x0) {
          pppppppuVar20 = (undefined8 *******)0x0;
          pcVar8 = (code *)&DAT_00000001;
        }
        else {
          pcVar8 = (code *)thunk_FUN_016d4a50(local_30);
          if (pcVar8 == (code *)0x0) {
            uVar5 = 1;
            goto LAB_00bde71c;
          }
          pppppppuVar20 = local_70;
        }
        FUN_016dd1aa(pcVar8,pcVar10,local_70);
        local_78 = pppppppuVar20;
        local_74 = pcVar8;
        if (iVar9 == 2) goto LAB_00bde854;
LAB_00bde748:
        if (iVar9 == 1) {
          uVar23 = *puVar19;
          iVar7 = uVar23 + 1;
          iVar9 = param_2[3] + (uint)(0xfffffffe < uVar23);
          if (CARRY4(param_2[3],(uint)(0xfffffffe < uVar23))) {
            iVar9 = -1;
            iVar7 = -1;
          }
          iVar9 = FUN_00fabdb8(iVar7,iVar9,&local_38,0x14);
          pppppppuVar20 = (undefined8 *******)(0x14 - iVar9);
          pcVar10 = (code *)&DAT_00000001;
          pppppppuVar22 = (undefined8 *******)0x0;
          if (iVar9 != 0x14) goto LAB_00bde7c4;
        }
        else {
          iVar9 = FUN_00fabdb8(*puVar19,param_2[3],&local_38,0x14);
          pppppppuVar20 = (undefined8 *******)(0x14 - iVar9);
          if (iVar9 == 0x14) {
            pcVar10 = (code *)&DAT_00000001;
            pppppppuVar22 = (undefined8 *******)0x0;
          }
          else {
LAB_00bde7c4:
            pcVar10 = (code *)thunk_FUN_016d4a50(pppppppuVar20);
            if (pcVar10 == (code *)0x0) {
LAB_00bdec04:
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,pppppppuVar20);
            }
            pppppppuVar22 = pppppppuVar20;
          }
        }
        FUN_016dd1aa(pcVar10,(int)&local_38 + iVar9,pppppppuVar20);
        local_40 = pppppppuVar20;
      }
      else {
        local_78 = local_38;
        local_74 = local_34;
        if (iVar9 != 2) goto LAB_00bde748;
LAB_00bde854:
        pppppppuVar22 = (undefined8 *******)&DAT_00000001;
        pcVar10 = (code *)thunk_FUN_016d4a50(1);
        if (pcVar10 == (code *)0x0) {
          pppppppuVar20 = (undefined8 *******)&DAT_00000001;
          goto LAB_00bdec04;
        }
        *pcVar10 = (code)0x30;
        local_40 = (undefined8 *******)&DAT_00000001;
      }
      local_48 = pppppppuVar22;
      local_44 = pcVar10;
      if ((uint)((int)pppppppuVar22 - (int)local_40) < 2) {
        FUN_00d653ec(&local_48,local_40,2,1,1,pppppppuVar6);
      }
      pppppppuVar20 = local_40;
      *(undefined2 *)(local_44 + (int)local_40) = 0x2e2e;
      pppppppuVar22 = (undefined8 *******)((int)local_40 + 2);
      local_40 = pppppppuVar22;
      if (param_2[4] == 2) {
        iVar9 = FUN_00fabdb8(0xffffffff,0xffffffff,&local_38,0x14);
        uVar23 = 0x14 - iVar9;
        if (iVar9 == 0x14) {
          iVar7 = 1;
          uVar15 = 0;
        }
        else {
          iVar7 = thunk_FUN_016d4a50(uVar23);
          if (iVar7 == 0) goto LAB_00bdebf0;
          uVar15 = uVar23;
        }
        FUN_016dd1aa(iVar7,(int)&local_38 + iVar9,uVar23);
        if ((uint)((int)local_48 - (int)pppppppuVar22) < uVar23) {
          FUN_00d653ec(&local_48,pppppppuVar22,uVar23,1,1);
LAB_00bdec54:
          pppppppuVar22 = local_40;
        }
LAB_00bdea10:
        FUN_016dd1aa(local_44 + (int)pppppppuVar22,iVar7,uVar23);
        local_40 = (undefined8 *******)((int)pppppppuVar22 + uVar23);
      }
      else {
        if (param_2[4] == 1) {
          iVar9 = FUN_00fabdb8(param_2[6],param_2[7],&local_38,0x14);
          uVar23 = 0x14 - iVar9;
          if (iVar9 == 0x14) {
            iVar7 = 1;
            uVar15 = 0;
          }
          else {
            iVar7 = thunk_FUN_016d4a50(uVar23);
            if (iVar7 == 0) goto LAB_00bdebf0;
            uVar15 = uVar23;
          }
          FUN_016dd1aa(iVar7,(int)&local_38 + iVar9,uVar23);
          if ((uint)((int)local_48 - (int)pppppppuVar22) < uVar23) {
            FUN_00d653ec(&local_48,pppppppuVar22,uVar23,1,1);
            goto LAB_00bdec54;
          }
          goto LAB_00bdea10;
        }
        iVar9 = param_2[6];
        iVar7 = param_2[7];
        if (local_48 == pppppppuVar22) {
          FUN_00d653ec(&local_48,pppppppuVar22,1,1,1,pppppppuVar6);
        }
        pcVar10 = local_44;
        pppppppuVar20 = (undefined8 *******)((int)pppppppuVar20 + 3);
        local_44[(int)local_40] = (code)0x3d;
        local_40 = pppppppuVar20;
        iVar9 = FUN_00fabdb8(iVar9,iVar7,&local_38,0x14);
        uVar23 = 0x14 - iVar9;
        if (iVar9 == 0x14) {
          iVar7 = 1;
          uVar15 = 0;
        }
        else {
          iVar7 = thunk_FUN_016d4a50(uVar23);
          if (iVar7 == 0) {
LAB_00bdebf0:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,uVar23);
          }
          uVar15 = uVar23;
        }
        FUN_016dd1aa(iVar7,(int)&local_38 + iVar9,uVar23);
        if ((uint)((int)local_48 - (int)pppppppuVar20) < uVar23) {
          FUN_00d653ec(&local_48,pppppppuVar20,uVar23,1,1);
          pppppppuVar20 = local_40;
          pcVar10 = local_44;
        }
        FUN_016dd1aa(pcVar10 + (int)pppppppuVar20,iVar7,uVar23);
        local_40 = (undefined8 *******)((int)pppppppuVar20 + uVar23);
      }
      if (uVar15 != 0) {
        thunk_FUN_016d3fb4(iVar7);
      }
      local_58 = local_48;
      local_54 = local_44;
      local_50 = local_40;
      local_30 = (undefined8 *******)&local_58;
      local_38 = (undefined8 *******)&local_90;
      local_2c = &DAT_006043a8;
      local_34 = FUN_00fac4cc;
      FUN_00600d2c(&local_68,&DAT_00579919,&local_38);
      if (local_58 != (undefined8 *******)0x0) {
        thunk_FUN_016d3fb4(local_54);
      }
      puVar18 = (undefined4 *)thunk_FUN_016d4a50(0xc);
      if (puVar18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0xc);
      }
      *puVar18 = local_68;
      puVar18[1] = local_64;
      puVar18[2] = uStack_60;
      pppppppuVar6 = (undefined8 *******)&local_84;
      puVar17 = &DAT_01871488;
      pppppppuVar20 = (undefined8 *******)&local_78;
      goto LAB_00bde51c;
    }
    uVar23 = 0;
    uVar15 = 0;
    do {
      uVar3 = CONCAT44(uVar15,uVar23);
      if (pppppppuVar6 == (undefined8 *******)0x0) goto LAB_00bde570;
      uVar13 = (uint)((ulonglong)uVar23 * 10);
      uVar21 = (uint)((ulonglong)uVar23 * 10 >> 0x20);
      uVar23 = (uint)((ulonglong)uVar15 * 10);
      uVar16 = uVar21 + uVar23;
      if ((int)((ulonglong)uVar15 * 10 >> 0x20) != 0 || CARRY4(uVar21,uVar23)) {
        uVar24 = 1;
        if ((byte)*pcVar10 - 0x30 < 10) {
          uVar24 = 2;
        }
        goto joined_r0x00bdeb4c;
      }
      uVar21 = (byte)*pcVar10 - 0x30;
      if (9 < uVar21) goto LAB_00bde464;
      uVar23 = uVar13 + uVar21;
      pppppppuVar6 = (undefined8 *******)((int)pppppppuVar6 + -1);
      uVar15 = uVar16 + CARRY4(uVar13,uVar21);
      pcVar10 = pcVar10 + 1;
    } while (!CARRY4(uVar16,(uint)CARRY4(uVar13,uVar21)));
    uVar24 = 2;
  }
joined_r0x00bde338:
  if (param_4 != 0) goto LAB_00bde33c;
LAB_00bde474:
  local_54 = (code *)thunk_FUN_016d4a50(3);
  if (local_54 == (code *)0x0) {
LAB_00bdec9c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,3);
  }
  local_54[2] = (code)0x2e;
  *(undefined2 *)local_54 = 0x2e2e;
  local_50 = (undefined8 *******)0x3;
  local_58 = (undefined8 *******)0x3;
  goto LAB_00bde4a0;
LAB_00bde464:
  uVar24 = 1;
joined_r0x00bdeb4c:
  if (param_4 == 0) goto LAB_00bde474;
LAB_00bde33c:
  local_40 = (undefined8 *******)0x0;
  local_34 = (code *)&DAT_018725a4;
  local_38 = (undefined8 *******)&local_48;
  local_48 = (undefined8 *******)0x0;
  local_2c = (undefined4 *)0x0;
  local_44 = (code *)&DAT_00000001;
  local_30 = (undefined8 *******)&DAT_60000020;
  iVar9 = FUN_00f9d654(param_4,&local_38);
  if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_58,
                 &DAT_018725bc,&DAT_018af130);
  }
  local_50 = local_40;
  local_54 = local_44;
  local_58 = local_48;
LAB_00bde4a0:
  FUN_006008c8(&local_38,param_5,param_6);
  pppppppuVar6 = local_30;
  pcVar10 = local_34;
  if (local_38 == (undefined8 *******)&DAT_80000000) {
    if ((int)local_30 < 0) {
      uVar5 = 0;
LAB_00bde4d8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar5,pppppppuVar6);
    }
    if (local_30 == (undefined8 *******)0x0) {
      pppppppuVar20 = (undefined8 *******)0x0;
      pcVar8 = (code *)&DAT_00000001;
    }
    else {
      pcVar8 = (code *)thunk_FUN_016d4a50(local_30);
      if (pcVar8 == (code *)0x0) {
        uVar5 = 1;
        goto LAB_00bde4d8;
      }
      pppppppuVar20 = pppppppuVar6;
    }
    FUN_016dd1aa(pcVar8,pcVar10,pppppppuVar6);
    local_40 = pppppppuVar6;
    local_48 = pppppppuVar20;
    local_44 = pcVar8;
    puVar18 = (undefined4 *)thunk_FUN_016d4a50(1);
  }
  else {
    local_48 = local_38;
    local_44 = local_34;
    local_40 = local_30;
    puVar18 = (undefined4 *)thunk_FUN_016d4a50(1);
  }
  if (puVar18 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,1);
  }
  *(undefined1 *)puVar18 = uVar24;
  pppppppuVar6 = (undefined8 *******)&local_58;
  puVar17 = &DAT_018714b4;
  pppppppuVar20 = (undefined8 *******)&local_48;
LAB_00bde51c:
  uVar5 = FUN_00bdd250(pppppppuVar6,pppppppuVar20,puVar18,puVar17);
  FUN_00bdd4d8(uVar5,param_3);
  *param_1 = 1;
  param_1[1] = uVar5;
  return;
}

