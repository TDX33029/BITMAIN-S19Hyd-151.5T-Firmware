// FUN_012c133c @ 012c133c size=2328 calls_out=18 calls_in=2
// strings: 

void FUN_012c133c(undefined1 *param_1,int *param_2,undefined1 **param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  code cVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  undefined1 **ppuVar8;
  uint uVar9;
  undefined1 *puVar10;
  undefined1 *extraout_r1;
  undefined1 **ppuVar11;
  uint uVar12;
  code *pcVar13;
  int iVar14;
  uint uVar15;
  undefined1 uVar16;
  undefined2 *puVar17;
  uint uVar18;
  uint *puVar19;
  undefined1 *puVar20;
  undefined1 *puVar21;
  bool bVar22;
  undefined8 uVar23;
  ulonglong local_70;
  undefined1 *local_68;
  undefined2 *local_64;
  undefined1 *local_60;
  undefined1 *apuStack_5c [3];
  undefined1 *local_50;
  undefined2 *local_4c;
  undefined1 *local_48;
  undefined1 **local_40;
  code *local_3c;
  undefined1 **local_38;
  undefined1 *local_34;
  undefined1 *local_30;
  undefined2 *local_2c;
  undefined1 *local_28;
  
  FUN_012fbd94(&local_40,param_5,param_6);
  if (local_40 != (undefined1 **)&DAT_00000001) {
    if (local_38 == (undefined1 **)0x0) {
      uVar16 = 0;
      goto LAB_012c15b4;
    }
    if (local_38 == (undefined1 **)&DAT_00000001) {
      cVar3 = *local_3c;
      uVar16 = 1;
      if ((cVar3 == (code)0x2b) || (cVar3 == (code)0x2d)) goto LAB_012c15b4;
    }
    else {
      cVar3 = *local_3c;
    }
    if (cVar3 == (code)0x2d) {
      puVar20 = (undefined1 *)((int)local_38 + -1);
      pcVar13 = local_3c + 1;
      if (&DAT_00000010 < local_38) {
        uVar9 = 0;
        uVar12 = 0;
        do {
          uVar15 = (uint)((ulonglong)uVar9 * 10);
          lVar1 = (longlong)(int)uVar12 * 10 + ((ulonglong)uVar9 * 10 >> 0x20);
          uVar18 = (uint)lVar1;
          uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
          if (uVar9 != (int)uVar18 >> 0x1f || (int)(uVar9 ^ uVar18) < 0) {
            uVar16 = 1;
            if ((byte)*pcVar13 - 0x30 < 10) {
              uVar16 = 3;
            }
            goto LAB_012c15b4;
          }
          uVar12 = (byte)*pcVar13 - 0x30;
          if (9 < uVar12) goto LAB_012c15b0;
          uVar9 = uVar15 - uVar12;
          uVar12 = uVar18 - (uVar15 < uVar12);
          uVar2 = CONCAT44(uVar12,uVar9);
          if ((int)(uVar18 & (uVar18 ^ uVar12)) < 0) {
            uVar16 = 3;
            goto LAB_012c15b4;
          }
          puVar20 = puVar20 + -1;
          pcVar13 = pcVar13 + 1;
        } while (puVar20 != (undefined1 *)0x0);
      }
      else {
        if (puVar20 == (undefined1 *)0x0) goto LAB_012c1514;
        uVar9 = 0;
        iVar6 = 0;
        do {
          uVar12 = (byte)*pcVar13 - 0x30;
          if (9 < uVar12) goto LAB_012c15b0;
          uVar2 = (ulonglong)uVar9;
          uVar15 = (uint)(uVar2 * 10);
          pcVar13 = pcVar13 + 1;
          uVar9 = uVar15 - uVar12;
          iVar6 = ((int)(uVar2 * 10 >> 0x20) + iVar6 * 10) - (uint)(uVar15 < uVar12);
          uVar2 = CONCAT44(iVar6,uVar9);
          puVar20 = puVar20 + -1;
        } while (puVar20 != (undefined1 *)0x0);
      }
    }
    else {
      pcVar13 = local_3c;
      ppuVar11 = local_38;
      if (cVar3 == (code)0x2b) {
        ppuVar11 = (undefined1 **)((int)local_38 + -1);
        pcVar13 = local_3c + 1;
      }
      if (&DAT_0000000f < ppuVar11) {
        uVar9 = 0;
        uVar12 = 0;
        do {
          uVar15 = (uint)((ulonglong)uVar9 * 10);
          lVar1 = (longlong)(int)uVar12 * 10 + ((ulonglong)uVar9 * 10 >> 0x20);
          uVar18 = (uint)lVar1;
          uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
          if (uVar9 != (int)uVar18 >> 0x1f || (int)(uVar9 ^ uVar18) < 0) {
            uVar16 = 1;
            if ((byte)*pcVar13 - 0x30 < 10) {
              uVar16 = 2;
            }
            goto LAB_012c15b4;
          }
          uVar12 = (byte)*pcVar13 - 0x30;
          if (9 < uVar12) goto LAB_012c15b0;
          uVar9 = uVar15 + uVar12;
          uVar12 = uVar18 + CARRY4(uVar15,uVar12);
          uVar2 = CONCAT44(uVar12,uVar9);
          if ((int)((uVar18 ^ uVar12) & ~uVar18) < 0) {
            uVar16 = 2;
            goto LAB_012c15b4;
          }
          ppuVar11 = (undefined1 **)((int)ppuVar11 + -1);
          pcVar13 = pcVar13 + 1;
        } while (ppuVar11 != (undefined1 **)0x0);
      }
      else if (ppuVar11 == (undefined1 **)0x0) {
LAB_012c1514:
        uVar2 = 0;
      }
      else {
        uVar2 = 0;
        do {
          cVar3 = *pcVar13;
          if (9 < (byte)cVar3 - 0x30) goto LAB_012c15b0;
          pcVar13 = pcVar13 + 1;
          ppuVar11 = (undefined1 **)((int)ppuVar11 + -1);
          uVar2 = (uVar2 & 0xffffffff) * 10 + CONCAT44((int)(uVar2 >> 0x20) * 10,(byte)cVar3 - 0x30)
          ;
        } while (ppuVar11 != (undefined1 **)0x0);
      }
    }
    uVar12 = (uint)(uVar2 >> 0x20);
    uVar9 = (uint)uVar2;
    iVar6 = *param_2;
    puVar19 = (uint *)(param_2 + 2);
    local_70 = uVar2;
    if (iVar6 == 0) {
      iVar14 = param_2[3];
      if ((int)(uVar12 - (iVar14 + (uint)(uVar9 < *puVar19))) < 0 ==
          (SBORROW4(uVar12,iVar14) != SBORROW4(uVar12 - iVar14,(uint)(uVar9 < *puVar19))))
      goto LAB_012c16d0;
LAB_012c17b0:
      if (param_4 == 0) {
LAB_012c1810:
        local_64 = (undefined2 *)thunk_FUN_01be5118(3);
        if (local_64 == (undefined2 *)0x0) goto LAB_012c1c5c;
        *(undefined1 *)(local_64 + 1) = 0x2e;
        *local_64 = 0x2e2e;
        local_60 = (undefined1 *)0x3;
        local_68 = (undefined1 *)0x3;
      }
      else {
        local_28 = (undefined1 *)0x0;
        local_3c = (code *)&DAT_01ce2890;
        local_40 = &local_30;
        local_30 = (undefined1 *)0x0;
        local_34 = (undefined1 *)0x0;
        local_2c = (undefined2 *)&DAT_00000001;
        local_38 = (undefined1 **)0x60000020;
        iVar14 = FUN_012bb12c(param_4,&local_40);
        if (iVar14 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_50,&DAT_01ce28a8,&DAT_01d30334);
        }
        if (local_30 == (undefined1 *)0x80000000) goto LAB_012c1810;
        local_64 = local_2c;
        local_60 = local_28;
        local_68 = local_30;
      }
      FUN_006643f0(&local_40,param_5,param_6);
      FUN_0160ec7c(apuStack_5c,&local_40);
      if (iVar6 == 2) {
        uVar9 = 0x80000000;
        uVar12 = 0;
      }
      else if (iVar6 == 1) {
        uVar15 = param_2[3];
        uVar12 = *puVar19 + 1;
        uVar9 = uVar15 + (0xfffffffe < *puVar19);
        if ((int)((uVar15 ^ uVar9) & ~uVar15) < 0) {
          uVar9 = 0x7fffffff;
          uVar12 = 0xffffffff;
        }
      }
      else {
        uVar12 = *puVar19;
        uVar9 = param_2[3];
      }
      FUN_012c04d4(&local_30,uVar9,uVar12,uVar9);
      puVar20 = local_28;
      if ((uint)((int)local_30 - (int)local_28) < 2) {
        FUN_006520b4(&local_30,local_28,2,1,1);
        puVar20 = local_28;
      }
      puVar17 = local_2c;
      iVar6 = param_2[4];
      puVar21 = puVar20 + 2;
      *(undefined2 *)((int)local_2c + (int)puVar20) = 0x2e2e;
      local_28 = puVar21;
      if (iVar6 == 0) {
        iVar6 = param_2[6];
        iVar14 = param_2[7];
        puVar10 = local_30;
        if (local_30 == puVar21) {
          FUN_006520b4(&local_30,puVar21,1,1,1);
          puVar10 = extraout_r1;
        }
        puVar17 = local_2c;
        puVar20 = puVar20 + 3;
        *(undefined1 *)((int)local_2c + (int)local_28) = 0x3d;
        local_28 = puVar20;
        FUN_012c04d4(&local_40,puVar10,iVar6,iVar14);
        ppuVar11 = local_38;
        pcVar13 = local_3c;
        if (local_30 + -(int)puVar20 < local_38) {
          FUN_006520b4(&local_30,puVar20,local_38,1,1);
          puVar17 = local_2c;
          puVar20 = local_28;
        }
        FUN_01bed4e2((undefined1 *)((int)puVar17 + (int)puVar20),pcVar13,ppuVar11);
        local_28 = puVar20 + (int)ppuVar11;
        pcVar13 = local_3c;
      }
      else {
        if (iVar6 == 1) {
          FUN_012c04d4(&local_40,1,param_2[6],param_2[7]);
          ppuVar11 = local_38;
          pcVar13 = local_3c;
          if (local_30 + -(int)puVar21 < local_38) {
            FUN_006520b4(&local_30,puVar21,local_38,1,1);
            goto LAB_012c1c24;
          }
        }
        else {
          FUN_012c04d4(&local_40,iVar6,0xffffffff,0x7fffffff);
          ppuVar11 = local_38;
          pcVar13 = local_3c;
          if (local_30 + -(int)puVar21 < local_38) {
            FUN_006520b4(&local_30,puVar21,local_38,1,1);
LAB_012c1c24:
            puVar17 = local_2c;
            puVar21 = local_28;
          }
        }
        FUN_01bed4e2((undefined1 *)((int)puVar17 + (int)puVar21),pcVar13,ppuVar11);
        local_28 = puVar21 + (int)ppuVar11;
      }
      FUN_0134bd64(local_40,pcVar13);
      local_38 = &local_50;
      local_50 = local_30;
      local_4c = local_2c;
      local_48 = local_28;
      local_34 = &LAB_00632348;
      local_40 = (undefined1 **)&local_70;
      local_3c = FUN_012fceb8;
      FUN_00664898(&local_30,&DAT_0057c6f1,&local_40);
      FUN_0134bd64(local_50,local_4c);
      puVar21 = local_28;
      puVar17 = local_2c;
      puVar20 = local_30;
      piVar7 = (int *)thunk_FUN_01be5118(0xc);
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,0xc);
      }
      *piVar7 = (int)puVar20;
      ppuVar8 = apuStack_5c;
      puVar4 = &DAT_01ce2920;
      piVar7[1] = (int)puVar17;
      piVar7[2] = (int)puVar21;
      ppuVar11 = &local_68;
    }
    else {
      if ((iVar6 == 1) &&
         (iVar14 = param_2[3],
         (int)(iVar14 - (uVar12 + (*puVar19 < uVar9))) < 0 ==
         (SBORROW4(iVar14,uVar12) != SBORROW4(iVar14 - uVar12,(uint)(*puVar19 < uVar9)))))
      goto LAB_012c17b0;
LAB_012c16d0:
      if (param_2[4] != 2) {
        if (param_2[4] == 1) {
          iVar14 = param_2[7];
          bVar22 = uVar9 < (uint)param_2[6];
          if ((int)(uVar12 - (iVar14 + (uint)bVar22)) < 0 ==
              (SBORROW4(uVar12,iVar14) != SBORROW4(uVar12 - iVar14,(uint)bVar22)))
          goto LAB_012c17b0;
        }
        else {
          iVar14 = param_2[7];
          bVar22 = (uint)param_2[6] < uVar9;
          if ((int)(iVar14 - (uVar12 + bVar22)) < 0 !=
              (SBORROW4(iVar14,uVar12) != SBORROW4(iVar14 - uVar12,(uint)bVar22)))
          goto LAB_012c17b0;
        }
      }
      iVar6 = uVar12 - (0xff >= uVar9);
      if (uVar12 == 0 && (0xff < uVar9) <= uVar12) {
        uVar16 = 0;
        param_1[1] = (char)uVar2;
        goto LAB_012c16b0;
      }
      if (param_4 == 0) {
LAB_012c1764:
        local_4c = (undefined2 *)thunk_FUN_01be5118(3,iVar6);
        if (local_4c == (undefined2 *)0x0) goto LAB_012c1c5c;
        *(undefined1 *)(local_4c + 1) = 0x2e;
        *local_4c = 0x2e2e;
        local_48 = (undefined1 *)0x3;
        local_50 = (undefined1 *)0x3;
      }
      else {
        local_28 = (undefined1 *)0x0;
        local_3c = (code *)&DAT_01ce2890;
        local_40 = &local_30;
        local_30 = (undefined1 *)0x0;
        local_34 = (undefined1 *)0x0;
        local_2c = (undefined2 *)&DAT_00000001;
        local_38 = (undefined1 **)0x60000020;
        uVar23 = FUN_012bb12c(param_4,&local_40);
        iVar6 = (int)((ulonglong)uVar23 >> 0x20);
        if ((int)uVar23 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_50,&DAT_01ce28a8,&DAT_01d30334);
        }
        if (local_30 == (undefined1 *)0x80000000) goto LAB_012c1764;
        local_48 = local_28;
        local_4c = local_2c;
        local_50 = local_30;
      }
      FUN_006643f0(&local_40,param_5,param_6);
      FUN_0160ec7c(&local_30,&local_40);
      ppuVar11 = &local_50;
      ppuVar8 = &local_30;
      piVar7 = (int *)&DAT_00000001;
      puVar4 = &DAT_01ce28e4;
    }
    goto LAB_012c169c;
  }
  puVar4 = (undefined *)FUN_012b9138(param_3 + 0x1d);
  local_38 = (undefined1 **)0x0;
  local_3c = (code *)&DAT_00420598;
  if (puVar4 != (undefined *)0x0) {
    local_3c = (code *)puVar4;
  }
  local_40 = param_3;
  FUN_012b5c88(&local_30,&local_40,4,0);
  uVar5 = FUN_012bca94(param_3,&local_30);
  goto LAB_012c16a8;
