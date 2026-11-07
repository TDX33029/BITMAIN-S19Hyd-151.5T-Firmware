// FUN_013baffc @ 013baffc size=552 calls_out=8 calls_in=2
// strings: 

void FUN_013baffc(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  undefined4 *puVar2;
  int extraout_r2;
  undefined4 uVar3;
  int iVar4;
  uint *puVar5;
  bool bVar6;
  undefined8 uVar7;
  undefined4 *local_60;
  undefined4 *local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  undefined4 *local_50;
  undefined4 *local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  uint uStack_28;
  uint uStack_24;
  
  local_5c = (undefined4 *)param_1[2];
  local_60 = param_2;
  if (param_2 != local_5c) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&local_60,&local_5c,0);
  }
  local_58 = (undefined4 *)param_1[5];
  local_50 = param_2;
  if (param_2 != local_58) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&local_50,&local_58,0);
  }
  local_54 = (undefined4 *)param_1[8];
  if (param_2 != local_54) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb3aac(0,&local_50,&local_54,0);
  }
  iVar1 = param_1[1];
  bVar6 = param_2 == (undefined4 *)0x0;
  uVar3 = 0;
  if (!bVar6) {
    param_3 = iVar1 + (int)param_2 * 8;
    bVar6 = param_3 == 8;
  }
  if (!bVar6) {
    uVar3 = *(undefined4 *)(param_3 + -4);
  }
  if (param_2 == (undefined4 *)*param_1) {
    FUN_013c3fcc(param_1);
    iVar1 = param_1[1];
  }
  puVar2 = (undefined4 *)(iVar1 + (int)param_2 * 8);
  *puVar2 = uVar3;
  puVar2[1] = uVar3;
  uVar7 = thunk_FUN_016de0ee(puVar2,param_2,0x2c0);
  puVar5 = (uint *)((int)uVar7 + extraout_r2);
  param_1[2] = (int)((ulonglong)uVar7 >> 0x20) + 1;
  if ((char)puVar5[4] == '\0') {
    FUN_015f62e4(&local_30);
    *puVar5 = local_30;
    puVar5[1] = uStack_2c;
    puVar5[2] = uStack_28;
    puVar5[3] = uStack_24;
    *(undefined1 *)(puVar5 + 4) = 1;
  }
  local_40 = *puVar5;
  uStack_3c = puVar5[1];
  uStack_38 = puVar5[2];
  local_34 = puVar5[3];
  *puVar5 = local_40 + 1;
  puVar5[1] = uStack_3c + (0xfffffffe < local_40);
  iVar1 = param_1[5];
  local_4c = (undefined4 *)0x0;
  local_48 = 0;
  uStack_44 = 0;
  local_50 = &DAT_005674cc;
  if (iVar1 == param_1[3]) {
    FUN_013c4214(param_1 + 3);
  }
  puVar2 = (undefined4 *)(param_1[4] + iVar1 * 0x20);
  *puVar2 = local_50;
  puVar2[1] = local_4c;
  puVar2[2] = local_48;
  puVar2[3] = uStack_44;
  puVar2[4] = local_40;
  puVar2[5] = uStack_3c;
  puVar2[6] = uStack_38;
  puVar2[7] = local_34;
  param_1[5] = iVar1 + 1;
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  iVar1 = param_1[6];
  *puVar2 = 0;
  iVar4 = param_1[8];
  local_48 = 1;
  local_50 = (undefined4 *)0x1;
  local_4c = puVar2;
  if (iVar4 == iVar1) {
    FUN_013c402c();
  }
  param_1[8] = iVar4 + 1;
  puVar2 = (undefined4 *)(param_1[7] + iVar4 * 0xc);
  *puVar2 = local_50;
  iVar1 = param_1[9];
  puVar2[1] = local_4c;
  puVar2[2] = local_48;
  param_1[9] = iVar1 + 8;
  return;
}

