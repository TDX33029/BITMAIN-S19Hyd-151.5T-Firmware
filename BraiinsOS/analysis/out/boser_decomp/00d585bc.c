// FUN_00d585bc @ 00d585bc size=156 calls_out=5 calls_in=0
// strings: 

int FUN_00d585bc(int *param_1)

{
  int iVar1;
  int iVar2;
  int local_88;
  int iStack_84;
  undefined1 auStack_80 [104];
  
  iVar1 = (**(code **)(param_1[0x11] + 0x10))(param_1[0x10]);
  if (iVar1 == 0) {
    iVar1 = *param_1;
    iVar2 = param_1[1];
    if (iVar1 == 4 && iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d2d8a4);
    }
    FUN_01bed4e2(auStack_80,param_1 + 2,0x68);
    local_88 = iVar1;
    iStack_84 = iVar2;
    iVar1 = thunk_FUN_01be5118(0x70);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x70);
    }
    FUN_01bed4e2(iVar1,&local_88,0x70);
  }
  else {
    FUN_00d5868c(param_1);
    iVar1 = 0;
  }
  return iVar1;
}

