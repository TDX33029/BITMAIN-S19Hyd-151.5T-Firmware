// FUN_007a1fb4 @ 007a1fb4 size=2516 calls_out=27 calls_in=2
// strings: internal error: entered unreachable code

undefined4 FUN_007a1fb4(undefined4 *param_1,int *param_2)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  uint *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  undefined2 *puVar11;
  uint uVar12;
  int *piVar13;
  int iVar14;
  uint uVar15;
  uint uVar16;
  int *piVar17;
  undefined4 uVar18;
  undefined *puVar19;
  undefined4 uVar20;
  undefined4 *puVar21;
  ulonglong uVar22;
  undefined8 uVar23;
  undefined4 *local_148;
  undefined2 *local_144;
  undefined4 **local_140;
  code *local_13c;
  undefined *local_e8;
  undefined4 *local_e4;
  undefined4 *local_e0;
  undefined2 *local_dc;
  undefined *local_d8;
  int *local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined1 local_9c;
  undefined4 local_98;
  undefined4 *puStack_94;
  undefined4 uStack_90;
  int *local_88;
  undefined4 *local_84;
  undefined4 local_80;
  undefined4 *local_78;
  undefined2 *local_74;
  undefined *local_70;
  undefined4 uStack_6c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x22)) {
  case 0:
    uVar18 = *param_1;
    param_1[2] = uVar18;
    uVar9 = param_1[1];
    local_9c = 0;
    local_a8 = 0;
    local_ac = 0;
    local_b4 = 0;
    local_bc = 0;
    local_c0 = 0;
    local_c8 = 0;
    local_cc = 0;
    local_d0 = 0;
    local_d8 = (undefined *)0x0;
    local_dc = (undefined2 *)((uint)local_dc & 0xffffff00);
    local_e0 = (undefined4 *)0x0;
    uVar20 = param_1[0x20];
    param_1[3] = uVar9;
    local_a0 = 1;
    local_a4 = 1;
    local_b0 = 4;
    local_b8 = 1;
    local_c4 = 4;
    local_d4 = (int *)&DAT_00000001;
    local_e4 = (undefined4 *)0x1;
    local_e8 = (undefined *)0x1;
    piVar17 = (int *)thunk_FUN_01be5118(0x50);
    if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x50);
    }
    puVar5 = param_1 + 4;
    FUN_01bed4e2(piVar17,&local_e8,0x50);
    do {
      iVar14 = *piVar17;
      bVar3 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar3);
    *piVar17 = iVar14 + 1;
    if (iVar14 < 0) goto LAB_007a2ac4;
    local_88 = piVar17;
    FUN_00664bdc(&local_78,uVar18,uVar9);
    local_e0 = local_78;
    local_dc = local_74;
    local_d8 = local_70;
    local_e4 = (undefined4 *)0x0;
    local_e8 = (undefined *)0x5;
    local_d4 = piVar17;
    FUN_015a9e04(&local_148,uVar20);
    puVar6 = param_1 + 5;
    if (local_148 == (undefined4 *)&SUB_00000004) {
      *puVar6 = piVar17;
      *puVar5 = 4;
    }
    else {
      *puVar6 = local_144;
      param_1[6] = local_140;
      param_1[7] = local_13c;
      *puVar5 = (uint)local_148;
      FUN_015a9d68(piVar17);
      if (*puVar5 != 4) {
        local_78 = (undefined4 *)*puVar5;
        local_74 = (undefined2 *)param_1[5];
        local_70 = (undefined *)param_1[6];
        uStack_6c = param_1[7];
        if (1 < DAT_01d51b00) {
          local_13c = FUN_015fb818;
          local_144 = &DAT_0132b6a0;
          local_d8 = &DAT_01c09470;
          local_dc = (undefined2 *)0xc;
          local_e0 = (undefined4 *)&DAT_003e1138;
          local_e4 = (undefined4 *)0xc;
          local_e8 = &DAT_003e1138;
          local_148 = param_1 + 2;
          local_140 = &local_78;
          FUN_015fb650(&DAT_00590197,&local_148,2,&local_e8);
        }
        if ((undefined4 *)0x1 < local_78) {
          FUN_019bb7e0(local_74,local_70);
        }
        uVar9 = 0;
        uVar10 = 1;
        goto LAB_007a2a80;
      }
      piVar17 = (int *)*puVar6;
    }
    local_80 = 0;
    local_84 = param_1 + 0x21;
    *local_84 = piVar17;
    local_88 = (int *)0x1;
    FUN_019ac130(&local_78,1);
    if (local_70 < (undefined *)0x1dcd6500) {
      puVar19 = local_70 + 500000000;
      puVar6 = local_78;
      puVar11 = local_74;
LAB_007a228c:
      uVar23 = FUN_019ef7f4(&DAT_01c09460);
      uVar9 = (undefined4)((ulonglong)uVar23 >> 0x20);
      FUN_019dc4f8(&local_78,(int)uVar23,uVar9,uVar9,puVar6,puVar11,puVar19,&DAT_01c09460);
    }
    else {
      puVar11 = (undefined2 *)((int)local_74 + (uint)((undefined4 *)0xfffffffe < local_78));
      if (-1 < (int)(((uint)local_74 ^ (uint)puVar11) & ~(uint)local_74)) {
        puVar19 = local_70 + -500000000;
        puVar6 = (undefined4 *)((int)local_78 + 1);
        goto LAB_007a228c;
      }
      FUN_019e6e14(&local_78);
    }
    local_98 = local_88;
    puStack_94 = local_84;
    uStack_90 = local_80;
    FUN_01bed4e2(&local_e8,&local_78,0x50);
    FUN_01bed4e2(&local_148,&local_e8,0x60);
    FUN_01bed4e2(param_1 + 8,&local_148,0x60);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c09480);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c09480);
  }
  bVar4 = FUN_019ec70c();
  piVar8 = param_1 + 0x1d;
  piVar17 = (int *)*piVar8;
  if (param_1[0x1c] == 0) {
    piVar17 = piVar8;
  }
  iVar14 = *piVar17;
  if (param_1[0x1e] == 0) {
    FUN_01656cb0(&local_e8);
    puVar6 = local_e4;
    if (local_e8 == (undefined *)0x1) {
      local_74 = (undefined2 *)CONCAT31(local_74._1_3_,local_e0._0_1_);
      local_78 = local_e4;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_78,&DAT_01c09530,&DAT_01cfd9e0);
    }
    uVar15 = (uint)local_e0 & 0xff;
    FUN_015eaf80(local_e4 + 2,1);
    if (puVar6[5] == 0) {
      DataMemoryBarrier(0xb);
      if (*(char *)(iVar14 + 0x4c) == '\0') {
        uVar23 = (*(code *)**(undefined4 **)*param_2)(((undefined4 *)*param_2)[1]);
        piVar17 = (int *)thunk_FUN_01be5118(0x24);
        if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x24);
        }
        piVar17[7] = (int)((ulonglong)uVar23 >> 0x20);
        piVar17[5] = 0;
        piVar17[6] = (int)uVar23;
        piVar17[8] = 0;
        *piVar17 = 1;
        piVar17[1] = 1;
        piVar17[2] = 0;
        do {
          iVar14 = *piVar17;
          bVar3 = (bool)hasExclusiveAccess(piVar17);
        } while (!bVar3);
        *piVar17 = iVar14 + 1;
        if (iVar14 < 0) goto LAB_007a2ac4;
        FUN_015efd88(puVar6 + 6,piVar17,&DAT_01c09540);
        FUN_00a97e8c(puVar6,uVar15);
        piVar8 = (int *)param_1[0x1e];
        if (piVar8 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar14 = *piVar8;
            bVar3 = (bool)hasExclusiveAccess(piVar8);
          } while (!bVar3);
          *piVar8 = iVar14 + -1;
          if (iVar14 == 1) {
            DataMemoryBarrier(0xb);
            FUN_007a6a1c(param_1[0x1e]);
          }
        }
        param_1[0x1e] = piVar17;
        goto LAB_007a28cc;
      }
      FUN_00a97e8c(puVar6,uVar15);
      uVar16 = 2;
      iVar14 = 1;
    }
    else {
      puVar6[5] = puVar6[5] + -1;
      uVar7 = puVar6[4] + 1;
      uVar16 = (uint)*(byte *)(puVar6[3] + puVar6[4]);
      uVar12 = uVar7 - puVar6[2];
      if (uVar7 < (uint)puVar6[2]) {
        uVar12 = uVar7;
      }
      puVar6[4] = uVar12;
      FUN_00a97e8c(puVar6,uVar15);
      iVar14 = 0;
    }
    if (iVar14 == 2) goto LAB_007a28cc;
    if (iVar14 == 0) {
      uVar15 = uVar16 & 1;
    }
    else {
      uVar15 = 2;
      if (uVar16 != 2) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c09618);
      }
    }
  }
  else {
    uVar22 = FUN_007a3b7c(iVar14 + 8);
    uVar16 = (uint)(uVar22 >> 0x20);
    if ((uVar22 & 1) == 0) {
      uVar15 = uVar16 & 1;
    }
    else {
      uVar15 = 2;
      if ((uVar16 & 0xff) != 2) {
        piVar17 = (int *)param_1[0x1e];
        if (piVar17 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01c095f0);
        }
        do {
          iVar14 = *piVar17;
          bVar3 = (bool)hasExclusiveAccess(piVar17);
        } while (!bVar3);
        *piVar17 = iVar14 + 1;
        if (-1 < iVar14) {
          puVar6 = (undefined4 *)*param_2;
          piVar13 = piVar17 + 5;
          cVar2 = (char)*piVar13;
          do {
            if (cVar2 == '\0') {
              bVar3 = (bool)hasExclusiveAccess(piVar13);
              if (bVar3) goto code_r0x007a26fc;
            }
            else {
              ClearExclusiveLocal();
            }
            while ((char)*piVar13 != '\0') {
              HintYield();
            }
            cVar2 = (char)*piVar13;
          } while( true );
        }
LAB_007a2ac4:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0x7a2ac4);
        (*pcVar1)();
      }
    }
  }
  goto LAB_007a290c;
