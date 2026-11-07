// FUN_008ee5e0 @ 008ee5e0 size=352 calls_out=5 calls_in=0
// strings: 

undefined4 FUN_008ee5e0(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_58;
  int local_54;
  int local_50;
  int *local_4c;
  undefined4 local_48;
  uint local_44;
  int *local_40;
  undefined4 *local_3c;
  uint uStack_38;
  int local_30;
  int *local_2c;
  code *local_28;
  
  iVar7 = *(int *)(param_1 + 8);
  if (iVar7 == 0) {
    iVar5 = 1;
    iVar4 = 0;
    iVar6 = 0;
  }
  else {
    iVar8 = *(int *)(param_1 + 4);
    iVar4 = 0;
    iVar5 = 1;
    iVar6 = 0;
    do {
      local_28 = FUN_01576770;
      local_2c = &local_30;
      local_30 = iVar8;
      FUN_00600d2c(&local_40,&DAT_00357aa5,&local_2c);
      uVar2 = uStack_38;
      puVar1 = local_3c;
      local_4c = local_40;
      local_48 = local_3c;
      local_44 = uStack_38;
      local_58 = iVar4;
      local_54 = iVar5;
      local_50 = iVar6;
      if ((uint)(iVar4 - iVar6) < uStack_38) {
        FUN_008f563c(&local_58,iVar6,uStack_38,1,1);
      }
      iVar6 = local_50;
      FUN_016dd1aa(local_54 + local_50,puVar1,uVar2);
      iVar5 = local_54;
      iVar4 = local_58;
      if (local_4c != (int *)0x0) {
        thunk_FUN_016d3fb4(local_48);
      }
      iVar6 = iVar6 + uVar2;
      iVar8 = iVar8 + 1;
      iVar7 = iVar7 + -1;
    } while (iVar7 != 0);
  }
  local_3c = &DAT_006043a8;
  local_40 = &local_58;
  local_58 = iVar4;
  local_54 = iVar5;
  local_50 = iVar6;
  uVar3 = FUN_00fa948c(*param_2,param_2[1],&DAT_00599b16,&local_40);
  if (local_58 != 0) {
    thunk_FUN_016d3fb4(local_54);
  }
  return uVar3;
}

