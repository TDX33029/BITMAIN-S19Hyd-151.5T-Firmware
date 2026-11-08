// FUN_01314e24 @ 01314e24 size=344 calls_out=4 calls_in=2
// strings: 

void FUN_01314e24(int *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 **local_28;
  int iStack_24;
  int iStack_20;
  undefined4 *local_18;
  undefined4 **local_14;
  
  uVar3 = *(uint *)(param_2 + 0x3c);
  if (*(uint *)(param_2 + 0x38) < uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar3,*(uint *)(param_2 + 0x38),&DAT_01890988);
  }
  iVar2 = *(int *)(param_2 + 0x34);
  iVar4 = uVar3 * 0x1c;
  do {
    if (iVar4 == 0) {
      FUN_012fa894(param_2);
      FUN_012fb034(&local_28,param_2,param_3);
      if (local_28 == (undefined4 **)0x4) {
        *param_1 = 4;
        return;
      }
      *param_1 = (int)local_28;
      param_1[1] = iStack_24;
      param_1[2] = iStack_20;
      return;
    }
    if (*(char *)(iVar2 + 0xc) != '\x01') break;
    pcVar1 = (char *)(iVar2 + 0x18);
    iVar4 = iVar4 + -0x1c;
    iVar2 = iVar2 + 0x1c;
  } while (*pcVar1 != '\x02');
  local_18 = &DAT_018d88bc;
  DataMemoryBarrier(0xb);
  if (DAT_018d88bc != 0) {
    local_14 = &local_18;
    local_28 = &local_14;
    FUN_015eedc4(&DAT_018d88bc,0,&local_28,&DAT_0188f0b4,&DAT_0188e9dc);
  }
  iVar4 = *(int *)(DAT_018d88c0 + 0x68);
  if (*(char *)(iVar4 + 0xc) == '\x01') {
    iVar2 = *(int *)(iVar4 + 4);
    iVar4 = *(int *)(iVar4 + 8);
  }
  else {
    iVar2 = 1;
    iVar4 = 0;
  }
  param_1[1] = iVar2;
  *param_1 = 3;
  param_1[2] = iVar4;
  return;
}

