// FUN_0151f3e4 @ 0151f3e4 size=204 calls_out=7 calls_in=0
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0151f3e4(int *param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  int local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  iVar4 = *param_1;
  uVar1 = FUN_00605900(iVar4 + 0x18);
  FUN_0172aab0(&local_40);
  iVar2 = FUN_0173e2d8(&local_40,uVar1,0);
  if (iVar2 != 1) {
    FUN_0172aae8(&local_40);
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_68,&DAT_018577f0,&DAT_01857810);
  }
  local_68 = local_40;
  uStack_64 = uStack_3c;
  uStack_60 = uStack_38;
  uStack_5c = uStack_34;
  uStack_58 = uStack_30;
  local_54 = uStack_2c;
  local_4c = 0;
  local_50 = 0;
  local_44 = (uint)local_44._1_3_ << 8;
  local_48 = iVar4;
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x28);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x28);
  }
  *puVar3 = local_68;
  puVar3[1] = uStack_64;
  puVar3[2] = uStack_60;
  puVar3[3] = uStack_5c;
  puVar3[4] = uStack_58;
  puVar3[5] = local_54;
  puVar3[6] = local_50;
  puVar3[7] = local_4c;
  puVar3[8] = local_48;
  puVar3[9] = local_44;
  return;
}

