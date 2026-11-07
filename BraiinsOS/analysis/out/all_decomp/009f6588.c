// FUN_009f6588 @ 009f6588 size=172 calls_out=1 calls_in=1
// strings: 

bool FUN_009f6588(int param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  int extraout_r2;
  int iVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  puVar4 = *(undefined4 **)(param_1 + 4);
  iVar3 = *(int *)(param_1 + 8) << 3;
  iVar1 = param_1;
  do {
    if (iVar3 == 0) {
      uVar5 = thunk_FUN_016de0ee(iVar1,0x80);
      puVar2 = (uint *)((int)uVar5 + (int)((ulonglong)uVar5 >> 0x20));
      return *(char *)(param_1 + 0x98) == '\0' || (*puVar2 & puVar2[1]) != 0xffffffff;
    }
    uVar5 = (**(code **)(puVar4[1] + 0x18))(*puVar4,param_2,0,0,param_1 + 0xc);
    iVar1 = (int)uVar5;
    iVar3 = iVar3 + -8;
    puVar4 = puVar4 + 2;
  } while (iVar1 != 0);
  iVar3 = thunk_FUN_016de0ee(0,(int)((ulonglong)uVar5 >> 0x20),0x80);
  *(undefined4 *)(iVar3 + extraout_r2) = 0;
  ((undefined4 *)(iVar3 + extraout_r2))[1] = 0;
  return false;
}

