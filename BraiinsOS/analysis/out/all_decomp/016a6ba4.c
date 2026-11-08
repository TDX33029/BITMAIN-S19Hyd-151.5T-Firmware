// FUN_016a6ba4 @ 016a6ba4 size=900 calls_out=4 calls_in=8
// strings: 

void FUN_016a6ba4(undefined4 *param_1,int *param_2,uint param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  short *psVar5;
  uint local_98;
  undefined4 local_94;
  uint local_90;
  short *local_8c;
  uint local_88;
  int local_84;
  undefined4 local_80;
  undefined2 local_78;
  undefined1 local_76;
  undefined4 local_75;
  undefined2 local_71;
  undefined4 local_6f;
  undefined4 local_6b;
  uint *local_64;
  code *local_60;
  undefined4 local_5c;
  int local_58;
  undefined4 local_54;
  undefined1 local_4c;
  undefined1 local_4b;
  undefined4 local_4a;
  undefined3 uStack_46;
  undefined4 local_43;
  undefined4 local_3f;
  uint *local_38;
  code *local_34;
  uint **local_30;
  code *local_2c;
  uint *local_28;
  undefined1 *local_24;
  
  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return;
  }
  uVar2 = param_2[4];
  local_98 = param_3;
  local_94 = param_4;
  if ((uint)param_2[1] <= uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa4a4(uVar2,param_2[1],&DAT_018ae7cc);
  }
  puVar4 = (undefined4 *)(*param_2 + uVar2 * 8);
  psVar5 = (short *)*puVar4;
  uVar2 = puVar4[1];
  if (*(char *)(param_1 + 3) == '\0') {
    uVar1 = (**(code **)(param_1[1] + 0x14))(*param_1,&DAT_0041545b,3);
    *(undefined1 *)((int)param_1 + 0xd) = uVar1;
    if (uVar2 == 7) goto LAB_016a6c58;
LAB_016a6c0c:
    if ((1 < uVar2) && (*psVar5 == 0x2372)) {
      local_76 = *(undefined1 *)(param_1 + 2);
      if (uVar2 != 2) {
LAB_016a6d8c:
        if ((char)psVar5[1] < -0x40) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(psVar5,uVar2,2,uVar2,&DAT_018ae7ec);
        }
      }
      local_88 = uVar2 - 2;
      local_8c = psVar5 + 1;
      local_75 = 0;
      local_78 = 0;
      local_71 = 0;
      local_6b = 0x15;
      local_6f = 0x15;
      local_84 = -0x7ffffffe;
      local_90 = 0x80000000;
      local_64 = (uint *)0x80000000;
      local_30 = &local_64;
      local_4c = 0;
      local_4a = 0;
      uStack_46 = 0;
      local_28 = &local_98;
      local_3f = 0x15;
      local_43 = 0x15;
      local_5c = 1;
      local_58 = -0x7ffffffe;
      local_60 = (code *)0x4154a3;
      local_38 = &local_90;
      local_24 = &LAB_0153f908;
      local_2c = FUN_01273a6c;
      local_34 = FUN_01273a6c;
      local_4b = local_76;
      uVar1 = (**(code **)(param_1[1] + 0x14))(*param_1,&DAT_0057fce6,&local_38);
      goto LAB_016a6e58;
    }
  }
  else {
    *(undefined1 *)(param_1 + 3) = 0;
    if (uVar2 != 7) goto LAB_016a6c0c;
LAB_016a6c58:
    iVar3 = thunk_FUN_016dd50a(psVar5,&DAT_00418440,7);
    if (iVar3 == 0) {
      local_60 = FUN_016a59b8;
      local_64 = &local_90;
      local_90 = param_3;
      local_8c = (short *)param_4;
      uVar1 = (**(code **)(param_1[1] + 0x14))(*param_1,&DAT_00590e71,&local_64);
      *(undefined1 *)((int)param_1 + 0xd) = uVar1;
      return;
    }
    if (*psVar5 == 0x2372) {
      local_76 = *(undefined1 *)(param_1 + 2);
      goto LAB_016a6d8c;
    }
  }
  local_84 = -0x7ffffffe;
  local_76 = *(undefined1 *)(param_1 + 2);
  local_75 = 0;
  local_78 = 0;
  local_71 = 0;
  local_6b = 0x15;
  local_6f = 0x15;
  local_90 = 0x80000000;
  local_30 = &local_64;
  local_4c = 0;
  local_4a = 0;
  uStack_46 = 0;
  local_58 = -0x7ffffffe;
  local_38 = &local_90;
  local_5c = 1;
  local_28 = &local_98;
  local_3f = 0x15;
  local_43 = 0x15;
  local_60 = (code *)0x4154a3;
  local_64 = (uint *)0x80000000;
  local_24 = &LAB_0153f908;
  local_2c = FUN_01273a6c;
  local_34 = FUN_01273a6c;
  local_8c = psVar5;
  local_88 = uVar2;
  local_4b = local_76;
  uVar1 = (**(code **)(param_1[1] + 0x14))(*param_1,&DAT_0057fce6,&local_38);
LAB_016a6e58:
  if (((uint)local_64 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_60);
  }
  if ((-0x7ffffffe < local_58) && (local_58 != 0)) {
    thunk_FUN_016d3fb4(local_54);
  }
  if ((local_90 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_8c);
  }
  if ((local_84 < -0x7ffffffd) || (local_84 == 0)) {
    *(undefined1 *)((int)param_1 + 0xd) = uVar1;
    return;
  }
  thunk_FUN_016d3fb4(local_80);
  *(undefined1 *)((int)param_1 + 0xd) = uVar1;
  return;
}

