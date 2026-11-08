// FUN_00d92300 @ 00d92300 size=96 calls_out=2 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d92300(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  
  uVar2 = *param_1;
  uVar4 = param_1[1];
  uVar6 = param_1[2];
  uVar8 = param_1[3];
  uVar3 = param_1[4];
  uVar5 = param_1[5];
  uVar7 = param_1[6];
  uVar9 = param_1[7];
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x28);
  }
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar1[2] = uVar2;
  puVar1[3] = uVar4;
  puVar1[4] = uVar6;
  puVar1[5] = uVar8;
  puVar1[6] = uVar3;
  puVar1[7] = uVar5;
  puVar1[8] = uVar7;
  puVar1[9] = uVar9;
  return;
}

