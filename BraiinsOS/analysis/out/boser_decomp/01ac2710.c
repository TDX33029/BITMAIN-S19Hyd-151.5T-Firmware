// FUN_01ac2710 @ 01ac2710 size=124 calls_out=2 calls_in=2
// strings: 

int FUN_01ac2710(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  int extraout_r2;
  undefined1 local_20 [4];
  uint local_1c;
  uint local_14;
  
  iVar1 = thunk_FUN_01bee35a(param_1,param_2,0x2a8);
  puVar3 = (uint *)(iVar1 + extraout_r2);
  if ((*puVar3 & 1) == 0) {
    FUN_019d1f24(local_20);
  }
  else {
    local_1c = puVar3[2];
    local_14 = puVar3[4];
  }
  iVar1 = *(int *)(param_1 + local_1c * 4);
  DataMemoryBarrier(0xb);
  if (iVar1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar1 = iVar1 + local_14 * 0x14;
    iVar2 = 0;
    if (*(char *)(iVar1 + 0x10) != '\0') {
      iVar2 = iVar1;
    }
  }
  return iVar2;
}

