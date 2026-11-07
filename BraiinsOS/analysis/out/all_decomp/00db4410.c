// FUN_00db4410 @ 00db4410 size=272 calls_out=7 calls_in=2
// strings: 

uint FUN_00db4410(undefined4 *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  uint uVar2;
  code *pcVar3;
  int iVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  undefined1 auStack_f8 [184];
  int local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_26;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 8)) {
  case 0:
    local_3c = *param_1;
    uStack_38 = param_1[1];
    uStack_34 = param_1[2];
    uStack_30 = param_1[3];
    uStack_2c = param_1[4];
    local_26 = 0;
    local_40 = param_1[5] + 0x2c;
    iVar4 = thunk_FUN_016d4a50(0xd8);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0xd8);
    }
    FUN_016dd1aa(iVar4,auStack_f8,0xd8);
    puVar5 = &DAT_0186df84;
    param_1[6] = iVar4;
    param_1[7] = &DAT_0186df84;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01878d28);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01878d28);
  case 3:
    iVar4 = param_1[6];
    puVar5 = (undefined *)param_1[7];
  }
  uVar2 = (**(code **)(puVar5 + 0xc))(iVar4,param_2);
  if ((uVar2 & 1) == 0) {
    uVar6 = param_1[6];
    puVar7 = (undefined4 *)param_1[7];
    pcVar3 = (code *)*puVar7;
    if (pcVar3 != (code *)0x0) {
      (*pcVar3)(uVar6);
    }
    if (puVar7[1] != 0) {
      thunk_FUN_016d3fb4(uVar6);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
    uVar2 = 1;
  }
  *(undefined1 *)(param_1 + 8) = uVar1;
  return uVar2;
}

