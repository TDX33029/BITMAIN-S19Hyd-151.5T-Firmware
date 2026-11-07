// FUN_019ae498 @ 019ae498 size=220 calls_out=2 calls_in=2
// strings: 

void FUN_019ae498(undefined1 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 short *param_5)

{
  int iVar1;
  int *piVar2;
  undefined1 uVar3;
  undefined4 unaff_r5;
  short *psVar4;
  undefined4 uVar5;
  undefined4 unaff_lr;
  undefined2 local_40;
  ushort local_3e;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  uint local_28;
  
  if (*param_5 == 1) {
    local_38 = *(undefined4 *)(param_5 + 2);
    uStack_34 = *(undefined4 *)(param_5 + 4);
    unaff_lr = *(undefined4 *)(param_5 + 6);
    psVar4 = param_5 + 10;
    uVar5 = 0x1c;
    local_40 = 10;
    unaff_r5 = *(undefined4 *)(param_5 + 8);
    local_28 = *(uint *)(param_5 + 0xc);
    local_3e = param_5[0xe] << 8 | (ushort)param_5[0xe] >> 8;
  }
  else {
    local_28 = (uint)(ushort)param_5[3];
    psVar4 = param_5 + 1;
    local_38 = 0;
    uVar5 = 0x10;
    local_3e = (ushort)((local_28 & 0xff) << 8) | (ushort)param_5[3] >> 8;
    local_40 = 2;
    uStack_34 = 0;
  }
  local_3c = *(undefined4 *)psVar4;
  uStack_30 = unaff_lr;
  local_2c = unaff_r5;
  iVar1 = FUN_01be9b4e(param_2,param_3,param_4,0x4000,&local_40,uVar5);
  if (iVar1 == -1) {
    piVar2 = (int *)FUN_01be3244();
    iVar1 = *piVar2;
    uVar3 = 0;
  }
  else {
    uVar3 = 4;
  }
  *(int *)(param_1 + 4) = iVar1;
  *param_1 = uVar3;
  return;
}

