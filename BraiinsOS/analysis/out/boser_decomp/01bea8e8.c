// FUN_01bea8e8 @ 01bea8e8 size=62 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_01bea8e8(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  
  uVar3 = param_2 - 1;
  if ((uVar3 < 0x40) && (2 < param_2 - 0x20U)) {
    uVar1 = 0;
    *(uint *)(param_1 + (uVar3 >> 5) * 4) =
         *(uint *)(param_1 + (uVar3 >> 5) * 4) | 1 << (uVar3 & 0x1f);
  }
  else {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar1 = 0xffffffff;
    *puVar2 = 0x16;
  }
  return uVar1;
}

