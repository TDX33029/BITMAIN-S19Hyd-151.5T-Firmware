// FUN_01bd4ea8 @ 01bd4ea8 size=92 calls_out=1 calls_in=10
// strings: 

uint FUN_01bd4ea8(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *extraout_r2;
  uint uVar2;
  undefined8 uVar3;
  
  uVar2 = 0xffffffff;
  puVar1 = param_1 + param_2;
  while (param_1 != puVar1) {
    uVar3 = FUN_01bd4e8c(*param_1,puVar1,param_1 + 1);
    uVar2 = uVar2 ^ ((uint)uVar3 ^ uVar2) & uVar2;
    param_1 = extraout_r2;
    puVar1 = (undefined4 *)((ulonglong)uVar3 >> 0x20);
  }
  return uVar2;
}

