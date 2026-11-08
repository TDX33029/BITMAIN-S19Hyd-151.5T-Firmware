// FUN_016e2bf0 @ 016e2bf0 size=276 calls_out=5 calls_in=6
// strings: 

void FUN_016e2bf0(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined1 auStack_24 [8];
  uint local_1c;
  
  local_1c = DAT_018ddaf8;
  uVar6 = FUN_016e24e4(param_1,auStack_24,2,0);
  pbVar3 = (byte *)((ulonglong)uVar6 >> 0x20);
  if (((int)uVar6 == 0) ||
     (uVar6 = FUN_016e2b54(auStack_24), pbVar3 = (byte *)((ulonglong)uVar6 >> 0x20), (int)uVar6 == 0
     )) {
LAB_016e2c3c:
    uVar1 = 0;
  }
  else {
    *param_2 = 0;
    param_2[1] = 0;
    iVar2 = FUN_016e1e04(auStack_24);
    uVar6 = FUN_016e1e1c(auStack_24);
    pbVar3 = (byte *)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 != 0) {
      pbVar3 = (byte *)(iVar2 + -1);
      uVar4 = *param_2;
      uVar5 = param_2[1];
      do {
        if (uVar5 >> 0x18 != 0) goto LAB_016e2c3c;
        uVar5 = uVar5 << 8 | uVar4 >> 0x18;
        *param_2 = uVar4 << 8;
        param_2[1] = uVar5;
        pbVar3 = pbVar3 + 1;
        uVar4 = (uint)*pbVar3 | uVar4 << 8;
        *param_2 = uVar4;
      } while (pbVar3 != (byte *)(iVar2 + (int)uVar6 + -1));
    }
    uVar1 = 1;
  }
  if ((local_1c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar1,pbVar3,local_1c ^ DAT_018ddaf8,0);
  }
  return;
}

