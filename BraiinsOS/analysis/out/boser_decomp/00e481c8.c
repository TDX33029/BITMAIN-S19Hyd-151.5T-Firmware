// FUN_00e481c8 @ 00e481c8 size=472 calls_out=9 calls_in=1
// strings: 

void FUN_00e481c8(int *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 auStack_160 [88];
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  undefined4 local_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 uStack_e8;
  int local_e0;
  int local_dc;
  int local_d8;
  undefined4 local_d4;
  undefined1 auStack_d0 [64];
  undefined4 local_90;
  int local_80;
  int local_7c;
  undefined1 auStack_78 [84];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x72c)) {
  case 0:
    iVar4 = param_2 + 0x58;
    *(undefined2 *)(param_2 + 0x72d) = 0x100;
    uVar5 = *(undefined4 *)(param_2 + 0x728);
    FUN_01bed4e2(iVar4,param_2,0x58);
    FUN_00e48424(iVar4);
    *(undefined1 *)(param_2 + 0x72e) = 0;
    FUN_01bed4e2(&local_e0,iVar4,0x58);
    FUN_00f07a88(&local_108,&local_e0);
    puVar3 = (undefined4 *)((uint)&local_f8 | 4);
    *puVar3 = local_108;
    puVar3[1] = uStack_104;
    puVar3[2] = uStack_100;
    puVar3[3] = uStack_fc;
    *(undefined4 *)(param_2 + 0xb0) = 4;
    *(undefined4 *)(param_2 + 0xb4) = local_f8;
    *(undefined4 *)(param_2 + 0xb8) = uStack_f4;
    *(undefined4 *)(param_2 + 0xbc) = uStack_f0;
    *(undefined4 *)(param_2 + 0xc0) = uStack_ec;
    *(undefined4 *)(param_2 + 0xc4) = uStack_e8;
    *(undefined1 *)(param_2 + 0x114) = 0;
    *(undefined4 *)(param_2 + 0xf8) = uVar5;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c172a4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c172a4);
  }
  FUN_00e36808(&local_e0,param_2 + 0xb0,param_3);
  iVar1 = local_dc;
  iVar4 = local_e0;
  if (local_e0 == 4 && local_dc == 0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 3;
  }
  else {
    FUN_01bed4e2(auStack_78,&local_d4,0x54);
    FUN_00e366c8(param_2 + 0xb0);
    if (iVar4 == 3 && iVar1 == 0) {
      FUN_0160aaa4(auStack_d0,0);
      local_d4 = 0;
      local_dc = 0;
      local_e0 = 1;
      local_90 = 0;
      FUN_01bed4e2(auStack_160,(uint)&local_e0 | 4,0x54);
      *(undefined1 *)(param_2 + 0x72e) = 0;
      local_80 = 0;
      local_d8 = 1;
    }
    else {
      FUN_01bed4e2(auStack_160,auStack_78,0x54);
      *(undefined1 *)(param_2 + 0x72e) = 0;
      if (*(char *)(param_2 + 0x72d) == '\x01') {
        FUN_00e48938(param_2);
      }
    }
    *param_1 = iVar4;
    param_1[1] = iVar1;
    param_1[2] = local_d8;
    FUN_01bed4e2(param_1 + 3,auStack_160,0x54);
    uVar2 = 1;
    param_1[0x18] = local_80;
    param_1[0x19] = local_7c;
  }
  *(undefined1 *)(param_2 + 0x72c) = uVar2;
  return;
}

