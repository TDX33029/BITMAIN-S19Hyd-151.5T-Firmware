// FUN_0066439c @ 0066439c size=36 calls_out=2 calls_in=2239
// strings: 

void FUN_0066439c(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined8 uVar2;
  
  uVar2 = FUN_019a4630(param_2,param_1);
  puVar1 = (undefined4 *)((ulonglong)uVar2 >> 0x20);
  FUN_012fb170(*(undefined4 *)((int)uVar2 + 4),*(undefined4 *)((int)uVar2 + 8),*puVar1,puVar1[1]);
  return;
}

