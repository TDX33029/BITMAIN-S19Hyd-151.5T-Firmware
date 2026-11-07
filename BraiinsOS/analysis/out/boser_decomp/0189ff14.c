// FUN_0189ff14 @ 0189ff14 size=192 calls_out=1 calls_in=2
// strings: 

void FUN_0189ff14(int param_1,uint param_2)

{
  uint uVar1;
  undefined1 uVar2;
  undefined1 *puVar3;
  undefined1 auStack_2a [2];
  undefined2 local_28;
  undefined1 local_26;
  undefined1 local_25;
  undefined1 local_24;
  undefined1 local_23;
  undefined1 local_22;
  undefined1 local_21;
  undefined1 local_20;
  undefined1 local_1f;
  
  local_22 = (&DAT_005679b8)[(param_2 & 0xfff) >> 8];
  uVar2 = (&DAT_005679b8)[param_2 & 0xf];
  local_21 = (&DAT_005679b8)[(param_2 & 0xff) >> 4];
  local_25 = (&DAT_005679b8)[param_2 >> 0x14];
  local_24 = (&DAT_005679b8)[(param_2 & 0xfffff) >> 0x10];
  local_23 = (&DAT_005679b8)[(param_2 & 0xffff) >> 0xc];
  puVar3 = (undefined1 *)((uint)&local_28 | (uint)LZCOUNT(param_2 | 1) >> 2);
  uVar1 = (uint)LZCOUNT(param_2 | 1) >> 2;
  local_26 = 0;
  local_28 = 0;
  *puVar3 = 0x7b;
  puVar3[-1] = 0x75;
  local_1f = 0x7d;
  auStack_2a[uVar1] = 0x5c;
  local_20 = uVar2;
  FUN_01bed4e2(param_1,&local_28,10);
  *(undefined1 *)(param_1 + 0xb) = 10;
  *(char *)(param_1 + 10) = (char)uVar1 + -2;
  return;
}

