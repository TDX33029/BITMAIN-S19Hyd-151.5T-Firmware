// FUN_00b7bcac @ 00b7bcac size=448 calls_out=6 calls_in=2
// strings: 

void FUN_00b7bcac(undefined4 *param_1,uint *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint unaff_r6;
  undefined1 *puVar6;
  uint uVar7;
  uint uVar8;
  uint unaff_lr;
  ulonglong uVar9;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint local_2c;
  uint local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_2[0xc]) {
  case '\0':
    local_30 = *param_2;
    uVar7 = param_2[1];
    local_44 = param_2[2];
    local_40 = param_2[3];
    uVar8 = param_2[4];
    uVar5 = param_2[5];
    local_34 = param_2[6];
    *(undefined1 *)((int)param_2 + 0x33) = 0;
    *(undefined2 *)((int)param_2 + 0x31) = 0;
    uVar2 = 2;
    if ((int)local_30 < 0) {
      uVar2 = local_30 ^ 0x80000000;
    }
    local_28 = local_40;
    local_38 = uVar5;
    if (uVar2 == 0) {
      local_30 = 0x80000000;
      local_3c = uVar8;
      local_48 = uVar7;
    }
    else if (uVar2 == 1) {
      local_3c = 1;
      unaff_r6 = local_44;
      local_48 = 0x80000001;
      local_30 = uVar7;
      local_44 = uVar8;
      local_40 = unaff_lr;
    }
    else {
      local_3c = local_34;
      local_28 = local_44;
      local_38 = param_2[7];
      unaff_r6 = uVar7;
      local_48 = local_40;
      local_34 = param_2[8];
      local_44 = uVar8;
      local_40 = uVar5;
    }
    *(undefined1 *)((int)param_2 + 0x33) = 1;
    *(undefined1 *)((int)param_2 + 0x32) = 1;
    iVar3 = *(int *)(param_2[9] + 8);
    *(undefined2 *)((int)param_2 + 0x32) = 0;
    local_2c = unaff_r6;
    uVar2 = FUN_0073b7e0(iVar3 + 8,&local_48,&local_30,local_38,local_44);
    puVar4 = &DAT_01c07f28;
    param_2[10] = uVar2;
    param_2[0xb] = (uint)&DAT_01c07f28;
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13660);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13660);
  case '\x03':
    uVar2 = param_2[10];
    puVar4 = (undefined *)param_2[0xb];
  }
  uVar9 = (**(code **)(puVar4 + 0xc))(uVar2,param_3);
  iVar3 = (int)(uVar9 >> 0x20);
  if ((uVar9 & 1) == 0) {
    FUN_01139b38(param_2[10],param_2[0xb]);
    *(undefined1 *)((int)param_2 + 0x32) = 0;
    *(undefined1 *)((int)param_2 + 0x33) = 0;
    if (iVar3 == 0) {
      puVar6 = &DAT_80000016;
    }
    else {
      puVar6 = (undefined1 *)0x80000000;
      if (*(char *)((int)param_2 + 0x31) == '\x01') {
        FUN_00b7bf24(param_2);
      }
    }
    *param_1 = puVar6;
    param_1[1] = iVar3;
    uVar1 = 1;
  }
  else {
    *param_1 = 0x80000017;
    uVar1 = 3;
  }
  *(undefined1 *)(param_2 + 0xc) = uVar1;
  return;
}

