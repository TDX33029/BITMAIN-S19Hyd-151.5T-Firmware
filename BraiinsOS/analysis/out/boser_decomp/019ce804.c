// FUN_019ce804 @ 019ce804 size=516 calls_out=2 calls_in=1
// strings: 

void FUN_019ce804(undefined1 *param_1,undefined4 param_2,uint param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;
  undefined1 auStack_48 [40];
  
  if (param_4 == '\0') {
    if (param_3 != 0) {
      iVar5 = 0;
      uVar1 = param_3;
      if (99999 < param_3) {
        uVar1 = param_3 / 100000;
      }
      uVar2 = uVar1 + 0x5fff6 & uVar1 + 0x7ff9c ^ uVar1 + 0xdfc18 & uVar1 + 0x7d8f0;
      uVar1 = uVar2 >> 0x11;
      if (99999 < param_3) {
        uVar1 = (uVar2 >> 0x11) + 5;
      }
      if (uVar1 != 0) goto LAB_019ce9cc;
    }
    iVar5 = 1;
    iVar4 = iVar5;
    do {
      FUN_01ac6cbc(param_2,&DAT_005319c3,1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  else {
    if (param_4 != '\x01') {
      uVar6 = FUN_019ce0bc(auStack_48,param_3);
      uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
      FUN_01ac6cbc(param_2,(int)uVar6,uVar3);
      *(undefined4 *)(param_1 + 4) = uVar3;
      *param_1 = 4;
      return;
    }
    if (param_3 != 0) {
      iVar5 = 0;
      uVar1 = param_3;
      if (99999 < param_3) {
        uVar1 = param_3 / 100000;
      }
      uVar2 = uVar1 + 0x5fff6 & uVar1 + 0x7ff9c ^ uVar1 + 0xdfc18 & uVar1 + 0x7d8f0;
      uVar1 = uVar2 >> 0x11;
      if (99999 < param_3) {
        uVar1 = (uVar2 >> 0x11) + 5;
      }
      if (uVar1 != 0) goto LAB_019ce9cc;
    }
    iVar5 = 1;
    iVar4 = iVar5;
    do {
      FUN_01ac6cbc(param_2,"0",1);
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
LAB_019ce9cc:
  uVar6 = FUN_019ce0bc(auStack_48,param_3);
  iVar4 = (int)((ulonglong)uVar6 >> 0x20);
  FUN_01ac6cbc(param_2,(int)uVar6,iVar4);
  *param_1 = 4;
  *(int *)(param_1 + 4) = iVar4 + iVar5;
  return;
}

