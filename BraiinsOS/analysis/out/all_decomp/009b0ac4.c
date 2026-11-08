// FUN_009b0ac4 @ 009b0ac4 size=276 calls_out=5 calls_in=1
// strings: 

void FUN_009b0ac4(undefined4 param_1,undefined4 param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  int local_6c;
  undefined4 local_68;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  int *local_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  int local_30;
  int *piStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  FUN_009b0238(&local_6c,param_1,param_2);
  local_44 = *(undefined4 *)(local_6c + 0x34);
  local_50 = *(undefined4 *)(local_6c + 0x24);
  local_4c = *(undefined4 *)(local_6c + 0x28);
  local_60 = *(undefined4 *)(local_6c + 0xc);
  uStack_5c = *(undefined4 *)(local_6c + 0x10);
  uStack_58 = *(undefined4 *)(local_6c + 0x18);
  uStack_54 = *(undefined4 *)(local_6c + 0x1c);
  local_48 = *(undefined4 *)(local_6c + 0x30);
  FUN_009b564c(&local_40,DAT_018d7fd0 + 8,&local_60,4);
  if (local_40 != 5) {
    local_24 = local_34;
    local_30 = local_40;
    piStack_2c = local_3c;
    uStack_28 = uStack_38;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_30,&DAT_01869dec,&DAT_01886b2c);
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(local_3c + 2);
  } while (!bVar1);
  local_3c[2] = param_3;
  local_3c[3] = 0;
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *local_3c;
    bVar1 = (bool)hasExclusiveAccess(local_3c);
  } while (!bVar1);
  *local_3c = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4();
  }
  FUN_009ccc20(local_68);
  return;
}

