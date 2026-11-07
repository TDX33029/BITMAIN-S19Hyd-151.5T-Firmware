// FUN_0095a418 @ 0095a418 size=388 calls_out=6 calls_in=1
// strings: 

void FUN_0095a418(uint *param_1,uint *param_2,uint *param_3)

{
  undefined2 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint local_70;
  uint uStack_6c;
  uint local_68;
  undefined4 ***local_60;
  undefined1 *puStack_5c;
  undefined **ppuStack_58;
  undefined *local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 ***local_40;
  undefined1 *local_3c;
  undefined **local_38;
  undefined1 *local_34;
  
  puVar1 = (undefined2 *)thunk_FUN_016d4a50(3);
  if (puVar1 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,3);
  }
  *(undefined1 *)(puVar1 + 1) = 0x30;
  *puVar1 = 0x2e34;
  if (*param_3 == 0x80000000) {
    DataMemoryBarrier(0xb);
    if (DAT_018daf08 != 2) {
      FUN_0093f2bc();
    }
    local_60 = (undefined4 ***)&DAT_018daef0;
    DataMemoryBarrier(0xb);
    if (DAT_018daf08 != 2) {
      FUN_0093f2bc();
    }
    local_34 = &LAB_01110b14;
    local_3c = &LAB_01110b14;
    local_40 = &local_60;
    local_50 = &DAT_018daefc;
    local_38 = &local_50;
    FUN_00600d2c(&local_70,&DAT_00589d53,&local_40);
  }
  else {
    local_70 = *param_3;
    uStack_6c = param_3[1];
    local_68 = param_3[2];
  }
  FUN_015f3b0c(&local_40,0);
  local_4c = 0;
  local_50 = (undefined *)0x0;
  local_60 = local_40;
  puStack_5c = local_3c;
  ppuStack_58 = local_38;
  local_48 = 0;
  FUN_015f3c24(&local_40,&local_60,&local_50);
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar3 = *param_2;
  *param_1 = (uint)(local_34 == (undefined1 *)0x0) & ((uint)local_40 ^ 1);
  param_1[1] = (uint)local_38;
  param_1[8] = local_70;
  param_1[9] = uStack_6c;
  param_1[10] = local_68;
  param_1[2] = 3;
  param_1[3] = (uint)puVar1;
  param_1[4] = 3;
  param_1[5] = uVar3;
  param_1[6] = uVar2;
  param_1[7] = uVar4;
  return;
}

