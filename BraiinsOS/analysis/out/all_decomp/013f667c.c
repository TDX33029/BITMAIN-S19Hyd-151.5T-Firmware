// FUN_013f667c @ 013f667c size=208 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_013f667c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  
  if (param_1[2] == 0) {
    piVar8 = (int *)thunk_FUN_016d4a50(0x18);
    if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x18);
    }
    iVar2 = param_1[4];
    iVar3 = param_1[5];
    iVar6 = param_1[6];
    iVar7 = param_1[7];
    iVar5 = param_1[8];
    *piVar8 = param_1[3];
    piVar8[1] = iVar2;
    piVar8[2] = iVar3;
    piVar8[3] = iVar6;
    piVar8[4] = iVar7;
    piVar8[5] = iVar5;
    uVar4 = 0;
    puVar1 = (undefined4 *)param_1[1];
    iVar2 = *param_1;
  }
  else {
    if (param_1[2] != 1) {
      piVar8 = (int *)thunk_FUN_016d4a50(0x24);
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x24);
      }
      iVar2 = param_1[1];
      iVar3 = param_1[2];
      iVar6 = param_1[3];
      *piVar8 = *param_1;
      piVar8[1] = iVar2;
      piVar8[2] = iVar3;
      piVar8[3] = iVar6;
      iVar2 = param_1[5];
      iVar3 = param_1[6];
      iVar6 = param_1[7];
      iVar7 = param_1[8];
      piVar8[4] = param_1[4];
      piVar8[5] = iVar2;
      piVar8[6] = iVar3;
      piVar8[7] = iVar6;
      piVar8[8] = iVar7;
      return CONCAT44(piVar8,0xb);
    }
    puVar1 = (undefined4 *)param_1[1];
    uVar4 = *puVar1;
    piVar8 = (int *)puVar1[1];
    iVar2 = *param_1;
  }
  if (iVar2 == 0) {
    return CONCAT44(piVar8,uVar4);
  }
  thunk_FUN_016d3fb4(puVar1);
  return CONCAT44(piVar8,uVar4);
}

