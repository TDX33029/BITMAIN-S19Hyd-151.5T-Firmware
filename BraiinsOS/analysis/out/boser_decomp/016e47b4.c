// FUN_016e47b4 @ 016e47b4 size=312 calls_out=4 calls_in=1
// strings: 

void FUN_016e47b4(int param_1)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined4 *puVar10;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar9 = *(uint *)(param_1 + 8);
  uVar7 = 0;
  local_28 = 1;
  local_2c = 0;
  local_30 = 4;
  local_34 = 0;
  local_38 = 0;
  local_3c = 4;
  local_40 = 0;
  if (uVar9 != 0) {
    puVar10 = *(undefined4 **)(param_1 + 4);
    puVar5 = puVar10;
    do {
      uVar1 = FUN_016e4508(&local_40,puVar5[1],puVar5[2]);
      if ((uVar1 & 1) != 0) {
        FUN_0134bd64(*puVar5,puVar5[1]);
        if (uVar7 + 1 < uVar9) {
          uVar1 = uVar7;
          do {
            uVar8 = uVar1 + 1;
            uVar2 = FUN_016e4508(&local_40,puVar10[uVar1 * 4 + 5],puVar10[uVar1 * 4 + 6]);
            if ((uVar2 & 1) == 0) {
              puVar5 = puVar10 + uVar7 * 4;
              uVar3 = puVar10[uVar1 * 4 + 5];
              uVar4 = puVar10[uVar1 * 4 + 6];
              uVar6 = puVar10[uVar1 * 4 + 7];
              uVar7 = uVar7 + 1;
              *puVar5 = puVar10[uVar1 * 4 + 4];
              puVar5[1] = uVar3;
              puVar5[2] = uVar4;
              puVar5[3] = uVar6;
            }
            else {
              FUN_0134bd64(puVar10[uVar1 * 4 + 4],puVar10[uVar1 * 4 + 5]);
            }
            uVar1 = uVar8;
          } while (uVar9 - 1 != uVar8);
        }
        *(uint *)(param_1 + 8) = uVar7;
        break;
      }
      uVar7 = uVar7 + 1;
      puVar5 = puVar5 + 4;
    } while (uVar9 != uVar7);
  }
  FUN_0134aee0(0,4,4,4);
  FUN_016e493c(&local_40);
  return;
}

