// FUN_0123071c @ 0123071c size=436 calls_out=8 calls_in=1
// strings: IPv6:

byte FUN_0123071c(int param_1,char *param_2)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  char *local_40;
  uint local_3c;
  char *local_38;
  int local_34;
  char *local_28;
  uint local_24;
  
  bVar1 = 1;
  if (*param_2 != '\x03') goto LAB_01230850;
  if (*(char *)(param_1 + 0x11) == '\x02') {
    local_3c = CONCAT22(local_3c._2_2_,0x101);
    local_40 = (char *)0x0;
  }
  else {
    local_40 = *(char **)(param_1 + 0xc);
    local_3c = *(uint *)(param_1 + 0x10);
  }
  FUN_00fe4c54(&local_4c,*(undefined4 *)(param_2 + 8),*(undefined4 *)(param_2 + 0xc),&local_40);
  bVar1 = 0;
  if (local_4c == -0x80000000) goto LAB_01230850;
  FUN_00fe43f8(&local_40,local_48,local_44);
  if (local_40 == (char *)0x0) {
    local_28 = (char *)CONCAT31(local_28._1_3_,(undefined1)local_3c);
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_28,&DAT_01881748,&DAT_01881718);
  }
  if ((((local_34 == 0) || (*local_38 != '[')) || (local_34 == 1)) ||
     (pcVar3 = local_38 + 1, pcVar3[local_34 + -2] != ']')) {
    bVar1 = FUN_01226c60();
  }
  else {
    uVar4 = local_34 - 2;
    if (uVar4 < 5) {
LAB_01230818:
      local_40 = pcVar3;
      local_3c = uVar4;
      FUN_00fb3af4(&local_28,&local_40);
      uVar4 = local_3c;
      bVar1 = (byte)local_28;
LAB_01230880:
      bVar1 = uVar4 != 0 | bVar1 ^ 1;
    }
    else {
      iVar2 = thunk_FUN_016dd50a("IPv6:",pcVar3,5);
      if (iVar2 == 0) {
        local_24 = local_34 - 7;
        local_28 = local_38 + 6;
        FUN_00fb3f68(&local_40,&local_28);
        uVar4 = local_24;
        bVar1 = (byte)local_40;
        goto LAB_01230880;
      }
      bVar1 = 1;
      if (uVar4 < 0x10) goto LAB_01230818;
    }
    bVar1 = bVar1 ^ 1;
  }
  if (local_4c != 0) {
    thunk_FUN_016d3fb4(local_48);
  }
LAB_01230850:
  return bVar1 & 1;
}

