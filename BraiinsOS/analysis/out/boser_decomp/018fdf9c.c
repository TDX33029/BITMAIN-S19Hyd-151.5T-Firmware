// FUN_018fdf9c @ 018fdf9c size=256 calls_out=1 calls_in=0
// strings: 

void FUN_018fdf9c(undefined4 param_1,int param_2,ushort *param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  int iVar1;
  undefined1 auStack_70 [16];
  undefined4 local_60;
  uint uStack_5c;
  uint uStack_58;
  undefined4 local_50;
  uint local_4c;
  uint local_48;
  
  iVar1 = *(int *)(param_3 + 6);
  if (*(int *)(param_3 + 2) != 0) {
    iVar1 = *(int *)(param_3 + 8) - iVar1;
  }
  FUN_01931298(auStack_70,iVar1 + 0x10);
  iVar1 = 0;
  local_48 = param_5 << 0x18 | (param_5 >> 8 & 0xff) << 0x10 | (param_5 >> 0x10 & 0xff) << 8 |
             param_5 >> 0x18;
  local_4c = param_6 << 0x18 | (param_6 >> 8 & 0xff) << 0x10 | (param_6 >> 0x10 & 0xff) << 8 |
             param_6 >> 0x18;
  local_50 = 0;
  do {
    *(byte *)((int)&local_50 + iVar1) =
         *(byte *)((int)&local_50 + iVar1) ^ *(byte *)(param_2 + iVar1 + 0x220);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0xc);
  local_60 = local_50;
  uStack_5c = local_4c;
  uStack_58 = local_48;
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
                    /* WARNING: Could not recover jumptable at 0x018fe0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_018fe0b4 + *(int *)(&LAB_018fe0b4 + (uint)*param_3 * 4)))();
  return;
}

