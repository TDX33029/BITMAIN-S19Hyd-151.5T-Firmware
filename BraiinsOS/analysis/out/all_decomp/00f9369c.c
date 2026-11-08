// FUN_00f9369c @ 00f9369c size=212 calls_out=2 calls_in=0
// strings: 

void FUN_00f9369c(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar7 = param_1[3];
  iVar8 = param_1[2];
  if (*param_1 == 0) {
    uVar4 = 0;
    iVar2 = param_1[4];
    iVar5 = param_1[6];
    iVar6 = param_1[7];
  }
  else if (*param_1 == 1) {
    uVar4 = 1;
    iVar2 = param_1[4];
    iVar5 = param_1[6];
    iVar6 = param_1[7];
  }
  else {
    uVar4 = 2;
    iVar2 = param_1[4];
    iVar5 = param_1[6];
    iVar6 = param_1[7];
  }
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else if (iVar2 == 2) {
    uVar3 = 2;
  }
  else {
    uVar3 = 1;
  }
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0x20);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x20);
  }
  *puVar1 = uVar4;
  puVar1[1] = 0;
  puVar1[2] = iVar8;
  puVar1[3] = iVar7;
  puVar1[4] = uVar3;
  puVar1[5] = 0;
  puVar1[6] = iVar5;
  puVar1[7] = iVar6;
  return;
}

