// FUN_016daeb4 @ 016daeb4 size=232 calls_out=5 calls_in=31
// strings: 

uint FUN_016daeb4(int param_1)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  
  if (param_1 == 0) {
    uVar6 = 0;
    if (DAT_018ddd64 != 0) {
      uVar6 = FUN_016daeb4(DAT_018ddd64);
    }
    uVar1 = FUN_016daeb4(&DAT_018db5c0);
    uVar6 = uVar6 | uVar1;
    puVar2 = (uint *)FUN_016db35c();
    for (puVar4 = (uint *)*puVar2; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[0xe]) {
      puVar2 = puVar4;
      if ((int)puVar4[0x13] < 0) {
        if (puVar4[5] != puVar4[7]) {
          puVar2 = (uint *)FUN_016daeb4();
          uVar6 = uVar6 | (uint)puVar2;
        }
      }
      else {
        iVar5 = FUN_016dab18();
        if (puVar4[5] != puVar4[7]) {
          uVar1 = FUN_016daeb4(puVar4);
          uVar6 = uVar6 | uVar1;
        }
        if (iVar5 != 0) {
          puVar2 = (uint *)FUN_016dabbe();
        }
      }
    }
    FUN_016db374(puVar2);
  }
  else {
    if (*(int *)(param_1 + 0x4c) < 0) {
      iVar5 = 0;
    }
    else {
      iVar5 = FUN_016dab18();
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
        FUN_016dabbe(param_1);
      }
    }
    else if (iVar5 == 0) {
      uVar6 = 0xffffffff;
    }
    else {
      uVar6 = 0xffffffff;
      FUN_016dabbe(param_1);
    }
  }
  return uVar6;
}

