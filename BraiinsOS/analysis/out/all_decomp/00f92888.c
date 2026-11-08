// FUN_00f92888 @ 00f92888 size=3124 calls_out=19 calls_in=2
// strings: `Extensions` tracks values by type | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly | a Display implementation returned an error unexpectedly

void FUN_00f92888(undefined1 *param_1,int *param_2,undefined8 ******param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined8 *****pppppuVar1;
  undefined8 *****pppppuVar2;
  longlong lVar3;
  ulonglong uVar4;
  code cVar5;
  undefined8 *****pppppuVar6;
  undefined4 uVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  int *piVar11;
  int *extraout_r1;
  undefined8 *****pppppuVar12;
  undefined8 *******pppppppuVar13;
  uint uVar14;
  undefined8 ****ppppuVar15;
  code *pcVar16;
  int iVar17;
  uint uVar18;
  undefined *puVar19;
  undefined4 *puVar20;
  undefined8 *******pppppppuVar21;
  undefined1 *puVar22;
  int iVar23;
  uint uVar24;
  undefined1 uVar25;
  uint *puVar26;
  bool bVar27;
  undefined8 *****pppppuVar28;
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
    pppppuVar6 = (undefined8 *****)0xffffffff;
    do {
      if (iVar9 == 0) {
        puVar20 = (undefined4 *)0x0;
        goto LAB_00f92a5c;
      }
      ppppuVar15 = *pppppuVar12;
      pppppuVar28 = pppppuVar12 + 1;
      iVar9 = iVar9 + -0x10;
      pppppuVar1 = pppppuVar12 + 2;
      pppppuVar2 = pppppuVar12 + 3;
      pppppuVar6 = (undefined8 *****)((int)pppppuVar6 + 1);
      pppppuVar12 = pppppuVar12 + 4;
    } while ((ppppuVar15 != (undefined8 ****)0x81d215be ||
             *pppppuVar1 != (undefined8 ****)0xd07db95e) ||
             (*pppppuVar28 != (undefined8 ****)0x4c65521b ||
             *pppppuVar2 != (undefined8 ****)0x76f4a2ad));
    if (param_3[0x22] <= pppppuVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(pppppuVar6,param_3[0x22],&DAT_01880824);
    }
    ppppuVar15 = (param_3[0x21] + (int)pppppuVar6 * 6)[1];
    puVar20 = (undefined4 *)
              ((int)param_3[0x21][(int)pppppuVar6 * 6] + ((int)ppppuVar15[2] - 1U & 0xfffffff8) + 8)
    ;
    (*(code *)ppppuVar15[3])(&local_38,puVar20);
    if ((local_38 != (undefined8 *******)0x81d215be || local_30 != (undefined8 *******)0xd07db95e)
        || (local_34 != (code *)0x4c65521b || local_2c != (undefined4 *)0x76f4a2ad)) {
      puVar20 = (undefined4 *)0x0;
    }
    if (puVar20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
    }
LAB_00f92a5c:
    local_34 = (code *)&DAT_0035dc52;
    if (puVar20 != (undefined4 *)0x0) {
      local_34 = (code *)puVar20;
    }
    local_30 = (undefined8 *******)0x0;
    local_38 = (undefined8 *******)param_3;
    FUN_00fa04ec(&local_48,&local_38,4,0);
    uVar7 = FUN_00f95ba8(param_3,&local_48);
    goto LAB_00f92d2c;
  }
  if (local_30 == (undefined8 *******)0x0) {
    uVar25 = 0;
    goto joined_r0x00f92aac;
  }
  if (local_30 == (undefined8 *******)&DAT_00000001) {
    cVar5 = *local_34;
    uVar25 = 1;
    if ((cVar5 == (code)0x2b) || (cVar5 == (code)0x2d)) goto joined_r0x00f92aac;
    if (cVar5 == (code)0x2d) goto LAB_00f92b18;
LAB_00f92a00:
    pcVar16 = local_34;
    pppppppuVar13 = local_30;
    if (cVar5 == (code)0x2b) {
      pppppppuVar13 = (undefined8 *******)((int)local_30 + -1);
      pcVar16 = local_34 + 1;
    }
    if (&DAT_0000000f < pppppppuVar13) {
      uVar10 = 0;
      uVar14 = 0;
      do {
        uVar18 = (uint)((ulonglong)uVar10 * 10);
        lVar3 = (longlong)(int)uVar14 * 10 + ((ulonglong)uVar10 * 10 >> 0x20);
        uVar24 = (uint)lVar3;
        uVar10 = (uint)((ulonglong)lVar3 >> 0x20);
        if (uVar10 != (int)uVar24 >> 0x1f || (int)(uVar10 ^ uVar24) < 0) {
          uVar25 = 1;
          if ((byte)*pcVar16 - 0x30 < 10) {
            uVar25 = 2;
          }
          goto joined_r0x00f92aac;
        }
        uVar14 = (byte)*pcVar16 - 0x30;
        if (9 < uVar14) goto LAB_00f92c68;
        uVar10 = uVar18 + uVar14;
        uVar14 = uVar24 + CARRY4(uVar18,uVar14);
        uVar4 = CONCAT44(uVar14,uVar10);
        if ((int)((uVar24 ^ uVar14) & ~uVar24) < 0) {
          uVar25 = 2;
          goto joined_r0x00f92aac;
        }
        pppppppuVar13 = (undefined8 *******)((int)pppppppuVar13 + -1);
        pcVar16 = pcVar16 + 1;
      } while (pppppppuVar13 != (undefined8 *******)0x0);
    }
    else if (pppppppuVar13 == (undefined8 *******)0x0) {
LAB_00f92bcc:
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      do {
        cVar5 = *pcVar16;
        if (9 < (byte)cVar5 - 0x30) goto LAB_00f92c68;
        pcVar16 = pcVar16 + 1;
        pppppppuVar13 = (undefined8 *******)((int)pppppppuVar13 + -1);
        uVar4 = (uVar4 & 0xffffffff) * 10 + CONCAT44((int)(uVar4 >> 0x20) * 10,(byte)cVar5 - 0x30);
      } while (pppppppuVar13 != (undefined8 *******)0x0);
    }
  }
  else {
    cVar5 = *local_34;
    if (cVar5 != (code)0x2d) goto LAB_00f92a00;
LAB_00f92b18:
    puVar22 = (undefined1 *)((int)local_30 + -1);
    pcVar16 = local_34 + 1;
    if (local_30 < &DAT_00000011) {
      if (puVar22 == (undefined1 *)0x0) goto LAB_00f92bcc;
      uVar10 = 0;
      iVar9 = 0;
      do {
        uVar14 = (byte)*pcVar16 - 0x30;
        if (9 < uVar14) goto LAB_00f92c68;
        uVar4 = (ulonglong)uVar10;
        uVar18 = (uint)(uVar4 * 10);
        pcVar16 = pcVar16 + 1;
        uVar10 = uVar18 - uVar14;
        iVar9 = ((int)(uVar4 * 10 >> 0x20) + iVar9 * 10) - (uint)(uVar18 < uVar14);
        uVar4 = CONCAT44(iVar9,uVar10);
        puVar22 = puVar22 + -1;
      } while (puVar22 != (undefined1 *)0x0);
    }
    else {
      uVar10 = 0;
      uVar14 = 0;
      do {
        uVar18 = (uint)((ulonglong)uVar10 * 10);
        lVar3 = (longlong)(int)uVar14 * 10 + ((ulonglong)uVar10 * 10 >> 0x20);
        uVar24 = (uint)lVar3;
        uVar10 = (uint)((ulonglong)lVar3 >> 0x20);
        if (uVar10 != (int)uVar24 >> 0x1f || (int)(uVar10 ^ uVar24) < 0) {
          uVar25 = 1;
          if ((byte)*pcVar16 - 0x30 < 10) {
            uVar25 = 3;
          }
          goto joined_r0x00f92aac;
        }
        uVar14 = (byte)*pcVar16 - 0x30;
        if (9 < uVar14) goto LAB_00f92c68;
        uVar10 = uVar18 - uVar14;
        uVar14 = uVar24 - (uVar18 < uVar14);
        uVar4 = CONCAT44(uVar14,uVar10);
        if ((int)(uVar24 & (uVar24 ^ uVar14)) < 0) {
          uVar25 = 3;
          goto joined_r0x00f92aac;
        }
        puVar22 = puVar22 + -1;
        pcVar16 = pcVar16 + 1;
      } while (puVar22 != (undefined1 *)0x0);
    }
  }
  iVar9 = (int)(uVar4 >> 0x20);
  uVar10 = (uint)uVar4;
  iVar23 = *param_2;
  puVar26 = (uint *)(param_2 + 2);
  local_90 = uVar4;
  if (iVar23 == 0) {
    iVar17 = param_2[3];
    if ((int)(iVar9 - (iVar17 + (uint)(uVar10 < *puVar26))) < 0 ==
        (SBORROW4(iVar9,iVar17) != SBORROW4(iVar9 - iVar17,(uint)(uVar10 < *puVar26))))
    goto LAB_00f92d7c;
  }
  else if ((iVar23 != 1) ||
          (iVar17 = param_2[3],
          (int)(iVar17 - (iVar9 + (uint)(*puVar26 < uVar10))) < 0 !=
          (SBORROW4(iVar17,iVar9) != SBORROW4(iVar17 - iVar9,(uint)(*puVar26 < uVar10))))) {
LAB_00f92d7c:
    if (param_2[4] == 2) {
LAB_00f92da4:
      if ((uint)-iVar9 < (uint)(uVar10 < 0x100)) {
        *param_1 = 0;
        param_1[1] = (char)uVar4;
        return;
      }
      if (param_4 == 0) {
        pppppppuVar13 = (undefined8 *******)0x3;
        local_54 = (code *)thunk_FUN_016d4a50(3,-(iVar9 + (uint)(uVar10 >= 0x100)),0xff - uVar10);
        if (local_54 == (code *)0x0) goto LAB_00f934d4;
        local_54[2] = (code)0x2e;
        local_58 = (undefined8 *******)0x3;
        *(undefined2 *)local_54 = 0x2e2e;
      }
      else {
        local_40 = (undefined8 *******)0x0;
        local_34 = (code *)&DAT_018806ac;
        local_38 = (undefined8 *******)&local_48;
        local_48 = (undefined8 *******)0x0;
        local_2c = (undefined4 *)0x0;
        local_44 = (code *)&DAT_00000001;
        local_30 = (undefined8 *******)&DAT_60000020;
        iVar9 = FUN_00f9d654(param_4,&local_38);
        if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_58,
                       &DAT_018806c4,&DAT_018af130);
        }
        pppppppuVar13 = local_40;
        local_58 = local_48;
        local_54 = local_44;
      }
      local_50 = pppppppuVar13;
      FUN_006008c8(&local_38,param_5,param_6);
      pppppppuVar13 = local_30;
      pcVar16 = local_34;
      if (local_38 == (undefined8 *******)&DAT_80000000) {
        if ((int)local_30 < 0) {
          uVar7 = 0;
LAB_00f9302c:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar7,pppppppuVar13);
        }
        if (local_30 == (undefined8 *******)0x0) {
          pcVar8 = (code *)&DAT_00000001;
          pppppppuVar21 = (undefined8 *******)0x0;
        }
        else {
          pcVar8 = (code *)thunk_FUN_016d4a50(local_30);
          if (pcVar8 == (code *)0x0) {
            uVar7 = 1;
            goto LAB_00f9302c;
          }
          pppppppuVar21 = pppppppuVar13;
        }
        FUN_016dd1aa(pcVar8,pcVar16,pppppppuVar13);
        local_48 = pppppppuVar21;
        local_44 = pcVar8;
      }
      else {
        local_48 = local_38;
        local_44 = local_34;
      }
      local_40 = pppppppuVar13;
      pppppppuVar13 = (undefined8 *******)&local_58;
      pppppppuVar21 = (undefined8 *******)&local_48;
      puVar20 = (undefined4 *)&DAT_00000001;
      puVar19 = &DAT_01880680;
      goto LAB_00f92d20;
    }
    if (param_2[4] == 1) {
      iVar17 = param_2[7];
      bVar27 = uVar10 < (uint)param_2[6];
      if ((int)(iVar9 - (iVar17 + (uint)bVar27)) < 0 !=
          (SBORROW4(iVar9,iVar17) != SBORROW4(iVar9 - iVar17,(uint)bVar27))) goto LAB_00f92da4;
    }
    else {
      iVar17 = param_2[7];
      bVar27 = (uint)param_2[6] < uVar10;
      if ((int)(iVar17 - (iVar9 + (uint)bVar27)) < 0 ==
          (SBORROW4(iVar17,iVar9) != SBORROW4(iVar17 - iVar9,(uint)bVar27))) goto LAB_00f92da4;
    }
  }
  if (param_4 == 0) {
    pppppppuVar13 = (undefined8 *******)0x3;
    local_80 = (code *)thunk_FUN_016d4a50(3);
    if (local_80 == (code *)0x0) {
LAB_00f934d4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    local_80[2] = (code)0x2e;
    *(undefined2 *)local_80 = 0x2e2e;
    local_7c = (undefined8 *******)0x3;
  }
  else {
    local_40 = (undefined8 *******)0x0;
    local_34 = (code *)&DAT_018806ac;
    local_38 = (undefined8 *******)&local_48;
    local_48 = (undefined8 *******)0x0;
    local_2c = (undefined4 *)0x0;
    local_44 = (code *)&DAT_00000001;
    local_30 = (undefined8 *******)&DAT_60000020;
    iVar9 = FUN_00f9d654(param_4,&local_38);
    if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_58,
                   &DAT_018806c4,&DAT_018af130);
    }
    local_7c = local_40;
    pppppppuVar13 = local_48;
    local_80 = local_44;
  }
  local_84 = pppppppuVar13;
  FUN_006008c8(&local_38,param_5,param_6);
  local_70 = local_30;
  pcVar16 = local_34;
  if (local_38 == (undefined8 *******)&DAT_80000000) {
    if ((int)local_30 < 0) {
      uVar7 = 0;
LAB_00f92f48:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar7,local_70);
    }
    if (local_30 == (undefined8 *******)0x0) {
      pppppppuVar13 = (undefined8 *******)0x0;
      pcVar8 = (code *)&DAT_00000001;
    }
    else {
      pcVar8 = (code *)thunk_FUN_016d4a50(local_30);
      if (pcVar8 == (code *)0x0) {
        uVar7 = 1;
        goto LAB_00f92f48;
      }
      pppppppuVar13 = local_70;
    }
    FUN_016dd1aa(pcVar8,pcVar16,local_70);
    local_78 = pppppppuVar13;
    local_74 = pcVar8;
    if (iVar23 != 2) goto LAB_00f92f6c;
