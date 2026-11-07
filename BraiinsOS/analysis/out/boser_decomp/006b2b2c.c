// FUN_006b2b2c @ 006b2b2c size=276 calls_out=2 calls_in=1
// strings: 

void FUN_006b2b2c(int param_1,int param_2,undefined4 *param_3,undefined4 param_4,undefined4 param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  
  uVar6 = (uint)*(ushort *)(param_1 + 0x502);
  uVar3 = param_2 + 1;
  puVar4 = (undefined4 *)(param_1 + 0x47c + param_2 * 0xc);
  if (uVar6 < uVar3) {
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    *puVar4 = *param_3;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
  }
  else {
    FUN_01bed864(param_1 + 0x47c + uVar3 * 0xc,puVar4,(uVar6 - param_2) * 0xc);
    uVar1 = param_3[1];
    uVar2 = param_3[2];
    *puVar4 = *param_3;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    FUN_01bed864(uVar3 * 0x68 + param_1,param_2 * 0x68 + param_1,(uVar6 - param_2) * 0x68);
  }
  FUN_01bed4e2(param_2 * 0x68 + param_1,param_4,0x68);
  iVar5 = param_1 + 0x508;
  if (param_2 + 2U < uVar6 + 2) {
    FUN_01bed864(iVar5 + (param_2 + 2U) * 4,iVar5 + uVar3 * 4,(uVar6 - param_2) * 4);
  }
  *(undefined4 *)(iVar5 + uVar3 * 4) = param_5;
  *(ushort *)(param_1 + 0x502) = (ushort)(uVar6 + 1);
  if (uVar3 < uVar6 + 2) {
    do {
      iVar5 = *(int *)(param_1 + 0x50c + param_2 * 4);
      param_2 = param_2 + 1;
      *(short *)(iVar5 + 0x500) = (short)param_2;
      *(int *)(iVar5 + 0x478) = param_1;
    } while (uVar6 + 1 != param_2);
  }
  return;
}

