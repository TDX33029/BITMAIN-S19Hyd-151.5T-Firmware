// FUN_00869acc @ 00869acc size=312 calls_out=6 calls_in=1
// strings: 

ulonglong FUN_00869acc(undefined4 *param_1,undefined4 param_2)

{
  byte bVar1;
  byte *pbVar2;
  code *pcVar3;
  uint unaff_r5;
  undefined4 uVar4;
  undefined4 *puVar5;
  ulonglong uVar6;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x31)) {
  case 0:
    bVar1 = *(byte *)((int)param_1 + 0x32);
    unaff_r5 = (uint)bVar1;
    uVar4 = param_1[0xb];
    *(byte *)(param_1 + 0xc) = bVar1;
    pbVar2 = (byte *)FUN_016d38c8(1,1);
    if (pbVar2 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,1);
    }
    param_1[8] = 1;
    *pbVar2 = bVar1;
    *(undefined1 *)((int)param_1 + 0x1e) = 0;
    param_1[9] = pbVar2;
    param_1[5] = uVar4;
    param_1[10] = 1;
    *(undefined1 *)(param_1 + 7) = 0x7a;
    param_1[6] = param_1 + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01886128);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01886128);
  }
  uVar6 = FUN_00869394(param_1,param_2);
  if ((uVar6 & 1) != 0) {
    *(undefined1 *)((int)param_1 + 0x31) = 3;
    return CONCAT44(unaff_r5,1);
  }
  if (*(char *)((int)param_1 + 0x1e) == '\x03') {
    uVar4 = *param_1;
    puVar5 = (undefined4 *)param_1[1];
    pcVar3 = (code *)*puVar5;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar4);
    }
    if (puVar5[1] != 0) {
      thunk_FUN_016d3fb4(uVar4);
    }
    *(undefined1 *)((int)param_1 + 0x1d) = 0;
  }
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(param_1[9]);
  }
  *(undefined1 *)((int)param_1 + 0x31) = 1;
  return uVar6 & 0xffffffff00000000;
}

