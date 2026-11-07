// FUN_012bbad0 @ 012bbad0 size=352 calls_out=1 calls_in=2
// strings: 

void FUN_012bbad0(int *param_1,int param_2)

{
  byte *pbVar1;
  int *piVar2;
  int iVar3;
  undefined *puVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  int local_48;
  int iStack_44;
  int iStack_40;
  int local_38;
  int iStack_34;
  int iStack_30;
  undefined1 *local_28;
  undefined4 local_24;
  undefined1 **local_20;
  code *local_1c;
  
  uVar6 = *(uint *)(param_2 + 0x144);
  bVar7 = (uVar6 & 0x80000) == 0;
  piVar2 = param_1;
  if (bVar7) {
    piVar2 = (int *)(uint)*(byte *)(param_2 + 0x14a);
  }
  if (bVar7 && ((uint)piVar2 & 8) == 0) {
    iVar3 = 6;
    puVar4 = &DAT_004200ca;
LAB_012bbc08:
    param_1[1] = (int)puVar4;
    *param_1 = -0x80000000;
    param_1[2] = iVar3;
  }
  else {
    iVar3 = *(int *)(param_2 + 0x4c) * 0x134;
    pbVar1 = (byte *)(*(int *)(param_2 + 0x48) + 0x130);
    do {
      pbVar5 = pbVar1;
      if (iVar3 == 0) goto LAB_012bbbd4;
      iVar3 = iVar3 + -0x134;
      pbVar1 = pbVar5 + 0x134;
    } while (2 < *pbVar5 - 5);
    local_28 = *(undefined1 **)(pbVar5 + -0x10);
    if (local_28 == (undefined1 *)0x0) {
LAB_012bbb70:
      local_28 = *(undefined1 **)(pbVar5 + -0xfc);
      if (local_28 != &DAT_00110000) {
        local_20 = &local_28;
        local_1c = FUN_012fbb84;
        FUN_00664898(&local_48,&DAT_0057fe0b,&local_20);
        goto LAB_012bbbc8;
      }
    }
    else {
      local_24 = *(undefined4 *)(pbVar5 + -0xc);
      local_20 = &local_28;
      local_1c = (code *)&LAB_018a13b8;
      FUN_00664898(&local_38,&DAT_005b2bc8,&local_20);
      if (local_38 == -0x80000000) goto LAB_012bbb70;
      local_48 = local_38;
      iStack_44 = iStack_34;
      iStack_40 = iStack_30;
LAB_012bbbc8:
      if (local_48 != -0x80000000) {
        *param_1 = local_48;
        param_1[1] = iStack_44;
        param_1[2] = iStack_40;
        return;
      }
    }
LAB_012bbbd4:
    if (*(int *)(param_2 + 100) != 0) {
      uVar6 = uVar6 & 0x100000;
      bVar7 = uVar6 == 0;
      if (bVar7) {
        uVar6 = (uint)*(byte *)(param_2 + 0x14a);
      }
      if (bVar7 && (uVar6 & 0x10) == 0) {
        iVar3 = 4;
        puVar4 = &DAT_0056d518;
        goto LAB_012bbc08;
      }
    }
    *param_1 = -0x7fffffff;
  }
  return;
}

