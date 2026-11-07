// FUN_016e2730 @ 016e2730 size=216 calls_out=4 calls_in=1
// strings: 

void FUN_016e2730(undefined4 param_1,uint *param_2)

{
  undefined4 uVar1;
  byte *pbVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_1c [8];
  uint local_14;
  
  local_14 = DAT_018ddaf8;
  uVar4 = FUN_016e24e4(param_1,auStack_1c,1,0);
  uVar3 = (uint)((ulonglong)uVar4 >> 0x20);
  if (((int)uVar4 != 0) &&
     (uVar4 = FUN_016e1e1c(auStack_1c), uVar3 = (uint)((ulonglong)uVar4 >> 0x20), (int)uVar4 == 1))
  {
    pbVar2 = (byte *)FUN_016e1e04(auStack_1c);
    uVar3 = (uint)*pbVar2;
    if (0xfd < (uVar3 - 1 & 0xff)) {
      if (uVar3 != 0) {
        uVar3 = 1;
      }
      *param_2 = uVar3;
      uVar1 = 1;
      goto LAB_016e2780;
    }
  }
  uVar1 = 0;
LAB_016e2780:
  if ((local_14 ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78(uVar1,uVar3,local_14 ^ DAT_018ddaf8,0);
  }
  return;
}

