// FUN_01527190 @ 01527190 size=108 calls_out=1 calls_in=0
// strings: 

void FUN_01527190(undefined4 *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_94;
  uint local_90;
  undefined2 local_1c;
  
  local_94 = 0x80000001;
  local_1c = 4;
  local_90 = (param_3 & 0xff) << 0x10 | 1;
  FUN_01525ed4(param_2,&local_94,*(char *)(param_2 + 0x31) == '\x02');
  uVar1 = *param_4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  *(undefined1 *)(param_2 + 0x255) = 1;
  *param_1 = 0x8000001b;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

