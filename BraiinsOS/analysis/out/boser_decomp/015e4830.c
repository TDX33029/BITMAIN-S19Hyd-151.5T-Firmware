// FUN_015e4830 @ 015e4830 size=72 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_015e4830(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 local_c;
  
  puVar1 = (undefined4 *)(param_1 + 0x51);
  if (*(char *)(param_1 + 0x50) == '\x01') {
    uVar2 = 0x10;
  }
  else {
    local_c = *puVar1;
    uVar2 = 4;
    puVar1 = &local_c;
  }
  FUN_01ac6cbc(param_2 + 0x24,puVar1,uVar2);
  return 2;
}

