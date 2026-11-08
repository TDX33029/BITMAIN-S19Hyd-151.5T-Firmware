// FUN_0072062c @ 0072062c size=1216 calls_out=5 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0072062c(int *param_1,int *param_2,uint *param_3)

{
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  uint uVar21;
  int iVar22;
  int iVar23;
  int *piVar24;
  uint uVar25;
  uint extraout_r12;
  ulonglong uVar26;
  int *local_10c;
  int local_108;
  uint local_104;
  int *local_100;
  int local_b0;
  int local_ac;
  int local_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  uint local_94;
  int local_90;
  int *local_8c;
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int *piStack_74;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  uint local_30;
  int *local_2c;
  uint local_28;
  
  if (*param_2 == 0) {
    piVar24 = param_2 + 5;
    uVar3 = *param_3;
    uVar9 = param_3[1];
    uVar4 = param_3[0xc];
    uVar10 = param_3[0xd];
    uVar14 = param_3[8];
    uVar21 = param_3[9];
    bVar2 = (byte)param_3[0xe];
    uVar5 = param_3[0x11];
    do {
      iVar12 = param_2[4];
      uVar25 = param_2[2];
      piVar6 = (int *)param_2[3];
      iVar16 = *piVar24;
      iVar19 = param_2[6];
      iVar15 = param_2[7];
      iVar17 = param_2[8];
      iVar20 = param_2[9];
      local_2c = piVar24;
      if ((uVar25 & 1) != 0) {
        iVar23 = 1;
        local_48 = param_2[4];
        iStack_44 = param_2[5];
        iVar12 = param_2[6];
        iStack_3c = param_2[7];
        iStack_40 = iVar12;
        goto LAB_007208cc;
      }
      if (piVar6 != (int *)0x0) {
        iVar22 = *piVar6;
        iVar23 = piVar6[2];
        piVar24 = (int *)&SUB_00000004;
        uVar5 = piVar6[3];
        uVar4 = piVar6[1];
        local_28 = 0;
        local_2c = (int *)&SUB_00000004;
        local_30 = 0;
        goto LAB_00720980;
      }
      if (iVar12 != 2) {
        iVar23 = 0;
        iVar12 = 4;
        uVar25 = param_2[9];
        local_48 = param_2[4];
        iStack_44 = param_2[5];
        iStack_40 = param_2[6];
        iStack_3c = param_2[7];
        iStack_38 = param_2[8];
        goto LAB_007208cc;
      }
      iVar23 = 0;
      iVar12 = 3;
      if (((bVar2 & 1) != 0) || (uVar14 == uVar21)) goto LAB_007208cc;
      uVar7 = uVar14;
      piVar6 = piVar24;
      while( true ) {
        uVar14 = uVar7 + 0x20;
        param_3[8] = uVar14;
        uVar13 = *(uint *)(uVar7 + 0x14);
        bVar1 = uVar13 - uVar10 < (uint)(uVar4 <= *(uint *)(uVar7 + 0x10));
        bVar2 = uVar10 < uVar13 || bVar1;
        if (uVar10 < uVar13 || bVar1) break;
        piVar6 = (int *)0x720798;
        uVar26 = FUN_007329ec(param_3 + 2);
        uVar25 = extraout_r12;
        if ((int)uVar26 != 0) {
          puVar11 = &uStack_34;
          goto LAB_007207cc;
        }
        uVar7 = uVar14;
        local_2c = piVar6;
        if (uVar14 == uVar21) goto LAB_007208cc;
      }
      uVar26 = (ulonglong)local_30;
      *(undefined1 *)(param_3 + 0xe) = 1;
      puVar11 = &local_30;
LAB_007207cc:
      local_30 = (uint)uVar26;
      *puVar11 = (uint)(uVar26 >> 0x20);
      local_2c = piVar6;
      if (local_30 == 0) goto LAB_007208cc;
      FUN_00732ad8(&local_b0,local_30,uVar3,uVar9,uVar5);
      *param_2 = local_b0;
      param_2[1] = local_ac;
      local_100 = piStack_74;
      local_104 = local_94;
      local_108 = local_90;
      local_10c = local_8c;
      param_2[2] = local_a8;
      param_2[3] = iStack_a4;
      param_2[4] = local_a0;
      param_2[5] = iStack_9c;
      param_2[6] = iStack_98;
      param_2[0xe] = local_78;
      param_2[0xf] = (int)piStack_74;
      param_2[7] = local_94;
      param_2[8] = local_90;
      param_2[9] = (int)local_8c;
      param_2[10] = local_88;
      param_2[0xc] = local_80;
      param_2[0xb] = local_84;
      param_2[0xd] = local_7c;
    } while (local_b0 == 0);
  }
  iVar12 = param_2[9];
  iVar16 = param_2[10];
  iVar19 = param_2[0xb];
  *param_1 = param_2[8];
  param_1[1] = iVar12;
  param_1[2] = iVar16;
  param_1[3] = iVar19;
  iVar12 = param_2[0xd];
  iVar16 = param_2[0xe];
  iVar19 = param_2[0xf];
  param_1[4] = param_2[0xc];
  param_1[5] = iVar12;
  param_1[6] = iVar16;
  param_1[7] = iVar19;
  local_b0 = *param_2;
  local_ac = param_2[1];
  local_a8 = param_2[2];
  iStack_a4 = param_2[3];
  local_a0 = param_2[4];
  iStack_9c = param_2[5];
  iStack_98 = param_2[6];
  local_94 = param_2[7];
  FUN_01bed4e2(&local_90,param_3,0x48);
  FUN_01bed4e2(param_1 + 8,&local_b0,0x68);
  return;
LAB_00720980:
  uVar10 = local_28;
  iVar18 = 0;
  if (uVar5 != 1) {
    if (uVar5 == 0) goto LAB_00720a70;
    uVar14 = uVar5;
    do {
      iVar8 = iVar18 + (uVar14 >> 1);
      puVar11 = (uint *)(iVar23 + iVar8 * 0x18);
      if (puVar11[4] <= local_28) {
        if (puVar11[4] < local_28) {
          iVar18 = iVar8;
        }
        else if (puVar11[1] < uVar9 || uVar9 - puVar11[1] < (uint)(*puVar11 <= uVar3)) {
          iVar18 = iVar8;
        }
      }
      uVar14 = uVar14 - (uVar14 >> 1);
    } while (1 < uVar14);
  }
  puVar11 = (uint *)(iVar23 + iVar18 * 0x18);
  if (((local_28 < puVar11[4]) || (puVar11[4] < local_28)) ||
     (uVar9 <= puVar11[1] && (uint)(*puVar11 <= uVar3) <= uVar9 - puVar11[1])) {
LAB_00720a70:
    iVar23 = 0;
    local_104 = local_30;
    uVar25 = param_3[0x10];
    local_10c = local_2c + local_28;
    local_108 = *(int *)param_3[0x11] + 8;
    local_100 = piVar6;
    local_48 = iVar16;
    iStack_44 = iVar19;
    iStack_40 = iVar15;
    iStack_3c = iVar17;
    iStack_38 = iVar20;
LAB_007208cc:
    param_1[2] = local_48;
    param_1[3] = iStack_44;
    param_1[4] = iStack_40;
    param_1[5] = iStack_3c;
    param_1[6] = iStack_38;
    param_1[8] = local_108;
    param_1[9] = (int)local_100;
    param_1[0xc] = local_104;
    param_1[0xd] = (int)local_10c;
    *param_1 = iVar23;
    param_1[7] = uVar25;
    param_1[10] = (int)local_2c;
    param_1[0xb] = (int)local_2c;
    *(undefined1 *)(param_1 + 0x1e) = 2;
    param_1[1] = iVar12;
    return;
  }
  uVar14 = puVar11[3];
  if (uVar14 < uVar9 || uVar9 - uVar14 < (uint)(puVar11[2] <= uVar3)) goto LAB_00720a70;
  uVar21 = puVar11[5];
  if (uVar4 <= uVar21) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar21,uVar4,&DAT_01c078b0);
  }
  if (local_28 == local_30) {
    FUN_019ee1a8(&local_30,uVar9 - (uVar14 + (puVar11[2] > uVar3)));
    piVar24 = local_2c;
  }
  piVar24[uVar10] = iVar22 + uVar21 * 0x28;
  uVar5 = uVar5 - (iVar18 + 1);
  local_28 = uVar10 + 1;
  iVar23 = iVar23 + (iVar18 + 1) * 0x18;
  goto LAB_00720980;
}

