// FUN_018f02a4 @ 018f02a4 size=168 calls_out=1 calls_in=1
// strings: 

void FUN_018f02a4(int param_1,int param_2,undefined2 param_3,undefined4 param_4)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = (uint)*(ushort *)(param_1 + 6);
  uVar3 = param_2 + 1;
  iVar4 = param_1 + 8;
  if (uVar3 <= uVar2) {
    FUN_01bed864(iVar4 + uVar3 * 2,iVar4 + param_2 * 2,(uVar2 - param_2) * 2);
  }
  iVar5 = param_1 + 0x20;
  *(undefined2 *)(iVar4 + param_2 * 2) = param_3;
  if (param_2 + 2U < uVar2 + 2) {
    FUN_01bed864(iVar5 + (param_2 + 2U) * 4,iVar5 + uVar3 * 4,(uVar2 - param_2) * 4);
  }
  *(undefined4 *)(iVar5 + uVar3 * 4) = param_4;
  *(short *)(param_1 + 6) = (short)(uVar2 + 1);
  if (uVar3 < uVar2 + 2) {
    do {
      iVar4 = param_2 * 4;
      param_2 = param_2 + 1;
      piVar1 = *(int **)(param_1 + iVar4 + 0x24);
      *(short *)(piVar1 + 1) = (short)param_2;
      *piVar1 = param_1;
    } while (uVar2 + 1 != param_2);
  }
  return;
}

