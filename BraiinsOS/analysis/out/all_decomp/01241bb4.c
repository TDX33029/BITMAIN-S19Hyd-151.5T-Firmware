// FUN_01241bb4 @ 01241bb4 size=280 calls_out=4 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_01241bb4(undefined4 param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  
  if (*param_2 != '\x04') {
    return (int *)&DAT_00000001;
  }
  iVar4 = *(int *)(param_2 + 8);
  local_3c = 0;
  local_44 = 0;
  local_40 = 4;
  if (*(int *)(param_2 + 0xc) != 0) {
    iVar2 = *(int *)(param_2 + 0xc) * 0x18;
    iVar3 = 0;
    do {
      local_38 = -0x7fffffff;
      local_34 = iVar3;
      local_2c = param_3;
      uVar5 = FUN_011cf8a8(param_1,iVar4,&local_38,param_4,param_5);
      FUN_011590bc(&local_44,(int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
      iVar4 = iVar4 + 0x18;
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -0x18;
    } while (iVar2 != 0);
  }
  local_2c = local_40 + local_3c * 4;
  local_38 = local_40;
  local_34 = local_40;
  local_30 = local_44;
  piVar1 = (int *)thunk_FUN_016d4a50(0x10);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x10);
  }
  *piVar1 = local_38;
  piVar1[1] = local_34;
  piVar1[2] = local_30;
  piVar1[3] = local_2c;
  return piVar1;
}

