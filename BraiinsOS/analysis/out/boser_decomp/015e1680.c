// FUN_015e1680 @ 015e1680 size=200 calls_out=1 calls_in=0
// strings: 

bool FUN_015e1680(int param_1,undefined4 param_2,int param_3)

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
  iVar2 = (int)uVar4;
  (**(code **)((int)((ulonglong)uVar4 >> 0x20) + 0xc))(&local_20,iVar2);
  bVar3 = false;
  if (((((local_20 == 0x1809aae9 && iStack_18 == 0x1a7b50da) &&
         (iStack_1c == 0x1d89a48c && iStack_14 == -0x606c11a4)) &&
       (*(int *)(param_1 + 0x48) == *(int *)(iVar2 + 0x48))) &&
      (iVar1 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(iVar2 + 0x44)),
      iVar1 == 0)) && (*(int *)(param_1 + 0x54) == *(int *)(iVar2 + 0x54))) {
    iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(iVar2 + 0x50));
    bVar3 = iVar2 == 0;
  }
  return bVar3;
}

