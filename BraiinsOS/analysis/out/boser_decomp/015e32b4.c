// FUN_015e32b4 @ 015e32b4 size=160 calls_out=1 calls_in=0
// strings: 

bool FUN_015e32b4(int param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  int local_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  uVar3 = (**(code **)(param_3 + 0x1c))(param_2);
  iVar2 = (int)uVar3;
  (**(code **)((int)((ulonglong)uVar3 >> 0x20) + 0xc))(&local_20,iVar2);
  bVar1 = false;
  if (((local_20 == 0x4e7f3c27 && iStack_18 == 0x260a2f6c) &&
       (iStack_1c == 0x1529d282 && iStack_14 == -0x3cc08bff)) &&
     (*(int *)(param_1 + 0x48) == *(int *)(iVar2 + 0x48))) {
    iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(iVar2 + 0x44));
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

