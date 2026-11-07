// FUN_015e785c @ 015e785c size=220 calls_out=4 calls_in=1
// strings: 

bool FUN_015e785c(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  bool bVar2;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  int local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  int *local_38;
  int **local_34;
  undefined1 *local_30;
  char *local_2c;
  undefined4 local_28;
  char *local_24;
  undefined4 local_20;
  undefined *local_1c;
  
  FUN_015e7960(&local_68,param_1);
  FUN_015ee0f4(&local_98,param_2,&local_68);
  bVar2 = true;
  if (local_98 != 2) {
    local_68 = local_98;
    uStack_64 = uStack_94;
    uStack_60 = uStack_90;
    uStack_5c = uStack_8c;
    uStack_58 = uStack_88;
    local_54 = local_84;
    uStack_50 = uStack_80;
    uStack_4c = uStack_7c;
    uStack_48 = uStack_78;
    uStack_44 = uStack_74;
    uStack_40 = uStack_70;
    if (3 < DAT_01d51b00) {
      local_30 = &LAB_015e95e0;
      local_34 = &local_38;
      local_1c = &DAT_01cfd7e8;
      local_20 = 0x17;
      local_24 = "m";
      local_28 = 0x17;
      local_2c = "m";
      local_38 = &local_68;
      FUN_015fb650(&DAT_005b72a7,&local_34,4,&local_2c);
    }
    iVar1 = local_68;
    FUN_015e7b58((uint)&local_68 | 4);
    bVar2 = iVar1 == 0;
  }
  return bVar2;
}

