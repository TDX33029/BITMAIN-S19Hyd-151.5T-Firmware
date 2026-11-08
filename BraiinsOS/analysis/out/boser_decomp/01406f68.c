// FUN_01406f68 @ 01406f68 size=276 calls_out=2 calls_in=2
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01406f68(undefined4 param_1,undefined4 param_2,uint *param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint unaff_r4;
  uint unaff_r5;
  bool bVar4;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  uint local_24;
  uint local_20;
  byte local_19;
  undefined4 *local_18;
  undefined2 *local_14;
  
  local_20 = param_4 & 0xfffffffc;
  local_24 = param_4 & 3;
  local_19 = (byte)param_3[5];
  uStack_2c = param_1;
  uStack_28 = param_2;
  if (local_24 != local_19) {
    local_18 = &uStack_2c;
    local_14 = &DAT_0132b6a0;
    FUN_01409744(&local_19,&local_24,&DAT_0059cfbf,&local_18);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if ((*(int *)(local_20 + 8) == 0) && (param_3[3] != local_20)) {
    return;
  }
  uVar1 = *param_3;
  bVar4 = uVar1 == 1;
  if (bVar4) {
    uVar1 = param_3[1];
  }
  if (bVar4 && uVar1 == local_20) {
    unaff_r5 = *(uint *)(uVar1 + 4);
    unaff_r4 = 1;
  }
  uVar2 = *(uint *)(local_20 + 4);
  iVar3 = *(int *)(local_20 + 8);
  if (bVar4 && uVar1 == local_20) {
    *param_3 = unaff_r4;
    param_3[1] = unaff_r5;
  }
  if (iVar3 == 0) {
    uVar1 = 0;
    param_3[3] = uVar2;
  }
  else {
    *(uint *)(iVar3 + 4) = uVar2;
    uVar1 = *(uint *)(local_20 + 8);
  }
  if (uVar2 == 0) {
    param_3[4] = uVar1;
  }
  else {
    *(uint *)(uVar2 + 8) = uVar1;
  }
  uVar1 = param_3[2];
  *(undefined4 *)(local_20 + 4) = 0;
  *(undefined4 *)(local_20 + 8) = 0;
  param_3[2] = uVar1 - 1;
  FUN_013f6db0(local_20);
  return;
}

