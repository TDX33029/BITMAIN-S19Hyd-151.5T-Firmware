// FUN_01553e04 @ 01553e04 size=292 calls_out=1 calls_in=0
// strings: 

void FUN_01553e04(undefined4 param_1,int param_2,ushort *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_c0 [12];
  byte local_b4;
  byte local_b3;
  byte local_b2;
  byte local_b1;
  byte local_b0;
  byte local_af;
  byte local_ae;
  byte local_ad;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  
  iVar1 = *(int *)(param_3 + 6);
  if (*(int *)(param_3 + 2) != 0) {
    iVar1 = *(int *)(param_3 + 8) - iVar1;
  }
  FUN_01533e04(auStack_c0,iVar1 + 0x18);
  local_a9 = *(undefined1 *)(param_2 + 0x10);
  local_af = *(byte *)(param_2 + 0x16) ^ (byte)((uint)param_6 >> 8);
  local_b0 = *(byte *)(param_2 + 0x17) ^ (byte)param_6;
  local_b1 = *(byte *)(param_2 + 0x18) ^ (byte)((uint)param_5 >> 0x18);
  local_b2 = *(byte *)(param_2 + 0x19) ^ (byte)((uint)param_5 >> 0x10);
  local_ae = *(byte *)(param_2 + 0x15) ^ (byte)((uint)param_6 >> 0x10);
  local_b3 = *(byte *)(param_2 + 0x1a) ^ (byte)((uint)param_5 >> 8);
  local_aa = *(undefined1 *)(param_2 + 0x11);
  local_ad = *(byte *)(param_2 + 0x14) ^ (byte)((uint)param_6 >> 0x18);
  local_ab = *(undefined1 *)(param_2 + 0x12);
  local_ac = *(undefined1 *)(param_2 + 0x13);
  local_b4 = *(byte *)(param_2 + 0x1b) ^ (byte)param_5;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_3[10]) {
  case '\x01':
    break;
  case '\x02':
    break;
  case '\x03':
    break;
  case '\x04':
    break;
  case '\x05':
  }
                    /* WARNING: Could not recover jumptable at 0x01553f3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_01553f40 + *(int *)(&LAB_01553f40 + (uint)*param_3 * 4)))();
  return;
}

