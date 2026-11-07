// FUN_01496dbc @ 01496dbc size=148 calls_out=2 calls_in=1
// strings: 

int * FUN_01496dbc(undefined4 *param_1)

{
  int *piVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  
  piVar1 = (int *)thunk_FUN_016d4a50(0xc);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined1 *)(piVar1 + 2) = 9;
  *piVar1 = 0;
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x18);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x18);
  }
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = param_1[4];
  uVar7 = param_1[5];
  *puVar2 = *param_1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar2[4] = uVar6;
  puVar2[5] = uVar7;
  *piVar1 = (int)puVar2;
  piVar1[1] = (int)&DAT_018a51e8;
  return piVar1;
}

