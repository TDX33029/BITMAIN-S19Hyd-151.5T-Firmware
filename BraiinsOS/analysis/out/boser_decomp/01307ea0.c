// FUN_01307ea0 @ 01307ea0 size=308 calls_out=1 calls_in=2
// strings: 

void FUN_01307ea0(undefined4 *param_1,int param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  char *pcVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  
  puVar2 = (undefined *)param_1[2];
  pcVar6 = "+";
  puVar1 = (undefined *)*param_1;
  iVar5 = param_1[1];
  if ((*(uint *)(param_2 + 8) & 0x200000) == 0) {
    pcVar6 = (char *)0x1;
  }
  if (puVar1 != (undefined *)0x0 || iVar5 != 0) {
    uVar7 = 100000000;
    puVar8 = &DAT_005319f2;
    uVar9 = 1;
    puVar4 = puVar1;
    puVar3 = puVar2;
    goto LAB_01307fc8;
  }
  if (puVar2 < (undefined *)0xf4240) {
    if (0x7c < (uint)puVar2 >> 3) {
      puVar1 = (undefined *)((uint)puVar2 / 1000);
      puVar3 = (undefined *)((uint)puVar2 % 1000);
      uVar7 = 100;
      puVar8 = &DAT_005319ed;
      uVar9 = 3;
      goto LAB_01307f90;
    }
    uVar7 = 1;
    puVar1 = &DAT_005319eb;
    puVar8 = &DAT_005319eb;
    uVar9 = 2;
    puVar3 = (undefined *)0x0;
  }
  else {
    puVar1 = (undefined *)((uint)puVar2 / 1000000);
    puVar3 = (undefined *)((uint)puVar2 % 1000000);
    uVar7 = 100000;
    puVar8 = &DAT_005319f0;
    uVar9 = 2;
LAB_01307f90:
    puVar2 = puVar1;
  }
  iVar5 = 0;
  puVar4 = puVar2;
LAB_01307fc8:
  FUN_01307fe8(param_2,puVar1,puVar4,iVar5,puVar3,uVar7,pcVar6,
               (*(uint *)(param_2 + 8) & 0x3fffff) >> 0x15,puVar8,uVar9);
  return;
}

