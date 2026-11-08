// FUN_019dba74 @ 019dba74 size=1232 calls_out=14 calls_in=6
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_019dba74(int *param_1,int *param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  undefined4 *puVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 **ppuVar11;
  int *piVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  undefined4 **ppuVar16;
  int iVar17;
  int iVar18;
  undefined4 **ppuVar19;
  int *piVar20;
  uint ***pppuVar21;
  undefined4 ***pppuVar22;
  int iVar23;
  int iVar24;
  int iVar25;
  int iVar26;
  undefined4 uVar27;
  undefined8 uVar28;
  ulonglong uVar29;
  int *local_e0;
  uint *local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  int local_d0;
  undefined4 local_cc;
  undefined8 local_c8;
  undefined4 ****local_c0;
  code *local_bc;
  undefined **local_b8;
  int local_b0;
  int local_ac;
  int *local_a8;
  uint *local_a4;
  uint local_a0;
  int iStack_9c;
  undefined4 local_98;
  undefined4 ***local_94;
  undefined4 uStack_90;
  int iStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  int *local_60;
  uint *local_5c;
  uint ***local_40;
  undefined1 uStack_3c;
  undefined2 local_3b;
  undefined1 local_39;
  int iStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar28 = thunk_FUN_01bee35a(param_1,0x20);
  iVar5 = (int)uVar28 + (int)((ulonglong)uVar28 >> 0x20);
  piVar6 = (int *)((uint)&local_c0 | 4);
  puVar7 = (undefined4 *)((uint)&local_40 | 4);
  piVar8 = (int *)((uint)&local_e0 | 4);
  iVar24 = param_2[3];
  iVar26 = param_2[4];
  puVar9 = (undefined4 *)((uint)&local_c0 | 0x10);
  do {
    piVar10 = (int *)param_2[2];
    iVar23 = param_2[5];
    iVar4 = param_2[6];
    pppuVar21 = (uint ***)param_2[1];
    piVar20 = (int *)*param_2;
    while (piVar20 != (int *)&DAT_80000001) {
      if (piVar20 == (int *)&DAT_80000000) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d28e14);
      }
      if (iVar24 == 0) {
        iVar24 = 0;
      }
      else {
        piVar12 = (int *)((int)piVar10 + 1);
        iVar24 = iVar24 + -1;
        pppuVar22 = pppuVar21 + (int)piVar10 * 3;
        ppuVar11 = *pppuVar22;
        piVar10 = (int *)((int)piVar12 - (int)piVar20);
        if (piVar12 < piVar20) {
          piVar10 = piVar12;
        }
        param_2[2] = (int)piVar10;
        param_2[3] = iVar24;
        if (ppuVar11 != (undefined4 **)0x3) {
          if (ppuVar11 == (undefined4 **)0x2) {
            ppuVar11 = (undefined4 **)0x3;
          }
          ppuVar16 = pppuVar22[1];
          ppuVar19 = pppuVar22[2];
          *param_1 = (int)ppuVar11;
          param_1[1] = (int)ppuVar16;
          param_1[2] = (int)ppuVar19;
          return;
        }
      }
      if ((char)iVar4 == '\0') {
        iVar24 = 2;
        goto LAB_019dbea8;
      }
      *param_2 = -0x80000000;
      iVar17 = param_2[2];
      iVar25 = param_2[3];
      *piVar8 = param_2[1];
      piVar8[1] = iVar17;
      piVar8[2] = iVar25;
      local_cc = CONCAT31(local_cc._1_3_,(char)iVar23);
      local_e0 = piVar20;
      local_d0 = iVar26;
      uVar29 = FUN_019ef7f4(&DAT_01d28e24);
      iVar17 = (int)(uVar29 >> 0x20);
      iVar25 = 0x218;
      if ((uVar29 & 1) != 0) {
        iVar25 = 0x148;
      }
      uVar27 = *(undefined4 *)(iVar17 + iVar25);
      puVar13 = &DAT_01d50470;
      do {
        do {
          iVar25 = DAT_01d50474;
          uVar14 = DAT_01d50470;
          uVar15 = DAT_01d50470 + 1;
          iVar18 = DAT_01d50474 + (uint)(0xfffffffe < DAT_01d50470);
          bVar2 = (bool)hasExclusiveAccess(0x1d50470);
        } while (!bVar2);
        bVar2 = DAT_01d50470 == 0;
        bVar3 = DAT_01d50474 == 0;
        DAT_01d50470 = uVar15;
        DAT_01d50474 = iVar18;
      } while (bVar2 && bVar3);
      iVar18 = 0x200;
      if ((uVar29 & 1) != 0) {
        iVar18 = 0x138;
      }
      iVar17 = iVar17 + iVar18;
      piVar20 = *(int **)(iVar17 + 8);
      local_c8 = uVar29;
      if (piVar20 != (int *)0x0) {
        do {
          iVar18 = *piVar20;
          bVar2 = (bool)hasExclusiveAccess(piVar20);
        } while (!bVar2);
        *piVar20 = iVar18 + 1;
        if (iVar18 < 0) {
LAB_019dbf44:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x19dbf44);
          (*pcVar1)();
        }
        puVar13 = *(uint **)(iVar17 + 0xc);
        do {
          iVar17 = *piVar20;
          bVar2 = (bool)hasExclusiveAccess(piVar20);
        } while (!bVar2);
        *piVar20 = iVar17 + 1;
        if (iVar17 < 0) goto LAB_019dbf44;
      }
      *puVar7 = local_e0;
      puVar7[1] = local_dc;
      puVar7[2] = uStack_d8;
      puVar7[3] = uStack_d4;
      puVar7[4] = local_d0;
      puVar7[5] = local_cc;
      uStack_90 = CONCAT13(local_39,CONCAT21(local_3b,uStack_3c));
      local_94 = local_40;
      iStack_8c = iStack_38;
      local_88 = local_34;
      uStack_84 = uStack_30;
      uStack_80 = uStack_2c;
      uStack_7c = uStack_28;
      local_98 = 0;
      *puVar9 = 0;
      puVar9[1] = 0;
      local_a0 = uVar14;
      iStack_9c = iVar25;
      local_b8 = &PTR_FUN_01d29bd0;
      local_c0 = (undefined4 ****)0xcc;
      local_bc = (code *)0x0;
      local_68 = 0;
      local_6c = 0;
      local_70 = 0;
      local_40 = (undefined4 ***)0x0;
      local_a8 = piVar20;
      local_a4 = puVar13;
      local_60 = piVar20;
      local_5c = puVar13;
      iVar17 = FUN_01be5878(&local_40,0x20,0x80);
      pppuVar21 = local_40;
      if ((iVar17 != 0) || (local_40 == (undefined4 ***)0x0)) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(0x20,0x80);
      }
      FUN_01bed4e2(local_40,&local_c0,0x80);
      FUN_019f02d4(&local_c0,uVar27,pppuVar21,1,uVar29);
      if (((uint)local_c0 & 0xfe) != 4) {
        uStack_3c = SUB41(local_bc,0);
        local_39 = (undefined1)((uint)local_bc >> 0x18);
        local_3b = (undefined2)((uint)local_bc >> 8);
        local_40 = (uint ***)local_c0;
        local_bc = FUN_019a7d7c;
        local_c0 = &local_40;
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_005ab28b,&local_c0,&DAT_01d28e24);
      }
      FUN_00668d74(&local_c8);
      FUN_019dc0a4(param_2);
      *param_2 = -0x7fffffff;
      param_2[1] = (int)pppuVar21;
      piVar20 = (int *)&DAT_80000001;
    }
    local_c0 = (undefined4 ****)0x2;
    uVar15 = FUN_019ec670(param_3);
    uVar14 = 0;
    if ((uVar15 & 0xff) != 2) {
      uVar14 = uVar15;
    }
    if ((uVar14 & 1) != 0) {
      FUN_019edef0(&local_c0);
LAB_019dbe88:
      iVar24 = 4;
      goto LAB_019dbea8;
    }
    uVar14 = uVar14 & 0xffffff;
    (*(code *)pppuVar21[2][3])(pppuVar21,&local_c0,param_3);
    iVar26 = local_ac;
    iVar24 = local_b0;
    local_40 = (uint ***)*piVar6;
    iVar23 = piVar6[1];
    iStack_38 = piVar6[2];
    uStack_3c = (undefined1)iVar23;
    local_3b = (undefined2)((uint)iVar23 >> 8);
    local_39 = (undefined1)((uint)iVar23 >> 0x18);
    local_e0 = local_a8;
    local_dc = local_a4;
    if ((local_c0 == (undefined4 ****)0x2) && ((uVar14 >> 8 & 1) != 0)) {
      if (*(char *)(iVar5 + 0x38) != '\x01') {
        if (*(char *)(iVar5 + 0x38) == '\x02') goto LAB_019dbe88;
        FUN_019a2bcc(iVar5,&LAB_019efb68);
        *(undefined1 *)(iVar5 + 0x38) = 1;
      }
      *(char *)(iVar5 + 0x31) = (char)(uVar14 >> 0x10);
      *(char *)(iVar5 + 0x30) = (char)(uVar14 >> 8);
      goto LAB_019dbe88;
    }
    if (local_c0 == (undefined4 ****)0x2) goto LAB_019dbe88;
    if (((uint)local_c0 & 1) != 0) {
      FUN_019ecf50(param_1 + 1,local_b0,local_ac);
      iVar24 = 3;
LAB_019dbea8:
      *param_1 = iVar24;
      return;
    }
    FUN_019dc0a4(param_2);
    *param_2 = (int)local_40;
    param_2[1] = CONCAT13(local_39,CONCAT21(local_3b,uStack_3c));
    param_2[2] = iStack_38;
    param_2[3] = iVar24;
    param_2[4] = iVar26;
    param_2[5] = (int)local_e0;
    param_2[6] = (int)local_dc;
  } while( true );
}