LAB_00f930a0:
    uVar10 = 0x80000000;
    uVar14 = 0;
  }
  else {
    local_78 = local_38;
    local_74 = local_34;
    if (iVar23 == 2) goto LAB_00f930a0;
LAB_00f92f6c:
    if (iVar23 == 1) {
      uVar18 = param_2[3];
      uVar14 = *puVar26 + 1;
      uVar10 = uVar18 + (0xfffffffe < *puVar26);
      if ((int)((uVar18 ^ uVar10) & ~uVar18) < 0) {
        uVar10 = 0x7fffffff;
        uVar14 = 0xffffffff;
      }
    }
    else {
      uVar14 = *puVar26;
      uVar10 = param_2[3];
    }
  }
  FUN_00f91274(&local_48,uVar10,uVar14,uVar10);
  pppppppuVar13 = local_40;
  if ((uint)((int)local_48 - (int)local_40) < 2) {
    FUN_00f991dc(&local_48,local_40,2,1,1);
    pppppppuVar13 = local_40;
  }
  pcVar16 = local_44;
  pppppppuVar21 = (undefined8 *******)((int)pppppppuVar13 + 2);
  iVar9 = param_2[4];
  *(undefined2 *)(local_44 + (int)pppppppuVar13) = 0x2e2e;
  local_40 = pppppppuVar21;
  if (iVar9 == 2) {
    pcVar8 = (code *)thunk_FUN_016d4a50(0x13);
    if (pcVar8 == (code *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x13);
    }
    iVar9 = FUN_00fabdb8(0xffffffff,0x7fffffff,&local_38,0x13);
    uVar10 = 0x13 - iVar9;
    FUN_016dd1aa(pcVar8,(int)&local_38 + iVar9,uVar10);
    if ((uint)((int)local_48 - (int)pppppppuVar21) < uVar10) {
      FUN_00f991dc(&local_48,pppppppuVar21,uVar10,1,1);
      pppppppuVar21 = local_40;
      pcVar16 = local_44;
    }
    FUN_016dd1aa(pcVar16 + (int)pppppppuVar21,pcVar8,uVar10);
    local_40 = (undefined8 *******)((int)pppppppuVar21 + uVar10);
LAB_00f931b4:
LAB_00f93230:
    thunk_FUN_016d3fb4(pcVar8);
  }
  else {
    piVar11 = param_2 + 6;
    if (iVar9 == 1) {
      FUN_00f91274(&local_38,piVar11,*piVar11,param_2[7]);
      pppppppuVar13 = local_30;
      pcVar8 = local_34;
      if ((undefined8 *******)((int)local_48 - (int)pppppppuVar21) < local_30) {
        FUN_00f991dc(&local_48,pppppppuVar21,local_30,1,1);
        pppppppuVar21 = local_40;
        pcVar16 = local_44;
      }
      FUN_016dd1aa(pcVar16 + (int)pppppppuVar21,pcVar8,pppppppuVar13);
      local_40 = (undefined8 *******)((int)pppppppuVar21 + (int)pppppppuVar13);
      if (local_38 != (undefined8 *******)0x0) goto LAB_00f931b4;
    }
    else {
      iVar23 = *piVar11;
      iVar9 = param_2[7];
      if (local_48 == pppppppuVar21) {
        FUN_00f991dc(&local_48,pppppppuVar21,1,1,1);
        piVar11 = extraout_r1;
      }
      pcVar16 = local_44;
      local_44[(int)local_40] = (code)0x3d;
      pppppppuVar13 = (undefined8 *******)((int)pppppppuVar13 + 3);
      local_40 = pppppppuVar13;
      FUN_00f91274(&local_38,piVar11,iVar23,iVar9);
      pppppppuVar21 = local_30;
      pcVar8 = local_34;
      if ((undefined8 *******)((int)local_48 - (int)pppppppuVar13) < local_30) {
        FUN_00f991dc(&local_48,pppppppuVar13,local_30,1,1);
        pppppppuVar13 = local_40;
        pcVar16 = local_44;
      }
      FUN_016dd1aa(pcVar16 + (int)pppppppuVar13,pcVar8,pppppppuVar21);
      local_40 = (undefined8 *******)((int)pppppppuVar13 + (int)pppppppuVar21);
      if (local_38 != (undefined8 *******)0x0) {
        pcVar8 = local_34;
        goto LAB_00f93230;
      }
    }
  }
  local_58 = local_48;
  local_54 = local_44;
  local_50 = local_40;
  local_30 = (undefined8 *******)&local_58;
  local_38 = (undefined8 *******)&local_90;
  local_2c = &DAT_006043a8;
  local_34 = FUN_00fac310;
  FUN_00600d2c(&local_68,&DAT_00579919,&local_38);
  if (local_58 != (undefined8 *******)0x0) {
    thunk_FUN_016d3fb4(local_54);
  }
  puVar20 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar20 = local_68;
  puVar20[1] = local_64;
  puVar20[2] = uStack_60;
  pppppppuVar13 = (undefined8 *******)&local_84;
  puVar19 = &DAT_01880598;
  pppppppuVar21 = (undefined8 *******)&local_78;
  goto LAB_00f92d20;
