// FUN_015df764 @ 015df764 size=240 calls_out=4 calls_in=5
// strings: 

void FUN_015df764(longlong *param_1,undefined4 param_2,int param_3,undefined2 param_4,ushort param_5
                 ,uint param_6)

{
  int iVar1;
  undefined4 uVar2;
  longlong lVar3;
  int local_28;
  
  uVar2 = 0;
  lVar3 = FUN_015fbb98();
  if (param_3 < 0) {
LAB_015df78c:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar2,param_3);
  }
  if (param_3 == 0) {
    iVar1 = 1;
    local_28 = 0;
  }
  else {
    uVar2 = 1;
    iVar1 = FUN_01298504(param_3,1);
    local_28 = param_3;
    if (iVar1 == 0) goto LAB_015df78c;
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  *param_1 = lVar3;
  *(uint *)(param_1 + 3) = param_6;
  *(ushort *)((int)param_1 + 0x36) = param_5 & 0x7fff;
  *(undefined2 *)((int)param_1 + 0x34) = param_4;
  *(int *)((int)param_1 + 0x2c) = iVar1;
  *(int *)(param_1 + 6) = param_3;
  *(int *)(param_1 + 5) = local_28;
  *(undefined4 *)((int)param_1 + 0x1c) = 0x80000000;
  *(byte *)(param_1 + 7) = (byte)(param_5 >> 0xf);
  param_1[1] = (ulonglong)param_6 * 1000 + lVar3;
  param_1[2] = (ulonglong)param_6 * 800 + lVar3;
  return;
}

