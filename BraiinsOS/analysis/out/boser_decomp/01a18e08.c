// FUN_01a18e08 @ 01a18e08 size=220 calls_out=4 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01a18e08(undefined4 param_1)

{
  uint *puVar1;
  undefined8 uVar2;
  uint local_68;
  uint local_64;
  uint local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  undefined4 *puStack_48;
  uint uStack_44;
  uint local_40;
  uint uStack_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  local_50 = (uint)local_50._1_3_ << 8;
  uVar2 = thunk_FUN_01bee35a(param_1,0x2c0);
  puVar1 = (uint *)((int)uVar2 + (int)((ulonglong)uVar2 >> 0x20));
  if ((char)puVar1[4] == '\0') {
    FUN_019ae6ac(&local_68);
    *puVar1 = local_68;
    puVar1[1] = local_64;
    puVar1[2] = local_60;
    puVar1[3] = local_5c;
    *(undefined1 *)(puVar1 + 4) = 1;
  }
  local_38 = *puVar1;
  uStack_34 = puVar1[1];
  uStack_30 = puVar1[2];
  uStack_2c = puVar1[3];
  *puVar1 = local_38 + 1;
  puVar1[1] = uStack_34 + (0xfffffffe < local_38);
  puStack_48 = &DAT_0056d238;
  uStack_44 = 0;
  local_40 = 0;
  uStack_3c = 0;
  local_4c = 0x3ffffffe;
  local_50 = local_50 & 0xffffff00;
  local_54 = 0;
  local_58 = 0;
  local_5c = local_5c & 0xffffff00;
  local_60 = 0x1fffffff;
  local_64 = 1;
  local_68 = 1;
  puVar1 = (uint *)thunk_FUN_01be5118(0x40);
  if (puVar1 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x40);
  }
  *puVar1 = local_68;
  puVar1[1] = local_64;
  puVar1[2] = local_60;
  puVar1[3] = local_5c;
  puVar1[4] = local_58;
  puVar1[5] = local_54;
  puVar1[6] = local_50;
  puVar1[7] = local_4c;
  puVar1[8] = (uint)puStack_48;
  puVar1[9] = uStack_44;
  puVar1[10] = local_40;
  puVar1[0xb] = uStack_3c;
  puVar1[0xc] = local_38;
  puVar1[0xd] = uStack_34;
  puVar1[0xe] = uStack_30;
  puVar1[0xf] = uStack_2c;
  return;
}

