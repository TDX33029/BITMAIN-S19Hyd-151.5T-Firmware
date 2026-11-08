// FUN_0002b7fc @ 0002b7fc  size=68  callers=0
// program: cgminer


uint FUN_0002b7fc(int param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;
  bool bVar6;
  double in_d0;
  longlong lVar7;
  
  *(undefined4 *)(param_1 + 0x4c) = param_2;
  FUN_00028c90();
  lVar7 = FUN_0004ad88(SUB84(4294901760.0 / in_d0,0),
                       (int)((ulonglong)(4294901760.0 / in_d0) >> 0x20));
  uVar2 = (uint)((ulonglong)lVar7 >> 0x20);
  uVar1 = (uint)lVar7;
  uVar3 = *(uint *)(param_1 + 0xd8);
  uVar4 = *(uint *)(param_1 + 0xdc);
  bVar6 = uVar2 <= uVar4;
  if (uVar4 == uVar2) {
    bVar6 = uVar1 <= uVar3;
  }
  bVar5 = uVar3 != uVar1;
  if (!bVar6 || lVar7 == *(longlong *)(param_1 + 0xd8)) {
    uVar1 = 1;
  }
  if (bVar6 && (uVar4 != uVar2 || bVar5)) {
    uVar1 = 0;
  }
  return uVar1;
}

