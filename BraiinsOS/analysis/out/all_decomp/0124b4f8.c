// FUN_0124b4f8 @ 0124b4f8 size=400 calls_out=4 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_0124b4f8(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  undefined8 uVar6;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  uint local_34;
  int local_30;
  int local_2c;
  
  if (*param_2 != '\x04') {
    return (int *)&DAT_00000001;
  }
  uVar3 = *(uint *)(param_1 + 0x14);
  iVar5 = *(int *)(param_2 + 8);
  uVar4 = *(uint *)(param_2 + 0xc);
  local_3c = 0;
  local_44 = 0;
  local_40 = 4;
  if (uVar3 == 0) {
    iVar2 = iVar5;
    if (uVar4 == 0) goto LAB_0124b620;
  }
  else {
    if (uVar4 <= uVar3) goto LAB_0124b620;
    iVar2 = iVar5 + uVar3 * 0x18;
  }
  local_38 = -0x7fffffff;
  local_34 = uVar3;
  local_2c = param_3;
  uVar6 = FUN_011cf8a8(param_1,iVar2,&local_38,param_4,param_5);
  FUN_011590bc(&local_44,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  while( true ) {
    uVar3 = uVar3 + 1;
    iVar2 = iVar2 + 0x18;
    if (iVar2 == iVar5 + uVar4 * 0x18) break;
    local_38 = -0x7fffffff;
    local_34 = uVar3;
    local_2c = param_3;
    uVar6 = FUN_011cf8a8(param_1,iVar2,&local_38,param_4,param_5);
    FUN_011590bc(&local_44,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  }
LAB_0124b620:
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

