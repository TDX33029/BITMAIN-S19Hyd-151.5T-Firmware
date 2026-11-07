// FUN_0060674c @ 0060674c size=176 calls_out=3 calls_in=0
// strings: 

void FUN_0060674c(undefined1 *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined1 auStack_300 [248];
  undefined1 auStack_208 [248];
  undefined1 auStack_110 [248];
  
  if (((param_3 == 0x20) && (iVar1 = FUN_01713fa8(param_2,0x100,auStack_208), iVar1 == 0)) &&
     (iVar1 = FUN_01714044(param_2,0x100,auStack_300), iVar1 == 0)) {
    FUN_016dd1aa(auStack_110,auStack_208,0xf4);
    FUN_016dd1aa(param_1 + 0xf8,auStack_300,0xf4);
    FUN_016dd1aa((uint)auStack_300 | 3,auStack_110,0xf4);
    *param_1 = 2;
    FUN_016dd1aa(param_1 + 1,auStack_300,0xf7);
    return;
  }
  *param_1 = 4;
  return;
}

