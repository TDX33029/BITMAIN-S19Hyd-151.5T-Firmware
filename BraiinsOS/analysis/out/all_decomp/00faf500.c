// FUN_00faf500 @ 00faf500 size=348 calls_out=1 calls_in=4
// strings: assertion failed: !buf.is_empty() | assertion failed: buf[0] > b'0'

void FUN_00faf500(byte *param_1,uint param_2,ushort param_3,uint param_4,undefined2 *param_5)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: !buf.is_empty()",0x21,&DAT_01880efc);
  }
  if (*param_1 < 0x31) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: buf[0] > b\'0\'",0x1f,&DAT_01880f0c);
  }
  iVar2 = (int)(short)param_3;
  *param_5 = 2;
  if (iVar2 < 1) {
    bVar4 = param_2 <= param_4;
    bVar3 = param_4 == param_2;
    if (bVar4 && !bVar3) {
      param_4 = param_4 - param_2;
    }
    uVar1 = -iVar2;
    *(byte **)(param_5 + 0xe) = param_1;
    *(uint *)(param_5 + 0x10) = param_2;
    *(char **)(param_5 + 2) = "0.";
    param_5[0xc] = 2;
    if (bVar4 && !bVar3) {
      bVar4 = uVar1 <= param_4;
      bVar3 = param_4 == uVar1;
    }
    *(undefined4 *)(param_5 + 4) = 2;
    *(uint *)(param_5 + 8) = uVar1;
    param_5[6] = 0;
    if (!bVar4 || bVar3) {
      return;
    }
    param_4 = param_4 + iVar2;
  }
  else {
    uVar1 = (uint)param_3;
    *(byte **)(param_5 + 2) = param_1;
    if (uVar1 < param_2) {
      param_2 = param_2 - uVar1;
      *(uint *)(param_5 + 4) = uVar1;
      *(undefined **)(param_5 + 8) = &DAT_00418eb7;
      *(byte **)(param_5 + 0xe) = param_1 + uVar1;
      *(uint *)(param_5 + 0x10) = param_2;
      param_5[0xc] = 2;
      param_5[6] = 2;
      *(undefined4 *)(param_5 + 10) = 1;
      if (param_4 <= param_2) {
        return;
      }
      param_4 = param_4 - param_2;
    }
    else {
      *(uint *)(param_5 + 8) = uVar1 - param_2;
      param_5[6] = 0;
      *(uint *)(param_5 + 4) = param_2;
      if (param_4 == 0) {
        return;
      }
      param_5[0xc] = 2;
      *(undefined **)(param_5 + 0xe) = &DAT_00418eb7;
      *(undefined4 *)(param_5 + 0x10) = 1;
    }
  }
  *(uint *)(param_5 + 0x14) = param_4;
  param_5[0x12] = 0;
  return;
}

