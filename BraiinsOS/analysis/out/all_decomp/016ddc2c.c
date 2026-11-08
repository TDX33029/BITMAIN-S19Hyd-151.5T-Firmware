// FUN_016ddc2c @ 016ddc2c size=48 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_016ddc2c(int param_1,uint param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if ((param_2 & 0xffffeff0) == 0) {
    *(uint *)(param_1 + 8) = *(uint *)(param_1 + 8) & 0xffffeff0 | param_2;
    uVar2 = 0;
  }
  else {
    puVar1 = (undefined4 *)FUN_016d2bc8();
    uVar2 = 0xffffffff;
    *puVar1 = 0x16;
  }
  return uVar2;
}

