// FUN_008e3188 @ 008e3188 size=116 calls_out=0 calls_in=0
// strings: 

longlong FUN_008e3188(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  int extraout_r1;
  longlong lVar3;
  
  bVar1 = *param_1;
  bVar2 = bVar1 - 4;
  if (bVar1 < 4) {
    bVar2 = 4;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(bVar2) {
  default:
    return (ulonglong)(uint)bVar2 << 0x20;
  case 4:
    break;
  case 5:
    (**(code **)(**(int **)(param_1 + 4) + 4))();
    lVar3 = (**(code **)(extraout_r1 + 0x18))();
    return lVar3;
  case 6:
    return CONCAT44(&UNK_01865a64,param_1);
  }
  if (bVar1 == 3) {
    lVar3 = (**(code **)(**(int **)(param_1 + 4) + 4))();
    return lVar3;
  }
  return (ulonglong)(uint)bVar2 << 0x20;
}

