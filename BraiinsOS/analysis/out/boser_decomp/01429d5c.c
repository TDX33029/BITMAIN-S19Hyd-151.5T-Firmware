// FUN_01429d5c @ 01429d5c size=208 calls_out=5 calls_in=3
// strings: size overflows MAX_SIZE

void FUN_01429d5c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_70;
  undefined4 uStack_6c;
  uint local_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  int local_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined1 auStack_34 [20];
  
  local_50 = 0;
  uStack_4c = 0x18;
  uStack_48 = 0;
  local_44 = 0;
  FUN_0141d2a4(&local_70,param_1,&local_50);
  if (uStack_58._2_1_ == '\x02') {
    if (*(uint *)(local_70 + 0x28) <= local_68) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(local_68,*(uint *)(local_70 + 0x28),&DAT_01cf45e0);
    }
  }
  else {
    local_50 = local_70;
    uStack_4c = uStack_6c;
    uStack_48 = local_68;
    local_44 = local_64;
    uStack_40 = uStack_60;
    uStack_3c = uStack_5c;
    uStack_38 = uStack_58;
    FUN_01414a18(auStack_34,local_64,param_3,param_4);
    iVar1 = FUN_0141c1f0(&local_70,auStack_34);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc("size overflows MAX_SIZE",0x17,&local_50,&DAT_01d2f38c,&DAT_01d1e3d4);
    }
  }
  return;
}

