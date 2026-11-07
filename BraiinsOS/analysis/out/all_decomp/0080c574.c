// FUN_0080c574 @ 0080c574 size=300 calls_out=7 calls_in=8
// strings: 

uint FUN_0080c574(int *param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  int iStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 local_2c;
  undefined4 uStack_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x15)) {
  case 0:
    *(undefined1 *)(param_1 + 5) = *(undefined1 *)((int)param_1 + 0x16);
    iVar5 = param_1[4];
    FUN_007dea10(&local_68,param_1 + 5,param_1[2],param_1[3]);
    local_58 = local_68;
    uStack_54 = uStack_64;
    uStack_50 = uStack_60;
    local_2c = CONCAT22(local_2c._2_2_,0x1000);
    iStack_4c = iVar5;
    puVar2 = (undefined4 *)thunk_FUN_016d4a50(0x34);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x34);
    }
    puVar6 = &DAT_018868f4;
    *puVar2 = local_58;
    puVar2[1] = uStack_54;
    puVar2[2] = uStack_50;
    puVar2[3] = iStack_4c;
    puVar2[4] = local_48;
    puVar2[5] = uStack_44;
    puVar2[6] = uStack_40;
    puVar2[7] = uStack_3c;
    puVar2[8] = local_38;
    puVar2[9] = uStack_34;
    puVar2[10] = uStack_30;
    puVar2[0xb] = local_2c;
    puVar2[0xc] = uStack_28;
    *param_1 = (int)puVar2;
    param_1[1] = (int)&DAT_018868f4;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186397c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186397c);
  case 3:
    puVar2 = (undefined4 *)*param_1;
    puVar6 = (undefined4 *)param_1[1];
  }
  uVar3 = (*(code *)puVar6[3])(puVar2,param_2);
  if ((uVar3 & 1) == 0) {
    iVar5 = *param_1;
    puVar2 = (undefined4 *)param_1[1];
    pcVar4 = (code *)*puVar2;
    if (pcVar4 != (code *)0x0) {
      (*pcVar4)(iVar5);
    }
    if (puVar2[1] != 0) {
      thunk_FUN_016d3fb4(iVar5);
    }
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
    uVar3 = 1;
  }
  *(undefined1 *)((int)param_1 + 0x15) = uVar1;
  return uVar3;
}

