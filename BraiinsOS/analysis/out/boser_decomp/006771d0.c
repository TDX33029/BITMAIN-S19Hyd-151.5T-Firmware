// FUN_006771d0 @ 006771d0 size=628 calls_out=5 calls_in=0
// strings: 

void FUN_006771d0(int param_1,undefined8 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined8 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined8 uVar9;
  undefined1 auStack_3d0 [176];
  undefined4 local_320;
  undefined4 uStack_31c;
  undefined4 uStack_318;
  undefined4 uStack_314;
  undefined1 auStack_310 [176];
  undefined1 auStack_260 [192];
  undefined1 auStack_1a0 [172];
  int local_f4;
  undefined4 local_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [172];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x1a9)) {
  case 0:
    piVar4 = *(int **)(param_2 + 0x1b);
    iVar3 = *(int *)((int)param_2 + 0xdc);
    *(int **)(param_2 + 1) = piVar4;
    uVar7 = *(undefined4 *)((int)param_2 + 0x1a4);
    *(undefined1 *)(param_2 + 0x35) = 0;
    *(int *)((int)param_2 + 0xc) = iVar3;
    FUN_01bed4e2(param_2 + 2,param_2 + 0x1c,0xc0);
    *(undefined1 *)((int)param_2 + 0xd5) = 0;
    *(undefined4 *)(param_2 + 0x1a) = uVar7;
LAB_00677270:
    puVar2 = param_2 + 2;
    *(undefined1 *)((int)param_2 + 0xd4) = 1;
    FUN_01bed4e2(auStack_260,puVar2,0xc0);
    if (iVar3 != 0) {
      iVar6 = *piVar4;
      iVar8 = piVar4[1];
      iVar5 = *(int *)(iVar8 + 8);
      *(undefined1 *)((int)param_2 + 0xd4) = 0;
      FUN_01bed4e2(auStack_1a0,puVar2,0xc0);
      uVar9 = (**(code **)(iVar8 + 0x14))
                        (iVar6 + (iVar5 - 1U & 0xfffffff8) + 8,uVar7,auStack_1a0,piVar4 + 2,
                         iVar3 + -1);
      *param_2 = uVar9;
      goto LAB_00677338;
    }
    *(undefined1 *)((int)param_2 + 0xd4) = 0;
    FUN_01bed4e2(auStack_d0,puVar2,0xac);
    iVar3 = *(int *)((int)param_2 + 0xbc);
    local_e0 = *(undefined4 *)(param_2 + 0x18);
    uStack_dc = *(undefined4 *)((int)param_2 + 0xc4);
    uStack_d8 = *(undefined4 *)(param_2 + 0x19);
    uStack_d4 = *(undefined4 *)((int)param_2 + 0xcc);
LAB_00677390:
    *(undefined1 *)((int)param_2 + 0xd4) = 0;
    FUN_01bed4e2(auStack_3d0,auStack_d0,0xac);
    uStack_314 = uStack_d4;
    uStack_318 = uStack_d8;
    uStack_31c = uStack_dc;
    local_320 = local_e0;
    *(undefined1 *)((int)param_2 + 0xd5) = 1;
    if (iVar3 != -0x7fffffff) {
      FUN_01bed4e2(auStack_310,auStack_3d0,0xac);
      FUN_006775a8(param_2);
      FUN_01bed4e2(param_1,auStack_310,0xac);
      *(int *)(param_1 + 0xac) = iVar3;
      *(undefined4 *)(param_1 + 0xb0) = local_320;
      *(undefined4 *)(param_1 + 0xb4) = uStack_31c;
      *(undefined4 *)(param_1 + 0xb8) = uStack_318;
      *(undefined4 *)(param_1 + 0xbc) = uStack_314;
      uVar1 = 1;
      goto LAB_00677428;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c046d4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c046d4);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_2 + 0xd5)) {
    case 0:
      piVar4 = *(int **)(param_2 + 1);
      iVar3 = *(int *)((int)param_2 + 0xc);
      uVar7 = *(undefined4 *)(param_2 + 0x1a);
      goto LAB_00677270;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c14c88);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c14c88);
    case 3:
      uVar9 = *param_2;
    }
LAB_00677338:
    (**(code **)((int)((ulonglong)uVar9 >> 0x20) + 0xc))(auStack_1a0,(int)uVar9,param_3);
    if (local_f4 != -0x7fffffff) {
      FUN_01bed4e2(auStack_d0,auStack_1a0,0xac);
      local_e0 = local_f0;
      uStack_dc = uStack_ec;
      uStack_d8 = uStack_e8;
      uStack_d4 = uStack_e4;
      FUN_01139b38(*(undefined4 *)param_2,*(undefined4 *)((int)param_2 + 4));
      iVar3 = local_f4;
      goto LAB_00677390;
    }
    *(undefined1 *)((int)param_2 + 0xd5) = 3;
  }
  *(undefined4 *)(param_1 + 0xac) = 0x80000001;
  uVar1 = 3;
LAB_00677428:
  *(undefined1 *)((int)param_2 + 0x1a9) = uVar1;
  return;
}

