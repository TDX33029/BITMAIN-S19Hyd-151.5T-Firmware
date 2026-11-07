// FUN_00e5ff1c @ 00e5ff1c size=780 calls_out=1 calls_in=1
// strings: 

void FUN_00e5ff1c(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  byte *pbVar8;
  byte *pbVar7;
  uint uVar9;
  uint local_3c;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar9 = *(uint *)(param_2 + 0x14);
  iVar1 = *(int *)(param_2 + 0xc);
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  if (iVar1 != 0) {
    param_3 = *(uint *)(param_2 + 0x1c);
    if (param_3 < uVar9) {
      local_3c = uVar9 + 1;
      uVar9 = param_3 - 1;
    }
    else {
      local_3c = param_3;
    }
  }
  if (uVar9 != 1) {
    param_3 = *(uint *)(param_2 + 0x28);
  }
  if (uVar9 != 1 && param_3 != 0) {
    pbVar2 = *(byte **)(param_2 + 0x24);
    pbVar8 = pbVar2;
    do {
      iVar5 = local_28;
      pbVar7 = pbVar8 + 1;
      puVar3 = (undefined1 *)(uint)*pbVar8;
      if (0x7fffffff < (uint)(int)(char)*pbVar8) {
        if (puVar3 < (undefined1 *)0xe0) {
          puVar3 = (undefined1 *)(pbVar8[1] & 0x3f | ((uint)puVar3 & 0x1f) << 6);
          pbVar7 = pbVar8 + 2;
        }
        else {
          uVar6 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
          if (puVar3 < (undefined1 *)0xf0) {
            puVar3 = (undefined1 *)(uVar6 | ((uint)puVar3 & 0x1f) << 0xc);
            pbVar7 = pbVar8 + 3;
          }
          else {
            pbVar7 = pbVar8 + 4;
            puVar3 = (undefined1 *)(pbVar8[3] & 0x3f | uVar6 << 6 | ((uint)puVar3 & 7) << 0x12);
          }
        }
      }
      if (puVar3 == (undefined1 *)0x9) {
        uVar4 = 9;
        if (local_28 == local_30) {
          FUN_0132b898(&local_30,local_28,1,1,1);
        }
      }
      else {
        if (puVar3 == &DAT_00110000) break;
        uVar4 = 0x20;
        if (local_28 == local_30) {
          FUN_0132b898(&local_30,local_28,1,1,1);
        }
      }
      *(undefined1 *)(local_2c + local_28) = uVar4;
      local_28 = iVar5 + 1;
      if ((uVar9 - 2 == iVar5) || (pbVar8 = pbVar7, pbVar7 == pbVar2 + param_3)) break;
    } while( true );
  }
  iVar5 = local_28;
  if (iVar1 == 0) {
    if ((uint)(local_30 - local_28) < 4) {
      FUN_0132b898(&local_30,local_28,4,1,1);
    }
    iVar1 = local_28 + 4;
    *(undefined4 *)(local_2c + local_28) = 0x2d2d2d5e;
  }
  else {
    if (local_30 == local_28) {
      FUN_0132b898(&local_30,local_28,1,1,1);
    }
    iVar5 = iVar5 + 1;
    uVar9 = local_3c - uVar9;
    *(undefined1 *)(local_2c + local_28) = 0x5e;
    local_28 = iVar5;
    if (uVar9 < 2) goto LAB_00e6000c;
    if (uVar9 != 2) {
      iVar1 = uVar9 - 2;
      do {
        iVar5 = local_28;
        if (local_28 == local_30) {
          FUN_0132b898(&local_30,local_28,1,1,1);
        }
        iVar1 = iVar1 + -1;
        *(undefined1 *)(local_2c + local_28) = 0x2d;
        local_28 = iVar5 + 1;
      } while (iVar1 != 0);
    }
    iVar1 = local_28;
    if (local_30 == local_28) {
      FUN_0132b898(&local_30,local_28,1,1,1);
    }
    *(undefined1 *)(local_2c + local_28) = 0x5e;
    iVar1 = iVar1 + 1;
  }
  local_28 = iVar1;
LAB_00e6000c:
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}

