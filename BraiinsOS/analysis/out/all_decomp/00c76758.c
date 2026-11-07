// FUN_00c76758 @ 00c76758 size=112 calls_out=3 calls_in=1
// strings: 

int FUN_00c76758(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined **local_60 [8];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  puVar2 = (undefined4 *)((uint)local_60 | 4);
  local_60[0] = &PTR_FUN_018754f8;
  uVar3 = param_2[1];
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar6 = param_2[4];
  uVar7 = param_2[5];
  *puVar2 = *param_2;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar2[4] = uVar6;
  puVar2[5] = uVar7;
  local_40 = *param_1;
  uStack_3c = param_1[1];
  uStack_38 = param_1[2];
  uStack_34 = param_1[3];
  uStack_30 = param_1[4];
  local_2c = param_1[5];
  uStack_28 = param_1[6];
  uStack_24 = param_1[7];
  uStack_20 = param_1[8];
  uStack_1c = param_1[9];
  iVar1 = thunk_FUN_016d4a50(0x48);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x48);
  }
  FUN_016dd1aa(iVar1,local_60,0x48);
  return iVar1;
}

