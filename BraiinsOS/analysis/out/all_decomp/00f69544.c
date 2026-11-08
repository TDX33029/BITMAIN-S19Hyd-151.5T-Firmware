// FUN_00f69544 @ 00f69544 size=340 calls_out=0 calls_in=1
// strings: 

uint FUN_00f69544(int param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  short sVar4;
  int iVar5;
  
  uVar3 = (param_2 & 0x1fff) >> 4;
  iVar1 = uVar3 + (param_2 & 7);
  sVar4 = (short)uVar3;
  iVar5 = -5;
  uVar2 = uVar3;
  switch(iVar1 + ((uint)((short)iVar1 * 0x2493) >> 0x10) * -7) {
  case 0:
    sVar4 = sVar4 + 5;
    iVar5 = 0;
    iVar1 = *(int *)(param_1 + 0x68);
    break;
  case 1:
    sVar4 = sVar4 + 4;
    iVar5 = -1;
    iVar1 = *(int *)(param_1 + 0x68);
    break;
  case 2:
    sVar4 = sVar4 + 3;
    iVar5 = -2;
    iVar1 = *(int *)(param_1 + 0x68);
    break;
  case 3:
    sVar4 = sVar4 + 2;
    iVar5 = -3;
    iVar1 = *(int *)(param_1 + 0x68);
    break;
  case 4:
    uVar2 = uVar3 + 1;
    iVar5 = -4;
  case 5:
    sVar4 = (short)uVar2;
    iVar1 = *(int *)(param_1 + 0x68);
    break;
  default:
    sVar4 = sVar4 + 6;
    iVar5 = -6;
    iVar1 = *(int *)(param_1 + 0x68);
  }
  if (((iVar1 == 1) && (*(uint *)(param_1 + 0x6c) != uVar3)) ||
     ((*(int *)(param_1 + 0x50) == 1 &&
      (*(uint *)(param_1 + 0x54) != (uint)(sVar4 * 0x2493) >> 0x10)))) {
    return 0;
  }
  uVar2 = iVar5 + uVar3 + 6;
  uVar3 = (uVar2 & 0xffff) * 0x2493;
  return *(uint *)(param_1 + 0x58) ^ 1 |
         (uint)(*(uint *)(param_1 + 0x5c) ==
               ((uVar2 - (uVar3 >> 0x10) & 0xffff) >> 1) + (uVar3 >> 0x10) >> 2);
}

