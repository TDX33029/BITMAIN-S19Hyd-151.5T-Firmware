// FUN_01ac25d8 @ 01ac25d8 size=152 calls_out=3 calls_in=6
// strings: 

void FUN_01ac25d8(int param_1,undefined4 param_2)

{
  char cVar1;
  int iVar2;
  uint *puVar3;
  int extraout_r2;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  uint local_20;
  uint local_1c;
  uint uStack_18;
  uint local_14;
  
  iVar2 = thunk_FUN_01bee35a(param_1,param_2,0x2a8);
  puVar3 = (uint *)(iVar2 + extraout_r2);
  if ((*puVar3 & 1) == 0) {
    FUN_019d1f24(&local_20);
  }
  else {
    local_20 = puVar3[1];
    local_1c = puVar3[2];
    uStack_18 = puVar3[3];
    local_14 = puVar3[4];
  }
  iVar2 = *(int *)(param_1 + local_1c * 4);
  DataMemoryBarrier(0xb);
  cVar1 = '\0';
  if (iVar2 != 0) {
    cVar1 = *(char *)(iVar2 + local_14 * 0x14 + 0x10);
  }
  if (iVar2 == 0 || cVar1 == '\0') {
    uStack_2c = 0;
    uStack_28 = 4;
    local_24 = 0;
    local_30 = 0;
    FUN_01ac2404(param_1,&local_20,&local_30);
  }
  return;
}

