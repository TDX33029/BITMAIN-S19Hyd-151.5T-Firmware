// FUN_015e5f8c @ 015e5f8c size=216 calls_out=4 calls_in=1
// strings: 

void FUN_015e5f8c(int param_1,undefined4 param_2)

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
    local_68 = &DAT_01cfd428;
    local_7c = FUN_015de048;
    local_80 = &local_84;
    local_6c = 0x13;
    local_70 = "m";
    local_74 = 0x13;
    local_78 = "m";
    local_84 = param_2;
    FUN_015fb650(&DAT_005bae71,&local_80,5,&local_78);
  }
  FUN_01bed4e2(&local_78,param_2,0x68);
  uVar1 = FUN_015e0e3c(&local_78);
  iVar3 = *(int *)(param_1 + 0x34);
  if (iVar3 == *(int *)(param_1 + 0x2c)) {
    FUN_015f5ab8();
  }
  *(int *)(param_1 + 0x34) = iVar3 + 1;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x30) + iVar3 * 8);
  *puVar2 = uVar1;
  puVar2[1] = &DAT_01cfd658;
  return;
}

