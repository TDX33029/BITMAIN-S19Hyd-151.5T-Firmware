// FUN_013e6134 @ 013e6134 size=256 calls_out=1 calls_in=0
// strings: 

void FUN_013e6134(int param_1,int param_2,undefined1 param_3,undefined4 *param_4,undefined4 param_5)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = (uint)*(ushort *)(param_1 + 0x8a);
  iVar2 = param_1 + 0x8c;
  uVar3 = param_2 + 1;
  if (uVar4 < uVar3) {
    *(undefined1 *)(iVar2 + param_2) = param_3;
    local_30 = *param_4;
    uStack_2c = param_4[1];
    uStack_28 = param_4[2];
  }
  else {
    FUN_01bed864(iVar2 + uVar3,(undefined1 *)(iVar2 + param_2),uVar4 - param_2);
    *(undefined1 *)(iVar2 + param_2) = param_3;
    local_30 = *param_4;
    uStack_2c = param_4[1];
    uStack_28 = param_4[2];
    FUN_01bed864(param_1 + 4 + uVar3 * 0xc,param_1 + 4 + param_2 * 0xc,(uVar4 - param_2) * 0xc);
  }
  iVar2 = param_1 + param_2 * 0xc;
  *(undefined4 *)(iVar2 + 4) = local_30;
  *(undefined4 *)(iVar2 + 8) = uStack_2c;
  *(undefined4 *)(iVar2 + 0xc) = uStack_28;
  iVar2 = param_1 + 0x98;
  if (param_2 + 2U < uVar4 + 2) {
    FUN_01bed864(iVar2 + (param_2 + 2U) * 4,iVar2 + uVar3 * 4,(uVar4 - param_2) * 4);
  }
  *(undefined4 *)(iVar2 + uVar3 * 4) = param_5;
  *(short *)(param_1 + 0x8a) = (short)(uVar4 + 1);
  if (uVar3 < uVar4 + 2) {
    do {
      iVar2 = param_2 * 4;
      param_2 = param_2 + 1;
      piVar1 = *(int **)(param_1 + iVar2 + 0x9c);
      *(short *)(piVar1 + 0x22) = (short)param_2;
      *piVar1 = param_1;
    } while (uVar4 + 1 != param_2);
  }
  return;
}

