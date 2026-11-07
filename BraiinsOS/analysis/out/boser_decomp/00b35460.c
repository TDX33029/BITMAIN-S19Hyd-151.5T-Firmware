// FUN_00b35460 @ 00b35460 size=112 calls_out=1 calls_in=1
// strings: 

void FUN_00b35460(uint *param_1,int *param_2)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *param_2;
  if (iVar2 == 0) {
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  iVar3 = FUN_012920c0(param_2[1]);
  lVar1 = (longlong)iVar3 * 0x15180 + (ulonglong)uVar4;
  uVar4 = (uint)lVar1;
  param_1[1] = 0;
  *param_1 = (uint)(iVar2 != 1);
  param_1[2] = uVar4 + 0x886cb780;
  param_1[3] = (int)((ulonglong)lVar1 >> 0x20) - ((uVar4 < 0x77934880) + 0xe);
  param_1[4] = uVar5;
  return;
}

