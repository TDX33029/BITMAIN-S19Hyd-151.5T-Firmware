// FUN_00f9afe4 @ 00f9afe4 size=96 calls_out=4 calls_in=1
// strings: 

void FUN_00f9afe4(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x28);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x28);
  }
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  uVar4 = param_2[3];
  uVar6 = param_2[4];
  *puVar1 = *param_2;
  puVar1[1] = uVar2;
  puVar1[2] = uVar3;
  puVar1[3] = uVar4;
  puVar1[4] = uVar6;
  uVar2 = param_2[6];
  uVar3 = param_2[7];
  uVar4 = param_2[8];
  uVar6 = param_2[9];
  puVar1[5] = param_2[5];
  puVar1[6] = uVar2;
  puVar1[7] = uVar3;
  puVar1[8] = uVar4;
  puVar1[9] = uVar6;
  iVar5 = *(int *)(param_1 + 0x38);
  if (iVar5 != 0) {
    FUN_00f9b078(iVar5);
    thunk_FUN_016d3fb4(iVar5);
  }
  *(undefined4 **)(param_1 + 0x38) = puVar1;
  return;
}

