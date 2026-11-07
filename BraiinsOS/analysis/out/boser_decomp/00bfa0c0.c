// FUN_00bfa0c0 @ 00bfa0c0 size=144 calls_out=4 calls_in=0
// strings: 

void FUN_00bfa0c0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  undefined4 extraout_r2;
  undefined4 extraout_r2_00;
  undefined4 extraout_r2_01;
  undefined4 uVar3;
  undefined4 extraout_r2_02;
  undefined4 extraout_r3;
  undefined4 extraout_r3_00;
  undefined4 extraout_r3_01;
  undefined4 uVar4;
  undefined4 extraout_r3_02;
  undefined4 unaff_r4;
  undefined4 unaff_lr;
  bool bVar5;
  
  if (*(char *)(param_1 + 0xc) == '\x03') {
    if (*(char *)(param_1 + 0xb9) != '\x03') {
      return;
    }
    FUN_00bf9a34(param_1 + 0x10);
    *(undefined1 *)(param_1 + 0xb8) = 0;
  }
  else if (*(char *)(param_1 + 0xc) == '\x04') {
    cVar1 = *(char *)(param_1 + 0xa4);
    bVar5 = cVar1 == '\x03';
    if (bVar5) {
      cVar1 = *(char *)(param_1 + 0x90);
    }
    if (bVar5 && cVar1 == '\x03') {
      FUN_00ba638c(param_1 + 0x38);
      param_3 = extraout_r2_02;
      param_4 = extraout_r3_02;
    }
    iVar2 = *(int *)(param_1 + 0xa8);
    if (iVar2 == -0x80000000) {
      FUN_019bb7e0(*(undefined4 *)(param_1 + 0xac),*(undefined4 *)(param_1 + 0xb0));
      return;
    }
    if (iVar2 == -0x7fffffff) {
      FUN_00b55288(param_1 + 0xac);
      return;
    }
    FUN_019bb7e0(*(int *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xac),param_3,param_4,unaff_r4,
                 unaff_lr);
    if (*(int *)(param_1 + 0xcc) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0xcc),*(undefined4 *)(param_1 + 0xd0),extraout_r2,extraout_r3,
                   unaff_r4,unaff_lr);
    }
    FUN_006a41c0(param_1 + 0xb4);
    uVar3 = extraout_r2_00;
    uVar4 = extraout_r3_00;
    if (*(int *)(param_1 + 0xd8) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0xd8),*(undefined4 *)(param_1 + 0xdc),extraout_r2_00,
                   extraout_r3_00,unaff_r4,unaff_lr);
      uVar3 = extraout_r2_01;
      uVar4 = extraout_r3_01;
    }
    if (*(int *)(param_1 + 0xe4) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0xe4),*(undefined4 *)(param_1 + 0xe8),uVar3,uVar4,unaff_r4,
                   unaff_lr);
    }
    if (*(int *)(param_1 + 0xf0) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0xf0),*(undefined4 *)(param_1 + 0xf4));
    }
    if (*(int *)(param_1 + 0xfc) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_1 + 0xfc),*(undefined4 *)(param_1 + 0x100));
    }
    FUN_00befecc(param_1 + 0xc0);
    return;
  }
  return;
}

