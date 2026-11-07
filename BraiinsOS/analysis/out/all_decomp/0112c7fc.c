// FUN_0112c7fc @ 0112c7fc size=144 calls_out=3 calls_in=2
// strings: 

void FUN_0112c7fc(undefined4 *param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined1 auStack_8c [20];
  int local_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  int local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  local_74 = *param_3;
  uStack_70 = param_3[1];
  uStack_6c = param_3[2];
  local_78 = 2;
  FUN_0161cae8(auStack_8c,&local_78);
  FUN_01134840(&local_78,param_2 + 0x1b0,auStack_8c);
  uVar1 = 0x11;
  if (local_78 != -0x80000000) {
    local_38 = local_78;
    uStack_34 = local_74;
    uStack_30 = uStack_70;
    uStack_2c = uStack_6c;
    uStack_28 = uStack_68;
    uStack_24 = uStack_64;
    FUN_011330d8(param_1 + 1);
    uVar1 = 0xb;
  }
  *param_1 = uVar1;
  return;
}

