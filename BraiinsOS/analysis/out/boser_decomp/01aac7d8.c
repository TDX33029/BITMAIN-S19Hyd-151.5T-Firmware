// FUN_01aac7d8 @ 01aac7d8 size=316 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_01aac7d8(byte *param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int iVar5;
  byte *local_28;
  code *local_24;
  
  uVar4 = *param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar2 = (*pcVar3)(uVar4,&DAT_0053146c,5);
  if (iVar2 != 0) {
    return 1;
  }
  bVar1 = *param_1;
  if ((bVar1 & 1) == 0) {
    if ((bVar1 & 2) != 0) {
LAB_01aac894:
      iVar2 = (*pcVar3)(uVar4,&DAT_0056ea74,4);
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_01aac8b0;
    }
    if ((bVar1 & 4) != 0) goto LAB_01aac8d4;
    local_24 = FUN_012fd5c4;
    local_28 = param_1;
    iVar2 = FUN_012fa178(uVar4,iVar5,&DAT_00531476,&local_28);
  }
  else {
    iVar2 = (*pcVar3)(uVar4,&DAT_00531471,5);
    if (iVar2 != 0) {
      return 1;
    }
    if ((bVar1 & 2) != 0) {
      iVar2 = (*pcVar3)(uVar4,&DAT_0053147c,3);
      if (iVar2 != 0) {
        return 1;
      }
      goto LAB_01aac894;
    }
LAB_01aac8b0:
    if ((bVar1 & 4) == 0) goto LAB_01aac8f0;
    iVar2 = (*pcVar3)(uVar4,&DAT_0053147c,3);
    if (iVar2 != 0) {
      return 1;
    }
LAB_01aac8d4:
    iVar2 = (*pcVar3)(uVar4,&DAT_0056eba0,4);
  }
  if (iVar2 != 0) {
    return 1;
  }
LAB_01aac8f0:
  uVar4 = (*pcVar3)(uVar4,&DAT_0053341b,1);
  return uVar4;
}

