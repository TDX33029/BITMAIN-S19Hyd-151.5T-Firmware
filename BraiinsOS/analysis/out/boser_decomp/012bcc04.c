// FUN_012bcc04 @ 012bcc04 size=228 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_012bcc04(undefined4 param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  undefined4 uVar1;
  undefined1 local_70 [4];
  undefined4 local_6c;
  int iStack_68;
  int iStack_64;
  undefined1 local_5c;
  undefined1 local_58;
  undefined1 auStack_57 [15];
  undefined1 auStack_48 [16];
  undefined1 auStack_38 [20];
  
  uVar1 = FUN_012bc650(5);
  FUN_012bc780(uVar1,param_1);
  FUN_01bed4e2((uint)auStack_48 | 3,param_3,0xc);
  FUN_01bed4e2((uint)auStack_38 | 3,param_2,0xc);
  local_70[0] = 1;
  local_6c = CONCAT31(local_6c._1_3_,2);
  FUN_01bed4e2((int)&local_6c + 1,auStack_48,0xf);
  local_5c = 5;
  local_58 = 2;
  FUN_01bed4e2(auStack_57,auStack_38,0xf);
  FUN_012bcd1c(uVar1,local_70);
  if (*param_4 != -0x80000000) {
    local_6c = *param_4;
    iStack_68 = param_4[1];
    iStack_64 = param_4[2];
    local_70[0] = 4;
    FUN_012bca08(uVar1,0xf,local_70);
  }
  return uVar1;
}

