// FUN_0124a3ec @ 0124a3ec size=404 calls_out=4 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int * FUN_0124a3ec(int param_1,char *param_2,undefined4 param_3,undefined4 param_4,
                  undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
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
  local_34 = *(uint *)(param_1 + 0x14);
  iVar5 = *(int *)(param_2 + 8);
  uVar2 = *(uint *)(param_2 + 0xc);
  local_3c = 0;
  local_44 = 0;
  local_40 = 4;
  if (local_34 == 0) {
    iVar3 = 1;
    iVar4 = iVar5;
    if (uVar2 == 0) goto LAB_0124a514;
  }
  else {
    if (uVar2 <= local_34) goto LAB_0124a514;
    iVar3 = local_34 + 1;
    iVar4 = iVar5 + local_34 * 0x18;
  }
  local_38 = -0x7fffffff;
  local_2c = param_3;
  uVar6 = FUN_011cf8a8(param_1,iVar4,&local_38,param_4,param_5);
  FUN_011590bc(&local_44,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  while (iVar4 = iVar4 + 0x18, iVar4 != iVar5 + uVar2 * 0x18) {
    local_38 = -0x7fffffff;
    local_34 = iVar3;
    local_2c = param_3;
    uVar6 = FUN_011cf8a8(param_1,iVar4,&local_38,param_4,param_5);
    iVar3 = iVar3 + 1;
    FUN_011590bc(&local_44,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  }
LAB_0124a514:
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

