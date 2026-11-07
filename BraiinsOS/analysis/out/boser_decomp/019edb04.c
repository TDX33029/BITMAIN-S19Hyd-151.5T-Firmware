// FUN_019edb04 @ 019edb04 size=168 calls_out=2 calls_in=0
// strings: 

void FUN_019edb04(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 local_30;
  int local_28;
  undefined1 *local_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  
  if (*(int *)(param_1 + 8) == 0) {
    puVar3 = &DAT_005b39be;
  }
  else {
    uVar4 = FUN_019ed078(*(int *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
    if ((int)uVar4 != 0) {
      uVar1 = *param_2;
      uVar2 = param_2[1];
      local_1c = &LAB_01674ec4;
      puVar3 = &DAT_00578f70;
      local_20 = (undefined1 *)&local_30;
      goto LAB_019edba0;
    }
    puVar3 = &DAT_0058f2ad;
  }
  uVar4 = CONCAT44(local_30._4_4_,(undefined4)local_30);
  uVar1 = *param_2;
  uVar2 = param_2[1];
LAB_019edba0:
  local_24 = &LAB_019ec974;
  local_28 = param_1;
  local_30 = uVar4;
  FUN_012fa178(uVar1,uVar2,puVar3,&local_28);
  return;
}

