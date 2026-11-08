// FUN_00a5eed0 @ 00a5eed0 size=248 calls_out=2 calls_in=4
// strings: 

void FUN_00a5eed0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int *piVar11;
  int *piVar12;
  
  uVar10 = *(uint *)(param_1 + 8);
  if (uVar10 != 0) {
    piVar9 = *(int **)(param_1 + 4);
    piVar3 = piVar9;
    uVar6 = 0;
    uVar5 = uVar10;
    do {
      uVar5 = uVar5 - 1;
      if ((char)piVar3[9] != '\x01') {
        FUN_00a165c8(piVar3);
        uVar7 = uVar6;
        if (uVar6 + 1 < uVar10) {
          do {
            piVar11 = piVar3 + 10;
            if ((char)piVar3[0x13] == '\0') {
              if (*piVar11 != 0) {
                thunk_FUN_016d3fb4(piVar3[0xb]);
              }
              if (piVar3[0xd] != 0) {
                thunk_FUN_016d3fb4(piVar3[0xe]);
              }
              uVar6 = uVar7;
              if (piVar3[0x10] != 0) {
                thunk_FUN_016d3fb4(piVar3[0x11]);
              }
            }
            else {
              uVar6 = uVar7 + 1;
              piVar12 = piVar9 + uVar7 * 10;
              iVar1 = piVar3[0xb];
              iVar2 = piVar3[0xc];
              iVar4 = piVar3[0xd];
              iVar8 = piVar3[0xe];
              *piVar12 = *piVar11;
              piVar12[1] = iVar1;
              piVar12[2] = iVar2;
              piVar12[3] = iVar4;
              piVar12[4] = iVar8;
              iVar1 = piVar3[0x10];
              iVar2 = piVar3[0x11];
              iVar4 = piVar3[0x12];
              iVar8 = piVar3[0x13];
              piVar12[5] = piVar3[0xf];
              piVar12[6] = iVar1;
              piVar12[7] = iVar2;
              piVar12[8] = iVar4;
              piVar12[9] = iVar8;
            }
            uVar5 = uVar5 - 1;
            uVar7 = uVar6;
            piVar3 = piVar11;
          } while (uVar5 != 0);
        }
        *(uint *)(param_1 + 8) = uVar6;
        return;
      }
      piVar3 = piVar3 + 10;
      uVar6 = uVar6 + 1;
    } while (uVar5 != 0);
  }
  return;
}

