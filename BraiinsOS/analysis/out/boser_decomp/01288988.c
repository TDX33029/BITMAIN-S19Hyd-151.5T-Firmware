// FUN_01288988 @ 01288988 size=284 calls_out=0 calls_in=2
// strings: invalid UTC offset | invalid characters in time zone name | time zone name must have between 3 and 7 characters

void FUN_01288988(undefined4 *param_1,int param_2,undefined1 param_3,int param_4,uint param_5)

{
  undefined4 uVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (param_2 == -0x80000000) {
    param_1[4] = 0x3b9aca02;
    uVar1 = 1;
    param_1[2] = "invalid UTC offset";
    param_1[3] = 0x12;
  }
  else if (param_4 == 0) {
    *(undefined1 *)((int)param_1 + 0x11) = param_3;
    uVar1 = 0;
    *(undefined1 *)(param_1 + 2) = 0;
    param_1[1] = param_2;
  }
  else if (param_5 - 3 < 5) {
    local_1c = 0;
    local_20 = param_5 & 0xff;
    uVar3 = 0;
    do {
      uVar4 = (uint)*(byte *)(param_4 + uVar3);
      uVar5 = uVar4 - 0x30;
      bVar6 = 9 < uVar5;
      if (bVar6) {
        uVar5 = (uVar4 & 0xdf) - 0x41;
      }
      if ((bVar6 && 0x19 < uVar5) && (uVar4 != 0x2d && uVar4 != 0x2b)) {
        uVar1 = 0x24;
        pcVar2 = "invalid characters in time zone name";
        goto LAB_01288a70;
      }
      uVar5 = uVar3 + 1;
      *(byte *)((int)&local_20 + uVar3 + 1) = *(byte *)(param_4 + uVar3);
      uVar3 = uVar5;
    } while (param_5 != uVar5);
    *(uint *)((int)param_1 + 9) = local_20;
    *(undefined1 *)((int)param_1 + 0x11) = param_3;
    uVar1 = 0;
    *(undefined4 *)((int)param_1 + 0xd) = local_1c;
    *(undefined1 *)(param_1 + 2) = 1;
    param_1[1] = param_2;
  }
  else {
    uVar1 = 0x33;
    pcVar2 = "time zone name must have between 3 and 7 characters";
LAB_01288a70:
    param_1[2] = pcVar2;
    param_1[3] = uVar1;
    uVar1 = 1;
    param_1[4] = 0x3b9aca02;
  }
  *param_1 = uVar1;
  return;
}

