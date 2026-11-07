// FUN_010276e0 @ 010276e0 size=1040 calls_out=11 calls_in=2
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_010276e0(undefined1 *param_1,int *param_2,undefined4 *param_3)

{
  char cVar1;
  bool bVar2;
  int *****pppppiVar3;
  int *piVar4;
  int iVar5;
  undefined1 uVar6;
  int *****pppppiVar7;
  undefined1 uVar8;
  uint uVar9;
  int ******ppppppiVar10;
  uint uVar11;
  int *******unaff_r8;
  int *piVar12;
  int iVar13;
  undefined8 uVar14;
  undefined4 local_14c;
  uint local_148;
  undefined4 local_140;
  int *****local_13c;
  int *******local_138;
  int *****local_134;
  undefined4 *puStack_130;
  int *piStack_12c;
  int *******local_b8;
  int *******local_b4;
  int *****local_b0;
  undefined4 *puStack_ac;
  int *piStack_a8;
  undefined4 local_a4;
  undefined4 local_30;
  
  iVar13 = *param_2;
  ppppppiVar10 = (int ******)(iVar13 + 8);
  do {
    if (*ppppppiVar10 != (int *****)0x0) {
      ClearExclusiveLocal();
      FUN_015bf680(ppppppiVar10);
      goto LAB_01027718;
    }
    bVar2 = (bool)hasExclusiveAccess(ppppppiVar10);
  } while (!bVar2);
  *ppppppiVar10 = (int *****)0x1;
  DataMemoryBarrier(0xb);
LAB_01027718:
  uVar11 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = *(char *)(iVar13 + 0xc);
  }
  else {
    uVar11 = FUN_015bf3f8();
    uVar11 = uVar11 ^ 1;
    cVar1 = *(char *)(iVar13 + 0xc);
  }
  if (cVar1 != '\0') {
    uVar9 = (uint)local_b4 >> 8;
    local_b4 = (int *******)CONCAT31((int3)uVar9,(char)uVar11);
    local_b8 = (int *******)ppppppiVar10;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_b8,&DAT_01882f54,&DAT_01882ec4);
  }
  local_140 = (int *******)param_2[1];
  local_13c = (int *****)param_2[2];
  if (((*(int ********)(iVar13 + 0x198) <= local_140) ||
      (piVar12 = (int *)(*(int *)(iVar13 + 0x194) + (int)local_140 * 0xf8),
      *piVar12 == 3 && piVar12[1] == 0)) || ((int *****)piVar12[0x35] != local_13c)) {
    local_b8 = (int *******)&local_13c;
    local_b4 = (int *******)FUN_0101a4ac;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00599806,&local_b8,&DAT_01882560);
  }
  pppppiVar3 = (int *****)(piVar12 + 0x2d);
  FUN_0102fb64(&local_140,pppppiVar3,iVar13 + 0xa4);
  if (((uint)local_140 & 7) == 4) {
    uVar9 = 3;
    pppppiVar3 = local_134;
    param_3 = puStack_130;
    unaff_r8 = local_138;
    piVar12 = piStack_12c;
  }
  else if (local_140 == (int *******)&DAT_00000006) {
    FUN_01020140(&local_b8,piVar12 + 8);
    uVar9 = (uint)local_b8 & 0xff;
    if (uVar9 == 3) {
      if (((uint)local_b8 & 0x100) == 0) {
        uVar9 = 4;
      }
      else {
        uVar14 = (**(code **)*param_3)(param_3[1]);
        param_3 = (undefined4 *)((ulonglong)uVar14 >> 0x20);
        pppppiVar3 = (int *****)uVar14;
        if (piVar12[0x14] != 0) {
          (**(code **)(piVar12[0x14] + 0xc))(piVar12[0x15]);
        }
        *(undefined8 *)(piVar12 + 0x14) = uVar14;
        uVar9 = 5;
      }
    }
    else {
      pppppiVar3 = local_b0;
      param_3 = puStack_ac;
      unaff_r8 = local_b4;
      piVar12 = piStack_a8;
      local_14c = local_a4;
      local_148 = (uint)local_b8 >> 8 & 0xff;
    }
  }
  else {
    unaff_r8 = (int *******)&local_b8;
    FUN_016dd1aa(unaff_r8,&local_140,0x88);
    param_3 = *(undefined4 **)(iVar13 + 0xb4);
    local_30 = 0;
    FUN_01029f4c(iVar13 + 0xa4,param_3,unaff_r8);
    if (*pppppiVar3 == (int ****)0x1) {
      if ((*(undefined4 **)(iVar13 + 0xac) <= param_3) ||
         (piVar4 = (int *)(*(int *)(iVar13 + 0xa8) + (int)param_3 * 0x90),
         *piVar4 == 6 && piVar4[1] == 0)) {
                    /* WARNING: Subroutine does not return */
        FUN_015be724(&DAT_00412edc,0xb,&DAT_018a58ac);
      }
      iVar5 = piVar12[0x2e];
      piVar4[0x22] = 1;
      piVar4[0x23] = iVar5;
      piVar12[0x2e] = (int)param_3;
    }
    else {
      piVar12[0x2e] = (int)param_3;
      piVar12[0x2d] = 1;
      piVar12[0x2f] = (int)param_3;
    }
    iVar5 = piVar12[0x14];
    uVar9 = 4;
    piVar12[0x14] = 0;
    if (iVar5 != 0) {
      (**(code **)(iVar5 + 4))(piVar12[0x15]);
    }
  }
  if (((uVar11 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar5 = FUN_015bf3f8(), iVar5 == 0))
  {
    *(undefined1 *)(iVar13 + 0xc) = 1;
  }
  uVar8 = (undefined1)uVar9;
  DataMemoryBarrier(0xb);
  do {
    pppppiVar7 = *ppppppiVar10;
    bVar2 = (bool)hasExclusiveAccess(ppppppiVar10);
  } while (!bVar2);
  *ppppppiVar10 = (int *****)0x0;
  if (pppppiVar7 == (int *****)0x2) {
    FUN_016d6968(0xf0,ppppppiVar10,0x81,1);
  }
  if (uVar9 == 3) {
    *(int ********)(param_1 + 4) = unaff_r8;
    *(int ******)(param_1 + 8) = pppppiVar3;
    *(undefined4 **)(param_1 + 0xc) = param_3;
    *(int **)(param_1 + 0x10) = piVar12;
    *param_1 = 5;
    return;
  }
  if (uVar9 == 4) {
    *param_1 = 6;
    return;
  }
  if (uVar9 == 5) {
    *param_1 = 7;
    return;
  }
  uVar6 = (undefined1)local_148;
  if (uVar9 < 2) {
    local_13c = pppppiVar3;
    local_140 = unaff_r8;
  }
  else {
    if (unaff_r8 == (int *******)&DAT_80000000) {
      uVar14 = CONCAT44(local_148,1);
      local_140._2_2_ = (undefined2)((uint)local_140 >> 0x10);
      local_140 = (int *******)CONCAT31(CONCAT21(local_140._2_2_,uVar6),1);
      local_13c = pppppiVar3;
    }
    else {
      local_b8 = unaff_r8;
      local_b4 = (int *******)pppppiVar3;
      local_b0 = (int *****)param_3;
      uVar14 = FUN_01650c14(&local_140,local_148,&local_b8);
    }
    local_14c = (undefined4)uVar14;
    uVar6 = (undefined1)((ulonglong)uVar14 >> 0x20);
    uVar8 = 4;
  }
  *(int ********)(param_1 + 4) = local_140;
  *(int ******)(param_1 + 8) = local_13c;
  *(undefined4 **)(param_1 + 0xc) = param_3;
  *(int **)(param_1 + 0x10) = piVar12;
  *(undefined4 *)(param_1 + 0x14) = local_14c;
  param_1[1] = uVar6;
  *param_1 = uVar8;
  return;
}

