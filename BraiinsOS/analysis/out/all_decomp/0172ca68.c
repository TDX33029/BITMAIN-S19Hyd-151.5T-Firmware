// FUN_0172ca68 @ 0172ca68 size=36 calls_out=0 calls_in=1
// strings: 

uint FUN_0172ca68(int param_1)

{
  uint uVar1;
  
  uVar1 = 0;
  if (*(int *)(param_1 + 0x18) != 0) {
    uVar1 = *(uint *)(*(int *)(param_1 + 0x18) + 0x10) & 1;
  }
  return uVar1;
}

