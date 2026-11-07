// FUN_0078f740 @ 0078f740 size=224 calls_out=3 calls_in=2
// strings: 

void FUN_0078f740(int param_1,undefined4 *param_2,undefined1 param_3,undefined4 param_4,
                 undefined4 *param_5,undefined4 param_6,undefined4 param_7)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined1 auStack_158 [200];
  undefined1 auStack_90 [8];
  undefined1 *local_88;
  undefined4 local_84;
  undefined *local_80;
  undefined4 local_7c;
  
  FUN_01bed4e2(auStack_158,param_4,200);
  local_7c = 0x1f;
  local_80 = &DAT_003e1031;
  local_84 = 0x80000000;
  local_88 = &DAT_3b9aca00;
  iVar1 = thunk_FUN_01be5118(0x68);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x68);
  }
  FUN_01bed4e2(iVar1,auStack_90,0x68);
  FUN_01bed4e2(param_1 + 0xdc,param_7,0x9c);
  FUN_01bed4e2(param_1,param_4,200);
  uVar2 = param_2[1];
  uVar3 = param_2[2];
  *(undefined4 *)(param_1 + 0xd0) = *param_2;
  *(undefined4 *)(param_1 + 0xd4) = uVar2;
  *(undefined4 *)(param_1 + 0xd8) = uVar3;
  *(undefined1 *)(param_1 + 0x188) = param_3;
  uVar2 = param_5[1];
  uVar3 = param_5[2];
  *(undefined4 *)(param_1 + 0x178) = *param_5;
  *(undefined4 *)(param_1 + 0x17c) = uVar2;
  *(undefined4 *)(param_1 + 0x180) = uVar3;
  *(int *)(param_1 + 200) = iVar1;
  *(undefined4 *)(param_1 + 0x184) = param_6;
  *(undefined **)(param_1 + 0xcc) = &DAT_01c08a44;
  return;
}

