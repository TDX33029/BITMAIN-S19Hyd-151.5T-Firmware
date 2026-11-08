// FUN_012bfcc8 @ 012bfcc8 size=1056 calls_out=9 calls_in=2
// strings: 

void FUN_012bfcc8(int param_1,undefined4 *param_2,int param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  int local_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  uint local_90 [5];
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 local_70 [6];
  undefined4 local_58;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  if (param_3 != 0) {
    piVar7 = (int *)((uint)local_90 | 4);
    puVar8 = param_2;
    do {
      uVar12 = *puVar8;
      uVar9 = puVar8[1];
      piVar3 = (int *)FUN_012b1930(param_1 + 0x20,uVar12,uVar9);
      if (piVar3 != (int *)0x0) {
        piVar4 = (int *)FUN_012b1930(param_4,uVar12,uVar9);
        piVar11 = piVar3;
        if ((piVar4 != (int *)0x0) && (*(byte *)((int)piVar4 + 0x39) != 3)) {
          if (*(byte *)((int)piVar3 + 0x39) < *(byte *)((int)piVar4 + 0x39)) {
            piVar11 = piVar4;
          }
          if (*(byte *)((int)piVar3 + 0x39) == 3) {
            piVar11 = piVar4;
          }
        }
        uVar1 = *(undefined1 *)((int)piVar11 + 0x39);
        FUN_01299464(&local_50,piVar11[6],piVar11[7]);
        iVar5 = *piVar11;
        if (iVar5 == 1) {
          local_d0 = piVar11[1];
          iStack_cc = piVar11[2];
          iStack_c8 = piVar11[3];
          iStack_c4 = piVar11[4];
        }
        FUN_0129a4b4(&local_40,piVar11[9],piVar11[10]);
        FUN_0129a658(&local_30,piVar11[0xc],piVar11[0xd]);
        iVar10 = piVar11[0xe];
        local_7c = local_50;
        uStack_78 = uStack_4c;
        uStack_74 = uStack_48;
        *piVar7 = local_d0;
        piVar7[1] = iStack_cc;
        piVar7[2] = iStack_c8;
        piVar7[3] = iStack_c4;
        local_70[0] = local_40;
        local_70[1] = uStack_3c;
        local_70[2] = uStack_38;
        local_70[3] = local_30;
        local_70[4] = uStack_2c;
        local_70[5] = uStack_28;
        local_58 = CONCAT31(CONCAT21(local_58._2_2_,uVar1),(char)iVar10);
        local_90[0] = (uint)(iVar5 == 1);
        FUN_012b1a4c(&local_d0,param_4,uVar12,uVar9,local_90);
        if (local_d0 != 2) {
          FUN_0129ba30(&local_d0);
        }
      }
      puVar8 = puVar8 + 2;
    } while (puVar8 != param_2 + param_3 * 2);
  }
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 != 0) {
    puVar8 = (undefined4 *)(iVar5 + 0xc);
    local_70[0] = *puVar8;
    local_70[1] = *(undefined4 *)(iVar5 + 0x10);
    local_70[2] = *(undefined4 *)(iVar5 + 0x14);
    local_70[3] = *(undefined4 *)(iVar5 + 0x18);
    local_70[4] = *(undefined4 *)(iVar5 + 0x1c);
    local_70[5] = *(undefined4 *)(iVar5 + 0x20);
    local_58 = *(undefined4 *)(iVar5 + 0x24);
    *(undefined4 *)(iVar5 + 0xc) = 0;
    *(undefined4 *)(iVar5 + 0x10) = 4;
    *(undefined4 *)(iVar5 + 0x14) = 0;
    *(undefined4 *)(iVar5 + 0x18) = 0;
    *(undefined4 *)(iVar5 + 0x1c) = 4;
    *(undefined4 *)(iVar5 + 0x20) = 0;
    *(undefined4 *)(iVar5 + 0x24) = 0;
    local_90[0] = 2;
    FUN_012bfcc8(local_90,param_2,param_3,param_4);
    iVar5 = 0;
    do {
      uVar9 = puVar8[iVar5];
      puVar8[iVar5] = local_70[iVar5];
      iVar10 = iVar5 + 1;
      local_70[iVar5] = uVar9;
      iVar5 = iVar10;
    } while (iVar10 != 7);
    FUN_012c014c(local_90);
  }
  piVar3 = *(int **)(param_4 + 0x10);
  piVar7 = (int *)((uint)local_90 | 4);
  puVar8 = *(undefined4 **)(param_4 + 4);
  piVar11 = piVar3 + 1;
  iVar5 = *(int *)(param_4 + 0x14) * 0x3c;
  iVar10 = *(int *)(param_4 + 8) << 3;
  while( true ) {
    if (iVar10 == 0) {
      return;
    }
    if (iVar5 == 0) break;
    uVar9 = puVar8[1];
    uVar1 = *(undefined1 *)((int)piVar3 + 0x39);
    uVar12 = *puVar8;
    FUN_01299464(&local_50,piVar3[6],piVar3[7]);
    iVar6 = *piVar3;
    if (iVar6 == 1) {
      local_d0 = *piVar11;
      iStack_cc = piVar11[1];
      iStack_c8 = piVar11[2];
      iStack_c4 = piVar11[3];
    }
    FUN_0129a4b4(&local_40,piVar3[9],piVar3[10]);
    FUN_0129a658(&local_30,piVar3[0xc],piVar3[0xd]);
    iVar2 = piVar3[0xe];
    local_7c = local_50;
    uStack_78 = uStack_4c;
    uStack_74 = uStack_48;
    *piVar7 = local_d0;
    piVar7[1] = iStack_cc;
    piVar7[2] = iStack_c8;
    piVar7[3] = iStack_c4;
    local_70[0] = local_40;
    local_70[1] = uStack_3c;
    local_70[2] = uStack_38;
    local_70[3] = local_30;
    local_70[4] = uStack_2c;
    local_70[5] = uStack_28;
    local_58 = CONCAT31(CONCAT21(local_58._2_2_,uVar1),(char)iVar2);
    local_90[0] = (uint)(iVar6 == 1);
    FUN_012b1a4c(&local_d0,param_1 + 0x20,uVar12,uVar9,local_90);
    if (local_d0 != 2) {
      FUN_0129ba30(&local_d0);
    }
    puVar8 = puVar8 + 2;
    iVar10 = iVar10 + -8;
    iVar5 = iVar5 + -0x3c;
    piVar3 = piVar3 + 0xf;
    piVar11 = piVar11 + 0xf;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb0cc(&DAT_01ce24c4);
}

