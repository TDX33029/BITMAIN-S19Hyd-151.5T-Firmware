// FUN_01578850 @ 01578850 size=296 calls_out=5 calls_in=2
// strings: assertion failed: size <= max_alloc1 element in sequence

void FUN_01578850(uint *param_1,undefined4 param_2,uint param_3)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  uint local_28;
  uint local_24;
  byte *local_1c;
  
  if (param_3 == 0) {
    *param_1 = 0xffffffff;
    param_1[1] = 0xffffffff;
    return;
  }
  if (param_3 < 9) {
    local_24 = 0;
    local_28 = 0;
    FUN_016dd1aa(&local_28);
    *param_1 = local_28;
    param_1[1] = local_24;
    return;
  }
  uVar5 = param_3 + ((uint)((short)(0x26U - (short)LZCOUNT(param_3) & 0xff) * 0x25) >> 8);
  if (0x7ffffffd < uVar5) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: size <= max_alloc1 element in sequence",0x23,&DAT_018a92ac);
  }
  if (uVar5 < 2) {
    local_1c = (byte *)0x0;
    iVar2 = FUN_016d51b0(&local_1c,4,uVar5);
    if (iVar2 != 0) goto LAB_0157896c;
    pbVar1 = local_1c;
  }
  else {
    pbVar1 = (byte *)thunk_FUN_016d4a50(uVar5);
  }
  if (pbVar1 != (byte *)0x0) {
    pbVar3 = pbVar1;
    do {
      pbVar4 = pbVar3 + 1;
      *pbVar3 = (byte)param_3 | 0x80;
      param_3 = param_3 >> 7;
      pbVar3 = pbVar4;
    } while (param_3 != 0);
    FUN_016dd1aa(pbVar4,param_2);
    *param_1 = (uint)pbVar1 >> 1 | 0x80000000;
    param_1[1] = 0;
    return;
  }
LAB_0157896c:
                    /* WARNING: Subroutine does not return */
  FUN_00600874(2,uVar5);
}

