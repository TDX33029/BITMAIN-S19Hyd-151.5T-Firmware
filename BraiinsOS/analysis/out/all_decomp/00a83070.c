// FUN_00a83070 @ 00a83070 size=668 calls_out=8 calls_in=1
// strings: 

void FUN_00a83070(uint *param_1,int *param_2,undefined4 *param_3,int param_4)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  undefined1 *puVar11;
  bool bVar12;
  int local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  
  uVar7 = param_1[10];
  puVar8 = (uint *)(uVar7 + 0x88);
  uVar1 = *(uint *)(uVar7 + 0x88);
  if ((uVar1 < 0xfffffff0) && ((uVar1 & 8) == 0)) {
    if (*puVar8 != uVar1) {
      ClearExclusiveLocal();
      goto LAB_00a830cc;
    }
    bVar12 = (bool)hasExclusiveAccess(puVar8);
    if (!bVar12) goto LAB_00a830cc;
    *puVar8 = uVar1 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00a830cc:
    FUN_0127d66c(puVar8);
  }
  FUN_0128236c(puVar8);
  FUN_0128236c((uint)puVar8 | 1);
  DataMemoryBarrier(0xb);
  uVar1 = *(uint *)(uVar7 + 0x90);
  if ((uVar1 & 1) == 0) {
    puVar11 = &DAT_3b9aca00;
  }
  else {
    local_58 = *(int *)(uVar7 + 0x94);
    puVar11 = (undefined1 *)0x0;
  }
  FUN_01282570(puVar8);
  FUN_01282570((uint)puVar8 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar7 = *puVar8;
    bVar12 = (bool)hasExclusiveAccess(puVar8);
  } while (!bVar12);
  *puVar8 = uVar7 - 0x10;
  if ((uVar7 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar8);
  }
  iVar2 = 2;
  if (999999999 < (uint)param_2[0x20]) {
    iVar2 = param_2[0x20] + 0xc4653600;
  }
  if (iVar2 == 0) {
    if ((uVar1 & 1) == 0) goto LAB_00a831bc;
  }
  else {
    piVar3 = param_2;
    if (iVar2 != 1) {
      piVar3 = param_2 + 0x1e;
    }
    if ((uVar1 & 1) == 0) {
LAB_00a831bc:
      uVar4 = param_3[2];
      uVar6 = param_3[4];
      param_2[0x20] = (int)&DAT_3b9aca00;
      FUN_00a83330(uVar4,uVar6);
      param_3[2] = &DAT_3b9aca00;
      return;
    }
    if ((puVar11 == (undefined1 *)piVar3[2]) &&
       (local_58 == *piVar3 && puVar11 == (undefined1 *)piVar3[1])) {
      return;
    }
  }
  if (param_4 == 0) {
    FUN_00a83330(param_3[2],param_3[4]);
    param_2[0x20] = 0x3b9aca01;
    param_3[2] = &DAT_3b9aca00;
    *param_2 = local_58;
    param_2[1] = (int)puVar11;
    param_2[2] = (int)puVar11;
    return;
  }
  uVar1 = *param_1;
  uVar9 = param_1[1];
  uVar10 = param_1[2];
  FUN_0165a798(&local_38);
  uVar7 = local_38 + uVar1;
  uVar1 = local_34 + uVar9 + (uint)CARRY4(local_38,uVar1);
  if ((int)uVar9 < 0 != (int)((local_34 ^ uVar1) & ~(local_34 ^ uVar9)) < 0) {
LAB_00a8324c:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  puVar5 = (undefined1 *)(uVar10 + local_30);
  if (puVar5 < &DAT_3b9aca00) {
    uVar9 = uVar1;
  }
  else {
    bVar12 = 0xfffffffe < uVar7;
    uVar7 = uVar7 + 1;
    uVar9 = uVar1 + bVar12;
    if ((int)((uVar1 ^ uVar9) & ~uVar1) < 0) goto LAB_00a8324c;
    uVar1 = 0xc4653600;
    puVar5 = puVar5 + -1000000000;
  }
  FUN_01650e18(&local_50,uVar1,uVar7,uVar9,puVar5);
  local_3c = CONCAT31(local_3c._1_3_,2);
  FUN_00a83330(param_3[2],param_3[4]);
  *param_3 = local_50;
  param_3[1] = uStack_4c;
  param_3[2] = uStack_48;
  param_3[3] = uStack_44;
  param_3[4] = uStack_40;
  param_3[5] = local_3c;
  param_2[0x1e] = local_58;
  param_2[0x1f] = (int)puVar11;
  param_2[0x20] = (int)puVar11;
  param_2[0x1c] = (int)&DAT_3b9aca00;
  return;
}

