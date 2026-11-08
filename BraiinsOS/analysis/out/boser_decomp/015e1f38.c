// FUN_015e1f38 @ 015e1f38 size=300 calls_out=1 calls_in=3
// strings: 

bool FUN_015e1f38(int param_1,undefined4 param_2,int param_3)

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
  if (((((((local_20 == -0x3ec88446 && iStack_18 == -0x249b249d) &&
           (iStack_1c == 0x60d24636 && iStack_14 == 0x7ab693b4)) &&
         (*(int *)(param_1 + 0x48) == *(int *)(iVar1 + 0x48))) &&
        (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(iVar1 + 0x44)),
        iVar2 == 0)) &&
       ((*(short *)(param_1 + 0x50) == *(short *)(iVar1 + 0x50) &&
        (*(short *)(param_1 + 0x4e) == *(short *)(iVar1 + 0x4e))))) &&
      ((*(short *)(param_1 + 0x4c) == *(short *)(iVar1 + 0x4c) &&
       ((*(short *)(param_1 + 0x36) == *(short *)(iVar1 + 0x36) &&
        (*(char *)(param_1 + 0x38) == *(char *)(iVar1 + 0x38))))))) &&
     ((*(int *)(param_1 + 0x30) == *(int *)(iVar1 + 0x30) &&
      (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(iVar1 + 0x2c)),
      iVar2 == 0)))) {
    bVar3 = *(short *)(param_1 + 0x34) == *(short *)(iVar1 + 0x34);
  }
  return bVar3;
}

