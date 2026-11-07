// FUN_018fd62c @ 018fd62c size=236 calls_out=1 calls_in=0
// strings: 

void FUN_018fd62c(undefined4 param_1,int param_2,ushort *param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_70 [64];
  byte local_30 [4];
  uint local_2c;
  uint local_28;
  
  iVar2 = *(int *)(param_3 + 6);
  if (*(int *)(param_3 + 2) != 0) {
    iVar2 = *(int *)(param_3 + 8) - iVar2;
  }
  FUN_01931298(auStack_70,iVar2 + 0x18);
  iVar2 = 0;
  local_28 = param_5 << 0x18 | (param_5 >> 8 & 0xff) << 0x10 | (param_5 >> 0x10 & 0xff) << 8 |
             param_5 >> 0x18;
  local_2c = param_6 << 0x18 | (param_6 >> 8 & 0xff) << 0x10 | (param_6 >> 0x10 & 0xff) << 8 |
             param_6 >> 0x18;
  local_30[0] = 0;
  local_30[1] = 0;
  local_30[2] = 0;
  local_30[3] = 0;
  do {
    local_30[iVar2] = local_30[iVar2] ^ *(byte *)(param_2 + iVar2 + 0x220);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xc);
  uVar1 = 0x14;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_3[10]) {
  case '\x01':
    uVar1 = 0x15;
    break;
  case '\x02':
    uVar1 = 0x16;
    break;
  case '\x03':
    uVar1 = 0x17;
    break;
  case '\x04':
    uVar1 = 0x18;
    break;
  case '\x05':
    uVar1 = *(undefined1 *)((int)param_3 + 0x15);
  }
                    /* WARNING: Could not recover jumptable at 0x018fd72c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_018fd730 + *(int *)(&LAB_018fd730 + (uint)*param_3 * 4)))
            (&LAB_018fd730,(uint)*param_3,uVar1,2);
  return;
}

