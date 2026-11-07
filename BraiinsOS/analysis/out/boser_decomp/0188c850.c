// FUN_0188c850 @ 0188c850 size=788 calls_out=2 calls_in=5
// strings: 

void FUN_0188c850(int param_1,undefined4 *param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined2 uVar7;
  bool bVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  int *piVar14;
  int *piVar15;
  int *piVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 local_15c;
  undefined4 local_e8;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 local_b0;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined2 local_84;
  int *local_80;
  undefined4 local_7c;
  int *local_78;
  undefined4 local_74;
  undefined1 auStack_70 [76];
  
  piVar16 = (int *)param_2[0x2e];
  uVar2 = *(undefined1 *)((int)param_2 + 0xea);
  uVar7 = *(undefined2 *)(param_2 + 0x3a);
  do {
    iVar9 = *piVar16;
    bVar8 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar8);
  *piVar16 = iVar9 + 1;
  if (-1 < iVar9) {
    uVar10 = param_2[0x35];
    uVar13 = param_2[0x37];
    uVar3 = *(undefined1 *)(param_2 + 0x36);
    local_e8._0_3_ = (undefined3)*(undefined4 *)((int)param_2 + 0xd9);
    local_e8._3_1_ = (undefined1)uVar13;
    uVar4 = *(undefined1 *)((int)param_2 + 0xe2);
    uVar21 = param_2[0x2f];
    uVar17 = param_2[0x30];
    uVar18 = param_2[0x31];
    uVar19 = param_2[0x32];
    uVar20 = param_2[0x33];
    uVar12 = param_2[0x34];
    piVar14 = (int *)param_2[0x18];
    uVar5 = *(undefined1 *)(param_2 + 0x38);
    uVar6 = *(undefined1 *)((int)param_2 + 0xe1);
    do {
      iVar9 = *piVar14;
      bVar8 = (bool)hasExclusiveAccess(piVar14);
    } while (!bVar8);
    *piVar14 = iVar9 + 1;
    if (-1 < iVar9) {
      piVar15 = (int *)param_2[0x1a];
      uVar11 = param_2[0x19];
      if (piVar15 != (int *)0x0) {
        do {
          iVar9 = *piVar15;
          bVar8 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar8);
        *piVar15 = iVar9 + 1;
        if (iVar9 < 0) goto LAB_0188cb60;
        local_15c = param_2[0x1b];
      }
      local_e0 = *param_2;
      local_dc = param_2[1];
      local_d8 = param_2[2];
      local_d4 = param_2[3];
      local_d0 = param_2[4];
      local_cc = param_2[5];
      local_c8 = param_2[6];
      local_a0 = param_2[0x10];
      local_98 = param_2[0x12];
      local_94 = param_2[0x13];
      local_90 = param_2[0x14];
      local_8c = param_2[0x15];
      local_88 = param_2[0x16];
      local_84 = *(undefined2 *)(param_2 + 0x17);
      local_b8 = param_2[10];
      uStack_b4 = param_2[0xb];
      local_a8 = param_2[0xe];
      local_a4 = param_2[0xf];
      local_74 = local_15c;
      local_bc = param_2[9];
      local_c4 = param_2[7];
      local_b0 = param_2[0xc];
      local_c0 = param_2[8];
      local_80 = piVar14;
      local_7c = uVar11;
      local_78 = piVar15;
      FUN_0188c5e4(auStack_70,param_2 + 0x1c);
      piVar14 = (int *)param_2[0x39];
      if (piVar14 != (int *)0x0) {
        do {
          iVar9 = *piVar14;
          bVar8 = (bool)hasExclusiveAccess(piVar14);
        } while (!bVar8);
        *piVar14 = iVar9 + 1;
        if (iVar9 < 0) goto LAB_0188cb60;
      }
      *(undefined1 *)(param_1 + 0xea) = uVar2;
      *(undefined2 *)(param_1 + 0xe8) = uVar7;
      FUN_01bed4e2(param_1 + 0x70,auStack_70,0x48);
      *(undefined1 *)(param_1 + 0xd8) = uVar3;
      *(undefined4 *)(param_1 + 0xbc) = uVar21;
      *(undefined4 *)(param_1 + 0xc0) = uVar17;
      *(undefined4 *)(param_1 + 0xc4) = uVar18;
      *(undefined4 *)(param_1 + 200) = uVar19;
      *(undefined4 *)(param_1 + 0xcc) = uVar20;
      *(undefined4 *)(param_1 + 0xd0) = uVar12;
      *(undefined4 *)(param_1 + 0xd4) = uVar10;
      *(undefined1 *)(param_1 + 0xe2) = uVar4;
      *(undefined4 *)(param_1 + 0xd9) = local_e8;
      *(undefined1 *)(param_1 + 0xe1) = uVar6;
      *(undefined4 *)(param_1 + 0xdc) = uVar13;
      *(undefined1 *)(param_1 + 0xe0) = uVar5;
      *(int **)(param_1 + 0xb8) = piVar16;
      FUN_01bed4e2(param_1,&local_e0,0x70);
      *(int **)(param_1 + 0xe4) = piVar14;
      return;
    }
  }
LAB_0188cb60:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x188cb60);
  (*pcVar1)();
}

