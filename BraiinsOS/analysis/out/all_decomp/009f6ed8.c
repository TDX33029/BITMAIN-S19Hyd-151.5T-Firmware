// FUN_009f6ed8 @ 009f6ed8 size=160 calls_out=1 calls_in=1
// strings: 

bool FUN_009f6ed8(int param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
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
    iVar1 = (**(code **)(puVar4[1] + 0x2c))(*puVar4,param_2,0,0,param_1 + 0xc);
    iVar3 = iVar3 + -8;
    puVar4 = puVar4 + 2;
  } while (iVar1 != 0);
  return false;
}

