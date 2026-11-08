// FUN_01903340 @ 01903340 size=252 calls_out=1 calls_in=0
// strings: 

void FUN_01903340(undefined4 param_1,int param_2,ushort *param_3,undefined4 param_4,uint param_5,
                 uint param_6)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_d8 [16];
  undefined4 local_c8;
  uint uStack_c4;
  uint uStack_c0;
  undefined4 local_48;
  uint local_44;
  uint local_40;
  
  iVar2 = *(int *)(param_3 + 6);
  if (*(int *)(param_3 + 2) != 0) {
    iVar2 = *(int *)(param_3 + 8) - iVar2;
  }
  FUN_01931298(auStack_d8,iVar2 + 0x18);
  iVar2 = 0;
  local_40 = param_5 << 0x18 | (param_5 >> 8 & 0xff) << 0x10 | (param_5 >> 0x10 & 0xff) << 8 |
             param_5 >> 0x18;
  local_44 = param_6 << 0x18 | (param_6 >> 8 & 0xff) << 0x10 | (param_6 >> 0x10 & 0xff) << 8 |
             param_6 >> 0x18;
  local_48 = 0;
  do {
    *(byte *)((int)&local_48 + iVar2) =
         *(byte *)((int)&local_48 + iVar2) ^ *(byte *)(param_2 + 0x10 + iVar2);
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0xc);
  local_c8 = local_48;
  uStack_c4 = local_44;
  uStack_c0 = local_40;
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
                    /* WARNING: Could not recover jumptable at 0x01903450. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_01903454 + *(int *)(&LAB_01903454 + (uint)*param_3 * 4)))
            (&LAB_01903454,*(int *)(&LAB_01903454 + (uint)*param_3 * 4),uVar1,2);
  return;
}

