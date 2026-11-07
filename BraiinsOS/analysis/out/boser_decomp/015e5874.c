// FUN_015e5874 @ 015e5874 size=224 calls_out=4 calls_in=3
// strings: 

void FUN_015e5874(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 local_74;
  undefined4 *local_70;
  code *local_6c;
  char *local_68;
  undefined4 local_64;
  char *local_60;
  undefined4 local_5c;
  undefined *local_58;
  
  if (4 < DAT_01d51b00) {
    local_58 = &DAT_01cfd418;
    local_6c = FUN_015ddce0;
    local_70 = &local_74;
    local_5c = 0x13;
    local_60 = "m";
    local_64 = 0x13;
    local_68 = "m";
    local_74 = param_2;
    FUN_015fb650(&DAT_0057cd78,&local_70,5,&local_68);
  }
  FUN_01bed4e2(&local_68,param_2,0x58);
  uVar1 = FUN_015e1388(&local_68);
  iVar3 = *(int *)(param_1 + 0x1c);
  if (iVar3 == *(int *)(param_1 + 0x14)) {
    FUN_015f5b78();
  }
  *(int *)(param_1 + 0x1c) = iVar3 + 1;
  puVar2 = (undefined4 *)(*(int *)(param_1 + 0x18) + iVar3 * 0x10);
  *puVar2 = uVar1;
  puVar2[1] = &DAT_01cfd4d8;
  puVar2[2] = 0;
  puVar2[3] = 0;
  return;
}

