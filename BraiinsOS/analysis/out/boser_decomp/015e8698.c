// FUN_015e8698 @ 015e8698 size=180 calls_out=2 calls_in=1
// strings: 

void FUN_015e8698(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 *puVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 8);
  if (uVar8 != 0) {
    puVar7 = *(undefined4 **)(param_1 + 4);
    uVar3 = 0;
    puVar4 = puVar7;
    do {
      iVar1 = FUN_015a878c(param_2,puVar4);
      uVar6 = uVar3 + 1;
      if (iVar1 == 0) {
        FUN_00f80320(*puVar4,puVar4[1]);
        if (uVar6 < uVar8) {
          uVar6 = uVar3 + 1;
          do {
            puVar5 = puVar4 + 2;
            iVar1 = FUN_015a878c(param_2,puVar5);
            if (iVar1 == 0) {
              FUN_00f80320(*puVar5,puVar4[3]);
            }
            else {
              uVar2 = puVar4[3];
              puVar4 = puVar7 + uVar3 * 2;
              *puVar4 = *puVar5;
              uVar3 = uVar3 + 1;
              puVar4[1] = uVar2;
            }
            uVar6 = uVar6 + 1;
            puVar4 = puVar5;
          } while (uVar6 < uVar8);
        }
        *(uint *)(param_1 + 8) = uVar3;
        return;
      }
      puVar4 = puVar4 + 2;
      uVar3 = uVar6;
    } while (uVar8 != uVar6);
  }
  return;
}

