// FUN_019f50cc @ 019f50cc size=592 calls_out=13 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | [internal

void FUN_019f50cc(int param_1)

{
  bool bVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined8 uVar7;
  longlong lVar8;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  int local_b8;
  int local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  int *local_98;
  undefined4 uStack_94;
  int local_88;
  int local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 uStack_6c;
  int *piStack_68;
  undefined4 uStack_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58 [2];
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  
  puVar6 = (undefined4 *)((uint)&local_d8 | 4);
  uVar3 = FUN_019d8a74();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar3) {
  case 0:
    if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    uVar7 = FUN_019ec558(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    local_88 = *(int *)(param_1 + 0x30);
    local_84 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 0x30) = 4;
    *(undefined4 *)(param_1 + 0x34) = 0;
    if (local_88 == 4 && local_84 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("[internal",0x2d,&DAT_01d29564);
    }
    local_80 = *(undefined4 *)(param_1 + 0x38);
    uStack_7c = *(undefined4 *)(param_1 + 0x3c);
    uStack_78 = *(undefined4 *)(param_1 + 0x40);
    local_74 = *(undefined4 *)(param_1 + 0x44);
    local_70 = *(undefined4 *)(param_1 + 0x48);
    uStack_6c = *(undefined4 *)(param_1 + 0x4c);
    piStack_68 = *(int **)(param_1 + 0x50);
    uStack_64 = *(undefined4 *)(param_1 + 0x54);
    FUN_019ec5bc();
    piVar2 = piStack_68;
    local_b8 = local_88;
    local_b4 = local_84;
    local_b0 = local_80;
    local_ac = uStack_7c;
    local_a8 = uStack_78;
    local_a4 = local_74;
    uStack_a0 = local_70;
    uStack_9c = uStack_6c;
    local_98 = piStack_68;
    uStack_94 = uStack_64;
    if ((local_88 == 3 && local_84 == 0) ||
       (lVar8 = FUN_01bf033e(piStack_68[2],*(undefined4 *)(&DAT_0053939c + local_88 * 4),local_80,
                             uStack_7c,*(undefined4 *)(&DAT_0053939c + local_88 * 4)), lVar8 != -1))
    {
      FUN_019e6d04(&local_60,&local_a8,piVar2 + 2);
    }
    else {
      puVar4 = (undefined4 *)FUN_01be3244();
      local_5c = *puVar4;
      local_60 = 0;
    }
    local_c8 = local_a8;
    local_c4 = local_a4;
    uStack_c0 = uStack_a0;
    uStack_bc = uStack_9c;
    *puVar6 = local_60;
    puVar6[1] = local_5c;
    local_d8 = 3;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *local_98;
      bVar1 = (bool)hasExclusiveAccess(local_98);
    } while (!bVar1);
    *local_98 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_019db648(local_98);
    }
    FUN_019ec558((int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    local_b8 = 2;
    FUN_019fa9d0(param_1 + 0x18,&local_b8);
    uStack_38 = puVar6[5];
    local_34 = puVar6[6];
    local_40 = local_c8;
    uStack_3c = local_c4;
    local_48 = local_d0;
    local_4c = local_d4;
    local_50 = 3;
    local_58[0] = 1;
    local_44 = puVar6;
    FUN_019fa9d0(param_1 + 0x18,local_58);
    break;
  case 1:
    FUN_019d713c(param_1 + 0x18);
    break;
  case 2:
    return;
  case 3:
    FUN_019d78cc(param_1);
    return;
  }
  FUN_019d7dc4(param_1);
  return;
}

