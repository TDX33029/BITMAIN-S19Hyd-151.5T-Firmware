// FUN_015e39c8 @ 015e39c8 size=288 calls_out=1 calls_in=2
// strings: 

bool FUN_015e39c8(int param_1,undefined4 param_2,int param_3)

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
  if (((((((local_20 == 0x7c8f5655 && iStack_18 == -0x6038b53e) &&
           (iStack_1c == -0x5ce6e815 && iStack_14 == -0x4640035c)) &&
         (*(int *)(param_1 + 0x48) == *(int *)(iVar1 + 0x48))) &&
        (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x44),*(undefined4 *)(iVar1 + 0x44)),
        iVar2 == 0)) &&
       ((*(int *)(param_1 + 0x54) == *(int *)(iVar1 + 0x54) &&
        (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x50),*(undefined4 *)(iVar1 + 0x50)),
        iVar2 == 0)))) &&
      ((*(short *)(param_1 + 0x36) == *(short *)(iVar1 + 0x36) &&
       ((*(char *)(param_1 + 0x38) == *(char *)(iVar1 + 0x38) &&
        (*(int *)(param_1 + 0x30) == *(int *)(iVar1 + 0x30))))))) &&
     (iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(iVar1 + 0x2c)),
     iVar2 == 0)) {
    bVar3 = *(short *)(param_1 + 0x34) == *(short *)(iVar1 + 0x34);
  }
  return bVar3;
}

