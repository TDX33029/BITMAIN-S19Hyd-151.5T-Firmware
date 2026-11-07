// FUN_0178a834 @ 0178a834 size=816 calls_out=9 calls_in=0
// strings: REQUEST_METHOD | HTTP_PROXY | http_proxy | reqwest::proxy | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0178a834(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  undefined4 *local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  uint local_60;
  uint uStack_5c;
  uint uStack_58;
  uint local_54;
  char *local_50;
  char *local_4c;
  char *local_48;
  uint local_44;
  undefined *local_40;
  undefined4 local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  uVar5 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar4 = (uint *)((int)uVar5 + (int)((ulonglong)uVar5 >> 0x20));
  if ((char)puVar4[4] == '\0') {
    FUN_019ae6ac(&local_50);
    *puVar4 = (uint)local_50;
    puVar4[1] = (uint)local_4c;
    puVar4[2] = (uint)local_48;
    puVar4[3] = local_44;
    *(undefined1 *)(puVar4 + 4) = 1;
  }
  local_60 = *puVar4;
  uStack_5c = puVar4[1];
  uStack_58 = puVar4[2];
  local_54 = puVar4[3];
  *puVar4 = local_60 + 1;
  puVar4[1] = uStack_5c + (0xfffffffe < local_60);
  local_70 = &DAT_0056d238;
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  FUN_019a3070(&local_50,"REQUEST_METHOD",0xe);
  if (local_50 == (char *)0x80000000) {
    iVar1 = FUN_0178ac08(&local_70,&DAT_0056dc34,4,"HTTP_PROXY",10);
    if (iVar1 == 0) {
      FUN_0178ac08(&local_70,&DAT_0056dc34,4,"http_proxy",10);
    }
  }
  else {
    FUN_019bb7e0(local_50,local_4c);
    if (1 < DAT_01d51b00) {
      local_48 = (char *)0xe;
      local_50 = (char *)0x2;
      local_4c = "reqwest::proxy";
      DataMemoryBarrier(0xb);
      puVar3 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar3 = &DAT_01cfc5e0;
      }
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar1 = (*(code *)puVar3[3])(pcVar2,&local_50);
      if (((iVar1 != 0) && (FUN_019a3070(&local_50,"HTTP_PROXY",10), local_50 != (char *)0x80000000)
          ) && (FUN_019bb7e0(local_50,local_4c), 1 < DAT_01d51b00)) {
        local_44 = 0xe;
        local_4c = (char *)0xe;
        local_40 = &DAT_01d1b68c;
        local_48 = "reqwest::proxy";
        local_50 = "reqwest::proxy";
        FUN_0193b350("HTTP_PROXY environment variable ignored in CGI",0x5d,2,&local_50);
      }
    }
  }
  iVar1 = FUN_0178ac08(&local_70,&DAT_0053278b,5,"HTTPS_PROXY",0xb);
  if (iVar1 == 0) {
    FUN_0178ac08(&local_70,&DAT_0053278b,5,"https_proxy",0xb);
  }
  iVar1 = FUN_0178ac08(&local_70,&DAT_0056dc34,4,"ALL_PROXY",9);
  if (iVar1 != 0) {
    iVar1 = FUN_0178ac08(&local_70,&DAT_0053278b,5,"ALL_PROXY",9);
    if (iVar1 != 0) goto LAB_0178aaec;
  }
  FUN_0178ac08(&local_70,&DAT_0056dc34,4,"all_proxy",9);
  FUN_0178ac08(&local_70,&DAT_0053278b,5,"all_proxy",9);
LAB_0178aaec:
  local_48 = (char *)local_70;
  local_44 = uStack_6c;
  local_40 = (undefined *)uStack_68;
  local_3c = uStack_64;
  local_38 = local_60;
  uStack_34 = uStack_5c;
  uStack_30 = uStack_58;
  uStack_2c = local_54;
  local_4c = (char *)0x1;
  local_50 = (char *)0x1;
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x28);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x28);
  }
  *puVar3 = local_50;
  puVar3[1] = local_4c;
  puVar3[2] = local_48;
  puVar3[3] = local_44;
  puVar3[4] = local_40;
  puVar3[5] = local_3c;
  puVar3[6] = local_38;
  puVar3[7] = uStack_34;
  puVar3[8] = uStack_30;
  puVar3[9] = uStack_2c;
  return;
}