code_r0x007a26fc:
  *(char *)piVar13 = '\x01';
  DataMemoryBarrier(0xb);
  cVar2 = (char)piVar17[8];
  DataMemoryBarrier(0xb);
  iVar14 = puVar6[1];
  puVar21 = (undefined4 *)*puVar6;
  if (piVar17[7] == iVar14) {
    puVar6 = (undefined4 *)piVar17[6];
  }
  if (piVar17[7] == iVar14 && puVar6 == puVar21) {
    DataMemoryBarrier(0xb);
    *(char *)piVar13 = '\0';
    if (cVar2 != '\0') goto LAB_007a27d0;
  }
  else {
    uVar23 = (*(code *)*puVar21)(iVar14);
    (**(code **)(piVar17[6] + 0xc))(piVar17[7]);
    *(undefined8 *)(piVar17 + 6) = uVar23;
    if (cVar2 == '\0') {
      DataMemoryBarrier(0xb);
      *(char *)piVar13 = '\0';
    }
    else {
      (*(code *)puVar21[2])(iVar14);
      DataMemoryBarrier(0xb);
      *(char *)piVar13 = '\0';
LAB_007a27d0:
      piVar13 = (int *)param_1[0x1d];
      if (param_1[0x1c] == 0) {
        piVar13 = piVar8;
      }
      FUN_01656cb0(&local_e8,*piVar13 + 8);
      puVar6 = local_e4;
      if (local_e8 == (undefined *)0x1) {
        local_74 = (undefined2 *)CONCAT31(local_74._1_3_,local_e0._0_1_);
        local_78 = local_e4;
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533467,0x2b,&local_78,&DAT_01c095e0,&DAT_01cfd9e0);
      }
      uVar15 = (uint)local_e0 & 0xff;
      FUN_015efd88(local_e4 + 6,piVar17,&DAT_01c09600);
      FUN_00a97e8c(puVar6,uVar15);
    }
  }
  piVar13 = (int *)param_1[0x1d];
  if (param_1[0x1c] == 0) {
    piVar13 = piVar8;
  }
  DataMemoryBarrier(0xb);
  if (*(char *)(*piVar13 + 0x4c) == '\0') {
    uVar15 = 3;
  }
  else {
    if (param_1[0x1c] != 0) {
      piVar8 = (int *)param_1[0x1d];
    }
    uVar22 = FUN_007a3b7c(*piVar8 + 8);
    uVar15 = (uint)((uVar22 & 0x100000001) >> 0x20);
    if ((int)(uVar22 & 0x100000001) != 0) {
      uVar15 = 2;
    }
  }
  if (cVar2 == '\0') {
    DataMemoryBarrier(0xb);
    do {
      iVar14 = *piVar17;
      bVar3 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar3);
    *piVar17 = iVar14 + -1;
    if (iVar14 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007a6a1c(piVar17);
    }
  }
  if (uVar15 == 3) {
LAB_007a28cc:
    iVar14 = FUN_019ee264(bVar4 == 2 | bVar4 & 1,param_1 + 8,*param_2);
    uVar15 = 3;
    if (iVar14 != 0) {
      uVar9 = 1;
      uVar10 = 3;
      goto LAB_007a2a80;
    }
  }
