// FUN_01b8b940 @ 01b8b940 size=360 calls_out=3 calls_in=1
// strings: 

uint FUN_01b8b940(int *param_1,int param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;
  
  uVar1 = FUN_01b8a610();
  if (0xffffff88 < uVar1) {
    return uVar1;
  }
  iVar4 = *param_1;
  if (iVar4 == 0) {
    return 0xffffffc4;
  }
  puVar8 = (undefined4 *)(param_2 + uVar1);
  uVar7 = param_3 - uVar1;
  if (iVar4 == 1) {
    uVar2 = FUN_01b85468(puVar8,uVar7,param_1 + 0x2f,0,0,0,0);
    if (uVar2 < 0xffffff89) {
      uVar7 = uVar7 - uVar2;
      *param_1 = 2;
      puVar5 = (undefined4 *)((int)puVar8 + uVar2);
      goto LAB_01b8ba08;
    }
LAB_01b8b9d4:
    uVar7 = 0xffffffba;
  }
  else {
    puVar5 = puVar8;
    if (iVar4 != 3) {
LAB_01b8ba08:
      if (uVar7 < 3) goto LAB_01b8b9d4;
      *(undefined2 *)puVar5 = 1;
      uVar7 = uVar7 - 3;
      *(undefined1 *)((int)puVar5 + 2) = 0;
      puVar5 = (undefined4 *)((int)puVar5 + 3);
    }
    puVar6 = puVar5;
    if (param_1[0x38] != 0) {
      if (uVar7 < 4) goto LAB_01b8b9d4;
      uVar3 = FUN_01b8620c(param_1 + 0x9c);
      puVar6 = puVar5 + 1;
      *puVar5 = uVar3;
    }
    uVar7 = (int)puVar6 - (int)puVar8;
    *param_1 = 0;
    if (uVar7 < 0xffffff89) {
      if ((param_1[0x96] == 0 && param_1[0x97] == 0) ||
         (param_1[0x97] == param_1[0x99] + (uint)(0xfffffffe < (uint)param_1[0x98]) &&
          param_1[0x96] == param_1[0x98] + 1U)) {
        uVar7 = uVar1 + uVar7;
      }
      else {
        uVar7 = 0xffffffb8;
      }
    }
  }
  return uVar7;
}

