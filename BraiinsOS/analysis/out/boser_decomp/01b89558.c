// FUN_01b89558 @ 01b89558 size=356 calls_out=4 calls_in=1
// strings: 

uint FUN_01b89558(int param_1,undefined1 *param_2,undefined4 param_3,undefined1 *param_4,
                 undefined4 param_5,uint param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  bool bVar4;
  
  uVar1 = FUN_01b89130(param_1,param_4,param_5);
  if (0xffffff88 < uVar1) {
    return uVar1;
  }
  if (uVar1 == 1) {
    if (*(int *)(param_1 + 0x2dc) != 0) {
      return 0xffffff96;
    }
    uVar1 = 0;
    goto LAB_01b896a0;
  }
  iVar3 = *(int *)(param_1 + 0x860);
  if (*(int *)(param_1 + 0x2dc) != 0) {
    uVar1 = FUN_01b8586c(param_1 + 0x2dc,param_1 + 0x2f4,iVar3 + 0x11e8);
    if (uVar1 < 0xffffff89) {
      uVar2 = *(undefined4 *)(param_1 + 0x864);
      *(int *)(param_1 + 0x864) = iVar3;
      *(undefined4 *)(param_1 + 0x860) = uVar2;
      return 0;
    }
    return 0xffffffba;
  }
  uVar1 = FUN_01b88a34(param_1 + 0x2f4,iVar3,*(undefined4 *)(param_1 + 0x864),param_1 + 0xbc,param_2
                       ,param_3,param_5,*(undefined4 *)(param_1 + 0x948),
                       *(undefined4 *)(param_1 + 8));
  if (param_6 == 0) {
LAB_01b89698:
    if (0xffffff88 < uVar1) goto LAB_01b896a0;
  }
  else {
    bVar4 = uVar1 == 0x18;
    if (uVar1 < 0x19) {
      bVar4 = *(int *)(param_1 + 0x2ec) == 0;
    }
    if (!bVar4) goto LAB_01b89698;
    iVar3 = FUN_01b85678(param_4,param_5);
    if (iVar3 != 0) {
      *param_2 = *param_4;
      uVar1 = param_6;
      goto LAB_01b896a0;
    }
  }
  if (1 < uVar1) {
    uVar2 = *(undefined4 *)(param_1 + 0x860);
    *(undefined4 *)(param_1 + 0x860) = *(undefined4 *)(param_1 + 0x864);
    *(undefined4 *)(param_1 + 0x864) = uVar2;
  }
LAB_01b896a0:
  if (*(int *)(*(int *)(param_1 + 0x860) + 0x11dc) == 2) {
    *(undefined4 *)(*(int *)(param_1 + 0x860) + 0x11dc) = 1;
  }
  return uVar1;
}

