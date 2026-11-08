// FUN_00f91a34 @ 00f91a34 size=476 calls_out=6 calls_in=2
// strings: `Extensions` tracks values by type

void FUN_00f91a34(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined1 auStack_44 [12];
  int local_38;
  undefined4 *local_34;
  int local_30;
  int iStack_2c;
  
  iVar7 = param_3[1];
  puVar9 = (undefined4 *)param_3[2];
  iVar8 = *param_3;
  FUN_00fab1e0(&local_38,iVar7,puVar9);
  iVar4 = iVar7;
  if (local_38 != 0) {
    if (iVar8 != -0x80000000) {
      piVar5 = *(int **)(param_2 + 0x78);
      iVar4 = *(int *)(param_2 + 0x7c) << 4;
      uVar3 = 0xffffffff;
      do {
        if (iVar4 == 0) {
          puVar9 = (undefined4 *)0x0;
          goto LAB_00f91b9c;
        }
        iVar6 = *piVar5;
        piVar10 = piVar5 + 1;
        iVar4 = iVar4 + -0x10;
        piVar1 = piVar5 + 2;
        piVar2 = piVar5 + 3;
        uVar3 = uVar3 + 1;
        piVar5 = piVar5 + 4;
      } while ((iVar6 != -0x7e2dea42 || *piVar1 != -0x2f8246a2) ||
               (*piVar10 != 0x4c65521b || *piVar2 != 0x76f4a2ad));
      if (*(uint *)(param_2 + 0x88) <= uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar3,*(uint *)(param_2 + 0x88),&DAT_01880824);
      }
      piVar5 = (int *)(*(int *)(param_2 + 0x84) + uVar3 * 0x18);
      iVar4 = piVar5[1];
      puVar9 = (undefined4 *)(*piVar5 + (*(int *)(iVar4 + 8) - 1U & 0xfffffff8) + 8);
      (**(code **)(iVar4 + 0xc))(&local_38,puVar9);
      if ((local_38 != -0x7e2dea42 || local_30 != -0x2f8246a2) ||
          (local_34 != (undefined4 *)0x4c65521b || iStack_2c != 0x76f4a2ad)) {
        puVar9 = (undefined4 *)0x0;
      }
      if (puVar9 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("`Extensions` tracks values by type",0x22,&DAT_0188076c);
      }
LAB_00f91b9c:
      local_30 = 0;
      local_34 = &DAT_0035dc52;
      if (puVar9 != (undefined4 *)0x0) {
        local_34 = puVar9;
      }
      local_38 = param_2;
      FUN_00fa04ec(auStack_44,&local_38,4,0);
      iVar4 = FUN_00f95ba8(param_2,auStack_44);
      if (iVar8 != 0) {
        thunk_FUN_016d3fb4(iVar7);
      }
      *param_1 = -0x80000000;
      param_1[1] = iVar4;
      return;
    }
    iVar4 = (int)puVar9;
    iVar8 = iVar7;
    puVar9 = local_34;
  }
  *param_1 = iVar8;
  param_1[1] = iVar4;
  param_1[2] = (int)puVar9;
  return;
}

