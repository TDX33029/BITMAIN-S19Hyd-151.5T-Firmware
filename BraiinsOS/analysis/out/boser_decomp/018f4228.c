// FUN_018f4228 @ 018f4228 size=136 calls_out=3 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_018f4228(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_1c;
  
  uVar5 = *(undefined4 *)(param_1 + 0x20);
  FUN_007048b8(&local_40,param_1);
  uVar2 = *(undefined4 *)(param_1 + 0x18);
  uVar4 = *(undefined4 *)(param_1 + 0x1c);
  local_1c = CONCAT31(local_1c._1_3_,*(undefined1 *)(param_1 + 0x24));
  uVar1 = local_1c;
  local_28 = uVar2;
  uStack_24 = uVar4;
  uStack_20 = uVar5;
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x28);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x28);
  }
  *puVar3 = local_40;
  puVar3[1] = uStack_3c;
  puVar3[2] = uStack_38;
  puVar3[3] = uStack_34;
  puVar3[4] = uStack_30;
  puVar3[5] = local_2c;
  puVar3[6] = uVar2;
  puVar3[7] = uVar4;
  puVar3[8] = uVar5;
  puVar3[9] = uVar1;
  return;
}

