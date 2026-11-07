// FUN_00ce7e6c @ 00ce7e6c size=260 calls_out=4 calls_in=0
// strings: 

void FUN_00ce7e6c(uint *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined8 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined8 uVar8;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint local_48;
  undefined8 local_40;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar7 = param_2[8];
  iVar1 = uVar7 * 0x18;
  uVar2 = 0;
  if (0x5555555 < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar1);
  }
  uVar5 = 0;
  if (iVar1 == 0) {
    puVar3 = (undefined4 *)&DAT_00000008;
  }
  else {
    puVar3 = (undefined4 *)thunk_FUN_016d4a50(iVar1);
    uVar2 = uVar7;
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,iVar1);
    }
  }
  local_68 = *param_2;
  uStack_64 = param_2[1];
  uStack_60 = param_2[2];
  uStack_5c = param_2[3];
  local_58 = param_2[4];
  uStack_54 = param_2[5];
  uStack_50 = param_2[6];
  uStack_4c = param_2[7];
  puVar6 = puVar3;
  local_48 = uVar7;
  while (puVar4 = (undefined8 *)FUN_00c3b188(&local_68), puVar4 != (undefined8 *)0x0) {
    FUN_00cce358(&uStack_38,*(undefined4 *)((int)puVar4 + 0xc),*(undefined4 *)(puVar4 + 2));
    uVar8 = *puVar4;
    uVar5 = uVar5 + 1;
    local_40._0_4_ = (undefined4)uVar8;
    local_40._4_4_ = (undefined4)((ulonglong)uVar8 >> 0x20);
    *puVar6 = (undefined4)local_40;
    puVar6[1] = local_40._4_4_;
    puVar6[2] = uStack_38;
    puVar6[3] = uStack_34;
    puVar6[4] = uStack_30;
    puVar6[5] = uStack_2c;
    puVar6 = puVar6 + 6;
    local_40 = uVar8;
  }
  *param_1 = uVar2;
  param_1[1] = (uint)puVar3;
  param_1[2] = uVar5;
  return;
}

