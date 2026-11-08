// FUN_010bee58 @ 010bee58 size=132 calls_out=3 calls_in=2
// strings: 

int * FUN_010bee58(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar8 = param_2[5];
  *puVar1 = *param_2;
  puVar1[1] = uVar3;
  puVar1[2] = uVar4;
  puVar1[3] = uVar5;
  puVar1[4] = uVar6;
  puVar1[5] = uVar8;
  iVar7 = *param_1;
  if (iVar7 != 0) {
    puVar9 = (undefined4 *)param_1[1];
    pcVar2 = (code *)*puVar9;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(iVar7);
    }
    if (puVar9[1] != 0) {
      thunk_FUN_016d3fb4(iVar7);
    }
  }
  *param_1 = (int)puVar1;
  param_1[1] = (int)&DAT_01884918;
  return param_1;
}

