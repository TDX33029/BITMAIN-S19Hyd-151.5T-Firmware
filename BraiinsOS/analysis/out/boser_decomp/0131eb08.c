// FUN_0131eb08 @ 0131eb08 size=152 calls_out=0 calls_in=1
// strings: 

void FUN_0131eb08(int param_1,byte *param_2,int param_3,undefined1 *param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar7 = 0;
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = 0x10;
    uVar5 = 0;
    do {
      bVar1 = *param_2;
      uVar4 = uVar3 & 0x38;
      uVar6 = uVar4 - 0x20;
      uVar3 = uVar3 - 8;
      uVar2 = (uint)bVar1 << uVar4;
      if (-1 < (int)uVar6) {
        uVar2 = 0;
      }
      uVar7 = uVar2 | uVar7;
      uVar2 = (uint)(bVar1 >> (0x20 - uVar4 & 0xff));
      if (-1 < (int)uVar6) {
        uVar2 = (uint)bVar1 << (uVar6 & 0xff);
      }
      uVar5 = uVar2 | uVar5;
      param_3 = param_3 + -1;
      param_2 = param_2 + 1;
    } while (param_3 != 0);
  }
  if (param_5 != 0) {
    uVar3 = 0x12;
    do {
      uVar4 = uVar3 & 0x3e;
      uVar3 = uVar3 - 6;
      uVar2 = uVar7 >> uVar4 | uVar5 << (0x20 - uVar4 & 0xff);
      if (-1 < (int)(uVar4 - 0x20)) {
        uVar2 = uVar5 >> (uVar4 - 0x20 & 0xff);
      }
      param_5 = param_5 + -1;
      *param_4 = *(undefined1 *)(param_1 + (uVar2 & 0xff));
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return;
}

