// FUN_00b7bbe0 @ 00b7bbe0 size=104 calls_out=2 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b7bbe0(undefined4 param_1,undefined4 *param_2)

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
  undefined4 uVar10;
  undefined4 uStack_28;
  undefined4 uStack_24;
  uint local_20;
  
  uVar2 = *param_2;
  uVar4 = param_2[1];
  uVar6 = param_2[2];
  uVar8 = param_2[3];
  uVar3 = param_2[4];
  uVar5 = param_2[5];
  uVar7 = param_2[6];
  uVar9 = param_2[7];
  uVar10 = param_2[8];
  local_20 = local_20 & 0xffffff00;
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x34);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x34);
  }
  *puVar1 = uVar2;
  puVar1[1] = uVar4;
  puVar1[2] = uVar6;
  puVar1[3] = uVar8;
  puVar1[4] = uVar3;
  puVar1[5] = uVar5;
  puVar1[6] = uVar7;
  puVar1[7] = uVar9;
  puVar1[8] = uVar10;
  puVar1[9] = param_1;
  puVar1[10] = uStack_28;
  puVar1[0xb] = uStack_24;
  puVar1[0xc] = local_20;
  return;
}

