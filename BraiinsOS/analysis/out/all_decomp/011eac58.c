// FUN_011eac58 @ 011eac58 size=128 calls_out=2 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_011eac58(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x14);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  uVar5 = param_2[1];
  uVar7 = param_2[2];
  uVar8 = param_2[3];
  uVar9 = param_2[4];
  *puVar1 = *param_2;
  puVar1[1] = uVar5;
  puVar1[2] = uVar7;
  puVar1[3] = uVar8;
  puVar1[4] = uVar9;
  iVar3 = *param_1;
  iVar4 = param_1[1];
  iVar6 = param_1[2];
  iVar10 = param_1[3];
  piVar2 = (int *)thunk_FUN_016d4a50(0x18);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  *piVar2 = (int)puVar1;
  piVar2[1] = (int)&DAT_0188a2b0;
  piVar2[2] = iVar3;
  piVar2[3] = iVar4;
  piVar2[4] = iVar6;
  piVar2[5] = iVar10;
  return;
}

