// FUN_015e4888 @ 015e4888 size=332 calls_out=1 calls_in=3
// strings: 

bool FUN_015e4888(int param_1,undefined4 param_2,int param_3)

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
  if (((local_20 == -0x2573b0e2 && iStack_18 == 0x19da2243) &&
       (iStack_1c == -0x4dbea2a8 && iStack_14 == -0x367c12f5)) &&
     (*(char *)(param_1 + 0x50) == *(char *)(iVar2 + 0x50))) {
    if (*(char *)(param_1 + 0x50) == '\0') {
      if (*(int *)(param_1 + 0x51) != *(int *)(iVar2 + 0x51)) {
        return false;
      }
    }
    else {
      iVar1 = thunk_FUN_01bed842(param_1 + 0x51,iVar2 + 0x51,0x10);
      if (iVar1 != 0) {
        return false;
      }
    }
    if ((((*(short *)(param_1 + 0x46) == *(short *)(iVar2 + 0x46)) &&
         (*(char *)(param_1 + 0x48) == *(char *)(iVar2 + 0x48))) &&
        (*(int *)(param_1 + 0x40) == *(int *)(iVar2 + 0x40))) &&
       (((iVar1 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 0x3c),*(undefined4 *)(iVar2 + 0x3c)),
         iVar1 == 0 && (*(short *)(param_1 + 0x44) == *(short *)(iVar2 + 0x44))) &&
        ((*(int *)(param_1 + 0xc) == *(int *)(iVar2 + 0xc) &&
         (*(int *)(param_1 + 8) == *(int *)(iVar2 + 8))))))) {
      iVar2 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 4),*(undefined4 *)(iVar2 + 4));
      bVar3 = iVar2 == 0;
    }
  }
  return bVar3;
}

