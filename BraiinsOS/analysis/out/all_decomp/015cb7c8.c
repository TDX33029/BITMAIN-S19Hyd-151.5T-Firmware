// FUN_015cb7c8 @ 015cb7c8 size=1260 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015cb7c8(int *param_1,int *param_2,uint *****param_3,uint *****param_4)

{
  bool bVar1;
  byte bVar2;
  uint ****ppppuVar3;
  uint ****ppppuVar4;
  uint *****pppppuVar5;
  uint *****pppppuVar6;
  int *piVar7;
  uint *****pppppuVar8;
  uint *****pppppuVar9;
  uint *****pppppuVar10;
  uint *****pppppuVar11;
  uint ****ppppuVar12;
  uint ****ppppuVar13;
  uint ****ppppuVar14;
  uint *****pppppuVar15;
  uint ****ppppuVar16;
  uint ****ppppuVar17;
  uint uVar18;
  uint uVar19;
  uint *****pppppuVar20;
  int iVar21;
  int iVar22;
  uint *****pppppuVar23;
  uint *puVar24;
  uint *****pppppuVar25;
  uint *****pppppuVar26;
  int iVar27;
  uint *****pppppuVar28;
  uint *****pppppuVar29;
  int iVar30;
  uint *****pppppuVar31;
  uint uVar32;
  uint ****ppppuVar33;
  uint ***local_f8;
  int *local_f4;
  uint *****local_f0;
  uint *****local_ec;
  uint *****local_dc;
  uint *****local_c0;
  int local_bc;
  uint *****local_b4;
  int local_a0;
  int iStack_9c;
  int local_98;
  uint *****local_94;
  uint *****local_90;
  uint *****local_8c;
  uint *****local_88;
  uint *****local_84;
  uint *****local_80;
  uint *****local_7c;
  uint ***local_78;
  int *local_74;
  uint *****local_70;
  uint *****local_6c;
  uint *****local_68;
  uint *****local_64;
  int iStack_60;
  int iStack_5c;
  uint *****local_38;
  uint *****local_34;
  uint *****local_30;
  uint ****local_2c [2];
  
  if (*param_2 == 0) {
    pppppuVar25 = (uint *****)param_3[8];
    pppppuVar31 = (uint *****)param_3[9];
    pppppuVar9 = (uint *****)param_3[2];
    pppppuVar10 = (uint *****)param_3[3];
    pppppuVar11 = (uint *****)param_3[4];
    ppppuVar12 = param_3[5];
    ppppuVar33 = param_3[0xd];
    ppppuVar3 = param_3[0xc];
    ppppuVar4 = *param_3;
    ppppuVar13 = param_3[1];
    pppppuVar5 = (uint *****)param_3[6];
    bVar2 = *(byte *)(param_3 + 0xe);
    local_dc = (uint *****)param_3[0x10];
    ppppuVar14 = param_3[0x11];
    do {
      local_b4 = (uint *****)param_2[7];
      pppppuVar15 = (uint *****)param_2[4];
      pppppuVar26 = (uint *****)param_2[5];
      pppppuVar28 = (uint *****)param_2[6];
      pppppuVar20 = pppppuVar15;
      pppppuVar29 = pppppuVar28;
      if ((param_2[2] & 1U) != 0) {
        local_bc = 1;
        pppppuVar8 = local_b4;
        local_34 = param_4;
        local_ec = pppppuVar26;
        goto LAB_015cbc10;
      }
      pppppuVar6 = (uint *****)param_2[8];
      piVar7 = (int *)param_2[3];
      pppppuVar23 = (uint *****)param_2[9];
      if (piVar7 != (int *)0x0) {
        iVar22 = *piVar7;
        iVar27 = piVar7[2];
        pppppuVar5 = (uint *****)&DAT_00000004;
        uVar32 = piVar7[3];
        uVar18 = piVar7[1];
        local_30 = (uint *****)0x0;
        local_34 = (uint *****)&DAT_00000004;
        local_38 = (uint *****)0x0;
        goto LAB_015cbab4;
      }
      local_34 = pppppuVar23;
      if (pppppuVar15 != (uint *****)&SUB_00000002) {
        local_bc = 0;
        local_c0 = (uint *****)&DAT_00000004;
        pppppuVar8 = pppppuVar23;
        local_f0 = pppppuVar6;
        local_ec = pppppuVar26;
        local_dc = pppppuVar23;
        goto LAB_015cbc10;
      }
      local_bc = 0;
      pppppuVar8 = (uint *****)0x3;
      pppppuVar20 = param_3;
      if ((bVar2 & 1) != 0) {
        local_c0 = (uint *****)0x3;
        local_b4 = pppppuVar6;
        goto LAB_015cbc10;
      }
      local_c0 = (uint *****)0x3;
      local_b4 = pppppuVar6;
      if (pppppuVar25 == pppppuVar31) goto LAB_015cbc10;
      pppppuVar15 = pppppuVar25;
      while( true ) {
        ppppuVar16 = pppppuVar15[5];
        pppppuVar25 = pppppuVar15 + 8;
        bVar1 = (uint)((int)ppppuVar16 - (int)ppppuVar33) < (uint)(ppppuVar3 <= pppppuVar15[4]);
        bVar2 = ppppuVar33 < ppppuVar16 || bVar1;
        pppppuVar20 = pppppuVar9;
        pppppuVar26 = pppppuVar10;
        pppppuVar29 = pppppuVar11;
        if (ppppuVar33 < ppppuVar16 || bVar1) break;
        pppppuVar28 = (uint *****)pppppuVar15[3];
        pppppuVar8 = (uint *****)
                     ((int)pppppuVar10 -
                     (int)((int)pppppuVar28 + (uint)(pppppuVar15[2] > pppppuVar9)));
        if (pppppuVar10 <= pppppuVar28 &&
            (uint)(pppppuVar15[2] <= pppppuVar9) <= (uint)((int)pppppuVar10 - (int)pppppuVar28)) {
          ppppuVar16 = pppppuVar15[1];
          pppppuVar8 = (uint *****)
                       ((int)ppppuVar16 - ((int)ppppuVar12 + (uint)(pppppuVar11 > *pppppuVar15)));
          if (ppppuVar16 <= ppppuVar12 &&
              (uint)(pppppuVar11 <= *pppppuVar15) <= (uint)((int)ppppuVar16 - (int)ppppuVar12)) {
            ppppuVar16 = pppppuVar15[6];
            ppppuVar17 = pppppuVar5[3];
            param_3[8] = (uint ****)pppppuVar25;
            if (ppppuVar17 <= ppppuVar16) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa4a4(ppppuVar16,ppppuVar17,&DAT_018ab6c0);
            }
            local_38 = (uint *****)(pppppuVar5[2] + (int)ppppuVar16 * 0x58);
            pppppuVar8 = local_2c;
            pppppuVar20 = (uint *****)&DAT_00000160;
            pppppuVar26 = pppppuVar5;
            goto LAB_015cb9cc;
          }
        }
        local_34 = pppppuVar25;
        pppppuVar15 = pppppuVar25;
        if (pppppuVar25 == pppppuVar31) goto LAB_015cbc10;
      }
      pppppuVar15 = (uint *****)0x0;
      *(undefined1 *)(param_3 + 0xe) = 1;
      param_3[8] = (uint ****)pppppuVar25;
      pppppuVar8 = (uint *****)&local_38;
LAB_015cb9cc:
      *pppppuVar8 = (uint ****)pppppuVar15;
      local_34 = pppppuVar15;
      if (local_38 == (uint *****)0x0) goto LAB_015cbc10;
      FUN_015cb12c(&local_98,local_38,ppppuVar4,ppppuVar13,ppppuVar14);
      *param_2 = local_98;
      param_2[1] = (int)local_94;
      param_2[2] = (int)local_90;
      param_2[3] = (int)local_8c;
      param_2[4] = (int)local_88;
      param_2[5] = (int)local_84;
      param_2[6] = (int)local_80;
      param_2[7] = (int)local_7c;
      param_2[8] = (int)local_78;
      param_2[9] = (int)local_74;
      param_2[10] = (int)local_70;
      param_2[0xb] = (int)local_6c;
      param_2[0xc] = (int)local_68;
      param_2[0xd] = (int)local_64;
      param_2[0xe] = iStack_60;
      param_2[0xf] = iStack_5c;
      param_4 = local_68;
    } while (*param_2 == 0);
  }
  iVar22 = param_2[9];
  iVar27 = param_2[10];
  iVar30 = param_2[0xb];
  *param_1 = param_2[8];
  param_1[1] = iVar22;
  param_1[2] = iVar27;
  param_1[3] = iVar30;
  iVar22 = param_2[0xd];
  iVar27 = param_2[0xe];
  iVar30 = param_2[0xf];
  param_1[4] = param_2[0xc];
  param_1[5] = iVar22;
  param_1[6] = iVar27;
  param_1[7] = iVar30;
  local_a0 = *param_2;
  iStack_9c = param_2[1];
  local_98 = param_2[2];
  local_94 = (uint *****)param_2[3];
  local_90 = (uint *****)param_2[4];
  local_8c = (uint *****)param_2[5];
  local_88 = (uint *****)param_2[6];
  local_84 = (uint *****)param_2[7];
  FUN_016dd1aa(&local_80,param_3,0x48);
  FUN_016dd1aa(param_1 + 8,&local_a0,0x68);
  return;
