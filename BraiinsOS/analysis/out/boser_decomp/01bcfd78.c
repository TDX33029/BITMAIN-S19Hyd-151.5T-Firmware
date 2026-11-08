// FUN_01bcfd78 @ 01bcfd78 size=264 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_01bcfd78(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  int local_4c;
  int local_48 [11];
  int local_1c;
  
  uVar1 = *param_2;
  local_1c = DAT_01d53560;
  puVar8 = param_2 + 0xb;
  uVar4 = *puVar8 & 1;
  param_1[0xb] = *puVar8 >> 1;
  puVar6 = param_1 + 0xb;
  do {
    uVar2 = uVar4 << 0x1f;
    puVar8 = puVar8 + -1;
    uVar4 = *puVar8;
    puVar6 = puVar6 + -1;
    *puVar6 = uVar2 | uVar4 >> 1;
  } while (param_2 != puVar8);
  local_4c = *param_1 + 0x80000000;
  uVar4 = *param_1 >> 0x1f;
  puVar8 = (uint *)&UNK_00564244;
  piVar5 = &local_4c;
  puVar6 = param_1;
  do {
    puVar8 = puVar8 + 1;
    uVar7 = *puVar8;
    puVar6 = puVar6 + 1;
    uVar2 = *puVar6;
    uVar3 = uVar2 + uVar7;
    piVar5 = piVar5 + 1;
    *piVar5 = uVar3 + uVar4;
    uVar4 = (uint)CARRY4(uVar2,uVar7) + (uint)CARRY4(uVar3,uVar4);
  } while (param_1 + 0xb != puVar6);
  FUN_01bcfc14(param_1,&local_4c,(int)(uVar1 << 0x1f) >> 0x1f);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}

