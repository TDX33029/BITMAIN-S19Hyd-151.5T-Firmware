// FUN_013b850c @ 013b850c size=280 calls_out=3 calls_in=1
// strings: 

void FUN_013b850c(int *param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  
  iVar5 = *param_1;
  iVar6 = param_1[1];
  iVar4 = param_1[2];
  iVar2 = FUN_0139f0d0(*(undefined4 *)(iVar5 + 0x34),*(undefined4 *)(iVar5 + 0x38),iVar6,iVar4);
  if ((*(int *)(iVar2 + 0xd0) != 0) || (*(byte *)(iVar2 + 0x20) < 6)) {
    return;
  }
  uVar7 = 8;
  if (*(char *)(param_3 + 0x2c) != '\0') {
    iVar2 = FUN_0139f0d0(*(undefined4 *)(iVar5 + 0x34),*(undefined4 *)(iVar5 + 0x38),iVar6,iVar4);
    bVar1 = *(byte *)(iVar2 + 0x20) - 6;
    if (*(byte *)(iVar2 + 0x20) < 6) {
      bVar1 = 6;
    }
    if ((bVar1 < 7) && ((1 << (uint)bVar1 & 0x54U) != 0)) {
      iVar2 = FUN_0139f0d0(*(undefined4 *)(iVar5 + 0x34),*(undefined4 *)(iVar5 + 0x38),iVar6,iVar4);
      cVar3 = *(byte *)(iVar2 + 0x20) - 6;
      if (*(byte *)(iVar2 + 0x20) < 6) {
        cVar3 = '\x06';
      }
      if (cVar3 == '\x04') {
        if (*(char *)(iVar2 + 0x21) == '\x01') {
          uVar7 = 0;
        }
      }
      else if ((cVar3 == '\x03') && (*(char *)(iVar2 + 0x22) != '\0')) {
        uVar7 = 0;
      }
    }
  }
  FUN_013b1600(param_2 + 0xb0,param_1,uVar7,param_3,param_2 + 0xa8);
  FUN_01394640(param_2,param_1,param_3);
  return;
}

