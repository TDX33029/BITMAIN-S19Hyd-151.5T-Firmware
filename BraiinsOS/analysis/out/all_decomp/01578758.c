// FUN_01578758 @ 01578758 size=172 calls_out=1 calls_in=0
// strings: 

void FUN_01578758(byte *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = *(int *)param_1;
  if (iVar1 == -1) {
    param_3 = *(int *)(param_1 + 4);
  }
  if (iVar1 == -1 && param_3 == -1) {
    param_1 = &DAT_00000001;
    uVar2 = 0;
  }
  else if (iVar1 < 0) {
    param_1 = (byte *)(iVar1 * 2);
    if ((char)param_1[1] < '\0') {
      uVar2 = FUN_01578804(param_1);
    }
    else {
      uVar2 = *param_1 & 0x7f;
    }
    param_1 = param_1 + ((uint)((short)(0x26U - (short)LZCOUNT(uVar2) & 0xff) * 0x25) >> 8);
  }
  else {
    uVar2 = LZCOUNT(*(undefined4 *)param_1) + 0x20;
    if (*(int *)(param_1 + 4) != 0) {
      uVar2 = LZCOUNT(*(int *)(param_1 + 4));
    }
    uVar2 = 8 - (uVar2 >> 3);
  }
                    /* WARNING: Could not recover jumptable at 0x015787e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(param_2[1] + 0xc))(*param_2,param_1,uVar2);
  return;
}

