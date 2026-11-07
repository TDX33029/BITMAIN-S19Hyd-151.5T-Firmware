// FUN_00bd25d8 @ 00bd25d8 size=564 calls_out=7 calls_in=1
// strings: 

void FUN_00bd25d8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  uint local_54 [3];
  int local_48;
  uint local_44;
  undefined4 local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30 [2];
  int local_28;
  
  cVar1 = *(char *)(param_1 + 0x3f);
  if (cVar1 == '\x04') {
    iVar8 = *(int *)(param_1 + 0x6c);
    iVar3 = 0;
    iVar5 = *(int *)(param_1 + 0x70);
    while (iVar3 != iVar5) {
      iVar2 = iVar8 + iVar3 * 0x18;
      iVar6 = *(int *)(iVar2 + 0xc);
      puVar4 = (undefined4 *)(iVar6 + 0x10);
      for (iVar9 = *(int *)(iVar2 + 0x10); iVar9 != 0; iVar9 = iVar9 + -1) {
        if (puVar4[-4] != 0) {
          thunk_FUN_016d3fb4(puVar4[-3]);
        }
        if (puVar4[-1] != 0) {
          thunk_FUN_016d3fb4(*puVar4);
        }
        puVar4 = puVar4 + 6;
      }
      iVar3 = iVar3 + 1;
      if (*(int *)(iVar2 + 8) != 0) {
        thunk_FUN_016d3fb4(iVar6);
      }
    }
    if (*(int *)(param_1 + 0x68) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x6c));
    }
    if (*(int *)(param_1 + 0x5c) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x60));
    }
    iVar3 = *(int *)(param_1 + 0x4c);
    local_34 = 0;
    *(undefined1 *)(param_1 + 0x3c) = 0;
    if (iVar3 != 0) {
      local_48 = *(int *)(param_1 + 0x50);
      local_34 = *(undefined4 *)(param_1 + 0x54);
      local_40 = 0;
      local_54[1] = 0;
      local_54[2] = iVar3;
      local_3c = iVar3;
      local_38 = local_48;
    }
    local_54[0] = (uint)(iVar3 != 0);
    local_44 = local_54[0];
    while (FUN_00c48ab0(local_30,local_54), local_30[0] != 0) {
      FUN_00c3ccd0(local_30[0] + local_28 * 0xa0);
    }
    *(undefined1 *)(param_1 + 0x3d) = 0;
    if (*(int *)(param_1 + 0x40) != 0) {
      thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x44));
    }
    *(undefined1 *)(param_1 + 0x3e) = 0;
  }
  else {
    if (cVar1 != '\x03') {
      iVar3 = 4;
      if (cVar1 != '\0') {
        return;
      }
      goto LAB_00bd278c;
    }
    if ((*(char *)(param_1 + 0x74) == '\x03') && (*(int *)(param_1 + 0x6c) != 0)) {
      FUN_00c81a4c(*(int *)(param_1 + 0x6c),*(undefined4 *)(param_1 + 0x70),1);
    }
  }
  iVar3 = 0x1c;
  FUN_00c487f4(param_1 + 0x28);
LAB_00bd278c:
  piVar7 = (int *)(param_1 + iVar3);
  iVar3 = *piVar7;
  if (iVar3 == 0) {
    local_34 = 0;
  }
  else {
    local_34 = piVar7[2];
    local_48 = piVar7[1];
    local_40 = 0;
    local_54[1] = 0;
    local_54[2] = iVar3;
    local_3c = iVar3;
    local_38 = local_48;
  }
  local_54[0] = (uint)(iVar3 != 0);
  local_44 = local_54[0];
  while (FUN_00c3b3e0(local_30,local_54), local_30[0] != 0) {
    FUN_00bd20f4(local_30[0] + local_28 * 0x48);
  }
  return;
}

