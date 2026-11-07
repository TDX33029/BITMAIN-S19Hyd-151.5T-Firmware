// FUN_01843cec @ 01843cec size=146 calls_out=0 calls_in=0
// strings: 

undefined4 FUN_01843cec(uint *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  uVar9 = (uint)(ushort)param_1[3];
  if (uVar9 != 0) {
    uVar8 = *(uint *)(param_3 + 8);
    uVar7 = *param_1;
    if (uVar7 <= uVar8) {
      piVar1 = (int *)param_1[2];
      uVar11 = uVar9 - 1 & 0xffff;
      piVar4 = piVar1;
      do {
        if (*piVar4 == 1) {
          uVar10 = piVar4[5];
          uVar2 = piVar4[2] + uVar7;
          if (uVar2 <= uVar8 && uVar8 < uVar2 + uVar10) {
            puVar6 = *(uint **)(param_3 + 4);
            *puVar6 = uVar2;
            puVar6[1] = uVar10;
            piVar4 = piVar1 + uVar9 * 8;
            do {
              piVar5 = piVar4 + -8;
              if (piVar4[-8] == 0x70000001) {
                iVar3 = piVar4[-6];
                puVar6[3] = piVar4[-3];
                puVar6[2] = iVar3 + uVar7;
                return 1;
              }
              piVar4 = piVar5;
            } while (piVar1 + uVar9 * 8 + uVar11 * -8 + -8 != piVar5);
            return 0;
          }
        }
        piVar4 = piVar4 + 8;
      } while (piVar4 != piVar1 + uVar11 * 8 + 8);
    }
  }
  return 0;
}

