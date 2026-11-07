// FUN_0151f674 @ 0151f674 size=204 calls_out=4 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0151f674(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  uVar3 = *(undefined4 *)(param_1 + 0x20);
  iVar1 = FUN_0172af48(&local_30,param_1);
  if (iVar1 != 1) {
    local_58 = &DAT_0033da77;
    local_54 = 0x16;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_0033da5a,0x1d,&local_58,&DAT_01857820,&DAT_01857830);
  }
  local_50 = uStack_28;
  uStack_4c = uStack_24;
  uStack_48 = uStack_20;
  local_44 = uStack_1c;
  local_58 = local_30;
  local_40 = *(undefined4 *)(param_1 + 0x18);
  uStack_3c = *(undefined4 *)(param_1 + 0x1c);
  local_54 = uStack_2c;
  local_34 = CONCAT31(local_34._1_3_,*(undefined1 *)(param_1 + 0x24));
  uStack_38 = uVar3;
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x28);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x28);
  }
  *puVar2 = local_58;
  puVar2[1] = local_54;
  puVar2[2] = local_50;
  puVar2[3] = uStack_4c;
  puVar2[4] = uStack_48;
  puVar2[5] = local_44;
  puVar2[6] = local_40;
  puVar2[7] = uStack_3c;
  puVar2[8] = uStack_38;
  puVar2[9] = local_34;
  return;
}

