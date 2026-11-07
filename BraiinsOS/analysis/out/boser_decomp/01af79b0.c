// FUN_01af79b0 @ 01af79b0 size=188 calls_out=1 calls_in=3
// strings: 

void FUN_01af79b0(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 *puVar5;
  undefined1 auStack_22 [2];
  undefined2 local_20;
  undefined1 local_1e;
  undefined1 local_1d;
  undefined1 local_1c;
  undefined1 local_1b;
  undefined1 local_1a;
  undefined1 local_19;
  undefined1 local_18;
  undefined1 local_17;
  
  uVar2 = (&DAT_005679b8)[(param_2 & 0xfff) >> 8];
  uVar3 = (&DAT_005679b8)[(param_2 & 0xff) >> 4];
  uVar4 = (&DAT_005679b8)[param_2 & 0xf];
  local_1d = (&DAT_005679b8)[param_2 >> 0x14];
  local_1c = (&DAT_005679b8)[(param_2 & 0xfffff) >> 0x10];
  local_1b = (&DAT_005679b8)[(param_2 & 0xffff) >> 0xc];
  local_1e = 0;
  uVar1 = (uint)LZCOUNT(param_2 | 1) >> 2;
  puVar5 = (undefined1 *)((uint)&local_20 | (uint)LZCOUNT(param_2 | 1) >> 2);
  local_20 = 0;
  auStack_22[uVar1] = 0x5c;
  *puVar5 = 0x7b;
  puVar5[-1] = 0x75;
  local_17 = 0x7d;
  local_1a = uVar2;
  local_19 = uVar3;
  local_18 = uVar4;
  FUN_01bed4e2(param_1,&local_20,10);
  *(undefined1 *)(param_1 + 0xb) = 10;
  *(char *)(param_1 + 10) = (char)uVar1 + -2;
  return;
}

