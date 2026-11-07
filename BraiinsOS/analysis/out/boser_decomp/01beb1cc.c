// FUN_01beb1cc @ 01beb1cc size=232 calls_out=5 calls_in=30
// strings: 

uint FUN_01beb1cc(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    uVar6 = 0;
    if (DAT_01d537cc != 0) {
      uVar6 = FUN_01beb1cc(DAT_01d537cc);
    }
    if (DAT_01d51068 != 0) {
      uVar1 = FUN_01beb1cc(DAT_01d51068);
      uVar6 = uVar6 | uVar1;
    }
    puVar2 = (uint *)FUN_01beb698();
    for (puVar4 = (uint *)*puVar2; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[0xe]) {
      puVar2 = puVar4;
      if ((int)puVar4[0x13] < 0) {
        if (puVar4[5] != puVar4[7]) {
          puVar2 = (uint *)FUN_01beb1cc();
          uVar6 = uVar6 | (uint)puVar2;
        }
      }
      else {
        iVar5 = FUN_01beae30();
        if (puVar4[5] != puVar4[7]) {
          uVar1 = FUN_01beb1cc(puVar4);
          uVar6 = uVar6 | uVar1;
        }
        if (iVar5 != 0) {
          puVar2 = (uint *)FUN_01beaed6();
        }
      }
    }
    FUN_01beb6b0(puVar2);
  }
  else {
    if (*(int *)(param_1 + 0x4c) < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_01beae30();
    }
    if ((*(int *)(param_1 + 0x14) == *(int *)(param_1 + 0x1c)) ||
       ((**(code **)(param_1 + 0x24))(param_1,0), *(int *)(param_1 + 0x14) != 0)) {
      if (*(int *)(param_1 + 4) != *(int *)(param_1 + 8)) {
        iVar3 = *(int *)(param_1 + 4) - *(int *)(param_1 + 8);
        (**(code **)(param_1 + 0x28))(param_1,*(code **)(param_1 + 0x28),iVar3,iVar3 >> 0x1f,1);
      }
      *(undefined4 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x1c) = 0;
      *(undefined4 *)(param_1 + 0x14) = 0;
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined4 *)(param_1 + 8) = 0;
      uVar6 = 0;
      if (iVar5 != 0) {
        uVar6 = 0;
        FUN_01beaed6(param_1);
      }
    }
    else if (iVar5 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = 0xffffffff;
      FUN_01beaed6(param_1);
    }
  }
  return uVar6;
}