LAB_012c15b0:
  uVar16 = 1;
LAB_012c15b4:
  if (param_4 == 0) {
LAB_012c1614:
    local_4c = (undefined2 *)thunk_FUN_01be5118(3);
    if (local_4c == (undefined2 *)0x0) {
LAB_012c1c5c:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,3);
    }
    *(undefined1 *)(local_4c + 1) = 0x2e;
    *local_4c = 0x2e2e;
    local_48 = (undefined1 *)0x3;
    local_50 = (undefined1 *)0x3;
  }
  else {
    local_28 = (undefined1 *)0x0;
    local_3c = (code *)&DAT_01ce2890;
    local_40 = &local_30;
    local_30 = (undefined1 *)0x0;
    local_34 = (undefined1 *)0x0;
    local_2c = (undefined2 *)&DAT_00000001;
    local_38 = (undefined1 **)0x60000020;
    iVar6 = FUN_012bb12c(param_4,&local_40);
    if (iVar6 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_50,&DAT_01ce28a8,&DAT_01d30334);
    }
    if (local_30 == (undefined1 *)0x80000000) goto LAB_012c1614;
    local_48 = local_28;
    local_4c = local_2c;
    local_50 = local_30;
  }
  FUN_006643f0(&local_40,param_5,param_6);
  FUN_0160ec7c(&local_30,&local_40);
  piVar7 = (int *)thunk_FUN_01be5118(1);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,1);
  }
  *(undefined1 *)piVar7 = uVar16;
  ppuVar11 = &local_50;
  puVar4 = &DAT_01ce28b8;
  ppuVar8 = &local_30;
LAB_012c169c:
  uVar5 = FUN_012bd2fc(ppuVar11,ppuVar8,piVar7,puVar4);
  uVar5 = FUN_012bc780(uVar5,param_3);
LAB_012c16a8:
  uVar16 = 1;
  *(undefined4 *)(param_1 + 4) = uVar5;
LAB_012c16b0:
  *param_1 = uVar16;
  return;
}

