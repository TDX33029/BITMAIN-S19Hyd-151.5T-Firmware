// FUN_018f1f40 @ 018f1f40 size=108 calls_out=1 calls_in=8
// strings: 

void FUN_018f1f40(undefined4 *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_94;
  uint local_90;
  undefined2 local_1c;
  
  local_1c = 4;
  local_94 = 0x80000001;
  local_90 = (param_3 & 0xff) << 0x10 | 1;
  FUN_018f1fc4(param_2,&local_94,*(char *)(param_2 + 0x31) == '\x02');
  *(undefined1 *)(param_2 + 0x255) = 1;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *param_1 = *param_4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  uVar1 = param_4[5];
  uVar2 = param_4[6];
  uVar3 = param_4[7];
  param_1[4] = param_4[4];
  param_1[5] = uVar1;
  param_1[6] = uVar2;
  param_1[7] = uVar3;
  return;
}

