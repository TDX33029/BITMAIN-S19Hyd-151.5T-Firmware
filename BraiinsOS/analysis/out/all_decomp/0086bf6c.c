// FUN_0086bf6c @ 0086bf6c size=432 calls_out=5 calls_in=0
// strings: 

void FUN_0086bf6c(uint *param_1,int *param_2,undefined4 param_3)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r8;
  uint unaff_r9;
  uint uVar4;
  bool bVar5;
  uint local_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[2]) {
  case '\0':
    param_2[1] = *param_2;
    *(undefined1 *)(param_2 + 0x11) = 0;
    param_2[3] = *param_2 + 0x48;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01861258);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01861258);
  case '\x04':
    goto switchD_0086bf90_caseD_4;
  }
  FUN_0086c1b8(&local_38,param_2 + 3,param_3);
  uVar3 = local_30;
  uVar4 = local_34;
  uVar2 = local_38;
  if (local_38 == 2) {
    *param_1 = 2;
    *(undefined1 *)(param_2 + 2) = 3;
    return;
  }
  if ((char)param_2[0x11] == '\x03') {
    cVar1 = (char)param_2[0x10];
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)((int)param_2 + 0x3d);
    }
    if (bVar5 && cVar1 == '\x03') {
      FUN_00868aa0(param_2 + 7);
    }
  }
  if ((uVar2 & 1) == 0) {
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 == 0) {
      FUN_009b16c0(uVar3,1,&DAT_0056a0f8,8);
    }
    *(undefined1 *)(param_2 + 0x11) = 0;
    param_2[3] = param_2[1] + 0x20;
switchD_0086bf90_caseD_4:
    FUN_0086c1b8(&local_38,param_2 + 3,param_3);
    if (local_38 == 2) {
      *param_1 = 2;
      *(undefined1 *)(param_2 + 2) = 4;
      return;
    }
    uVar4 = local_34;
    if ((char)param_2[0x11] == '\x03') {
      cVar1 = (char)param_2[0x10];
      bVar5 = cVar1 == '\x03';
      if (bVar5) {
        cVar1 = *(char *)((int)param_2 + 0x3d);
      }
      if (bVar5 && cVar1 == '\x03') {
        FUN_00868aa0(param_2 + 7);
      }
    }
  }
  else {
    local_38 = 1;
    local_30 = unaff_r8;
    uStack_2c = unaff_r9;
  }
  *param_1 = local_38;
  param_1[1] = uVar4;
  param_1[2] = local_30;
  param_1[3] = uStack_2c;
  *(undefined1 *)(param_2 + 2) = 1;
  return;
}

