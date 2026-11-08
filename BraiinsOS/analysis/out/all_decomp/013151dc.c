// FUN_013151dc @ 013151dc size=276 calls_out=2 calls_in=0
// strings: 

void FUN_013151dc(undefined4 *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined4 *local_1c;
  undefined4 **local_18;
  undefined4 **local_14;
  
  uVar6 = *(uint *)(param_2 + 0x3c);
  if (*(uint *)(param_2 + 0x38) < uVar6) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,uVar6,*(uint *)(param_2 + 0x38),&DAT_01890988);
  }
  iVar2 = *(int *)(param_2 + 0x34);
  iVar4 = uVar6 * 0x1c;
  do {
    if (iVar4 == 0) {
      *param_1 = 4;
      return;
    }
    if (*(char *)(iVar2 + 0xc) != '\x01') break;
    pcVar1 = (char *)(iVar2 + 0x18);
    iVar4 = iVar4 + -0x1c;
    iVar2 = iVar2 + 0x1c;
  } while (*pcVar1 != '\x02');
  local_1c = &DAT_018d88bc;
  DataMemoryBarrier(0xb);
  if (DAT_018d88bc != 0) {
    local_18 = &local_1c;
    local_14 = &local_18;
    FUN_015eedc4(&DAT_018d88bc,0,&local_14,&DAT_0188f0b4,&DAT_0188e9dc);
  }
  iVar4 = *(int *)(DAT_018d88c0 + 0x68);
  if (*(char *)(iVar4 + 0xc) == '\0') {
    uVar3 = 0;
    uVar5 = 1;
  }
  else {
    uVar5 = *(undefined4 *)(iVar4 + 4);
    uVar3 = *(undefined4 *)(iVar4 + 8);
  }
  param_1[1] = uVar5;
  *param_1 = 3;
  param_1[2] = uVar3;
  return;
}

