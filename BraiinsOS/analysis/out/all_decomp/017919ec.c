// FUN_017919ec @ 017919ec size=180 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_017919ec(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  int local_20;
  uint local_14;
  
  local_14 = 0;
  local_20 = param_2;
  while( true ) {
    if (*(uint *)(param_1 + 0xd0) <= local_14) break;
    uVar4 = FUN_0178f9b0(local_20);
    puVar1 = (uint *)(param_1 + local_14 * 8);
    uVar2 = puVar1[1];
    puVar3 = (uint *)(param_1 + local_14 * 8);
    *puVar3 = (uint)uVar4 ^ *puVar1;
    puVar3[1] = (uint)((ulonglong)uVar4 >> 0x20) ^ uVar2;
    local_20 = local_20 + 8;
    local_14 = local_14 + 1;
  }
  return 0;
}

