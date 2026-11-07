// FUN_01596048 @ 01596048 size=168 calls_out=3 calls_in=3
// strings: 

int FUN_01596048(undefined4 param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6,undefined4 *param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined1 local_c8 [32];
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined1 local_50;
  undefined4 local_4c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar3 = (undefined4 *)((uint)local_c8 | 4);
  uVar2 = param_7[1];
  uVar4 = param_7[2];
  uVar5 = param_7[3];
  uVar6 = param_7[4];
  uVar7 = param_7[5];
  *puVar3 = *param_7;
  puVar3[1] = uVar2;
  puVar3[2] = uVar4;
  puVar3[3] = uVar5;
  puVar3[4] = uVar6;
  puVar3[5] = uVar7;
  local_50 = 6;
  local_4c = param_6;
  local_88 = 0x8000001a;
  local_34 = param_5;
  local_a8 = *param_3;
  uStack_a4 = param_3[1];
  uStack_a0 = param_3[2];
  uStack_9c = param_3[3];
  local_98 = param_3[4];
  uStack_94 = param_3[5];
  uStack_90 = param_3[6];
  uStack_8c = param_3[7];
  local_38 = param_4;
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

