// FUN_0189aac0 @ 0189aac0 size=716 calls_out=13 calls_in=0
// strings: internal error: entered unreachable code

void FUN_0189aac0(undefined1 *param_1,int *param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,int param_6,uint param_7)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined1 auStack_3f0 [288];
  int *local_2d0;
  undefined4 local_2cc;
  undefined4 uStack_2c8;
  undefined4 uStack_2c4;
  int *local_1a0 [4];
  undefined1 auStack_190 [296];
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined1 local_58 [16];
  byte local_48 [16];
  int *local_38 [5];
  
  if (*param_2 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d21eec);
  }
  FUN_01895338(local_1a0,param_2 + 4,param_4,param_5,param_7);
  if ((char)local_1a0[0] == '\x01') {
    *param_1 = 1;
  }
  else {
    param_2 = param_2 + 0x44;
    FUN_01bed4e2((int)&uStack_2c4 + 3,auStack_190,0x120);
    FUN_01bed4e2(auStack_3f0,(int)&uStack_2c4 + 3,0x120);
    local_68 = *param_3;
    uStack_64 = param_3[1];
    uStack_60 = param_3[2];
    uStack_5c = 0x1000000;
    FUN_01890850(local_58,&local_68);
    uVar1 = param_7 & 0x7ffffff0;
    param_7 = param_7 & 0xf;
    if (uVar1 != 0) {
      uVar2 = uVar1;
      iVar3 = param_6;
      do {
        uVar4 = uVar2;
        if (0xbff < uVar2) {
          uVar4 = 0xc00;
        }
        FUN_0189b184(param_2,iVar3,uVar4,0,&local_68);
        FUN_01895174(auStack_3f0,iVar3,uVar4);
        iVar3 = iVar3 + uVar4;
        uVar2 = uVar2 - uVar4;
      } while (uVar2 != 0);
    }
    if (param_7 != 0) {
      FUN_01bed93e(local_48 + param_7,0,0x10 - param_7);
      FUN_01bed4e2(local_48,param_6 + uVar1,param_7);
      FUN_01890aec(local_1a0,&local_68);
      uVar2 = 1;
      if ((DAT_01d53480 & 4) == 0) {
        uVar2 = DAT_01d53480 & 1 ^ 3;
      }
      if (uVar2 == 1) {
        FUN_01bd8f20(local_1a0,&local_2d0,param_2);
      }
      else if (uVar2 == 2) {
        FUN_01bda190(local_1a0,&local_2d0,param_2);
      }
      else {
        FUN_01bcf57c(local_1a0,&local_2d0,param_2);
      }
      local_38[0] = local_2d0;
      local_38[1] = (int *)local_2cc;
      local_38[2] = (int *)uStack_2c8;
      local_38[3] = (int *)uStack_2c4;
      iVar3 = 0;
      do {
        *(byte *)((int)local_38 + iVar3) = *(byte *)((int)local_38 + iVar3) ^ local_48[iVar3];
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0x10);
      local_1a0[0] = local_38[0];
      local_1a0[1] = local_38[1];
      local_1a0[2] = local_38[2];
      local_1a0[3] = local_38[3];
      FUN_01bed93e((int)local_1a0 + param_7,0,0x10 - param_7);
      local_38[0] = local_1a0[0];
      local_38[1] = local_1a0[1];
      local_38[2] = local_1a0[2];
      local_38[3] = local_1a0[3];
      FUN_01894c58(auStack_3f0,local_1a0);
      FUN_01bed4e2(param_6 + uVar1,local_38,param_7);
    }
    FUN_01bed4e2(local_1a0,auStack_3f0,0x120);
    local_2d0 = param_2;
    FUN_01894ae0(param_1 + 1,local_1a0);
    *param_1 = 0;
  }
  return;
}

