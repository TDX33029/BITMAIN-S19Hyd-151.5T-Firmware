// FUN_012bcb04 @ 012bcb04 size=216 calls_out=5 calls_in=1
// strings: 

undefined4
FUN_012bcb04(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            int *param_5)

{
  undefined4 uVar1;
  undefined1 local_6c [4];
  undefined4 local_68;
  int iStack_64;
  int iStack_60;
  undefined1 local_58;
  undefined1 local_54;
  undefined4 local_50;
  undefined1 local_44;
  undefined1 local_40;
  undefined4 local_3c;
  undefined1 auStack_30 [16];
  
  uVar1 = FUN_012bc650(6);
  FUN_012bc780(uVar1,param_1);
  FUN_01bed4e2((uint)auStack_30 | 3,param_2,0xc);
  local_68 = CONCAT31(local_68._1_3_,2);
  local_6c[0] = 1;
  FUN_01bed4e2((int)&local_68 + 1,auStack_30,0xf);
  local_40 = 6;
  local_44 = 6;
  local_54 = 6;
  local_58 = 8;
  local_50 = param_3;
  local_3c = param_4;
  FUN_012bc91c(uVar1,local_6c);
  if (*param_5 != -0x80000000) {
    local_68 = *param_5;
    iStack_64 = param_5[1];
    iStack_60 = param_5[2];
    local_6c[0] = 4;
    FUN_012bca08(uVar1,0xf,local_6c);
  }
  return uVar1;
}

