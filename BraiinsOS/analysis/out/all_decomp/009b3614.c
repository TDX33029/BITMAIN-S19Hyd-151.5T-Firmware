// FUN_009b3614 @ 009b3614 size=240 calls_out=3 calls_in=2
// strings: 

void FUN_009b3614(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 in_d0;
  undefined *local_48;
  undefined4 local_44;
  char *local_40;
  undefined4 local_3c;
  int local_38;
  int *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  int *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  local_3c = 3;
  local_40 = "N/A";
  local_48 = &DAT_003498a7;
  local_44 = 9;
  FUN_009b4e0c(&local_38,param_1 + 8,&local_48,2);
  if (local_38 != 5) {
    local_1c = local_2c;
    local_20 = local_30;
    local_24 = local_34;
    local_28 = local_38;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_01869dec,&DAT_01886b2c);
  }
  do {
    bVar1 = (bool)hasExclusiveAccess(local_34 + 2);
  } while (!bVar1);
  local_34[2] = (int)in_d0;
  local_34[3] = (int)((ulonglong)in_d0 >> 0x20);
  DataMemoryBarrier(0xb);
  do {
    iVar2 = *local_34;
    bVar1 = (bool)hasExclusiveAccess(local_34);
  } while (!bVar1);
  *local_34 = iVar2 + -1;
  if (iVar2 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0078fa50();
  }
  return;
}

