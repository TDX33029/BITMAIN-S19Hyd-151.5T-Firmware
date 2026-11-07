// FUN_015e539c @ 015e539c size=224 calls_out=4 calls_in=3
// strings: 

void FUN_015e539c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_6c;
  undefined4 *local_68;
  code *local_64;
  char *local_60;
  undefined4 local_5c;
  char *local_58;
  undefined4 local_54;
  undefined *local_50;
  
  if (4 < DAT_01d51b00) {
    local_50 = &DAT_01cfd418;
    local_64 = FUN_015de8d4;
    local_68 = &local_6c;
    local_54 = 0x13;
    local_58 = "m";
    local_5c = 0x13;
    local_60 = "m";
    local_6c = param_2;
    FUN_015fb650(&DAT_0057cd78,&local_68,5,&local_60);
  }
  FUN_01bed4e2(&local_60,param_2,0x50);
  uVar1 = FUN_015e0ea0(&local_60);
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 == *(int *)(param_1 + 0x14)) {
    FUN_015f5b78();
  }
  *(int *)(param_1 + 0x1c) = iVar3 + 1;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar3 * 0x10);
  *puVar2 = uVar1;
  puVar2[1] = &DAT_01cfd6d8;
  puVar2[2] = 0;
  puVar2[3] = 0;
  return;
}

