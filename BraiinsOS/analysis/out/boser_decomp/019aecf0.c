// FUN_019aecf0 @ 019aecf0 size=416 calls_out=7 calls_in=6
// strings: 

void FUN_019aecf0(undefined1 *param_1,uint param_2,undefined4 param_3)

{
  code *pcVar1;
  undefined1 uVar2;
  int iVar3;
  undefined1 auStack_44 [36];
  int local_20;
  int local_1c;
  
  local_20 = FUN_01bee4a4(auStack_44);
  if (local_20 != 0) {
    FUN_019abc1c(&local_20,&DAT_00533278,0,&DAT_01d27a24);
    goto LAB_019aee8c;
  }
  if (param_2 < 0x801) {
    param_2 = 0x800;
  }
  local_1c = FUN_01bee4d4(auStack_44,param_2);
  if (local_1c == 0) {
LAB_019aeda4:
    local_1c = 0;
    iVar3 = FUN_01bee858(&local_1c,auStack_44,0x19aef2c,param_3);
    if (iVar3 == 0) {
      *(int *)(param_1 + 4) = local_1c;
      uVar2 = 4;
    }
    else {
      FUN_019af1c4(param_3);
      *(int *)(param_1 + 4) = iVar3;
      uVar2 = 0;
    }
    *param_1 = uVar2;
    local_1c = FUN_01bee47c(auStack_44);
    if (local_1c == 0) {
      return;
    }
    FUN_019abc1c(&local_1c,&DAT_00533278,0,&DAT_01d27a34);
  }
  else {
    if (local_1c != 0x16) {
      FUN_019abc1c(&local_1c,&DAT_0056f13c,0,&DAT_01d27a14);
      goto LAB_019aee8c;
    }
    iVar3 = FUN_01be2b70(0x1e);
    iVar3 = FUN_01bee4d4(auStack_44,(param_2 + iVar3) - 1 & -iVar3);
    if (iVar3 == 0) goto LAB_019aeda4;
    *param_1 = 2;
    *(undefined **)(param_1 + 4) = &DAT_01d27a08;
    local_1c = FUN_01bee47c(auStack_44);
    if (local_1c == 0) {
      FUN_019af1c4(param_3);
      return;
    }
  }
  FUN_019abc1c(&local_1c,&DAT_00533278,0,&DAT_01d27a34);
LAB_019aee8c:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x19aee8c);
  (*pcVar1)();
}

