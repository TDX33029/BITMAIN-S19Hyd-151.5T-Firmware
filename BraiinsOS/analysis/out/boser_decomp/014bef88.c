// FUN_014bef88 @ 014bef88 size=224 calls_out=5 calls_in=7
// strings: 

void FUN_014bef88(undefined4 *param_1)

{
  undefined4 *puVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 *puVar5;
  bool bVar6;
  bool bVar7;
  undefined4 *local_28;
  undefined4 *local_24;
  undefined4 *local_20;
  
  FUN_01446188(&local_28);
  puVar5 = local_24;
  puVar1 = local_28;
  if (local_28 == (undefined4 *)&DAT_80000000) {
    local_28 = local_24;
    local_24 = local_20;
  }
  else {
    FUN_014bee4c(&local_28,local_24);
    FUN_019bb7e0(puVar1,puVar5);
    if ((short)local_20 != 0x255) {
      *param_1 = local_28;
      param_1[1] = local_24;
      param_1[2] = local_20;
      return;
    }
  }
  puVar1 = local_24;
  uVar2 = (uint)local_28 & 0xff;
  bVar7 = 5 < uVar2;
  bVar6 = uVar2 == 6;
  if (uVar2 < 7) {
    bVar7 = 2 < uVar2;
    bVar6 = uVar2 == 3;
  }
  *(undefined2 *)(param_1 + 2) = 0x188;
  *param_1 = &DAT_0056e6cc;
  param_1[1] = 4;
  if ((!bVar7 || bVar6) && (bVar6)) {
    uVar4 = *local_24;
    puVar5 = (undefined4 *)local_24[1];
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar4);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_01be4678(uVar4);
    }
    thunk_FUN_01be4678(puVar1);
    return;
  }
  return;
}

