// FUN_013e607c @ 013e607c size=184 calls_out=1 calls_in=1
// strings: 

void FUN_013e607c(int param_1,int param_2,undefined2 param_3,undefined2 param_4,undefined4 param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined2 *puVar5;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x32);
  uVar3 = param_2 + 1;
  iVar4 = param_1 + 4;
  if (uVar3 <= uVar2) {
    FUN_01bed864(iVar4 + uVar3 * 4,iVar4 + param_2 * 4,(uVar2 - param_2) * 4);
  }
  puVar5 = (undefined2 *)(iVar4 + param_2 * 4);
  *puVar5 = param_3;
  iVar4 = param_1 + 0x34;
  puVar5[1] = param_4;
  if (param_2 + 2U < uVar2 + 2) {
    FUN_01bed864(iVar4 + (param_2 + 2U) * 4,iVar4 + uVar3 * 4,(uVar2 - param_2) * 4);
  }
  *(undefined4 *)(iVar4 + uVar3 * 4) = param_5;
  *(short *)(param_1 + 0x32) = (short)(uVar2 + 1);
  if (uVar3 < uVar2 + 2) {
    do {
      iVar4 = param_2 * 4;
      param_2 = param_2 + 1;
      piVar1 = *(int **)(param_1 + iVar4 + 0x38);
      *(short *)(piVar1 + 0xc) = (short)param_2;
      *piVar1 = param_1;
    } while (uVar2 + 1 != param_2);
  }
  return;
}