LAB_015cbab4:
  pppppuVar9 = local_30;
  iVar30 = 0;
  if (uVar32 != 1) {
    if (uVar32 == 0) goto LAB_015cbb98;
    uVar19 = uVar32;
    do {
      iVar21 = iVar30 + (uVar19 >> 1);
      puVar24 = (uint *)(iVar27 + iVar21 * 0x18);
      if ((uint *****)puVar24[4] <= local_30) {
        if ((uint *****)puVar24[4] < local_30) {
          iVar30 = iVar21;
        }
        else if ((uint ****)puVar24[1] < ppppuVar13 ||
                 (uint)((int)ppppuVar13 - (int)puVar24[1]) <
                 (uint)((uint ****)*puVar24 <= ppppuVar4)) {
          iVar30 = iVar21;
        }
      }
      uVar19 = uVar19 - (uVar19 >> 1);
    } while (1 < uVar19);
  }
  puVar24 = (uint *)(iVar27 + iVar30 * 0x18);
  if (((local_30 < (uint *****)puVar24[4]) || ((uint *****)puVar24[4] < local_30)) ||
     (ppppuVar13 <= (uint ****)puVar24[1] &&
      (uint)((uint ****)*puVar24 <= ppppuVar4) <= (uint)((int)ppppuVar13 - (int)puVar24[1]))) {
LAB_015cbb98:
    local_f8 = *ppppuVar14 + 2;
    local_bc = 0;
    pppppuVar8 = local_34 + (int)local_30;
    pppppuVar20 = pppppuVar26;
    pppppuVar26 = local_38;
    pppppuVar29 = local_b4;
    local_f4 = piVar7;
    local_f0 = pppppuVar23;
    local_ec = pppppuVar28;
    local_c0 = pppppuVar15;
    local_b4 = pppppuVar6;
LAB_015cbc10:
    local_64 = pppppuVar8;
    local_74 = local_f4;
    local_78 = local_f8;
    local_7c = local_dc;
    local_80 = local_f0;
    local_84 = local_b4;
    local_8c = local_ec;
    local_94 = local_c0;
    local_98 = local_bc;
    local_68 = pppppuVar26;
    local_6c = local_34;
    local_70 = local_34;
    local_88 = pppppuVar29;
    local_90 = pppppuVar20;
    *param_1 = local_bc;
    param_1[1] = (int)local_c0;
    param_1[2] = (int)pppppuVar20;
    param_1[3] = (int)local_ec;
    param_1[4] = (int)pppppuVar29;
    param_1[5] = (int)local_b4;
    param_1[6] = (int)local_f0;
    param_1[7] = (int)local_dc;
    param_1[8] = (int)local_f8;
    param_1[9] = (int)local_f4;
    param_1[10] = (int)local_34;
    param_1[0xb] = (int)local_34;
    param_1[0xc] = (int)pppppuVar26;
    param_1[0xd] = (int)pppppuVar8;
    *(undefined1 *)(param_1 + 0x1e) = 2;
    return;
  }
  ppppuVar3 = (uint ****)puVar24[3];
  if (ppppuVar3 < ppppuVar13 ||
      (uint)((int)ppppuVar13 - (int)ppppuVar3) < (uint)((uint ****)puVar24[2] <= ppppuVar4))
  goto LAB_015cbb98;
  uVar19 = puVar24[5];
  if (uVar18 <= uVar19) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar19,uVar18,&DAT_018ab6d0);
  }
  if (local_30 == local_38) {
    FUN_015f72d0(&local_38,local_38,
                 (int)ppppuVar13 - ((int)ppppuVar3 + (uint)((uint ****)puVar24[2] > ppppuVar4)));
    pppppuVar5 = local_34;
  }
  pppppuVar5[(int)pppppuVar9] = (uint ****)(iVar22 + uVar19 * 0x28);
  uVar32 = uVar32 - (iVar30 + 1);
  local_30 = (uint *****)((int)pppppuVar9 + 1);
  iVar27 = iVar27 + (iVar30 + 1) * 0x18;
  goto LAB_015cbab4;
}

