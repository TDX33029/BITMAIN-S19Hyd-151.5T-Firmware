// FUN_015eab78 @ 015eab78 size=388 calls_out=5 calls_in=1
// strings: 

void FUN_015eab78(undefined4 param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  int local_30;
  undefined1 local_2c [4];
  undefined4 local_28;
  undefined1 *local_24;
  code *local_20;
  undefined1 uStack_19;
  
  cVar2 = DAT_018dd945;
  local_24 = (undefined1 *)&local_30;
  do {
    bVar1 = (bool)hasExclusiveAccess(0x18dd945);
  } while (!bVar1);
  DAT_018dd945 = 1;
  local_30 = param_2;
  if (cVar2 == '\0') {
    local_20 = (code *)&LAB_00fac484;
    FUN_015bee18(local_2c,&uStack_19,&DAT_005740d1,&local_24);
    FUN_015ff474(local_2c[0],local_28);
    uVar4 = FUN_015bf7c4();
    uVar3 = FUN_015bf2c8();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(uVar3) {
    case 0:
      local_30 = (uint)local_30._1_3_ << 8;
      local_20 = FUN_015bfd10;
      local_24 = (undefined1 *)&local_30;
      FUN_015bee18(local_2c,&uStack_19,&DAT_00590e71,&local_24);
      FUN_015ff474(local_2c[0],local_28);
      break;
    case 1:
      local_30 = CONCAT31(local_30._1_3_,1);
      local_20 = FUN_015bfd10;
      local_24 = (undefined1 *)&local_30;
      FUN_015bee18(local_2c,&uStack_19,&DAT_00590e71,&local_24);
      FUN_015ff474(local_2c[0],local_28);
      break;
    case 2:
      FUN_015bee18(&local_24,&uStack_19,&DAT_0041085a,0x9d);
      FUN_015ff474((uint)local_24 & 0xff,local_20);
    }
    FUN_015bfc8c(&DAT_018dd998,uVar4 & 1);
  }
  else {
    local_20 = (code *)&LAB_00fac484;
    local_24 = (undefined1 *)&local_30;
    FUN_015bee18(local_2c,&uStack_19,&DAT_00575141,&local_24);
    FUN_015ff474(local_2c[0],local_28);
  }
  return;
}

