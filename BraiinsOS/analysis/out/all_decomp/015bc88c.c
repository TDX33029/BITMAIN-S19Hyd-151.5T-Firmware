// FUN_015bc88c @ 015bc88c size=216 calls_out=4 calls_in=0
// strings: 

void FUN_015bc88c(int *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 auStack_440 [528];
  int local_230 [132];
  
  DataMemoryBarrier(0xb);
  if (DAT_018dd942 != '\x02') {
    FUN_01110ec4();
  }
  FUN_014f471c(local_230,param_2,param_3,1);
  if (local_230[0] == 2) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,local_230,&DAT_018aa6c8,&DAT_018aa82c);
  }
  FUN_016dd1aa(auStack_440,(uint)local_230 | 4,0x20c);
  FUN_016dd1aa(local_230,auStack_440,0x20c);
  *param_1 = local_230[0];
  FUN_016dd1aa(param_1 + 1,local_230,0x20c);
  param_1[0x84] = (int)&DAT_018aa818;
  return;
}