LAB_007a290c:
  FUN_0079ab38(param_1 + 8);
  if (uVar15 == 2) {
    if (1 < DAT_01d51b00) {
      local_78 = param_1 + 2;
      local_74 = &DAT_0132b6a0;
      local_d8 = &DAT_01c094a0;
      local_dc = (undefined2 *)0xc;
      local_e0 = (undefined4 *)&DAT_003e1138;
      local_e4 = (undefined4 *)0xc;
      local_e8 = &DAT_003e1138;
      FUN_015fb650(&DAT_005a5c8b,&local_78,2,&local_e8);
    }
  }
  else if (uVar15 == 3) {
    if (1 < DAT_01d51b00) {
      local_78 = param_1 + 2;
      local_74 = &DAT_0132b6a0;
      local_d8 = &DAT_01c094b0;
      local_dc = (undefined2 *)0xc;
      local_e0 = (undefined4 *)&DAT_003e1138;
      local_e4 = (undefined4 *)0xc;
      local_e8 = &DAT_003e1138;
      FUN_015fb650(&DAT_005a588e,&local_78,2,&local_e8);
    }
  }
  else if (((uVar15 & 1) != 0) && (1 < DAT_01d51b00)) {
    local_78 = param_1 + 2;
    local_74 = &DAT_0132b6a0;
    local_d8 = &DAT_01c09490;
    local_dc = (undefined2 *)0xc;
    local_e0 = (undefined4 *)&DAT_003e1138;
    local_e4 = (undefined4 *)0xc;
    local_e8 = &DAT_003e1138;
    FUN_015fb650(&DAT_005bb4be,&local_78,2,&local_e8);
  }
  FUN_0079ac1c(param_1 + 0x21);
  uVar9 = 0;
  uVar10 = 1;
LAB_007a2a80:
  *(undefined1 *)(param_1 + 0x22) = uVar10;
  return uVar9;
}

