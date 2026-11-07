// FUN_019f3440 @ 019f3440 size=540 calls_out=13 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | [internal

void FUN_019f3440(int param_1)

{
  bool bVar1;
  undefined1 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  int iVar9;
  undefined4 uVar10;
  undefined8 uVar11;
  int local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  int *local_98;
  int local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 local_7c;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50 [2];
  undefined4 uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  int *local_2c;
  
  uVar2 = FUN_019d8a74(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar2) {
  case 0:
    iVar4 = param_1 + 0x18;
    if (*(int *)(param_1 + 0x28) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
    }
    uVar11 = FUN_019ec558(*(undefined4 *)(param_1 + 0x20),*(undefined4 *)(param_1 + 0x24));
    local_68 = *(int *)(param_1 + 0x30);
    *(undefined4 *)(param_1 + 0x30) = 0x80000000;
    if (local_68 == -0x80000000) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("[internal",0x2d,&DAT_01d29564);
    }
    piVar3 = &local_68;
    puVar5 = (undefined4 *)((uint)piVar3 | 4);
    uVar6 = *(undefined4 *)(param_1 + 0x38);
    uVar7 = *(undefined4 *)(param_1 + 0x3c);
    uVar8 = *(undefined4 *)(param_1 + 0x40);
    uVar10 = *(undefined4 *)(param_1 + 0x44);
    *puVar5 = *(undefined4 *)(param_1 + 0x34);
    puVar5[1] = uVar6;
    puVar5[2] = uVar7;
    puVar5[3] = uVar8;
    puVar5[4] = uVar10;
    FUN_019ec5bc();
    local_90 = local_68;
    uStack_8c = uStack_64;
    uStack_88 = uStack_60;
    uStack_84 = uStack_5c;
    local_80 = uStack_58;
    local_7c = uStack_54;
    uVar2 = FUN_019db8a0(&local_90,&local_80);
    local_b0 = local_90;
    local_ac = uStack_8c;
    local_a8 = uStack_88;
    local_a4 = uStack_84;
    local_98 = (int *)CONCAT31(local_98._1_3_,uVar2);
    local_9c = CONCAT31(local_9c._1_3_,(undefined1)local_7c);
    local_a0 = local_80;
    FUN_019ec558((int)uVar11,(int)((ulonglong)uVar11 >> 0x20));
    iVar9 = local_b0;
    if (local_b0 == -0x80000000) {
LAB_019f3530:
      uVar2 = FUN_019d8938(param_1);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(uVar2) {
      case 0:
switchD_019f3470_caseD_2:
        return;
      case 1:
        uVar6 = FUN_019e1c04(param_1);
        FUN_019fa5c0(&local_b0);
        local_50[0] = 2;
        FUN_019fa7d0(iVar4,local_50);
        uVar11 = FUN_019aa2cc(uVar6);
        uStack_40 = *(undefined4 *)(param_1 + 0x20);
        local_3c = *(undefined4 *)(param_1 + 0x24);
        uStack_48 = 1;
        iVar9 = -0x7fffffff;
        local_30 = uStack_58;
        break;
      case 2:
LAB_019d772c:
        piVar3 = *(int **)(param_1 + 0x18);
        if (piVar3 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar4 = *piVar3;
            bVar1 = (bool)hasExclusiveAccess(piVar3);
          } while (!bVar1);
          *piVar3 = iVar4 + -1;
          if (iVar4 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018531c0(*(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x1c));
          }
        }
        FUN_019d77cc(param_1 + 0x28);
        FUN_014b1410(param_1 + 0x50);
        thunk_FUN_01be4678(param_1);
        return;
      case 3:
        goto LAB_019f3574;
      }
    }
    else {
      local_90 = 2;
      FUN_019fa7d0(iVar4,&local_90);
      uVar11 = CONCAT44(local_a0,local_a4);
      if (iVar9 == -0x80000000) goto LAB_019f3530;
      uStack_48 = 0;
      local_3c = local_a8;
      local_30 = local_9c;
      uStack_40 = local_ac;
      piVar3 = local_98;
    }
    local_50[0] = 1;
    iStack_44 = iVar9;
    local_2c = piVar3;
    local_38 = uVar11;
    FUN_019fa7d0(iVar4,local_50);
    break;
  case 1:
LAB_019f3574:
    FUN_019d7264(param_1 + 0x18);
    break;
  case 2:
    goto switchD_019f3470_caseD_2;
  case 3:
    goto LAB_019d772c;
  }
  FUN_019d7ce0(param_1);
  return;
}

