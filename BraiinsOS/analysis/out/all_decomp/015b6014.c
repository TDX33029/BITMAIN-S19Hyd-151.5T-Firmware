// FUN_015b6014 @ 015b6014 size=352 calls_out=4 calls_in=0
// strings: 

void FUN_015b6014(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  puVar3 = param_1 + 8;
  uVar1 = *puVar3;
  uVar2 = (uint)*(byte *)(param_1 + 0x1a);
  *puVar3 = uVar1 + uVar2;
  param_1[9] = param_1[9] + (uint)CARRY4(uVar1,uVar2);
  if (uVar2 != 0x40) {
    FUN_016dd606((int)(param_1 + 10) + uVar2,0,0x40 - uVar2);
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  FUN_00636768(param_1,param_1 + 10,0xffffffff);
  local_88 = *param_1;
  uStack_84 = param_1[1];
  uStack_80 = param_1[2];
  uStack_7c = param_1[3];
  local_78 = param_1[4];
  uStack_70 = param_1[6];
  uStack_74 = param_1[5];
  uStack_6c = param_1[7];
  *puVar3 = 0;
  param_1[9] = 0;
  *param_1 = 0x6b08e647;
  param_1[1] = 0xbb67ae85;
  param_1[2] = 0x3c6ef372;
  param_1[3] = 0xa54ff53a;
  param_1[4] = 0x510e527f;
  param_1[5] = 0x9b05688c;
  param_1[6] = 0x1f83d9ab;
  param_1[7] = 0x5be0cd19;
  *(undefined1 *)(param_1 + 0x1a) = 0;
  local_68 = local_88;
  uStack_64 = uStack_84;
  uStack_60 = uStack_80;
  uStack_5c = uStack_7c;
  local_58 = local_78;
  uStack_54 = uStack_74;
  uStack_50 = uStack_70;
  uStack_4c = uStack_6c;
  local_48 = local_88;
  local_44 = uStack_84;
  local_40 = uStack_80;
  uStack_3c = uStack_7c;
  local_38 = local_78;
  local_34 = uStack_74;
  local_30 = uStack_70;
  local_2c = uStack_6c;
  if (param_3 < 0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,0x20,param_3,&DAT_018aa2cc);
  }
  FUN_016dd1aa(param_2,&local_88,0x20);
  return;
}

