// FUN_00f87984 @ 00f87984 size=1668 calls_out=8 calls_in=2
// strings: 

void FUN_00f87984(int param_1,int param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 uint param_6,int param_7)

{
  byte bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  uint uVar9;
  uint *puVar10;
  int iVar11;
  undefined4 uVar12;
  byte bVar13;
  int local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint local_6c;
  int local_68;
  uint local_64;
  int local_60;
  undefined4 local_5c;
  undefined4 local_58;
  int local_34;
  int local_30;
  uint local_2c;
  
  if (param_7 != 0) {
    piVar8 = *(int **)(param_1 + 4);
    iVar5 = piVar8[2];
    if (*piVar8 == iVar5) {
      FUN_00f991dc(piVar8,iVar5,1,1,1);
      iVar5 = piVar8[2];
    }
    *(undefined1 *)(piVar8[1] + iVar5) = 10;
    iVar5 = iVar5 + 1;
    piVar8[2] = iVar5;
    if ((uint)(*piVar8 - iVar5) < 2) {
      FUN_00f991dc(piVar8,iVar5,2,1,1);
      iVar5 = piVar8[2];
    }
    iVar6 = iVar5 + 2;
    *(undefined2 *)(piVar8[1] + iVar5) = 0x2020;
    piVar8[2] = iVar6;
    if ((uint)(*piVar8 - iVar6) < 8) {
      FUN_00f991dc(piVar8,iVar6,8,1,1);
      iVar6 = piVar8[2];
    }
    iVar5 = piVar8[1];
    piVar8[2] = iVar6 + 8;
    *(undefined4 *)(iVar5 + iVar6) = 0x20202020;
    ((undefined4 *)(iVar5 + iVar6))[1] = 0x20202020;
  }
  FUN_00f98b94(&local_78);
  if (param_4 == 0) {
    iVar5 = 1;
  }
  else {
    iVar5 = thunk_FUN_016d4a50(param_4);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,param_4);
    }
  }
  FUN_016dd1aa(iVar5,param_3,param_4);
  local_6c = param_4;
  local_68 = iVar5;
  local_64 = param_4;
  FUN_00f996fc(&local_6c);
  bVar1 = *(byte *)(param_1 + 0x15);
  bVar2 = param_4 == 0;
  bVar13 = param_2 != 0 & bVar1;
  if ((param_6 != 0) && (bVar13 == 0)) {
    if (param_4 != 0) {
      if (local_6c == local_64) {
        FUN_00f991dc(&local_6c,local_64,1,1,1);
      }
      *(undefined1 *)(local_68 + local_64) = 0x20;
      local_64 = local_64 + 1;
    }
    if (local_6c - local_64 < param_6) {
      FUN_00f991dc(&local_6c,local_64,param_6,1,1);
    }
    uVar9 = local_64;
    FUN_016dd1aa(local_68 + local_64,param_5,param_6);
    local_64 = uVar9 + param_6;
    bVar2 = local_64 == 0;
  }
  uVar12 = local_74;
  FUN_00f9a030(&local_6c,local_74,local_70);
  uVar9 = local_64;
  iVar5 = local_68;
  piVar8 = *(int **)(param_1 + 4);
  iVar6 = piVar8[2];
  if ((uint)(*piVar8 - iVar6) < local_64) {
    FUN_00f991dc(piVar8,iVar6,local_64,1,1);
    iVar6 = piVar8[2];
  }
  FUN_016dd1aa(piVar8[1] + iVar6,iVar5,uVar9);
  piVar8[2] = iVar6 + uVar9;
  if (((param_2 == 0) || ((*(byte *)(param_2 + 0x11c) & 0x10) != 0)) || (bVar1 == 0)) {
LAB_00f87d88:
    if ((bVar13 & param_6 != 0) == 0) goto LAB_00f88368;
  }
  else {
    uVar9 = *(uint *)(param_2 + 8) & (uint)(*(int *)(param_2 + 0x10) == 0);
    if (uVar9 == 0) {
      piVar8 = &DAT_0035e2f0;
      if (*(int *)(param_2 + 0x28) != 5) {
        piVar8 = (int *)(param_2 + 0x28);
      }
                    /* WARNING: Could not recover jumptable at 0x00f87be8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00f87bec + *(int *)(&DAT_00f87bec + *piVar8 * 4)))(1,&UNK_018805c4);
      return;
    }
    iVar11 = 0;
    local_34 = 0;
    iVar5 = 0;
    iVar6 = 4;
    do {
      iVar7 = iVar6;
      iVar3 = iVar5;
      if (iVar3 == 0) break;
      iVar5 = iVar3 + -0x24;
      iVar6 = iVar7 + 0x24;
    } while ((*(char *)(iVar7 + 0x20) != '\0') || (*(int *)(iVar7 + 0xc) == -0x80000000));
    puVar10 = (uint *)&DAT_00000010;
    for (; iVar11 != 0; iVar11 = iVar11 + -1) {
      if ((*puVar10 & 0x7fffffff) == 0) {
        uVar4 = puVar10[-3];
      }
      else {
        thunk_FUN_016d3fb4(puVar10[1]);
        uVar4 = puVar10[-3];
      }
      if (uVar4 != 0) {
        thunk_FUN_016d3fb4(puVar10[-2]);
      }
      puVar10 = puVar10 + 9;
    }
    if (local_34 != 0) {
      thunk_FUN_016d3fb4(4);
    }
    if (iVar3 == 0) goto LAB_00f87d88;
    if (uVar9 == 0) {
      piVar8 = &DAT_0035e2f0;
      if (*(int *)(param_2 + 0x28) != 5) {
        piVar8 = (int *)(param_2 + 0x28);
      }
                    /* WARNING: Could not recover jumptable at 0x00f87d64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_00f87d68 + *(int *)(&DAT_00f87d68 + *piVar8 * 4)))(1,&UNK_018805c4);
      return;
    }
    local_58 = 0;
    local_5c = 4;
    local_60 = 0;
    puVar10 = (uint *)&DAT_00000010;
    for (iVar5 = 0; iVar5 != 0; iVar5 = iVar5 + -1) {
      if ((*puVar10 & 0x7fffffff) == 0) {
        uVar9 = puVar10[-3];
      }
      else {
        thunk_FUN_016d3fb4(puVar10[1]);
        uVar9 = puVar10[-3];
      }
      if (uVar9 != 0) {
        thunk_FUN_016d3fb4(puVar10[-2]);
      }
      puVar10 = puVar10 + 9;
    }
    if (local_60 != 0) {
      thunk_FUN_016d3fb4(4);
    }
    if (param_6 == 0) goto LAB_00f88368;
  }
  local_34 = 0;
  local_30 = 1;
  local_2c = 0;
  if (!bVar2) {
    local_2c = 0;
    local_30 = 1;
    local_34 = 0;
    FUN_00f991dc(&local_34,0,2,1,1);
    *(undefined2 *)(local_30 + local_2c) = 0xa0a;
    local_2c = local_2c + 2;
  }
  if (local_34 - local_2c < param_6) {
    FUN_00f991dc(&local_34,local_2c,param_6,1,1);
  }
  uVar9 = local_2c;
  FUN_016dd1aa(local_30 + local_2c,param_5,param_6);
  local_2c = uVar9 + param_6;
  FUN_00f9a030(&local_34,local_74,local_70);
  uVar9 = local_2c;
  iVar5 = local_30;
  iVar6 = piVar8[2];
  if ((uint)(*piVar8 - iVar6) < local_2c) {
    FUN_00f991dc(piVar8,iVar6,local_2c,1,1);
    iVar6 = piVar8[2];
  }
  FUN_016dd1aa(piVar8[1] + iVar6,iVar5,uVar9);
  piVar8[2] = iVar6 + uVar9;
  uVar12 = local_74;
  if (local_34 != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
LAB_00f88368:
  if (local_6c != 0) {
    thunk_FUN_016d3fb4(local_68);
  }
  if (local_78 != 0) {
    thunk_FUN_016d3fb4(uVar12);
  }
  return;
}

