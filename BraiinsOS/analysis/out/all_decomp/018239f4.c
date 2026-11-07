// FUN_018239f4 @ 018239f4 size=500 calls_out=2 calls_in=5
// strings: 

undefined8 FUN_018239f4(undefined4 *param_1,undefined1 *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  uint local_1c;
  uint local_18;
  int local_14;
  
  uVar1 = param_1[0x19];
  uVar2 = param_1[0x18];
  local_14 = DAT_018ddaf8;
  local_1c = (uVar2 >> 0x1d | (uVar1 & 0x1f) << 3) << 0x18 |
             ((uVar1 & 0x1fffffff) >> 5 & 0xff) << 0x10 | ((uVar1 & 0x1fffffff) >> 0xd & 0xff) << 8
             | (uVar1 & 0x1fffffff) >> 0x15;
  local_18 = uVar2 << 0x1b | ((uVar2 & 0x1fffffff) >> 5 & 0xff) << 0x10 |
             ((uVar2 & 0x1fffffff) >> 0xd & 0xff) << 8 | (uVar2 & 0x1fffffff) >> 0x15;
  FUN_0182169c(param_1,&DAT_00563a90,(0x77 - uVar2 & 0x3f) + 1);
  FUN_0182169c(param_1,&local_1c,8);
  uVar3 = *param_1;
  param_2[3] = (char)uVar3;
  param_2[2] = (char)((uint)uVar3 >> 8);
  param_2[1] = (char)((uint)uVar3 >> 0x10);
  *param_2 = (char)((uint)uVar3 >> 0x18);
  *param_1 = 0;
  uVar3 = param_1[1];
  param_2[7] = (char)uVar3;
  param_2[6] = (char)((uint)uVar3 >> 8);
  param_2[5] = (char)((uint)uVar3 >> 0x10);
  param_2[4] = (char)((uint)uVar3 >> 0x18);
  param_1[1] = 0;
  uVar3 = param_1[2];
  param_2[0xb] = (char)uVar3;
  param_2[10] = (char)((uint)uVar3 >> 8);
  param_2[9] = (char)((uint)uVar3 >> 0x10);
  param_2[8] = (char)((uint)uVar3 >> 0x18);
  param_1[2] = 0;
  uVar3 = param_1[3];
  param_2[0xf] = (char)uVar3;
  param_2[0xe] = (char)((uint)uVar3 >> 8);
  param_2[0xd] = (char)((uint)uVar3 >> 0x10);
  param_2[0xc] = (char)((uint)uVar3 >> 0x18);
  param_1[3] = 0;
  uVar3 = param_1[4];
  param_2[0x13] = (char)uVar3;
  param_2[0x12] = (char)((uint)uVar3 >> 8);
  param_2[0x11] = (char)((uint)uVar3 >> 0x10);
  param_2[0x10] = (char)((uint)uVar3 >> 0x18);
  param_1[4] = 0;
  uVar3 = param_1[5];
  param_2[0x17] = (char)uVar3;
  param_2[0x16] = (char)((uint)uVar3 >> 8);
  param_2[0x15] = (char)((uint)uVar3 >> 0x10);
  param_2[0x14] = (char)((uint)uVar3 >> 0x18);
  param_1[5] = 0;
  uVar3 = param_1[6];
  param_2[0x1b] = (char)uVar3;
  param_2[0x1a] = (char)((uint)uVar3 >> 8);
  param_2[0x19] = (char)((uint)uVar3 >> 0x10);
  param_2[0x18] = (char)((uint)uVar3 >> 0x18);
  param_1[6] = 0;
  uVar3 = param_1[7];
  param_2[0x1f] = (char)uVar3;
  param_2[0x1c] = (char)((uint)uVar3 >> 0x18);
  param_2[0x1e] = (char)((uint)uVar3 >> 8);
  param_2[0x1d] = (char)((uint)uVar3 >> 0x10);
  param_1[7] = 0;
  if (local_14 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}

