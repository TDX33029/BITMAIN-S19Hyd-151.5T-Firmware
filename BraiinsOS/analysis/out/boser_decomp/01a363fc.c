// FUN_01a363fc @ 01a363fc size=444 calls_out=6 calls_in=1
// strings: 

void FUN_01a363fc(undefined1 *param_1,undefined4 param_2,uint param_3,int param_4,undefined4 param_5
                 ,undefined4 param_6)

{
  int iVar1;
  undefined4 *puVar2;
  uint local_1b0;
  uint local_1ac;
  uint local_1a8;
  uint local_1a4;
  undefined4 local_1a0;
  undefined4 local_19c;
  uint local_198;
  uint local_194;
  uint local_190;
  uint local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_168;
  uint local_160;
  int iStack_15c;
  undefined1 local_158;
  undefined4 local_150;
  uint local_98;
  int local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined2 uStack_7c;
  undefined2 uStack_7a;
  undefined4 local_78;
  undefined *local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined1 local_68;
  uint local_60;
  undefined4 uStack_5c;
  uint uStack_58;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  uint local_40;
  undefined4 uStack_3c;
  uint local_38;
  int local_34;
  
  FUN_01ae1a9c(&local_1b0);
  FUN_019ac130(&local_40,0);
  local_4c = 0;
  local_50 = 0;
  local_60 = local_40;
  uStack_5c = uStack_3c;
  uStack_58 = local_38;
  local_48 = 0;
  FUN_019ac248(&local_40,&local_60,&local_50);
  local_190 = local_1a4 << 0x18 | (local_1a4 >> 8 & 0xff) << 0x10 | (local_1a4 >> 0x10 & 0xff) << 8
              | local_1a4 >> 0x18;
  local_18c = local_1a8 << 0x18 | (local_1a8 >> 8 & 0xff) << 0x10 | (local_1a8 >> 0x10 & 0xff) << 8
              | local_1a8 >> 0x18;
  local_94 = param_4 + local_34 + (uint)CARRY4(param_3,local_38);
  local_6c = param_6;
  local_98 = param_3 + local_38;
  if ((local_40 & 1) != 0) {
    local_98 = param_3;
    local_94 = param_4;
  }
  local_70 = param_5;
  local_150 = 0x80000000;
  local_194 = local_1b0 << 0x18 | (local_1b0 >> 8 & 0xff) << 0x10 | (local_1b0 >> 0x10 & 0xff) << 8
              | local_1b0 >> 0x18;
  local_198 = local_1ac << 0x18 | (local_1ac >> 8 & 0xff) << 0x10 | (local_1ac >> 0x10 & 0xff) << 8
              | local_1ac >> 0x18;
  local_178 = 0;
  local_174 = 0;
  local_188 = 0;
  local_184 = 0;
  uStack_7c = 0x250;
  uStack_7a = 0;
  local_1a0 = 1;
  local_78 = 1;
  local_168 = 1;
  local_8c = 1;
  local_68 = 1;
  local_19c = 0;
  local_158 = 0;
  local_74 = &DAT_01d26484;
  local_80 = 0;
  local_84 = 2;
  local_88 = 0;
  local_90 = 0;
  local_160 = param_3;
  iStack_15c = param_4;
  iVar1 = thunk_FUN_01be5118(0x140);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x140);
  }
  FUN_01bed4e2(iVar1,&local_1a0,0x140);
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x1c);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x1c);
  }
  puVar2[5] = iVar1;
  *(undefined1 *)(puVar2 + 4) = 0;
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  *(undefined4 **)(param_1 + 4) = puVar2;
  *param_1 = 0;
  puVar2[6] = &DAT_01d2b430;
  return;
}

