// FUN_00f6f318 @ 00f6f318 size=284 calls_out=6 calls_in=9
// strings: 

void FUN_00f6f318(int *param_1)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  ulonglong uVar5;
  uint local_50;
  undefined4 uStack_4c;
  uint uStack_48;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  uint local_30;
  int local_2c;
  uint local_28;
  int local_24;
  int local_20;
  
  FUN_015f3b0c(&local_30,0);
  local_3c = 0;
  local_40 = 0;
  local_50 = local_30;
  uStack_4c = local_2c;
  uStack_48 = local_28;
  local_38 = 0;
  FUN_015f3c24(&local_30,&local_50,&local_40);
  if ((local_30 & 1) != 0) {
    local_30 = local_28;
    local_28 = local_20;
    local_2c = local_24;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0035d72e,0x1d,&local_30,&DAT_0188029c,&DAT_018802bc);
  }
  uVar5 = FUN_01846048(local_28,local_24,0x15180,0);
  lVar1 = (uVar5 & 0xffffffff) * 0x15180;
  uVar3 = (uint)lVar1;
  iVar4 = local_28 - uVar3;
  local_24 = local_24 -
             ((int)(uVar5 >> 0x20) * 0x15180 + (int)((ulonglong)lVar1 >> 0x20) +
             (uint)(local_28 < uVar3));
  iVar2 = local_24 >> 0x1f;
  lVar1 = uVar5 + CONCAT44(iVar2,iVar2);
  uVar3 = (uint)lVar1;
  if (((int)((ulonglong)lVar1 >> 0x20) - (uint)(uVar3 < 0x7ff506c5) != -1) ||
     (iVar2 = FUN_00f6b330(uVar3 + 0xaf93b,0xaf93b,uVar3 + 0x800af93b), iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018802cc);
  }
  if (local_24 < 0) {
    iVar4 = iVar4 + 0x15180;
  }
  *param_1 = iVar2;
  param_1[1] = iVar4;
  param_1[2] = local_20;
  return;
}