LAB_00f92c68:
  uVar25 = 1;
joined_r0x00f92aac:
  if (param_4 == 0) {
    local_54 = (code *)thunk_FUN_016d4a50(3);
    if (local_54 == (code *)0x0) goto LAB_00f934d4;
    local_54[2] = (code)0x2e;
    *(undefined2 *)local_54 = 0x2e2e;
    local_50 = (undefined8 *******)0x3;
    local_58 = (undefined8 *******)0x3;
  }
  else {
    local_40 = (undefined8 *******)0x0;
    local_34 = (code *)&DAT_018806ac;
    local_38 = (undefined8 *******)&local_48;
    local_48 = (undefined8 *******)0x0;
    local_2c = (undefined4 *)0x0;
    local_44 = (code *)&DAT_00000001;
    local_30 = (undefined8 *******)&DAT_60000020;
    iVar9 = FUN_00f9d654(param_4,&local_38);
    if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_58,
                   &DAT_018806c4,&DAT_018af130);
    }
    local_50 = local_40;
    local_58 = local_48;
    local_54 = local_44;
  }
  FUN_006008c8(&local_38,param_5,param_6);
  pppppppuVar13 = local_30;
  pcVar16 = local_34;
  if (local_38 == (undefined8 *******)&DAT_80000000) {
    if ((int)local_30 < 0) {
      uVar7 = 0;
LAB_00f92cdc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar7,pppppppuVar13);
    }
    if (local_30 == (undefined8 *******)0x0) {
      pppppppuVar21 = (undefined8 *******)0x0;
      pcVar8 = (code *)&DAT_00000001;
    }
    else {
      pcVar8 = (code *)thunk_FUN_016d4a50(local_30);
      if (pcVar8 == (code *)0x0) {
        uVar7 = 1;
        goto LAB_00f92cdc;
      }
      pppppppuVar21 = pppppppuVar13;
    }
    FUN_016dd1aa(pcVar8,pcVar16,pppppppuVar13);
    local_40 = pppppppuVar13;
    local_48 = pppppppuVar21;
    local_44 = pcVar8;
    puVar20 = (undefined4 *)thunk_FUN_016d4a50(1);
  }
  else {
    local_48 = local_38;
    local_44 = local_34;
    local_40 = local_30;
    puVar20 = (undefined4 *)thunk_FUN_016d4a50(1);
  }
  if (puVar20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(1,1);
  }
  *(undefined1 *)puVar20 = uVar25;
  pppppppuVar13 = (undefined8 *******)&local_58;
  puVar19 = &DAT_01880644;
  pppppppuVar21 = (undefined8 *******)&local_48;
LAB_00f92d20:
  uVar7 = FUN_00f96cc8(pppppppuVar13,pppppppuVar21,puVar20,puVar19);
  uVar7 = FUN_00f9545c(uVar7,param_3);
LAB_00f92d2c:
  *param_1 = 1;
  *(undefined4 *)(param_1 + 4) = uVar7;
  return;
}

