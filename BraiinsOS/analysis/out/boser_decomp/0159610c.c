// FUN_0159610c @ 0159610c size=172 calls_out=3 calls_in=2
// strings: 

int FUN_0159610c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 *param_8)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_c8 [32];
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_88;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar4 = (undefined4 *)((uint)local_c8 | 4);
  uVar2 = param_8[1];
  uVar3 = param_8[2];
  uVar5 = param_8[3];
  uVar6 = param_8[4];
  uVar7 = param_8[5];
  *puVar4 = *param_8;
  puVar4[1] = uVar2;
  puVar4[2] = uVar3;
  puVar4[3] = uVar5;
  puVar4[4] = uVar6;
  puVar4[5] = uVar7;
  local_50 = 6;
  local_88 = 0x8000001e;
  local_4c = param_7;
  local_34 = param_6;
  local_38 = param_5;
  local_a8 = 1;
  local_a4 = param_3;
  local_a0 = param_4;
  local_30 = param_1;
  local_2c = param_2;
  iVar1 = thunk_FUN_01be5118(0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(iVar1,&local_a8,0x80);
  return iVar1;
}

