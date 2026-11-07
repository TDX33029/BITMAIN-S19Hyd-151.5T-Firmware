// FUN_006c7a24 @ 006c7a24 size=164 calls_out=3 calls_in=2
// strings: 

void FUN_006c7a24(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  if ((uint)param_1[5] < param_2) {
    FUN_006b89dc(param_1 + 3,param_2,param_1[1],param_1[2]);
  }
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < param_2) {
    uVar1 = param_1[5] + param_1[6];
    if (0x7fffffe < uVar1) {
      uVar1 = 0x7ffffff;
    }
    if (param_2 < uVar1 - iVar2) {
      iVar2 = FUN_0132b728(param_1,iVar2,uVar1 - iVar2,4,0x10);
      if (iVar2 == -0x7fffffff) {
        return;
      }
      iVar2 = param_1[2];
    }
    FUN_0132b704(param_1,iVar2,param_2,4,0x10);
  }
  return;
}

