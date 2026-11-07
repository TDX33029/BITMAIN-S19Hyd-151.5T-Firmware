// FUN_0165f228 @ 0165f228 size=276 calls_out=3 calls_in=1
// strings: 

void FUN_0165f228(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined1 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 local_e8 [4];
  undefined1 auStack_d8 [16];
  uint local_c8;
  int local_c4;
  undefined1 auStack_c0 [56];
  uint local_88;
  uint uStack_84;
  byte local_80;
  undefined4 local_78 [4];
  undefined1 auStack_68 [56];
  uint local_30;
  uint local_2c;
  
  local_e8[3] = 0;
  local_e8[2] = 0;
  local_e8[1] = 0;
  local_e8[0] = 0;
  FUN_01bed4e2(auStack_d8,param_2,0x60);
  uVar2 = (uint)local_80;
  local_78[0] = *param_2;
  local_78[1] = param_2[1];
  local_78[2] = param_2[2];
  local_78[3] = param_2[3];
  puVar3 = auStack_c0;
  puVar3[uVar2] = 0x80;
  uVar5 = local_c4 << 9 | local_c8 >> 0x17;
  uVar4 = uVar2 << 3 | local_c8 << 9;
  if ((uVar2 == 0x3f) || (FUN_01bed93e(auStack_c0 + uVar2 + 1,0), (~uVar2 & 0x38) == 0)) {
    FUN_0165e7b8(local_78,puVar3,1);
    puVar3 = auStack_68;
    FUN_01bed93e(puVar3,0,0x38);
    local_30 = uVar4;
    local_2c = uVar5;
  }
  else {
    local_88 = uVar4;
    uStack_84 = uVar5;
  }
  FUN_0165e7b8(local_78,puVar3,1);
  iVar1 = 0;
  do {
    local_e8[iVar1] = local_78[iVar1];
    iVar1 = iVar1 + 1;
  } while (iVar1 != 4);
  FUN_01bed4e2(param_1,local_e8,0x10);
  return;
}

