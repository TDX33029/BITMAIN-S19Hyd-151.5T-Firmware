// FUN_0195fb38 @ 0195fb38 size=568 calls_out=5 calls_in=4
// strings: assertion failed: self.height > 0

void FUN_0195fb38(int *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined1 auStack_470 [248];
  int local_378;
  int local_374;
  int iStack_370;
  int iStack_36c;
  char local_365;
  int local_364 [3];
  undefined1 auStack_358 [16];
  undefined1 auStack_348 [256];
  undefined1 auStack_248 [268];
  int local_13c;
  uint local_134;
  int local_130 [4];
  int local_120;
  undefined1 auStack_11c [248];
  
  iVar2 = *param_2;
  iVar1 = -0x80000000;
  if (iVar2 != 0) {
    iVar6 = param_2[1];
    FUN_0194f848(&local_378,iVar2,iVar6,param_3);
    if (local_378 != 1) {
      local_365 = '\0';
      if (iStack_370 == 0) {
        local_130[2] = iStack_36c;
        local_130[0] = local_374;
        local_130[1] = 0;
        FUN_0194f394(auStack_248,local_130,&local_365);
      }
      else {
        local_364[0] = *(int *)(local_374 + iStack_36c * 4 + 0xb8c);
        while (iStack_370 = iStack_370 + -1, iStack_370 != 0) {
          local_364[0] = *(int *)(local_364[0] + (uint)*(ushort *)(local_364[0] + 0xb8a) * 4 + 0xb8c
                                 );
        }
        local_364[1] = 0;
        local_364[2] = *(ushort *)(local_364[0] + 0xb8a) - 1;
        FUN_0194f394(auStack_248,local_364,&local_365);
        FUN_01bed4e2(auStack_358,auStack_248,0x10c);
        if (local_134 < *(ushort *)(local_13c + 0xb8a)) {
          uVar5 = local_134;
          iVar4 = local_13c;
        }
        else {
          do {
            iVar4 = *(int *)(local_13c + 0xb0);
            uVar5 = (uint)*(ushort *)(local_13c + 0xb88);
            local_13c = iVar4;
          } while (*(ushort *)(iVar4 + 0xb8a) <= uVar5);
        }
        iVar3 = iVar4 + uVar5 * 0x10;
        FUN_01bed4e2(local_130,iVar3,0x10);
        FUN_01bed4e2(iVar3,auStack_358,0x10);
        iVar4 = iVar4 + uVar5 * 0xfc + 0xb4;
        FUN_01bed4e2(&local_120,iVar4,0xfc);
        FUN_01bed4e2(iVar4,auStack_348,0xfc);
        FUN_01bed4e2(auStack_248,local_130,0x10c);
      }
      FUN_01bed4e2(local_130,auStack_248,0x10c);
      param_2[2] = param_2[2] + -1;
      if (local_365 == '\x01') {
        if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("assertion failed: self.height > 0",0x21,&DAT_01d2ff00);
        }
        iVar4 = *(int *)(iVar2 + 0xb8c);
        *param_2 = iVar4;
        param_2[1] = iVar6 + -1;
        *(undefined4 *)(iVar4 + 0xb0) = 0;
        thunk_FUN_01be4678(iVar2);
      }
      FUN_01bed4e2(auStack_470,auStack_11c,0xf8);
      if (local_120 != -0x80000000) {
        FUN_01bed4e2(param_1 + 1,auStack_470,0xf8);
        iVar1 = local_120;
      }
    }
  }
  *param_1 = iVar1;
  return;
}

