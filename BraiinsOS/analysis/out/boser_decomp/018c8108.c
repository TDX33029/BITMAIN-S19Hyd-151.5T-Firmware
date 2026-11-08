// FUN_018c8108 @ 018c8108 size=452 calls_out=7 calls_in=1
// strings: Expected transcript

void FUN_018c8108(char *param_1,int param_2,undefined4 param_3,code *param_4,code *param_5,
                 undefined4 param_6)

{
  undefined2 uVar1;
  undefined2 extraout_r1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  int local_198;
  undefined4 local_194;
  undefined4 local_190;
  undefined2 local_11c;
  undefined1 *local_118;
  undefined1 auStack_114 [12];
  undefined2 local_108;
  undefined2 local_106;
  undefined1 local_ac;
  char local_a8 [4];
  undefined1 auStack_a4 [128];
  
  iVar4 = *(int *)(param_2 + 0xd8);
  uVar2 = *(undefined4 *)(param_2 + 0xdc);
  uVar3 = *(undefined4 *)(param_2 + 0xe0);
  *(undefined4 *)(param_2 + 0xd8) = 0x80000000;
  if (iVar4 == -0x80000000) {
    iVar4 = thunk_FUN_01be5118(0x13);
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x13);
    }
    FUN_01bed4e2(iVar4,"Expected transcript",0x13);
    param_1[4] = '\x13';
    param_1[5] = '\0';
    param_1[6] = '\0';
    param_1[7] = '\0';
    *(int *)(param_1 + 8) = iVar4;
    param_1[0xc] = '\x13';
    param_1[0xd] = '\0';
    param_1[0xe] = '\0';
    param_1[0xf] = '\0';
    *param_1 = '\r';
  }
  else {
    uVar1 = (*param_5)(param_3);
    (*param_4)(local_a8,param_3,uVar2,uVar3);
    if (local_a8[0] == '\x14') {
      FUN_01bed4e2((uint)&local_198 | 3,auStack_a4,0xc);
      FUN_01bed4e2(auStack_114,(uint)&local_198 | 3,0xc);
      local_ac = 0xc;
      local_118 = &DAT_80000009;
      local_108 = uVar1;
      local_106 = extraout_r1;
      FUN_018e1c0c(local_a8,&local_118);
      local_11c = 4;
      FUN_01bed4e2(&local_198,local_a8,0x7c);
      if (-1 < local_198) {
        FUN_018dc0bc(param_2,local_194,local_190);
      }
      FUN_01bed4e2(local_a8,&local_198,0x80);
      FUN_018e077c(param_6,local_a8,0);
      *param_1 = '\x14';
    }
    else {
      FUN_01bed4e2(&local_198,(uint)local_a8 | 1,0xf);
      FUN_01bed4e2(param_1 + 1,&local_198,0xf);
      *param_1 = local_a8[0];
    }
    FUN_0134bd64(iVar4,uVar2);
  }
  return;
}

