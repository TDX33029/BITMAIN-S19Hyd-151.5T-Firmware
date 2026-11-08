// FUN_00decbf8 @ 00decbf8 size=292 calls_out=3 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00decbf8(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  
  FUN_006666fc(&local_58,*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8));
  FUN_006666fc(&local_48,*(undefined4 *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
  if (*(int *)(param_1 + 0x18) == -0x80000000) {
    local_38 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_38,*(undefined4 *)(param_1 + 0x1c),*(undefined4 *)(param_1 + 0x20));
  }
  if (*(int *)(param_1 + 0x24) == -0x80000000) {
    local_28 = 0x80000000;
  }
  else {
    FUN_006666fc(&local_28,*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
  }
  uVar2 = local_28;
  uVar1 = local_38;
  uVar4 = *(undefined4 *)(param_1 + 0x30);
  uVar5 = *(undefined4 *)(param_1 + 0x34);
  uVar6 = *(undefined4 *)(param_1 + 0x38);
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x3c);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x3c);
  }
  *puVar3 = local_58;
  puVar3[1] = uStack_54;
  puVar3[2] = uStack_50;
  puVar3[3] = local_48;
  puVar3[4] = uStack_44;
  puVar3[5] = uStack_40;
  puVar3[6] = uVar1;
  puVar3[7] = uStack_34;
  puVar3[8] = uStack_30;
  puVar3[9] = uVar2;
  puVar3[10] = uStack_24;
  puVar3[0xb] = uStack_20;
  puVar3[0xc] = uVar4;
  puVar3[0xd] = uVar5;
  puVar3[0xe] = uVar6;
  return;
}

