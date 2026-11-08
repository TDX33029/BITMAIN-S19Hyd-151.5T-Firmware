// FUN_01375c30 @ 01375c30 size=500 calls_out=3 calls_in=0
// strings: 

void FUN_01375c30(undefined4 *param_1,int param_2,int *param_3)

{
  ushort uVar1;
  undefined4 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int local_40;
  int iStack_3c;
  int iStack_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined2 local_24;
  
  iVar6 = *(int *)(param_2 + 0x18);
  local_30 = 0;
  local_34 = 0;
  if (iVar6 == *(int *)(param_2 + 0x10)) {
    FUN_013c40f0();
  }
  *(int *)(param_2 + 0x18) = iVar6 + 1;
  puVar2 = (undefined4 *)(*(int *)(param_2 + 0x14) + iVar6 * 0x10);
  *puVar2 = 0;
  puVar2[1] = 0;
  if ((*(int *)(param_2 + 8) == 1) &&
     (uVar3 = *(uint *)(param_2 + 0xc),
     uVar3 < (uint)(*(int *)(param_2 + 0x34) + (iVar6 + 1) * 0x10))) {
    *param_1 = 0x27;
    param_1[1] = uVar3;
    return;
  }
  iVar4 = param_3[2];
  if (iVar4 == 0) {
    local_30 = 4;
    local_28 = 0;
    local_2c = 0;
    local_34 = 0;
    local_24 = 0;
    FUN_013c4bcc(&local_40,&local_34,param_3[3]);
    if (*param_3 != 0) {
      iVar5 = param_3[1];
LAB_01375d7c:
      thunk_FUN_016d3fb4(iVar5);
    }
  }
  else {
    uVar1 = *(ushort *)(param_3 + 4);
    *(short *)(param_3 + 4) = (short)(uVar1 + 1);
    if ((uVar1 + 1 & 0x10000) == 0) goto LAB_01375d88;
    local_30 = 4;
    local_28 = 0;
    local_2c = 0;
    local_34 = 0;
    local_24 = 0;
    FUN_013c4bcc(&local_40,&local_34,param_3[3]);
    iVar5 = param_3[1];
    puVar2 = (undefined4 *)(iVar5 + 4);
    for (; iVar4 != 0; iVar4 = iVar4 + -1) {
      if (puVar2[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar2);
      }
      puVar2 = puVar2 + 5;
    }
    if (*param_3 != 0) goto LAB_01375d7c;
  }
  *param_3 = local_40;
  param_3[1] = iStack_3c;
  param_3[2] = iStack_38;
LAB_01375d88:
  puVar2 = (undefined4 *)param_3[6];
  iVar5 = 0;
  iVar4 = param_3[7];
  param_3[7] = 0;
  if (iVar4 != 0) {
    do {
      while (puVar2[iVar5 * 4] != 0) {
        thunk_FUN_016d3fb4(puVar2[iVar5 * 4 + 1]);
        iVar5 = iVar5 + 1;
        if (iVar4 == iVar5) goto LAB_01375dd4;
      }
      iVar5 = iVar5 + 1;
    } while (iVar4 != iVar5);
  }
LAB_01375dd4:
  if (param_3[5] == 0) {
    FUN_013c40f0(param_3 + 5);
    puVar2 = (undefined4 *)param_3[6];
  }
  *(undefined1 *)(puVar2 + 3) = 0;
  *puVar2 = 0;
  puVar2[1] = 4;
  puVar2[2] = 0;
  *param_1 = 0x2a;
  param_1[1] = param_2;
  param_1[2] = param_3;
  param_1[3] = iVar6;
  param_3[7] = 1;
  return;
}

