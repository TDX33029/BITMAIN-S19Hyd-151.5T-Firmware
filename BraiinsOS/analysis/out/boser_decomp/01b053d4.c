// FUN_01b053d4 @ 01b053d4 size=180 calls_out=3 calls_in=271
// strings: 

undefined4
FUN_01b053d4(int param_1,undefined4 param_2,uint param_3,undefined4 param_4,undefined2 param_5)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  uVar7 = FUN_01b05020();
  iVar1 = (int)uVar7;
  if (iVar1 == 0) {
    return 0;
  }
  if (param_1 == 2 && param_3 == 0) {
    puVar2 = (uint *)FUN_01be3244(0,(int)((ulonglong)uVar7 >> 0x20),0,0);
    param_3 = *puVar2;
  }
  uVar3 = *(uint *)(iVar1 + 0x104);
  uVar4 = *(int *)(iVar1 + 0x100) + 1U & 0xf;
  *(uint *)(iVar1 + 0x100) = uVar4;
  bVar6 = uVar4 == uVar3;
  if (bVar6) {
    uVar3 = uVar4 + 1;
  }
  iVar5 = iVar1 + uVar4 * 0x10;
  if (bVar6) {
    *(uint *)(iVar1 + 0x104) = uVar3 & 0xf;
  }
  FUN_01b04f90(iVar5);
  *(undefined4 *)(iVar1 + uVar4 * 0x10) = param_4;
  *(undefined2 *)(iVar5 + 0xc) = param_5;
  *(uint *)(iVar5 + 8) = param_3 & 0xfff | param_1 << 0x18;
  return 0;
}

