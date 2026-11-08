// FUN_0086b490 @ 0086b490 size=368 calls_out=6 calls_in=2
// strings: 

ulonglong FUN_0086b490(undefined4 *param_1,undefined4 param_2)

{
  byte *pbVar1;
  code *pcVar2;
  uint unaff_r5;
  undefined4 uVar3;
  undefined4 *puVar4;
  ulonglong uVar5;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x37)) {
  case 0:
    param_1[0xc] = param_1[0xe];
    *(undefined4 *)((int)param_1 + 0x33) = *(undefined4 *)((int)param_1 + 0x3b);
    uVar3 = param_1[0xb];
    pbVar1 = (byte *)FUN_016d38c8(1,1);
    if (pbVar1 == (byte *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,1);
    }
    unaff_r5 = (uint)*(byte *)((int)param_1 + 0x33);
    *pbVar1 = *(char *)((int)param_1 + 0x31) << 6 | *(char *)(param_1 + 0xc) << 7 |
              *(char *)((int)param_1 + 0x32) << 5 | *(byte *)((int)param_1 + 0x33) << 4 |
              *(char *)(param_1 + 0xd) << 3 | *(char *)((int)param_1 + 0x35) << 2 |
              *(byte *)((int)param_1 + 0x36);
    param_1[8] = 1;
    param_1[9] = pbVar1;
    param_1[10] = 1;
    *(undefined1 *)((int)param_1 + 0x1e) = 0;
    *(undefined1 *)(param_1 + 7) = 1;
    param_1[5] = uVar3;
    param_1[6] = param_1 + 8;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01886128);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01886128);
  }
  uVar5 = FUN_00869394(param_1,param_2);
  if ((uVar5 & 1) != 0) {
    *(undefined1 *)((int)param_1 + 0x37) = 3;
    return CONCAT44(unaff_r5,1);
  }
  if (*(char *)((int)param_1 + 0x1e) == '\x03') {
    uVar3 = *param_1;
    puVar4 = (undefined4 *)param_1[1];
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar3);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_016d3fb4(uVar3);
    }
    *(undefined1 *)((int)param_1 + 0x1d) = 0;
  }
  if (param_1[8] != 0) {
    thunk_FUN_016d3fb4(param_1[9]);
  }
  *(undefined1 *)((int)param_1 + 0x37) = 1;
  return uVar5 & 0xffffffff00000000;
}

