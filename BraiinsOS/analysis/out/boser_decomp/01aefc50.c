// FUN_01aefc50 @ 01aefc50 size=148 calls_out=2 calls_in=3
// strings: 

void FUN_01aefc50(uint *param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  undefined1 auStack_118 [128];
  int local_98 [2];
  uint local_90;
  uint uStack_8c;
  uint uStack_88;
  uint uStack_84;
  uint local_80;
  uint uStack_7c;
  uint uStack_78;
  uint uStack_74;
  
  FUN_01af2664(local_98);
  if (local_98[0] != 1) {
    FUN_01bed4e2(auStack_118,(uint)local_98 | 4,0x7c);
    FUN_01bed4e2(param_1 + 1,auStack_118,0x7c);
  }
  else {
    puVar1 = (uint *)((uint)auStack_118 | 4);
    *puVar1 = local_90;
    puVar1[1] = uStack_8c;
    puVar1[2] = uStack_88;
    puVar1[3] = uStack_84;
    puVar1[4] = local_80;
    puVar1[5] = uStack_7c;
    puVar1[6] = uStack_78;
    puVar1[7] = uStack_74;
    uVar2 = puVar1[1];
    uVar3 = puVar1[2];
    uVar4 = puVar1[3];
    param_1[2] = *puVar1;
    param_1[3] = uVar2;
    param_1[4] = uVar3;
    param_1[5] = uVar4;
    uVar2 = puVar1[5];
    uVar3 = puVar1[6];
    uVar4 = puVar1[7];
    param_1[6] = puVar1[4];
    param_1[7] = uVar2;
    param_1[8] = uVar3;
    param_1[9] = uVar4;
  }
  *param_1 = (uint)(local_98[0] == 1);
  return;
}

