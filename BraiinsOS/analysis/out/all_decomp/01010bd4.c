// FUN_01010bd4 @ 01010bd4 size=280 calls_out=5 calls_in=1
// strings: 

void FUN_01010bd4(undefined4 *param_1,int param_2,undefined4 param_3,uint param_4,int param_5)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int local_24;
  
  lVar1 = (ulonglong)param_4 * (ulonglong)(param_5 + 7U & 0xf8);
  uVar4 = (uint)lVar1;
  if (((int)((ulonglong)lVar1 >> 0x20) != 0) || (0x7ffffff8 < uVar4)) {
    param_1[1] = 0;
    *param_1 = 1;
    return;
  }
  if (param_2 == 0) {
    if (uVar4 == 0) {
      iVar2 = 8;
      goto LAB_01010cd0;
    }
    iVar2 = thunk_FUN_016d4a50(uVar4);
  }
  else {
    if (uVar4 == 0) {
      local_24 = 0;
      iVar3 = FUN_016d51b0(&local_24,8,0);
      iVar2 = local_24;
      if ((iVar3 == 0) && (local_24 != 0)) {
        FUN_016dd1aa(local_24,param_3,param_5 * param_2);
        thunk_FUN_016d3fb4(param_3);
        goto LAB_01010cd0;
      }
      goto LAB_01010cb4;
    }
    iVar2 = thunk_FUN_016d4ea4(param_3,uVar4);
  }
  if (iVar2 == 0) {
LAB_01010cb4:
    param_1[1] = 8;
    param_1[2] = uVar4;
    *param_1 = 1;
    return;
  }
LAB_01010cd0:
  param_1[1] = iVar2;
  param_1[2] = uVar4;
  *param_1 = 0;
  return;
}

