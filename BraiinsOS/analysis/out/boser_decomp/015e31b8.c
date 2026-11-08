// FUN_015e31b8 @ 015e31b8 size=252 calls_out=1 calls_in=3
// strings: 

bool FUN_015e31b8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined8 uVar4;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  uVar4 = (**(code **)(param_3 + 0x1c))(param_2);
  iVar1 = (int)uVar4;
  (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0xc))(&local_20,iVar1);
  bVar3 = false;
  if (((((local_20 == 0x4e7f3c27 && iStack_18 == 0x260a2f6c) &&
         (iStack_1c == 0x1529d282 && iStack_14 == -0x3cc08bff)) &&
       (*(int *)(param_1 + 0x48) == *(int *)(iVar1 + 0x48))) &&
      (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(iVar1 + 0x44)),
      iVar2 == 0)) &&
     (((*(short *)(param_1 + 0x36) == *(short *)(iVar1 + 0x36) &&
       (*(char *)(param_1 + 0x38) == *(char *)(iVar1 + 0x38))) &&
      ((*(int *)(param_1 + 0x30) == *(int *)(iVar1 + 0x30) &&
       (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(iVar1 + 0x2c)),
       iVar2 == 0)))))) {
    bVar3 = *(short *)(param_1 + 0x34) == *(short *)(iVar1 + 0x34);
  }
  return bVar3;
}

