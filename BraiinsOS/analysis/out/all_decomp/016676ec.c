// FUN_016676ec @ 016676ec size=384 calls_out=4 calls_in=6
// strings: 

void FUN_016676ec(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint local_8c [3];
  int local_80;
  uint local_7c;
  undefined4 local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68 [2];
  int local_60;
  uint *local_5c;
  uint local_58 [3];
  uint local_4c;
  uint local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  int local_34 [3];
  uint *local_28;
  
  iVar3 = *param_1;
  local_6c = 0;
  if (iVar3 != 0) {
    local_80 = param_1[1];
    local_6c = param_1[2];
    local_78 = 0;
    local_8c[1] = 0;
    local_8c[2] = iVar3;
    local_74 = iVar3;
    local_70 = local_80;
  }
  local_8c[0] = (uint)(iVar3 != 0);
  local_7c = local_8c[0];
  while( true ) {
    FUN_00a40f64(local_68,local_8c);
    iVar1 = local_60;
    iVar3 = local_68[0];
    if (local_68[0] == 0) break;
    iVar2 = local_68[0] + local_60 * 0xc;
    local_5c = local_8c;
    if (*(int *)(iVar2 + 0x10c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(iVar2 + 0x110));
    }
    puVar4 = (uint *)(iVar3 + iVar1 * 0x18);
    iVar3 = 4;
    if (1 < *puVar4) {
      iVar3 = *puVar4 - 2;
    }
    if (3 < iVar3 - 1U) {
      if (iVar3 == 0) {
        if (puVar4[1] != 0) {
          thunk_FUN_016d3fb4(puVar4[2]);
        }
      }
      else if (iVar3 == 5) {
        uVar5 = puVar4[2];
        FUN_016672f0(uVar5,puVar4[3]);
        if (puVar4[1] != 0) {
          thunk_FUN_016d3fb4(uVar5);
        }
      }
      else {
        uVar5 = puVar4[1];
        if (uVar5 == 0) {
          local_38 = 0;
        }
        else {
          local_38 = puVar4[3];
          local_4c = puVar4[2];
          local_44 = 0;
          local_58[1] = 0;
          local_58[2] = uVar5;
          local_40 = uVar5;
          local_3c = local_4c;
        }
        local_58[0] = (uint)(uVar5 != 0);
        local_48 = local_58[0];
        while (FUN_00a40f64(local_34,local_58), local_34[0] != 0) {
          local_28 = local_58;
          FUN_01667398(local_34);
        }
      }
    }
  }
  return;
}

