// FUN_00d44f44 @ 00d44f44 size=544 calls_out=5 calls_in=2
// strings: 

void FUN_00d44f44(int *param_1,int *param_2,int param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  int local_88;
  int local_84;
  int local_80;
  uint local_7c;
  uint local_78;
  undefined1 auStack_74 [12];
  int local_68;
  undefined4 *local_64;
  uint *local_60;
  code *local_5c;
  uint *local_58;
  code *local_54;
  int iStack_50;
  int iStack_4c;
  undefined8 local_48;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  
  iVar10 = 0;
  iVar8 = 8;
  local_80 = 0;
  local_84 = 8;
  local_88 = 0;
  piVar1 = param_2;
  while( true ) {
    do {
      piVar5 = piVar1;
      if (piVar5 == param_2 + param_3) {
        *param_1 = local_88;
        param_1[1] = local_84;
        param_1[2] = local_80;
        return;
      }
      iVar2 = *piVar5;
      piVar1 = piVar5 + 1;
    } while (*(char *)(iVar2 + 0x3cc) == '\0');
    local_7c = *(uint *)(iVar2 + 0x168);
    local_78 = *(uint *)(param_4 + 0x44);
    uVar11 = *(undefined8 *)(iVar2 + 0x160);
    if (local_7c < local_78) break;
    iVar2 = *(int *)(iVar2 + 0x38c);
    FUN_009d463c(&iStack_40,param_4);
    local_48._0_4_ = (int)uVar11;
    local_48._4_4_ = (int)((ulonglong)uVar11 >> 0x20);
    local_60 = (uint *)(int)local_48;
    local_5c = (code *)local_48._4_4_;
    local_58 = (uint *)iStack_40;
    local_54 = (code *)iStack_3c;
    iStack_50 = iStack_38;
    iStack_4c = iStack_34;
    local_68 = iVar2;
    local_48 = uVar11;
    if (iVar10 == local_88) {
      FUN_00d64b10(&local_88);
      iVar8 = local_84;
    }
    piVar3 = (int *)(iVar8 + iVar10 * 0x20);
    iVar10 = iVar10 + 1;
    *piVar3 = local_68;
    piVar3[1] = (int)local_64;
    piVar3[2] = (int)local_60;
    piVar3[3] = (int)local_5c;
    piVar3[4] = (int)local_58;
    piVar3[5] = (int)local_54;
    piVar3[6] = iStack_50;
    piVar3[7] = iStack_4c;
    local_80 = iVar10;
  }
  local_58 = &local_78;
  local_54 = FUN_00f5c9c8;
  local_5c = FUN_00f5c9c8;
  local_60 = &local_7c;
  local_68 = *piVar5 + 0x38c;
  local_64 = &DAT_00f5c97c;
  FUN_00600d2c(auStack_74,&DAT_0058e5ee,&local_68);
  iVar2 = FUN_00c6b484(auStack_74);
  *param_1 = -0x80000000;
  param_1[1] = iVar2;
  iVar2 = 0;
  while (iVar2 != iVar10) {
    iVar4 = iVar8 + iVar2 * 0x20;
    iVar6 = *(int *)(iVar4 + 0x14);
    puVar7 = (undefined4 *)(iVar6 + 0x10);
    for (iVar9 = *(int *)(iVar4 + 0x18); iVar9 != 0; iVar9 = iVar9 + -1) {
      if (puVar7[-4] != 0) {
        thunk_FUN_016d3fb4(puVar7[-3]);
      }
      if (puVar7[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar7);
      }
      puVar7 = puVar7 + 6;
    }
    iVar2 = iVar2 + 1;
    if (*(int *)(iVar4 + 0x10) != 0) {
      thunk_FUN_016d3fb4(iVar6);
    }
  }
  if (local_88 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(iVar8);
  return;
}

