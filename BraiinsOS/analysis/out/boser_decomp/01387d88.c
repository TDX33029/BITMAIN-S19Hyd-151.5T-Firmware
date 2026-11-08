// FUN_01387d88 @ 01387d88 size=228 calls_out=3 calls_in=3
// strings: 

void FUN_01387d88(undefined1 *param_1,uint param_2,undefined4 *param_3,int *param_4)

{
  undefined1 uVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  iVar6 = *param_4;
  iVar7 = param_4[1];
  iVar8 = param_4[2];
  iVar2 = FUN_01367c40(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar7,iVar8);
  cVar4 = *(byte *)(iVar2 + 0x20) - 6;
  if (*(byte *)(iVar2 + 0x20) < 6) {
    cVar4 = '\x06';
  }
  if ((cVar4 == '\x05' || cVar4 == '\x03') && (*(char *)(iVar2 + 0x21) != '\0')) {
    iVar2 = FUN_01367c40(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar7,iVar8);
    cVar4 = *(char *)(iVar2 + 0xeb);
    iVar2 = FUN_01367cb8(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar7,iVar8);
    if (cVar4 != '\0') {
      *(undefined1 *)(iVar2 + 0xeb) = 0;
      iVar2 = FUN_01367c40(*(undefined4 *)(iVar6 + 0x34),*(undefined4 *)(iVar6 + 0x38),iVar7,iVar8);
      uVar5 = *(uint *)(iVar2 + 0x3c);
      uVar3 = *(uint *)(iVar2 + 0xe0);
      *param_1 = 0;
      uVar5 = uVar5 & ~((int)uVar5 >> 0x1f);
      if (param_2 < uVar5) {
        uVar5 = param_2;
      }
      iVar2 = uVar5 - uVar3;
      if (uVar5 < uVar3) {
        iVar2 = 0;
      }
      *(int *)(param_1 + 4) = iVar2;
      return;
    }
    FUN_01385788(iVar2,*param_3,param_3[1]);
    uVar1 = 3;
  }
  else {
    uVar1 = 2;
  }
  *param_1 = uVar1;
  return;
}

