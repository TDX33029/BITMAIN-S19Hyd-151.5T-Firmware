// FUN_015f0e08 @ 015f0e08 size=480 calls_out=2 calls_in=2
// strings: 

void FUN_015f0e08(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  ushort uVar2;
  ushort uVar3;
  code *pcVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  code *pcVar12;
  int local_28;
  
  uVar7 = *(uint *)(param_1 + 0x38);
  local_28 = *(int *)(param_1 + 0x34);
  uVar8 = 0;
  if (uVar7 != 0) {
    uVar8 = 0;
    if (uVar7 != 1) {
      uVar8 = 0;
      pcVar12 = *(code **)(param_3 + 0x34);
      pcVar4 = *(code **)(param_3 + 0x40);
      uVar10 = uVar7;
      do {
        uVar9 = uVar8 + (uVar10 >> 1);
        puVar5 = (undefined4 *)(local_28 + uVar9 * 8);
        uVar6 = *puVar5;
        iVar11 = puVar5[1];
        uVar2 = (**(code **)(iVar11 + 0x34))(uVar6);
        uVar3 = (*pcVar12)(param_2);
        bVar1 = uVar3 <= uVar2 && uVar2 != uVar3;
        if (uVar2 == uVar3) {
          uVar2 = (**(code **)(iVar11 + 0x40))(uVar6);
          uVar3 = (*pcVar4)(param_2);
          bVar1 = false;
          if (uVar3 < uVar2) {
            bVar1 = true;
          }
        }
        if (bVar1) {
          uVar9 = uVar8;
        }
        uVar8 = uVar9;
        uVar10 = uVar10 - (uVar10 >> 1);
      } while (1 < uVar10);
    }
    puVar5 = (undefined4 *)(local_28 + uVar8 * 8);
    uVar6 = *puVar5;
    iVar11 = puVar5[1];
    uVar2 = (**(code **)(iVar11 + 0x34))(uVar6);
    uVar3 = (**(code **)(param_3 + 0x34))(param_2);
    if (uVar2 != uVar3) {
      iVar11 = (uint)(uVar2 >= uVar3 && uVar2 != uVar3) - (uint)(uVar2 < uVar3);
    }
    else {
      uVar2 = (**(code **)(iVar11 + 0x40))(uVar6);
      uVar3 = (**(code **)(param_3 + 0x40))(param_2);
      iVar11 = (uint)(uVar2 >= uVar3 && uVar2 != uVar3) - (uint)(uVar2 < uVar3);
    }
    if ((iVar11 != 0) && (iVar11 == -1)) {
      uVar8 = uVar8 + 1;
    }
  }
  if (uVar7 == *(uint *)(param_1 + 0x30)) {
    FUN_015f5ab8();
    local_28 = *(int *)(param_1 + 0x34);
  }
  puVar5 = (undefined4 *)(local_28 + uVar8 * 8);
  if (uVar8 < uVar7) {
    FUN_01bed864(puVar5 + 2,puVar5,(uVar7 - uVar8) * 8);
  }
  *puVar5 = param_2;
  puVar5[1] = param_3;
  *(uint *)(param_1 + 0x38) = uVar7 + 1;
  return;
}

