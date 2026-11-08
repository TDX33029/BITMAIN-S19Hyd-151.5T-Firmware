// FUN_0069209c @ 0069209c size=580 calls_out=6 calls_in=1
// strings: assertion failed: self.max_stream_id >= last_processed_id

void FUN_0069209c(int *param_1,int *param_2,uint param_3)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *local_48;
  int local_44;
  int local_40;
  int local_3c;
  uint local_38;
  int local_34;
  uint local_2c;
  uint *local_28;
  code *local_24;
  uint *local_20;
  code *local_1c;
  
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_2);
      goto LAB_006920c8;
    }
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = 1;
  DataMemoryBarrier(0xb);
LAB_006920c8:
  uVar5 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_2[1];
  }
  else {
    uVar5 = FUN_015bf3f8();
    uVar5 = uVar5 ^ 1;
    cVar1 = (char)param_2[1];
  }
  if (cVar1 != '\0') {
    uVar3 = (uint)local_44 >> 8;
    local_44 = CONCAT31((int3)uVar3,(char)uVar5);
    local_48 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_48,&DAT_018587a0,&DAT_018a59fc);
  }
  if ((uint)param_2[0x2f] < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: self.max_stream_id >= last_processed_id",0x39,&DAT_0188245c);
  }
  param_2[0x2f] = param_3;
  if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) && (iVar4 = FUN_015bf3f8(), iVar4 == 0))
  {
    *(undefined1 *)(param_2 + 1) = 1;
  }
  DataMemoryBarrier(0xb);
  do {
    iVar4 = *param_2;
    bVar2 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar2);
  *param_2 = 0;
  if (iVar4 == 2) {
    FUN_016d6968(0xf0,param_2,0x81,1);
  }
  local_34 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 1;
  local_48 = &DAT_01858684;
  local_38 = param_3;
  if ((*param_1 == 1) && (local_28 = (uint *)(param_1 + 1), *local_28 < param_3)) {
    local_20 = &local_2c;
    local_1c = FUN_0101a4ac;
    local_24 = FUN_0101a4ac;
    local_2c = param_3;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056d4c7,&local_28,&DAT_01882cb0);
  }
  *param_1 = 1;
  iVar4 = param_1[3];
  param_1[1] = param_3;
  param_1[2] = 0;
  if (iVar4 != 0) {
    (**(code **)(iVar4 + 0x10))(param_1 + 6,param_1[4],param_1[5]);
  }
  param_1[3] = (int)local_48;
  param_1[4] = local_44;
  param_1[5] = local_40;
  param_1[6] = local_3c;
  param_1[7] = local_38;
  param_1[8] = local_34;
  return;
}

