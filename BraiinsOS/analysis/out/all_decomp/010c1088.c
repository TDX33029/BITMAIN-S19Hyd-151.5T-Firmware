// FUN_010c1088 @ 010c1088 size=288 calls_out=5 calls_in=1
// strings: 

void FUN_010c1088(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int local_70;
  undefined4 local_6c;
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
  
  local_6c = 0x18;
  local_64 = 0;
  local_68 = 0;
  local_70 = 0;
  FUN_010b0e04(&local_50,param_1,&local_70);
  if (uStack_38._2_1_ == '\x03') {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0040929f,0x17,auStack_34,&DAT_018a62e4,&DAT_018a6164);
  }
  local_70 = local_50;
  local_6c = uStack_4c;
  local_68 = uStack_48;
  local_64 = local_44;
  uStack_60 = uStack_40;
  uStack_5c = uStack_3c;
  uStack_58 = uStack_38;
  if (uStack_38._2_1_ == '\x02') {
    if (*(uint *)(local_50 + 0x28) <= uStack_48) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uStack_48,*(uint *)(local_50 + 0x28),&DAT_018a6314);
    }
  }
  else {
    FUN_010a6d6c(auStack_34,local_44,param_3,param_4);
    iVar1 = FUN_010b082c(&local_70,auStack_34);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_0040929f,0x17,auStack_34,&DAT_018a62e4,&DAT_018a6324);
    }
  }
  return;
}

