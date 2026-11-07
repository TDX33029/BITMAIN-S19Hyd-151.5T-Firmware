// FUN_009a984c @ 009a984c size=432 calls_out=7 calls_in=1
// strings: 

undefined4 FUN_009a984c(undefined4 param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_6a8 [552];
  int local_480;
  int *local_47c;
  undefined4 uStack_478;
  undefined4 local_474;
  int local_258;
  int local_254;
  undefined4 local_250;
  undefined4 local_24c;
  undefined4 local_248;
  undefined4 local_244;
  int local_30;
  int *local_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  
  uVar2 = FUN_0076ef5c();
  FUN_009a9ac4(auStack_6a8,uVar2,param_1);
  FUN_016dd1aa(&local_480,auStack_6a8,0x228);
  DataMemoryBarrier(0xb);
  if (DAT_018d8068 != 0) {
    FUN_009ca9ac(&local_480);
  }
  if (local_480 != 6 || local_47c != (int *)0x0) {
    FUN_016dd1aa(&local_250,&uStack_478,0x220);
    local_254 = (int)local_47c;
    local_258 = local_480;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0034cdb4,0x2a,&local_258,&DAT_01869ac4,&DAT_0186991c);
  }
  DataMemoryBarrier(0xb);
  if (DAT_018d8068 == 0) {
    local_248 = *(undefined4 *)(param_2 + 4);
    local_244 = *(undefined4 *)(param_2 + 8);
    local_250 = *(undefined4 *)(param_2 + 0x28);
    local_24c = *(undefined4 *)(param_2 + 0x2c);
    local_258 = DAT_018d7ee4;
    local_254 = DAT_018d7ee8;
    FUN_009b564c(&local_30,DAT_018d8044 + 8,&local_258,3);
    if (local_30 != 5) {
      local_474 = local_24;
      local_480 = local_30;
      local_47c = local_2c;
      uStack_478 = uStack_28;
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_480,&DAT_01869dec,&DAT_01886b2c);
    }
    do {
      bVar1 = (bool)hasExclusiveAccess(local_2c + 2);
    } while (!bVar1);
    local_2c[2] = 0;
    local_2c[3] = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *local_2c;
      bVar1 = (bool)hasExclusiveAccess(local_2c);
    } while (!bVar1);
    *local_2c = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0df4();
    }
  }
  return uVar2;
}

