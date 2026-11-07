// FUN_00fb8184 @ 00fb8184 size=328 calls_out=1 calls_in=3
// strings: 

void FUN_00fb8184(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined1 *puVar6;
  undefined4 uVar7;
  undefined *puVar8;
  undefined4 uVar9;
  
  puVar4 = (undefined1 *)param_1[2];
  puVar6 = &DAT_0040f592;
  iVar2 = *param_1;
  uVar1 = (*(uint *)(param_2 + 8) & 0x3fffff) >> 0x15;
  if ((*(uint *)(param_2 + 8) & 0x200000) == 0) {
    puVar6 = (undefined1 *)0x1;
  }
  if (iVar2 != 0 || param_1[1] != 0) {
    FUN_00fb82e0(param_2,iVar2,iVar2,param_1[1],puVar4,100000000,puVar6,uVar1,&DAT_0041547c,1);
    return;
  }
  if (puVar4 < &DAT_000f4240) {
    if ((uint)puVar4 >> 3 < 0x7d) {
      FUN_00fb82e0(param_2,&DAT_00415475,puVar4,0,0,1,puVar6,uVar1,&DAT_00415475,2);
      return;
    }
    uVar3 = (uint)puVar4 / 1000;
    uVar5 = (uint)puVar4 % 1000;
    uVar7 = 100;
    puVar8 = &DAT_00415477;
    uVar9 = 3;
  }
  else {
    uVar3 = (uint)puVar4 / 1000000;
    uVar5 = (uint)puVar4 % 1000000;
    uVar7 = 100000;
    puVar8 = &DAT_0041547a;
    uVar9 = 2;
  }
  FUN_00fb82e0(param_2,uVar3,uVar3,0,uVar5,uVar7,puVar6,uVar1,puVar8,uVar9);
  return;
}

