// FUN_01714900 @ 01714900 size=304 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_01714900(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  
  puVar1 = (undefined4 *)FUN_0177a9c0(0x28);
  if (puVar1 == (undefined4 *)0x0) {
    return 0;
  }
  piVar3 = (int *)*param_1;
  *puVar1 = 0x800;
  iVar4 = *piVar3;
  puVar1[5] = 0xfffffffe;
  puVar1[6] = 0xffffffff;
  if (iVar4 == 0x390) {
    uVar5 = 6;
  }
  else {
    uVar5 = 1;
  }
  puVar1[2] = uVar5;
  param_1[5] = puVar1;
  puVar7 = *(undefined4 **)(param_2 + 0x14);
  iVar4 = puVar7[1];
  *puVar1 = *puVar7;
  if (iVar4 != 0) {
    iVar4 = FUN_0171485c();
    puVar1[1] = iVar4;
    if (iVar4 == 0) {
      return 0;
    }
  }
  iVar4 = puVar7[8];
  uVar5 = puVar7[2];
  uVar2 = puVar7[4];
  puVar1[3] = puVar7[3];
  uVar6 = puVar7[5];
  puVar1[2] = uVar5;
  puVar1[4] = uVar2;
  puVar1[5] = uVar6;
  if (iVar4 != 0) {
    FUN_0177aafc(puVar1[8]);
    iVar4 = FUN_0177b624(puVar7[8],puVar7[9]);
    puVar1[8] = iVar4;
    if (iVar4 == 0) {
      return 0;
    }
    puVar1[9] = puVar7[9];
  }
  return 1;
}

