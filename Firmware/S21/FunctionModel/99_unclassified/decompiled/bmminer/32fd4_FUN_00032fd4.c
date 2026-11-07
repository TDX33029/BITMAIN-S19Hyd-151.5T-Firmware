// FUN_00032fd4 @ 00032fd4  size=436  callers=2
// program: bmminer


void FUN_00032fd4(uint *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 local_18;
  undefined1 local_17;
  undefined1 local_16;
  byte local_15;
  undefined1 local_14;
  undefined1 local_13;
  undefined1 local_12;
  undefined1 local_11;
  
  uVar4 = *param_1;
  uVar1 = param_1[1];
  uVar2 = uVar4 & 0x3f;
  local_15 = (byte)(uVar4 >> 0x1d) | (byte)(uVar1 << 3);
  local_11 = (undefined1)(uVar4 << 3);
  local_14 = (undefined1)((uVar4 & 0x1fffffff) >> 0x15);
  local_17 = (undefined1)((uVar1 & 0x1fffffff) >> 0xd);
  local_16 = (undefined1)((uVar1 & 0x1fffffff) >> 5);
  local_13 = (undefined1)((uVar4 & 0x1fffffff) >> 0xd);
  if (uVar2 < 0x38) {
    iVar3 = 0x38 - uVar2;
  }
  else {
    iVar3 = 0x78 - uVar2;
  }
  local_12 = (undefined1)((uVar4 & 0x1fffffff) >> 5);
  local_18 = (undefined1)((uVar1 & 0x1fffffff) >> 0x15);
  FUN_00032efc(param_1,&DAT_0009dcf4,iVar3);
  FUN_00032efc(param_1,&local_18,8);
  *param_2 = *(undefined1 *)((int)param_1 + 0xb);
  param_2[1] = (char)*(undefined2 *)((int)param_1 + 10);
  param_2[2] = (char)(param_1[2] >> 8);
  param_2[3] = (char)param_1[2];
  param_2[4] = *(undefined1 *)((int)param_1 + 0xf);
  param_2[5] = (char)*(undefined2 *)((int)param_1 + 0xe);
  param_2[6] = (char)(param_1[3] >> 8);
  param_2[7] = (char)param_1[3];
  param_2[8] = *(undefined1 *)((int)param_1 + 0x13);
  param_2[9] = (char)*(undefined2 *)((int)param_1 + 0x12);
  param_2[10] = (char)(param_1[4] >> 8);
  param_2[0xb] = (char)param_1[4];
  param_2[0xc] = *(undefined1 *)((int)param_1 + 0x17);
  param_2[0xd] = (char)*(undefined2 *)((int)param_1 + 0x16);
  param_2[0xe] = (char)(param_1[5] >> 8);
  param_2[0xf] = (char)param_1[5];
  param_2[0x10] = *(undefined1 *)((int)param_1 + 0x1b);
  param_2[0x11] = (char)*(undefined2 *)((int)param_1 + 0x1a);
  param_2[0x12] = (char)(param_1[6] >> 8);
  param_2[0x13] = (char)param_1[6];
  param_2[0x14] = *(undefined1 *)((int)param_1 + 0x1f);
  param_2[0x15] = (char)*(undefined2 *)((int)param_1 + 0x1e);
  param_2[0x16] = (char)(param_1[7] >> 8);
  param_2[0x17] = (char)param_1[7];
  param_2[0x18] = *(undefined1 *)((int)param_1 + 0x23);
  param_2[0x19] = (char)*(undefined2 *)((int)param_1 + 0x22);
  param_2[0x1a] = (char)(param_1[8] >> 8);
  param_2[0x1b] = (char)param_1[8];
  param_2[0x1c] = *(undefined1 *)((int)param_1 + 0x27);
  param_2[0x1d] = (char)*(undefined2 *)((int)param_1 + 0x26);
  param_2[0x1e] = (char)(param_1[9] >> 8);
  param_2[0x1f] = (char)param_1[9];
  return;
}

