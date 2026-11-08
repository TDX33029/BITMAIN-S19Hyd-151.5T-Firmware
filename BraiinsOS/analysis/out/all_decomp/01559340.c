// FUN_01559340 @ 01559340 size=588 calls_out=8 calls_in=1
// strings: 

void FUN_01559340(int param_1,int param_2)

{
  uint uVar1;
  undefined1 local_1dc [68];
  uint local_198;
  undefined4 local_194;
  uint local_190;
  undefined4 local_18c;
  undefined2 local_184;
  undefined2 local_120;
  uint local_118;
  undefined4 uStack_114;
  uint uStack_110;
  uint local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined1 auStack_fc [108];
  uint local_90;
  uint local_8c;
  undefined4 local_88;
  uint local_84;
  undefined2 local_80;
  
  FUN_01556ce0(local_1dc,param_1,*(undefined1 *)(param_2 + 0x250));
  local_90 = 0x80000011;
  local_8c = local_8c & 0xffffff00;
  local_190 = 0;
  local_194 = 1;
  local_198 = 0;
  FUN_0150e524(&local_90,&local_198,0x80000000);
  local_108 = local_198;
  uStack_104 = local_194;
  uStack_100 = local_190;
  FUN_016dd1aa(auStack_fc,&local_90,0x6c);
  local_120 = 5;
  FUN_016dd1aa(&local_198,&local_108,0x78);
  FUN_0152245c(&local_90,&local_198);
  uVar1 = local_8c;
  local_18c = local_88;
  local_184 = local_80;
  local_190 = local_8c;
  local_194 = 0;
  local_198 = local_84;
  FUN_0152c928(&local_108,param_2,&local_198);
  FUN_01533edc(&local_198,&local_108);
  local_118 = local_198;
  uStack_114 = local_194;
  uStack_110 = local_190;
  if ((*(uint *)(param_2 + 0x234) & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x238));
  }
  *(uint *)(param_2 + 0x234) = local_118;
  *(undefined4 *)(param_2 + 0x238) = uStack_114;
  *(uint *)(param_2 + 0x23c) = uStack_110;
  if ((local_90 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(uVar1);
  }
  FUN_01556f4c(*(undefined4 *)(param_1 + 8),local_1dc,param_2);
  return;
}

