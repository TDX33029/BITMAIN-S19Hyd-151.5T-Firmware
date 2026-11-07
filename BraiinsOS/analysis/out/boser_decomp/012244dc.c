// FUN_012244dc @ 012244dc size=420 calls_out=5 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_012244dc(int *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int unaff_r6;
  int *piVar5;
  int *piVar6;
  bool bVar7;
  int local_118;
  int local_114;
  int local_110;
  int local_e0;
  int iStack_dc;
  int iStack_d8;
  int iStack_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int iStack_c0;
  int iStack_bc;
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0 [28];
  undefined1 local_30;
  
  piVar6 = *(int **)(param_2 + 4);
  iVar4 = 8;
  piVar5 = *(int **)(param_2 + 0xc);
  piVar2 = (int *)((uint)&local_e0 | 4);
  local_110 = 0;
  local_114 = 8;
  local_118 = 0;
  while( true ) {
    iVar1 = local_110;
    bVar7 = piVar6 != piVar5;
    if (bVar7) {
      unaff_r6 = *piVar6;
      *(int **)(param_2 + 4) = piVar6 + 0x1c;
      piVar6 = piVar6 + 0x1c;
    }
    if (!bVar7 || unaff_r6 == 4) break;
    FUN_01bed4e2((uint)local_a0 | 4,piVar6 + -0x1b,0x6c);
    local_30 = 0;
    local_a0[0] = unaff_r6;
    FUN_01232d24(&local_d0,local_a0);
    if (local_d0 != 2) {
      param_1[1] = local_cc;
      param_1[2] = local_c8;
      *param_1 = local_d0;
      param_1[3] = local_c4;
      param_1[4] = iStack_c0;
      param_1[5] = iStack_bc;
      param_1[6] = local_b8;
      param_1[7] = iStack_b4;
      param_1[8] = iStack_b0;
      param_1[9] = iStack_ac;
      param_1[10] = iStack_a8;
      param_1[0xb] = iStack_a4;
      FUN_01266494(&local_118);
      goto LAB_01224614;
    }
    if (local_c8 == -0x7fffffeb) break;
    local_e0 = local_c8;
    *piVar2 = local_c4;
    piVar2[1] = iStack_c0;
    piVar2[2] = iStack_bc;
    if (iVar1 == local_118) {
      FUN_0126721c(&local_118);
      iVar4 = local_114;
    }
    piVar3 = (int *)(iVar4 + iVar1 * 0x10);
    local_110 = iVar1 + 1;
    *piVar3 = local_e0;
    piVar3[1] = iStack_dc;
    piVar3[2] = iStack_d8;
    piVar3[3] = iStack_d4;
    unaff_r6 = iStack_d4;
  }
  param_1[3] = local_118;
  param_1[4] = local_114;
  param_1[5] = local_110;
  *param_1 = 2;
  param_1[2] = (int)&DAT_80000014;
LAB_01224614:
  FUN_01a53260(param_2);
  return;
}

