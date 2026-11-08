// FUN_015e512c @ 015e512c size=224 calls_out=4 calls_in=3
// strings: 

void FUN_015e512c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_84;
  undefined4 *local_80;
  code *local_7c;
  char *local_78;
  undefined4 local_74;
  char *local_70;
  undefined4 local_6c;
  undefined *local_68;
  
  if (4 < DAT_01d51b00) {
    local_68 = &DAT_01cfd418;
    local_7c = FUN_015de048;
    local_80 = &local_84;
    local_6c = 0x13;
    local_70 = "m";
    local_74 = 0x13;
    local_78 = "m";
    local_84 = param_2;
    FUN_015fb650(&DAT_0057cd78,&local_80,5,&local_78);
  }
  FUN_01bed4e2(&local_78,param_2,0x68);
  uVar1 = FUN_015e0e3c(&local_78);
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 == *(int *)(param_1 + 0x14)) {
    FUN_015f5b78();
  }
  *(int *)(param_1 + 0x1c) = iVar3 + 1;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar3 * 0x10);
  *puVar2 = uVar1;
  puVar2[1] = &DAT_01cfd658;
  puVar2[2] = 0;
  puVar2[3] = 0;
  return;
}

