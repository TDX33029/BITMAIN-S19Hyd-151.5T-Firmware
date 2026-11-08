// FUN_015e49d4 @ 015e49d4 size=188 calls_out=1 calls_in=0
// strings: 

bool FUN_015e49d4(int param_1,undefined4 param_2,int param_3)

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
  if (((local_20 == -0x2573b0e2 && iStack_18 == 0x19da2243) &&
       (iStack_1c == -0x4dbea2a8 && iStack_14 == -0x367c12f5)) &&
     (*(char *)(param_1 + 0x50) == *(char *)(iVar2 + 0x50))) {
    if (*(char *)(param_1 + 0x50) == '\0') {
      iVar2 = *(int *)(param_1 + 0x51) - *(int *)(iVar2 + 0x51);
    }
    else {
      iVar2 = thunk_FUN_01bed842(param_1 + 0x51,iVar2 + 0x51,0x10);
    }
    bVar1 = iVar2 == 0;
  }
  return bVar1;
}

