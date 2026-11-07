// FUN_01017864 @ 01017864 size=444 calls_out=2 calls_in=4
// strings: 

void FUN_01017864(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  int local_3c;
  int *local_38;
  code *local_34;
  int iStack_30;
  
  iVar7 = *param_2;
  uVar4 = param_2[1];
  iVar5 = param_2[2];
  local_3c = iVar5;
  if (((uVar4 < *(uint *)(iVar7 + 0x38)) &&
      (piVar6 = (int *)(*(int *)(iVar7 + 0x34) + uVar4 * 0xf8), *piVar6 != 3 || piVar6[1] != 0)) &&
     (piVar6[0x35] == iVar5)) {
    uVar1 = (uint)*(byte *)(piVar6 + 8);
    if (5 < uVar1) {
      return;
    }
    uVar3 = 1;
    if (2 < uVar1) {
      uVar3 = uVar1 - 3;
    }
    if (uVar3 == 0) {
      return;
    }
    if ((((uVar3 & 0xff) == 1) && (uVar1 < 2)) && (1 < *(byte *)((int)piVar6 + 0x21))) {
      return;
    }
    if ((undefined1 *)piVar6[6] != &DAT_3b9aca00) {
      return;
    }
    if (*(uint *)(param_3 + 0x18) <= *(uint *)(param_3 + 0x1c)) {
      return;
    }
    *(uint *)(param_3 + 0x1c) = *(uint *)(param_3 + 0x1c) + 1;
    FUN_015f3b0c(&local_38,1);
    iVar8 = *(int *)(param_1 + 0x50);
    piVar6[4] = (int)local_38;
    piVar6[5] = (int)local_34;
    piVar6[6] = iStack_30;
    if (iVar8 == 0) {
      *(undefined4 *)(param_1 + 0x50) = 1;
      *(uint *)(param_1 + 0x54) = uVar4;
      *(int *)(param_1 + 0x58) = iVar5;
      *(uint *)(param_1 + 0x5c) = uVar4;
      *(int *)(param_1 + 0x60) = iVar5;
      return;
    }
    if (((*(uint *)(param_1 + 0x5c) < *(uint *)(iVar7 + 0x38)) &&
        (piVar6 = (int *)(*(int *)(iVar7 + 0x34) + *(uint *)(param_1 + 0x5c) * 0xf8),
        *piVar6 != 3 || piVar6[1] != 0)) && (piVar6[0x35] == *(int *)(param_1 + 0x60))) {
      piVar6[0x2a] = 1;
      piVar6[0x2b] = uVar4;
      piVar6[0x2c] = iVar5;
      *(uint *)(param_1 + 0x5c) = uVar4;
      *(int *)(param_1 + 0x60) = iVar5;
      return;
    }
    puVar2 = &DAT_01882560;
    local_3c = *(int *)(param_1 + 0x60);
  }
  else {
    puVar2 = &DAT_01882550;
  }
  local_34 = FUN_0101a4ac;
  local_38 = &local_3c;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00599806,&local_38,puVar2);
}

