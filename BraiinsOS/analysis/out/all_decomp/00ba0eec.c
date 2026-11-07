// FUN_00ba0eec @ 00ba0eec size=336 calls_out=2 calls_in=1
// strings: 

void FUN_00ba0eec(undefined4 param_1,int param_2,uint *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint local_158;
  uint local_154;
  uint local_150;
  uint uStack_14c;
  uint uStack_148;
  uint uStack_144;
  uint uStack_140;
  undefined4 local_13c;
  uint local_138;
  uint local_134;
  uint local_130;
  uint uStack_12c;
  uint uStack_128;
  undefined1 *puStack_124;
  undefined1 auStack_120 [232];
  uint local_38;
  uint local_34;
  uint uStack_30;
  uint uStack_2c;
  uint local_28;
  
  uVar2 = param_3[7];
  uVar3 = param_3[8];
  uVar4 = param_3[9];
  local_158 = *param_3;
  local_154 = param_3[1];
  uVar5 = param_3[0x48];
  puStack_124 = (undefined1 *)param_3[0xd];
  if ((*(int *)(param_2 + 8) == 1) && (uVar5 != 0 || puStack_124 != &DAT_00110000)) {
    uVar6 = *(uint *)(param_2 + 0xc);
    uVar1 = local_158 & 1;
    local_158 = 1;
    *(uint *)(param_2 + 0xc) = uVar6 + 1;
    if (uVar1 == 0) {
      local_154 = uVar6;
    }
  }
  local_150 = param_3[2];
  uStack_14c = param_3[3];
  uStack_148 = param_3[4];
  uStack_144 = param_3[5];
  uStack_140 = param_3[6];
  local_130 = param_3[10];
  uStack_12c = param_3[0xb];
  uStack_128 = param_3[0xc];
  local_138 = *(uint *)(param_2 + 0x14c);
  local_134 = *(uint *)(param_2 + 0x150);
  if ((uVar2 & 1) != 0) {
    local_138 = uVar3;
    local_134 = uVar4;
  }
  local_13c = 1;
  FUN_016dd1aa(auStack_120,param_3 + 0xe,0xe8);
  local_34 = param_3[0x49];
  uStack_30 = param_3[0x4a];
  uStack_2c = param_3[0x4b];
  local_28 = param_3[0x4c];
  iVar7 = *(int *)(param_2 + 0x4c);
  local_38 = uVar5;
  if (iVar7 == *(int *)(param_2 + 0x44)) {
    FUN_00f98fcc();
  }
  FUN_016dd1aa(iVar7 * 0x134 + *(int *)(param_2 + 0x48),&local_158,0x134);
  *(int *)(param_2 + 0x4c) = iVar7 + 1;
  FUN_016dd1aa(param_1,param_2,0x16c);
  return;
}

