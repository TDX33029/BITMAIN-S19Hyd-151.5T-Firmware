// FUN_01a07ba8 @ 01a07ba8 size=428 calls_out=8 calls_in=3
// strings: 

void FUN_01a07ba8(char *param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 extraout_r3;
  undefined1 uVar2;
  undefined4 uVar3;
  uint uVar4;
  char cVar5;
  uint local_48;
  int local_40;
  int local_3c;
  uint local_38;
  undefined4 local_34;
  undefined4 uStack_2c;
  undefined3 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 7)) {
  case 0:
    param_2[1] = *param_2;
    FUN_01bed93e(param_2 + 2,0,0x11);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d29fe0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d29fe0);
  }
  uVar1 = FUN_019ec670(param_3);
  if ((uVar1 & 0xff) == 2) {
    uVar1 = 0;
  }
  else {
    if ((uVar1 & 1) != 0) {
      uVar2 = 3;
      *param_1 = '\x02';
      goto LAB_01a07d40;
    }
    local_48 = (uVar1 & 0xffffff) >> 0x10;
    uVar1 = (uVar1 & 0xffffff) >> 8;
  }
  FUN_01a15df8(&local_40,param_2[1],param_2 + 2,param_3);
  if (local_40 == 3 && local_3c == 0) {
    cVar5 = *(char *)(local_38 + 0x14) != '\x01';
    if ((bool)cVar5) {
      uVar4 = 0;
      uVar3 = 0;
    }
    else {
      uVar4 = *(uint *)(local_38 + 0x1c);
      uVar3 = *(undefined4 *)(local_38 + 0x20);
      param_3 = (uint)*(byte *)(local_38 + 0x24);
      uStack_2c = *(undefined4 *)(local_38 + 0x15);
      uStack_28 = (undefined3)((uint)*(undefined4 *)(local_38 + 0x18) >> 8);
    }
    FUN_01a18d90();
    local_38 = param_3 & 0xff;
    local_34 = 0;
LAB_01a07cf4:
    uVar1 = 0;
    *(uint *)(param_1 + 4) = CONCAT31(uStack_28,uStack_2c._3_1_);
    *(undefined4 *)(param_1 + 1) = uStack_2c;
    *(uint *)(param_1 + 8) = uVar4;
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    *(uint *)(param_1 + 0x10) = local_38;
    *(undefined4 *)(param_1 + 0x14) = local_34;
  }
  else {
    if (local_40 != 0) {
      uVar3 = 0;
      if (local_40 == 1) {
        local_38 = 1;
        local_34 = extraout_r3;
      }
      uVar4 = (uint)(local_40 != 1);
      cVar5 = true;
      goto LAB_01a07cf4;
    }
    cVar5 = '\x02';
  }
  *param_1 = cVar5;
  FUN_019edbc4(uVar1,local_48);
  uVar2 = 3;
  if (cVar5 != '\x02') {
    uVar2 = 1;
    FUN_009cdcac(param_2 + 1);
  }
LAB_01a07d40:
  *(undefined1 *)(param_2 + 7) = uVar2;
  return;
}

