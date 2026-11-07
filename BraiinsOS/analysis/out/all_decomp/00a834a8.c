// FUN_00a834a8 @ 00a834a8 size=848 calls_out=9 calls_in=1
// strings: 

void FUN_00a834a8(uint *param_1,int *param_2,undefined4 *param_3,int param_4,undefined4 *param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  bool bVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  int local_74;
  undefined1 *local_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  uint local_38;
  uint local_34;
  int local_30;
  
  uVar9 = param_1[0xc];
  puVar10 = (uint *)(uVar9 + 0x88);
  uVar2 = *(uint *)(uVar9 + 0x88);
  if ((uVar2 < 0xfffffff0) && ((uVar2 & 8) == 0)) {
    if (*puVar10 != uVar2) {
      ClearExclusiveLocal();
      goto LAB_00a83504;
    }
    bVar12 = (bool)hasExclusiveAccess(puVar10);
    if (!bVar12) goto LAB_00a83504;
    *puVar10 = uVar2 + 0x10;
    DataMemoryBarrier(0xb);
  }
  else {
LAB_00a83504:
    FUN_0127d66c(puVar10);
  }
  FUN_0128236c(puVar10);
  FUN_0128236c((uint)puVar10 | 1);
  DataMemoryBarrier(0xb);
  bVar12 = false;
  if (*(int *)(uVar9 + 0x90) == 2) {
    local_6c = &DAT_3b9aca00;
  }
  else if (*(int *)(uVar9 + 0x98) == 1) {
    bVar12 = true;
    local_6c = (undefined1 *)0x0;
    local_74 = *(int *)(uVar9 + 0x9c);
  }
  else {
    local_6c = &DAT_3b9aca00;
  }
  FUN_01282570(puVar10);
  FUN_01282570((uint)puVar10 | 1);
  DataMemoryBarrier(0xb);
  do {
    uVar2 = *puVar10;
    bVar1 = (bool)hasExclusiveAccess(puVar10);
  } while (!bVar1);
  *puVar10 = uVar2 - 0x10;
  if ((uVar2 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar10);
  }
  iVar3 = 2;
  if (999999999 < (uint)param_2[0x22]) {
    iVar3 = param_2[0x22] + 0xc4653600;
  }
  if (iVar3 == 0) {
    if (!bVar12) goto LAB_00a836cc;
  }
  else {
    piVar4 = param_2;
    if (iVar3 != 1) {
      piVar4 = param_2 + 0x20;
    }
    if (!bVar12) {
LAB_00a836cc:
      uVar6 = param_3[2];
      uVar7 = param_3[4];
      param_2[0x22] = (int)&DAT_3b9aca00;
      FUN_00a83330(uVar6,uVar7);
      uVar6 = param_5[2];
      uVar7 = param_5[4];
      param_3[2] = &DAT_3b9aca00;
      FUN_00a83330(uVar6,uVar7);
      param_5[2] = &DAT_3b9aca00;
      return;
    }
    if ((local_6c == (undefined1 *)piVar4[2]) &&
       (local_74 == *piVar4 && local_6c == (undefined1 *)piVar4[1])) {
      return;
    }
  }
  if (param_4 == 0) {
    FUN_00a83330(param_3[2],param_3[4]);
    uVar6 = param_5[2];
    uVar7 = param_5[4];
    param_3[2] = &DAT_3b9aca00;
    FUN_00a83330(uVar6,uVar7);
    param_2[0x22] = 0x3b9aca01;
    *param_2 = local_74;
    param_5[2] = &DAT_3b9aca00;
    param_2[1] = (int)local_6c;
    param_2[2] = (int)local_6c;
    return;
  }
  uVar2 = *param_1;
  uVar9 = param_1[2];
  uVar11 = param_1[1];
  FUN_0165a798(&local_38);
  uVar8 = local_38 + uVar2;
  uVar2 = local_34 + uVar11 + (uint)CARRY4(local_38,uVar2);
  if ((int)uVar11 < 0 != (int)((local_34 ^ uVar2) & ~(local_34 ^ uVar11)) < 0) {
LAB_00a836b4:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
  }
  puVar5 = (undefined1 *)(uVar9 + local_30);
  if (&DAT_3b9aca00 <= puVar5) {
    bVar12 = 0xfffffffe < uVar8;
    uVar8 = uVar8 + 1;
    uVar9 = uVar2 + bVar12;
    if ((int)((uVar2 ^ uVar9) & ~uVar2) < 0) goto LAB_00a836b4;
    puVar5 = puVar5 + -1000000000;
    uVar2 = uVar9;
  }
  iVar3 = local_74;
  puVar13 = local_6c;
  puVar14 = local_6c;
  FUN_01650e18(&local_68,local_6c,uVar8,uVar2,puVar5);
  local_54 = CONCAT31(local_54._1_3_,2);
  FUN_00a83330(param_3[2],param_3[4]);
  *param_3 = local_68;
  param_3[1] = uStack_64;
  param_3[2] = uStack_60;
  param_3[3] = uStack_5c;
  param_3[4] = uStack_58;
  param_3[5] = local_54;
  FUN_01651a54(&local_50,&DAT_0186d9c8,param_1[4],param_1[5],param_1[6],&DAT_0186d9c8,iVar3,puVar13,
               puVar14);
  local_3c = CONCAT31(local_3c._1_3_,2);
  FUN_00a83330(param_5[2],param_5[4]);
  *param_5 = local_50;
  param_5[1] = uStack_4c;
  param_5[2] = uStack_48;
  param_5[3] = uStack_44;
  param_5[4] = uStack_40;
  param_5[5] = local_3c;
  param_2[0x20] = local_74;
  param_2[0x21] = (int)local_6c;
  param_2[0x22] = (int)local_6c;
  param_2[0x1e] = (int)&DAT_3b9aca00;
  return;
}

