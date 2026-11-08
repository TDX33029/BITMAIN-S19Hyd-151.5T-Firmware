// FUN_018ff0c4 @ 018ff0c4 size=268 calls_out=7 calls_in=1
// strings: 

void FUN_018ff0c4(int param_1,int param_2)

{
  int iVar1;
  undefined1 local_168 [68];
  int local_124;
  undefined4 local_120;
  undefined4 local_11c;
  int local_118;
  undefined2 local_114;
  int local_110;
  undefined4 local_10c;
  undefined4 local_108;
  undefined4 local_104;
  undefined2 local_fc;
  undefined2 local_98;
  int local_90;
  uint local_8c;
  undefined4 uStack_88;
  
  FUN_018fec60(local_168,param_1,*(undefined1 *)(param_2 + 0x250));
  local_8c = local_8c & 0xffffff00;
  local_90 = -0x7fffffef;
  FUN_0191d7c0(&local_110,&local_90);
  local_98 = 5;
  FUN_01917558(&local_124,&local_110);
  local_104 = local_11c;
  local_fc = local_114;
  local_108 = local_120;
  local_10c = 0;
  local_110 = local_118;
  FUN_0190aedc(&local_90,param_2,&local_110);
  FUN_01931328(&local_110,&local_90);
  local_90 = local_110;
  local_8c = local_10c;
  uStack_88 = local_108;
  iVar1 = *(int *)(param_2 + 0x234);
  if (iVar1 != -0x80000000) {
    FUN_0134bd64(iVar1,*(undefined4 *)(param_2 + 0x238));
  }
  *(int *)(param_2 + 0x234) = local_90;
  *(uint *)(param_2 + 0x238) = local_8c;
  *(undefined4 *)(param_2 + 0x23c) = uStack_88;
  if (local_124 != -0x80000000) {
    FUN_0134bd64(local_124,local_120);
  }
  FUN_018fe45c(*(undefined4 *)(param_1 + 8),local_168,param_2);
  iVar1 = 0;
  do {
    local_168[iVar1] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x40);
  return;
}

