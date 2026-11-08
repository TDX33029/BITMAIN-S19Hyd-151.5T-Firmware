// FUN_0156aca8 @ 0156aca8 size=688 calls_out=8 calls_in=25
// strings: 

void FUN_0156aca8(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  undefined1 uVar2;
  bool bVar3;
  int *piVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int local_1f0;
  int *local_1ec;
  undefined4 local_1e8;
  undefined4 local_1e4;
  undefined4 local_1e0;
  undefined4 uStack_1dc;
  undefined4 uStack_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  undefined4 uStack_1c8;
  undefined4 uStack_1c4;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined1 local_168;
  int local_160;
  int *piStack_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 uStack_140;
  undefined4 local_13c;
  undefined4 uStack_138;
  undefined4 uStack_134;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  int local_d8;
  int *piStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  int *local_a0;
  undefined4 local_9c;
  int *local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  int *piStack_84;
  int *piStack_80;
  undefined1 auStack_7c [52];
  undefined4 local_48;
  int *local_44;
  int *local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar11 = FUN_01678fd4(param_3,param_4);
  if ((int)uVar11 == 0) {
    uVar10 = *(undefined4 *)(param_2 + 0x50);
    piVar6 = *(int **)(param_2 + 0x54);
    do {
      iVar9 = *piVar6;
      bVar3 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar3);
    *piVar6 = iVar9 + 1;
    if (iVar9 < 0) goto LAB_0156af54;
    piVar4 = *(int **)(param_2 + 0x58);
    if (piVar4 != (int *)0x0) {
      do {
        iVar9 = *piVar4;
        bVar3 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar3);
      *piVar4 = iVar9 + 1;
      goto LAB_0156ada4;
    }
  }
  else {
    iVar9 = *(int *)(param_2 + 0x54);
    uVar10 = *(undefined4 *)(param_2 + 0x50);
    local_48 = *(undefined4 *)(iVar9 + 0xc);
    local_44 = *(int **)(iVar9 + 0x10);
    local_40 = *(int **)(iVar9 + 0x14);
    uStack_3c = *(undefined4 *)(iVar9 + 0x18);
    uStack_38 = *(undefined4 *)(iVar9 + 0x1c);
    local_34 = *(undefined4 *)(iVar9 + 0x20);
    uStack_30 = *(undefined4 *)(iVar9 + 0x24);
    uStack_2c = *(undefined4 *)(iVar9 + 0x28);
    uStack_28 = *(undefined4 *)(iVar9 + 0x2c);
    FUN_0166bf5c(&local_1f0,uVar10,&local_48,(int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    if (local_1f0 != -0x7ffffff6) {
      local_c8 = local_1e0;
      uStack_c4 = uStack_1dc;
      uStack_c0 = uStack_1d8;
      uStack_bc = uStack_1d4;
      uStack_b8 = uStack_1d0;
      local_b4 = local_1cc;
      uStack_b0 = uStack_1c8;
      uStack_ac = uStack_1c4;
      uStack_a8 = local_1c0;
      uStack_a4 = uStack_1bc;
      local_d8 = local_1f0;
      piStack_d4 = local_1ec;
      uStack_d0 = local_1e8;
      uStack_cc = local_1e4;
      local_160 = local_1f0;
      piStack_15c = local_1ec;
      uStack_158 = local_1e8;
      uStack_154 = local_1e4;
      local_150 = local_1e0;
      uStack_14c = uStack_1dc;
      uStack_148 = uStack_1d8;
      uStack_144 = uStack_1d4;
      uStack_140 = uStack_1d0;
      local_13c = local_1cc;
      uStack_138 = uStack_1c8;
      uStack_134 = uStack_1c4;
      uStack_130 = local_1c0;
      uStack_12c = uStack_1bc;
      uVar10 = FUN_0156aac8();
      *param_1 = 0;
      param_1[1] = uVar10;
      return;
    }
    piVar4 = *(int **)(param_2 + 0x58);
    piVar6 = local_1ec;
    if (piVar4 != (int *)0x0) {
      do {
        iVar9 = *piVar4;
        bVar3 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar3);
      *piVar4 = iVar9 + 1;
LAB_0156ada4:
      if (iVar9 < 0) goto LAB_0156af54;
    }
  }
  uVar5 = *(undefined4 *)(param_2 + 0x48);
  uVar7 = *(undefined4 *)(param_2 + 0x4c);
  uVar2 = *(undefined1 *)(param_2 + 0x30);
  local_48 = uVar10;
  local_44 = piVar6;
  local_40 = piVar4;
  FUN_01540b74(&local_1f0,param_2);
  local_98 = *(int **)(param_2 + 0x40);
  local_1c0 = CONCAT31(local_1c0._1_3_,uVar2);
  do {
    iVar9 = *local_98;
    bVar3 = (bool)hasExclusiveAccess(local_98);
  } while (!bVar3);
  *local_98 = iVar9 + 1;
  if (-1 < iVar9) {
    piVar6 = *(int **)(param_2 + 0x38);
    uVar10 = *(undefined4 *)(param_2 + 0x44);
    do {
      iVar9 = *piVar6;
      bVar3 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar3);
    *piVar6 = iVar9 + 1;
    if (-1 < iVar9) {
      uVar8 = *(undefined4 *)(param_2 + 0x3c);
      FUN_015263b8(auStack_7c,param_2 + 0x5c);
      local_88 = local_48;
      piStack_84 = local_44;
      piStack_80 = local_40;
      local_d8 = local_1f0;
      piStack_d4 = local_1ec;
      uStack_d0 = local_1e8;
      uStack_cc = local_1e4;
      local_c8 = local_1e0;
      uStack_c4 = uStack_1dc;
      uStack_c0 = uStack_1d8;
      uStack_bc = uStack_1d4;
      uStack_b8 = uStack_1d0;
      local_b4 = local_1cc;
      uStack_b0 = uStack_1c8;
      uStack_ac = uStack_1c4;
      uStack_a8 = local_1c0;
      uStack_a4 = uStack_1bc;
      local_a0 = piVar6;
      local_9c = uVar8;
      local_94 = uVar10;
      local_90 = uVar5;
      local_8c = uVar7;
      FUN_01bed4e2(&local_160,&local_d8,0x88);
      FUN_01bed4e2(&local_1f0,&local_160,0x88);
      local_168 = (undefined1)param_4;
      FUN_0156b060(param_1,&local_1f0,param_3,0);
      FUN_014ff9e0(&local_1f0);
      return;
    }
  }
LAB_0156af54:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x156af54);
  (*pcVar1)();
}

