// FUN_00c6fc10 @ 00c6fc10 size=392 calls_out=8 calls_in=0
// strings: 

void FUN_00c6fc10(undefined4 *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  undefined8 uVar12;
  uint local_88;
  int local_84;
  uint uStack_80;
  uint local_78;
  int local_74;
  uint local_6c [3];
  int local_60;
  uint local_5c;
  undefined4 local_58;
  int local_54;
  int local_50;
  uint local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar4 = *param_2;
  uVar7 = param_2[2];
  local_78 = 0;
  if (iVar4 == 0) {
    uVar7 = 0;
  }
  uVar8 = (uint)(iVar4 != 0);
  uVar1 = uVar7 * 0x20;
  bVar11 = 0x7fffffe < uVar7;
  bVar10 = uVar7 == 0x7ffffff;
  if (uVar7 < 0x8000000) {
    bVar11 = 0x7ffffff7 < uVar1;
    bVar10 = uVar1 == 0x7ffffff8;
  }
  if (bVar11 && !bVar10) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4();
  }
  iVar9 = param_2[1];
  uVar5 = 0;
  if (uVar1 == 0) {
    iVar2 = 8;
  }
  else {
    iVar2 = thunk_FUN_016d4a50(uVar1);
    local_78 = uVar7;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(8,uVar1);
    }
  }
  local_58 = 0;
  local_6c[1] = 0;
  local_74 = iVar2;
  local_6c[0] = uVar8;
  local_6c[2] = iVar4;
  local_60 = iVar9;
  local_5c = uVar8;
  local_54 = iVar4;
  local_50 = iVar9;
  local_4c = uVar7;
  while( true ) {
    uVar12 = FUN_00c3901c(local_6c);
    iVar4 = (int)((ulonglong)uVar12 >> 0x20);
    if ((undefined4 *)uVar12 == (undefined4 *)0x0) break;
    uVar6 = *(undefined4 *)uVar12;
    FUN_00cce358(&local_38,*(undefined4 *)(iVar4 + 0x24),*(undefined4 *)(iVar4 + 0x28));
    uVar12 = *(undefined8 *)(iVar4 + 0x18);
    puVar3 = (undefined4 *)(iVar2 + uVar5 * 0x20);
    uVar5 = uVar5 + 1;
    local_40._0_4_ = (undefined4)uVar12;
    local_40._4_4_ = (undefined4)((ulonglong)uVar12 >> 0x20);
    *puVar3 = uVar6;
    puVar3[1] = uStack_44;
    puVar3[2] = (undefined4)local_40;
    puVar3[3] = local_40._4_4_;
    puVar3[4] = local_38;
    puVar3[5] = uStack_34;
    puVar3[6] = uStack_30;
    puVar3[7] = uStack_2c;
    local_48 = uVar6;
    local_40 = uVar12;
  }
  local_88 = local_78;
  local_84 = local_74;
  uStack_80 = uVar5;
  if (uVar5 == 0) {
    param_1[2] = 0;
    *param_1 = 0;
    if (local_78 != 0) {
      thunk_FUN_016d3fb4(local_74);
      return;
    }
  }
  else {
    if (uVar5 != 1) {
      if (uVar5 < 0x15) {
        FUN_00b5e8d4(local_74,uVar5);
      }
      else {
        FUN_00cd95c8(local_74,uVar5);
      }
    }
    FUN_00c3ce68(param_1,&local_88);
  }
  return;
}

