// FUN_01552c1c @ 01552c1c size=292 calls_out=1 calls_in=0
// strings: 

void FUN_01552c1c(undefined4 param_1,int param_2,ushort *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_78 [12];
  byte local_6c;
  byte local_6b;
  byte local_6a;
  byte local_69;
  byte local_68;
  byte local_67;
  byte local_66;
  byte local_65;
  undefined1 local_64;
  undefined1 local_63;
  undefined1 local_62;
  undefined1 local_61;
  
  iVar1 = *(int *)(param_3 + 6);
  if (*(int *)(param_3 + 2) != 0) {
    iVar1 = *(int *)(param_3 + 8) - iVar1;
  }
  FUN_01533e04(auStack_78,iVar1 + 0x10);
  local_61 = *(undefined1 *)(param_2 + 0xc);
  local_68 = *(byte *)(param_2 + 0x13) ^ (byte)param_6;
  local_67 = *(byte *)(param_2 + 0x12) ^ (byte)((uint)param_6 >> 8);
  local_69 = *(byte *)(param_2 + 0x14) ^ (byte)((uint)param_5 >> 0x18);
  local_6a = *(byte *)(param_2 + 0x15) ^ (byte)((uint)param_5 >> 0x10);
  local_66 = *(byte *)(param_2 + 0x11) ^ (byte)((uint)param_6 >> 0x10);
  local_64 = *(undefined1 *)(param_2 + 0xf);
  local_6b = *(byte *)(param_2 + 0x16) ^ (byte)((uint)param_5 >> 8);
  local_62 = *(undefined1 *)(param_2 + 0xd);
  local_65 = *(byte *)(param_2 + 0x10) ^ (byte)((uint)param_6 >> 0x18);
  local_63 = *(undefined1 *)(param_2 + 0xe);
  local_6c = *(byte *)(param_2 + 0x17) ^ (byte)param_5;
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
                    /* WARNING: Could not recover jumptable at 0x01552d54. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_01552d58 + *(int *)(&LAB_01552d58 + (uint)*param_3 * 4)))();
  return;
}

