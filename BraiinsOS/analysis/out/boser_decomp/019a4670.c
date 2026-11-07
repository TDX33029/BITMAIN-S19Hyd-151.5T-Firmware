// FUN_019a4670 @ 019a4670 size=372 calls_out=5 calls_in=1
// strings: 

void FUN_019a4670(undefined4 param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int local_30;
  undefined1 auStack_2c [8];
  undefined1 *local_24;
  code *local_20;
  undefined1 uStack_19;
  
  cVar2 = DAT_01d51b04;
  local_24 = (undefined1 *)&local_30;
  do {
    bVar1 = (bool)hasExclusiveAccess(0x1d51b04);
  } while (!bVar1);
  DAT_01d51b04 = 1;
  local_30 = param_2;
  if (cVar2 == '\0') {
    local_20 = FUN_012fd02c;
    FUN_0197a828(auStack_2c,&uStack_19,&DAT_0059fe4e,&local_24);
    FUN_019b6d48(auStack_2c);
    uVar4 = FUN_0197af28();
    uVar3 = FUN_0197a9f0();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar3) {
    case 0:
      local_30 = (uint)local_30._1_3_ << 8;
      local_20 = FUN_0197b46c;
      local_24 = (undefined1 *)&local_30;
      FUN_0197a828(auStack_2c,&uStack_19,&DAT_00590e5f,&local_24);
      FUN_019b6d48(auStack_2c);
      break;
    case 1:
      local_30 = CONCAT31(local_30._1_3_,1);
      local_20 = FUN_0197b46c;
      local_24 = (undefined1 *)&local_30;
      FUN_0197a828(auStack_2c,&uStack_19,&DAT_00590e5f,&local_24);
      FUN_019b6d48(auStack_2c);
      break;
    case 2:
      FUN_0197a828(&local_24,&uStack_19,&DAT_0052688b,0x9d);
      FUN_019b6d48(&local_24);
    }
    FUN_0197b3e8(&DAT_01d51b0c,uVar4 & 1);
  }
  else {
    local_20 = FUN_012fd02c;
    local_24 = (undefined1 *)&local_30;
    FUN_0197a828(auStack_2c,&uStack_19,&DAT_00578dbe,&local_24);
    FUN_019b6d48(auStack_2c);
  }
  return;
}

