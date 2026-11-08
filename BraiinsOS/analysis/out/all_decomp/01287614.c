// FUN_01287614 @ 01287614 size=364 calls_out=2 calls_in=0
// strings: expected IPv4 or IPv6 socket

void FUN_01287614(undefined1 *param_1,short *param_2)

{
  short sVar1;
  uint uVar2;
  code *pcVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  char local_34 [4];
  undefined4 *local_30;
  
  if (param_2 == (short *)0x0) {
    param_1[7] = 2;
    *param_1 = 0;
  }
  else {
    sVar1 = *param_2;
    if (sVar1 == 0x11) {
      param_1[7] = 2;
      uVar4 = *(undefined4 *)(param_2 + 6);
      sVar1 = param_2[8];
      *param_1 = 1;
      *(short *)(param_1 + 5) = sVar1;
      *(undefined4 *)(param_1 + 1) = uVar4;
      return;
    }
    if (sVar1 == 2) {
      uVar2 = *(uint *)(param_2 + 2);
      param_1[7] = 0;
      *param_1 = 0;
      *(uint *)(param_1 + 8) =
           (uVar2 >> 0x10 & 0xff) << 0x10 | uVar2 & 0xff000000 | (uVar2 >> 8 & 0xff) << 8 |
           uVar2 & 0xff;
      return;
    }
    if (sVar1 == 10) {
      uVar5 = *(undefined4 *)(param_2 + 4);
      uVar7 = *(undefined4 *)(param_2 + 6);
      uVar6 = *(undefined4 *)(param_2 + 8);
      uVar4 = *(undefined4 *)(param_2 + 10);
      param_1[7] = 1;
      *param_1 = 0;
      *(undefined4 *)(param_1 + 8) = uVar5;
      *(undefined4 *)(param_1 + 0xc) = uVar7;
      *(undefined4 *)(param_1 + 0x10) = uVar6;
      *(undefined4 *)(param_1 + 0x14) = uVar4;
      return;
    }
    FUN_015e79d4(local_34,0x15,"expected IPv4 or IPv6 socket",0x1c);
    param_1[7] = 2;
    *param_1 = 0;
    if (local_34[0] == '\x03') {
      uVar4 = *local_30;
      puVar8 = (undefined4 *)local_30[1];
      pcVar3 = (code *)*puVar8;
      if (pcVar3 != (code *)0x0) {
        (*pcVar3)(uVar4);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(uVar4);
      }
      thunk_FUN_016d3fb4(local_30);
      return;
    }
  }
  return;
}

