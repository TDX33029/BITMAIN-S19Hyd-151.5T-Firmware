// FUN_01128f08 @ 01128f08 size=496 calls_out=4 calls_in=2
// strings: BUG: unexpected submit share item

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01128f08(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  undefined1 local_110 [4];
  undefined4 uStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  int aiStack_e8 [6];
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int local_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int iStack_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int iStack_90;
  int local_8c;
  undefined4 local_80 [16];
  int local_40 [7];
  
  iVar1 = *(int *)(param_2 + 0x8c);
  if (iVar1 != 0) {
    piVar3 = (int *)((uint)&local_d0 | 4);
    piVar11 = (int *)((uint)local_80 | 4);
    do {
      uVar5 = *(uint *)(param_2 + 0x80);
      uVar7 = *(uint *)(param_2 + 0x88);
      uVar6 = uVar7 - uVar5;
      if (uVar7 < uVar5) {
        uVar6 = uVar7;
      }
      if (1 < *(int *)(*(int *)(param_2 + 0x84) + uVar6 * 0x20) - 1U) break;
      piVar4 = (int *)(*(int *)(param_2 + 0x84) + uVar7 * 0x20);
      iVar2 = *piVar4;
      uVar7 = uVar7 + 1;
      uVar6 = uVar7 - uVar5;
      if (uVar7 < uVar5) {
        uVar6 = uVar7;
      }
      *(uint *)(param_2 + 0x88) = uVar6;
      *(int *)(param_2 + 0x8c) = iVar1 + -1;
      if (iVar2 == 1) {
        local_98 = piVar4[1];
        iStack_94 = piVar4[2];
        iStack_90 = piVar4[3];
        local_8c = piVar4[4];
        *piVar11 = local_98;
        piVar11[1] = iStack_94;
        piVar11[2] = iStack_90;
        piVar11[3] = local_8c;
        local_80[0] = 0xf;
        FUN_0161cae8(&local_b0,local_80);
        FUN_01134840(&local_d0,param_2 + 0x1b0,&local_b0);
        if (local_d0 != -0x80000000) {
          piVar3 = aiStack_e8;
          local_b0 = local_d0;
          iVar1 = iStack_cc;
          iVar2 = iStack_c8;
          iVar8 = local_c4;
          iVar9 = iStack_c0;
          iVar10 = iStack_bc;
          goto LAB_011290a4;
        }
      }
      else {
        if (iVar2 != 2) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478("BUG: unexpected submit share item",0x43,&DAT_018881e4);
        }
        iVar1 = piVar4[3];
        iVar2 = piVar4[4];
        iVar8 = piVar4[5];
        iVar9 = piVar4[6];
        iVar10 = piVar4[7];
        *piVar3 = piVar4[2];
        piVar3[1] = iVar1;
        piVar3[2] = iVar2;
        piVar3[3] = iVar8;
        piVar3[4] = iVar9;
        piVar3[5] = iVar10;
        local_80[0] = 0xe;
        *piVar11 = local_d0;
        piVar11[1] = iStack_cc;
        piVar11[2] = iStack_c8;
        piVar11[3] = local_c4;
        piVar11[4] = iStack_c0;
        piVar11[5] = iStack_bc;
        piVar11[6] = iStack_b8;
        FUN_0161cae8(&local_98,local_80);
        FUN_01134840(&local_b0,param_2 + 0x1b0,&local_98);
        if (local_b0 != -0x80000000) {
          piVar3 = local_40;
          iVar1 = iStack_ac;
          iVar2 = iStack_a8;
          iVar8 = iStack_a4;
          iVar9 = iStack_a0;
          iVar10 = iStack_9c;
LAB_011290a4:
          *piVar3 = local_b0;
          piVar3[1] = iVar1;
          piVar3[2] = iVar2;
          piVar3[3] = iVar8;
          piVar3[4] = iVar9;
          piVar3[5] = iVar10;
          FUN_011330d8((uint)local_110 | 4);
          *param_1 = 0xb;
          param_1[1] = uStack_10c;
          param_1[2] = uStack_108;
          param_1[3] = uStack_104;
          param_1[4] = uStack_100;
          param_1[5] = local_fc;
          param_1[6] = uStack_f8;
          param_1[7] = uStack_f4;
          param_1[8] = uStack_f0;
          param_1[9] = uStack_ec;
          return;
        }
      }
      iVar1 = *(int *)(param_2 + 0x8c);
    } while (iVar1 != 0);
  }
  *param_1 = 0x11;
  return;
}

