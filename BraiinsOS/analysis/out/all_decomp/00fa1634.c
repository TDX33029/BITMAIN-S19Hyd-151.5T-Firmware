// FUN_00fa1634 @ 00fa1634 size=316 calls_out=2 calls_in=3
// strings: `Extensions` tracks values by type

void FUN_00fa1634(int *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int *piVar9;
  int *piVar8;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  piVar5 = *(int **)(param_2 + 0x78);
  iVar4 = *(int *)(param_2 + 0x7c) << 4;
  uVar2 = 0xffffffff;
  do {
    if (iVar4 == 0) {
      puVar7 = (undefined4 *)0x0;
      goto LAB_00fa1744;
    }
    iVar6 = *piVar5;
    piVar8 = piVar5 + 1;
    piVar9 = piVar5 + 2;
    iVar4 = iVar4 + -0x10;
    piVar1 = piVar5 + 3;
    uVar2 = uVar2 + 1;
    piVar5 = piVar5 + 4;
  } while ((iVar6 != -0x7e2dea42 || *piVar9 != -0x2f8246a2) ||
           (*piVar8 != 0x4c65521b || *piVar1 != 0x76f4a2ad));
  if (*(uint *)(param_2 + 0x88) <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,*(uint *)(param_2 + 0x88),&DAT_01880824);
  }
  piVar5 = (int *)(*(int *)(param_2 + 0x84) + uVar2 * 0x18);
  iVar4 = piVar5[1];
  puVar7 = (undefined4 *)(*piVar5 + (*(int *)(iVar4 + 8) - 1U & 0xfffffff8) + 8);
  (**(code **)(iVar4 + 0xc))(&local_38,puVar7);
  if ((local_38 != -0x7e2dea42 || iStack_30 != -0x2f8246a2) ||
      (iStack_34 != 0x4c65521b || iStack_2c != 0x76f4a2ad)) {
    puVar7 = (undefined4 *)0x0;
  }
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
  }
LAB_00fa1744:
  *param_1 = param_2;
  puVar3 = &DAT_0035dc52;
  if (puVar7 != (undefined4 *)0x0) {
    puVar3 = puVar7;
  }
  param_1[1] = (int)puVar3;
  param_1[2] = 0;
  return;
}

