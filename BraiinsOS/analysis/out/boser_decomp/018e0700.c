// FUN_018e0700 @ 018e0700 size=100 calls_out=1 calls_in=2
// strings: 

void FUN_018e0700(undefined4 *param_1,int param_2,uint param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 local_98;
  uint local_94;
  undefined2 local_1c;
  
  local_1c = 4;
  local_98 = 0x80000000;
  local_94 = (param_3 & 0xff) << 0x10 | 1;
  FUN_018e077c(param_2,&local_98,*(char *)(param_2 + 0x28) == '\x02');
  *(undefined1 *)(param_2 + 0xb1) = 1;
  uVar1 = param_4[1];
  uVar2 = param_4[2];
  uVar3 = param_4[3];
  *param_1 = *param_4;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = uVar3;
  return;
}

