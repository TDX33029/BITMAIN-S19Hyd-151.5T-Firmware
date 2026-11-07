// FUN_00dbda40 @ 00dbda40 size=528 calls_out=9 calls_in=0
// strings: 

void FUN_00dbda40(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  char cVar3;
  int *piVar4;
  int iVar5;
  undefined1 auStack_128 [80];
  int local_d8;
  int iStack_d4;
  int iStack_d0;
  int iStack_cc;
  int local_c8;
  int local_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int local_b4;
  int local_b0;
  int iStack_ac;
  int iStack_a8;
  int iStack_a4;
  int local_a0;
  int iStack_9c;
  int iStack_98;
  int iStack_94;
  int iStack_90;
  undefined4 *local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 *local_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  undefined1 auStack_54 [48];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0x2f]) {
  case '\0':
    iVar2 = param_2[0x14];
    iVar5 = param_2[0x13];
    cVar3 = '\0';
    if ((char)iVar2 != '\x06') {
      FUN_01bed4e2(&local_70,(int)param_2 + 0x51,0x17);
      cVar3 = (char)iVar2;
    }
    local_88 = (undefined4 *)CONCAT31(local_88._1_3_,cVar3);
    FUN_01bed4e2((uint)&local_88 | 1,&local_70,0x17);
    local_d8 = *param_2;
    iStack_d4 = param_2[1];
    iStack_d0 = param_2[2];
    iStack_cc = param_2[3];
    local_c8 = param_2[4];
    local_c4 = param_2[5];
    iStack_c0 = param_2[6];
    iStack_bc = param_2[7];
    iStack_b8 = param_2[8];
    local_b4 = param_2[9];
    local_b0 = param_2[10];
    iStack_ac = param_2[0xb];
    iStack_a8 = param_2[0xc];
    iStack_a4 = param_2[0xd];
    local_a0 = param_2[0xe];
    iStack_9c = param_2[0xf];
    iStack_98 = param_2[0x10];
    iStack_94 = param_2[0x11];
    iStack_90 = param_2[0x12];
    FUN_00db4764(&local_88);
    FUN_01bed4e2(auStack_128,&local_d8,0x4c);
    FUN_01bed4e2(param_2 + 0x1a,auStack_128,0x4c);
    param_2[0x2d] = iVar5;
    *(undefined1 *)(param_2 + 0x2e) = 0;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c161e0);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c161e0);
  case '\x03':
    if ((char)param_2[0x2e] != '\0') {
      if ((char)param_2[0x2e] == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c164ec);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c164ec);
    }
    iVar5 = param_2[0x2d];
  }
  local_70 = (undefined4 *)param_2[0x1a];
  iStack_6c = param_2[0x1b];
  iStack_68 = param_2[0x1c];
  iStack_64 = param_2[0x1d];
  FUN_00f9d7ac(auStack_54,iVar5 + 8,&local_70);
  local_70 = &DAT_0056d238;
  iStack_6c = 0;
  iStack_68 = 0;
  iStack_64 = 0;
  FUN_011d0214(&local_70,auStack_54);
  if (param_2[0x1e] != -0x80000000) {
    local_d8 = param_2[0x1e];
    iStack_d4 = param_2[0x1f];
    iStack_d0 = param_2[0x20];
    iStack_cc = param_2[0x21];
    local_c8 = param_2[0x22];
    local_c4 = param_2[0x23];
    iStack_c0 = param_2[0x24];
    iStack_bc = param_2[0x25];
    iStack_b8 = param_2[0x26];
    local_b4 = param_2[0x27];
    local_b0 = param_2[0x28];
    iStack_ac = param_2[0x29];
    iStack_a8 = param_2[0x2a];
    iStack_a4 = param_2[0x2b];
    local_a0 = param_2[0x2c];
    FUN_011d018c(&local_70);
  }
  local_88 = local_70;
  uStack_84 = iStack_6c;
  uStack_80 = iStack_68;
  uStack_7c = iStack_64;
  piVar4 = (int *)param_2[0x2d];
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar4;
    bVar1 = (bool)hasExclusiveAccess(piVar4);
  } while (!bVar1);
  *piVar4 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01182b58(param_2[0x2d]);
  }
  *param_1 = 2;
  param_1[1] = local_88;
  param_1[2] = uStack_84;
  param_1[3] = uStack_80;
  param_1[4] = uStack_7c;
  *(undefined1 *)(param_2 + 0x2e) = 1;
  FUN_00dbdd6c(param_2 + 0x1a);
  *(undefined1 *)(param_2 + 0x2f) = 1;
  return;
}

