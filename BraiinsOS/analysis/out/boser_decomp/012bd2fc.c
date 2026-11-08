// FUN_012bd2fc @ 012bd2fc size=184 calls_out=4 calls_in=1
// strings: 

void FUN_012bd2fc(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined1 local_68 [4];
  undefined1 local_64;
  undefined1 auStack_63 [15];
  undefined1 local_54;
  undefined1 local_50;
  undefined1 auStack_4f [15];
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  iVar1 = FUN_012bc650(4);
  if (*(int *)(iVar1 + 0x34) != 0) {
    FUN_00f80320(*(int *)(iVar1 + 0x34),*(undefined4 *)(iVar1 + 0x38));
  }
  *(undefined4 *)(iVar1 + 0x34) = param_3;
  *(undefined4 *)(iVar1 + 0x38) = param_4;
  FUN_01bed4e2((uint)auStack_40 | 3,param_1,0xc);
  FUN_01bed4e2((uint)auStack_30 | 3,param_2,0xc);
  local_68[0] = 1;
  local_64 = 2;
  FUN_01bed4e2(auStack_63,auStack_40,0xf);
  local_54 = 5;
  local_50 = 2;
  FUN_01bed4e2(auStack_4f,auStack_30,0xf);
  FUN_012bcd1c(iVar1,local_68);
  return;
}

