// FUN_00730160 @ 00730160 size=244 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_00730160(int param_1,undefined4 param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = *(uint *)(param_1 + 0x48);
  uVar1 = 0;
  if (uVar8 != 0) {
    iVar3 = *(int *)(param_1 + 0x44);
    if (uVar8 != 1) {
      uVar4 = uVar8;
      uVar5 = 0;
      do {
        uVar1 = uVar5 + (uVar4 >> 1);
        uVar4 = uVar4 - (uVar4 >> 1);
        puVar6 = (uint *)(iVar3 + uVar1 * 0x18);
        uVar7 = puVar6[1];
        if (param_4 <= uVar7 && (uint)(*puVar6 <= param_3) <= param_4 - uVar7) {
          uVar1 = uVar5;
        }
        uVar5 = uVar1;
      } while (1 < uVar4);
    }
    puVar6 = (uint *)(iVar3 + uVar1 * 0x18);
    uVar4 = *puVar6;
    uVar5 = puVar6[1];
    if (!(uVar4 == param_3 && uVar5 == param_4)) {
      if (uVar5 <= param_4 && (uint)(param_3 <= uVar4) <= uVar5 - param_4) {
        uVar1 = uVar1 + 1;
      }
      if (uVar1 == 0) {
        return 0;
      }
      uVar1 = uVar1 - 1;
    }
    uVar2 = 0;
    if (uVar1 < uVar8) {
      puVar6 = (uint *)(iVar3 + uVar1 * 0x18);
      uVar8 = *puVar6;
      uVar1 = puVar6[1];
      if (uVar1 < param_4 || param_4 - uVar1 < (uint)(uVar8 <= param_3)) {
        uVar4 = puVar6[2] + uVar8;
        uVar1 = puVar6[3] + uVar1 + (uint)CARRY4(puVar6[2],uVar8);
        if (param_4 < uVar1 || uVar1 - param_4 < (uint)(param_3 <= uVar4)) {
          uVar2 = FUN_0073238c(param_1 + 0x28,puVar6[4],uVar4 - param_3);
        }
        return uVar2;
      }
    }
  }
  return 0;
}

