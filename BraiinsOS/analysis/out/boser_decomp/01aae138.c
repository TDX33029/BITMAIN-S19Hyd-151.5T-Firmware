// FUN_01aae138 @ 01aae138 size=228 calls_out=0 calls_in=2
// strings: 

void FUN_01aae138(undefined4 *param_1,int param_2)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined1 **ppuVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  ulonglong uVar9;
  undefined1 *local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined1 *local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar1 = *(uint *)(param_2 + 8);
  local_48 = (undefined1 *)0x0;
  if (uVar1 != 2) {
    if ((uVar1 & 1) == 0) {
      iVar7 = *(int *)(param_2 + 0xc);
      iVar8 = *(int *)(param_2 + 0x10);
    }
    else {
      iVar8 = *(int *)(param_2 + 0x10);
      iVar7 = *(int *)(param_2 + 0xc) + (*(int *)(iVar8 + 8) - 1U & 0xfffffff8) + 8;
    }
    local_38 = (undefined1 *)0xb39057dd;
    uStack_34 = 0x481f619c;
    uStack_30 = 0x49291452;
    uStack_2c = 0xadfae395;
    uVar9 = (**(code **)(iVar8 + 0x48))(iVar7);
    puVar2 = (undefined4 *)(uVar9 >> 0x20);
    if ((uVar9 & 1) != 0 && puVar2 != (undefined4 *)0x0) {
      local_38 = (undefined1 *)&local_48;
      (*(code *)*puVar2)((uint *)(param_2 + 8),param_2,&local_38,&DAT_01d2eb94);
    }
  }
  local_38 = local_48;
  uStack_34 = uStack_44;
  uStack_30 = uStack_40;
  uStack_2c = uStack_3c;
  ppuVar4 = (undefined1 **)&DAT_01d30848;
  if (local_48 != (undefined1 *)0x0) {
    ppuVar4 = &local_38;
  }
  puVar3 = ppuVar4[1];
  puVar5 = ppuVar4[2];
  puVar6 = ppuVar4[3];
  *param_1 = *ppuVar4;
  param_1[1] = puVar3;
  param_1[2] = puVar5;
  param_1[3] = puVar6;
  return;
}

