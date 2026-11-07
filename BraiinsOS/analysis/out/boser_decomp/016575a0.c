// FUN_016575a0 @ 016575a0 size=332 calls_out=3 calls_in=1
// strings: expected IPv4 or IPv6 socket

void FUN_016575a0(undefined1 *param_1,short *param_2)

{
  short sVar1;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  char cStack_34;
  undefined1 uStack_33;
  undefined2 uStack_32;
  undefined4 *local_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  
  if (param_2 == (short *)0x0) {
    uVar2 = 2;
  }
  else {
    sVar1 = *param_2;
    if (sVar1 == 0x11) {
      param_1[7] = 2;
      uVar3 = *(undefined4 *)(param_2 + 6);
      sVar1 = param_2[8];
      *param_1 = 1;
      *(short *)(param_1 + 5) = sVar1;
      *(undefined4 *)(param_1 + 1) = uVar3;
      return;
    }
    if (sVar1 == 2) {
      uVar4 = *(uint *)(param_2 + 2);
      param_1[7] = 0;
      *param_1 = 0;
      *(uint *)(param_1 + 8) =
           (uVar4 >> 0x10 & 0xff) << 0x10 | uVar4 & 0xff000000 | (uVar4 >> 8 & 0xff) << 8 |
           uVar4 & 0xff;
      return;
    }
    if (sVar1 != 10) {
      FUN_019a18a8(&cStack_34,0x15,"expected IPv4 or IPv6 socket",0x1c);
      param_1[7] = 2;
      *param_1 = 0;
      if (cStack_34 != '\x03') {
        return;
      }
      uVar3 = *local_30;
      puVar6 = (undefined4 *)local_30[1];
      pcVar5 = (code *)*puVar6;
      if (pcVar5 != (code *)0x0) {
        (*pcVar5)(uVar3);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_01be4678(uVar3);
      }
      thunk_FUN_01be4678(local_30);
      return;
    }
    local_28 = *(undefined4 *)(param_2 + 10);
    uVar3 = *(undefined4 *)(param_2 + 4);
    local_30 = *(undefined4 **)(param_2 + 6);
    uStack_2c = *(undefined4 *)(param_2 + 8);
    cStack_34 = (char)uVar3;
    uStack_33 = (undefined1)((uint)uVar3 >> 8);
    uStack_32 = (undefined2)((uint)uVar3 >> 0x10);
    FUN_01bed4e2(param_1 + 8,&cStack_34,0x10);
    uVar2 = 1;
  }
  param_1[7] = uVar2;
  *param_1 = 0;
  return;
}

