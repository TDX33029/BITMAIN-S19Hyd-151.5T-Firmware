// FUN_0067da54 @ 0067da54 size=684 calls_out=6 calls_in=0
// strings: 

int FUN_0067da54(int *param_1,undefined4 param_2)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  int local_50;
  int local_4c;
  undefined4 *local_48;
  int local_44;
  int iStack_40;
  int local_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x126]) {
  case '\0':
    *(undefined2 *)((int)param_1 + 0x49b) = 0;
    param_1[6] = 0x1e;
    param_1[0x18] = 1;
    param_1[0x19] = 0x400;
    param_1[0x14] = 1;
    param_1[0x15] = 200;
    param_1[0x16] = 0;
    *(undefined2 *)(param_1 + 0x13) = 0x201;
    param_1[0x12] = 1;
    param_1[0x24] = 0x4000;
    param_1[0x26] = 0x4000;
    param_1[0x20] = (int)&DAT_3b9aca00;
    *(undefined1 *)(param_1 + 0x2a) = 2;
    local_44 = param_1[3];
    local_48 = (undefined4 *)param_1[2];
    param_1[0x22] = 0x100000;
    param_1[0x23] = 0x100000;
    param_1[0x25] = 0x64000;
    local_50 = *param_1;
    local_4c = param_1[1];
    param_1[0x1a] = 0x14;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[7] = 0;
    param_1[0x10] = 0;
    param_1[0x11] = 0;
    param_1[0x1b] = 0;
    param_1[0xe] = 0;
    param_1[0xc] = 0;
    param_1[10] = 0;
    param_1[8] = 0;
    param_1[0x1c] = 0;
    *(undefined1 *)((int)param_1 + 0x9e) = 1;
    param_1[0x28] = 0;
    *(undefined1 *)((int)param_1 + 0x49a) = 0;
    *(undefined2 *)(param_1 + 0x27) = 0;
    *(undefined1 *)((int)param_1 + 0x499) = 0;
    param_1[0x2c] = 4;
    param_1[0x2e] = 2;
    param_1[0x2d] = 0;
    param_1[0x2f] = 0;
    param_1[0x30] = (int)(param_1 + 4);
    param_1[0x56] = local_50;
    param_1[0x57] = local_4c;
    param_1[0x58] = (int)local_48;
    param_1[0x59] = local_44;
    param_1[0x5a] = iStack_40;
    param_1[0x5b] = local_3c;
    param_1[0x5c] = iStack_38;
    param_1[0x5d] = iStack_34;
    param_1[0x5e] = iStack_30;
    param_1[0x5f] = iStack_2c;
    *(undefined2 *)(param_1 + 0x61) = 1;
    param_1[0x62] = param_1[0x124];
    param_1[99] = param_1[0x125];
    param_1[0x60] = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185859c);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185859c,&switchD_0067da74::switchdataD_0067da78,param_2);
  }
  FUN_006932bc(&local_50,param_1 + 0x2c,param_2);
  puVar2 = local_48;
  iVar5 = local_4c;
  if (local_50 != 0) {
    *(undefined1 *)(param_1 + 0x126) = 3;
    return local_50;
  }
  FUN_0065652c(param_1 + 0x2c);
  if (iVar5 != 0) {
    pcVar4 = (code *)*puVar2;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar5);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_016d3fb4(iVar5);
    }
  }
  piVar3 = (int *)param_1[0xe];
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_1[0xe],param_1[0xf]);
    }
  }
  piVar3 = (int *)param_1[0x28];
  if (piVar3 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(param_1[0x28],param_1[0x29]);
    }
  }
  *(undefined1 *)((int)param_1 + 0x499) = 0;
  *(undefined1 *)((int)param_1 + 0x49a) = 0;
  *(undefined1 *)(param_1 + 0x126) = 1;
  return 0;
}

