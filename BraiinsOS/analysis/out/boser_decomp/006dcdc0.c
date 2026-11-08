// FUN_006dcdc0 @ 006dcdc0 size=732 calls_out=11 calls_in=1
// strings: 

void FUN_006dcdc0(int param_1,int param_2,undefined4 *param_3)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 **unaff_r9;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined2 *local_54;
  undefined4 **local_50;
  undefined1 *local_4c;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined2 *local_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar8 = param_3[3];
  uVar9 = param_3[4];
  FUN_006d13fc(param_2,uVar8,uVar9);
  iVar5 = *(int *)(param_1 + 600);
  if (iVar5 == *(int *)(param_1 + 0x250)) {
    FUN_00a20d54();
  }
  iVar1 = *(int *)(param_2 + 0x10);
  uVar4 = *(uint *)(param_2 + 0x14);
  *(undefined1 *)(*(int *)(param_1 + 0x254) + iVar5) = 6;
  iVar5 = iVar5 + 1;
  *(int *)(param_1 + 600) = iVar5;
  if ((1 < uVar4) && (piVar2 = (int *)(iVar1 + uVar4 * 4 + -8), piVar2 != (int *)0x0)) {
    unaff_r9 = (undefined4 **)*piVar2;
    if (unaff_r9 != (undefined4 **)0x0) {
      iVar5 = param_3[0xe];
    }
    if (unaff_r9 != (undefined4 **)0x0 && iVar5 != 0) {
      local_5c = param_3 + 0xc;
      iVar5 = FUN_006c176c(*(undefined4 *)(*(int *)(param_2 + 0x24) + 0x40),
                           *(undefined4 *)(*(int *)(param_2 + 0x24) + 0x44),iVar5 + 8,param_3[0xf]);
      if ((iVar5 != 0) && (iVar5 = FUN_006a4e28(unaff_r9,iVar5), iVar5 == 0)) {
        puVar10 = (undefined4 *)thunk_FUN_01be5118(8);
        if (puVar10 == (undefined4 *)0x0) goto LAB_006dd090;
        uVar7 = param_3[1];
        *puVar10 = *param_3;
        puVar10[1] = uVar7;
        local_3c = 1;
        local_44 = 1;
        puVar3 = unaff_r9[4];
        if (-1 < (int)puVar3) {
          puVar3 = (undefined4 *)0x2;
        }
        local_28 = *(undefined4 *)((int)unaff_r9 + *(int *)((int)puVar3 * 4 + 0x534eac));
        local_2c = *(undefined4 *)((int)unaff_r9 + *(int *)((int)puVar3 * 4 + 0x534e94));
        local_50 = &local_5c;
        local_58 = &local_2c;
        local_4c = &LAB_006dffb8;
        local_54 = &DAT_0132b6a0;
        unaff_r9 = &local_58;
        local_40 = puVar10;
        FUN_00664898(&local_38,&DAT_00575d5a,unaff_r9);
        local_58 = local_38;
        local_54 = local_34;
        local_50 = (undefined4 **)uStack_30;
        FUN_006d6c3c(param_2,&local_44,unaff_r9);
      }
    }
  }
  uVar7 = *param_3;
  if (param_3[0xe] == 0) {
    uVar6 = param_3[1];
  }
  else {
    uVar6 = param_3[1];
    FUN_006bc87c(param_2,param_3[0xe] + 8,param_3[0xf],uVar7,uVar6);
  }
  if (*(int *)(param_2 + 0x14) != 0) {
    piVar2 = (int *)(*(int *)(param_2 + 0x10) + *(int *)(param_2 + 0x14) * 4 + -4);
    if (piVar2 != (int *)0x0) {
      unaff_r9 = (undefined4 **)*piVar2;
    }
    if (((piVar2 != (int *)0x0 && unaff_r9 != (undefined4 **)0x0) &&
        (puVar10 = unaff_r9[4], (undefined4 *)0x7fffffff < puVar10)) &&
       (2 < (int)puVar10 + 0x7fffffffU)) {
      puVar3 = (undefined4 *)thunk_FUN_01be5118(8);
      if (puVar3 == (undefined4 *)0x0) {
LAB_006dd090:
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,8);
      }
      *puVar3 = uVar7;
      puVar3[1] = uVar6;
      local_3c = 1;
      local_44 = 1;
      local_40 = puVar3;
      local_28 = *(undefined4 *)((int)unaff_r9 + *(int *)((int)puVar10 * 4 + 0x534edc));
      local_2c = *(undefined4 *)((int)unaff_r9 + *(int *)((int)puVar10 * 4 + 0x534ec4));
      local_38 = &local_2c;
      local_34 = &DAT_0132b6a0;
      FUN_00664898(&local_58,&DAT_005955fc,&local_38);
      local_38 = local_58;
      local_34 = local_54;
      uStack_30 = local_50;
      FUN_006d6c3c(param_2,&local_44,&local_38);
    }
  }
  FUN_006da578(param_1,param_2,uVar8,uVar9);
  FUN_006dab48(param_1,param_2,param_3 + 5);
  if (*(int *)(param_1 + 600) != 0) {
    *(int *)(param_1 + 600) = *(int *)(param_1 + 600) + -1;
  }
  return;
}

