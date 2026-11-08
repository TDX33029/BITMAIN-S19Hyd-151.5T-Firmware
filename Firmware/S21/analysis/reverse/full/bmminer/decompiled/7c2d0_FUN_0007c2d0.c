// FUN_0007c2d0 @ 0007c2d0  size=936  callers=1
// program: bmminer


undefined4 FUN_0007c2d0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int local_30;
  undefined4 local_28;
  undefined4 uStack_24;
  char *local_1c;
  undefined8 local_18;
  char *local_c;
  
  *(undefined4 *)(param_1 + 0x3c) = 0xffffffff;
  local_30 = param_2;
  if (param_2 == 0x2d) {
    local_30 = FUN_0007b94c(param_1,param_3);
  }
  if (local_30 == 0x30) {
    local_30 = FUN_0007b94c(param_1,param_3);
    if ((0x2f < local_30) && (local_30 < 0x3a)) {
      FUN_0007b9d8(param_1,local_30);
      return 0xffffffff;
    }
  }
  else {
    if ((local_30 < 0x30) || (0x39 < local_30)) {
      FUN_0007b9d8(param_1,local_30);
      return 0xffffffff;
    }
    do {
      local_30 = FUN_0007b94c(param_1,param_3);
      if (local_30 < 0x30) break;
    } while (local_30 < 0x3a);
  }
  if (((((*(uint *)(param_1 + 0x34) & 8) == 0) && (local_30 != 0x2e)) && (local_30 != 0x45)) &&
     (local_30 != 0x65)) {
    FUN_0007b9d8(param_1,local_30);
    local_c = (char *)FUN_0007db90(param_1 + 0x28);
    piVar1 = __errno_location();
    *piVar1 = 0;
    local_18 = strtoll(local_c,&local_1c,10);
    piVar1 = __errno_location();
    if (*piVar1 != 0x22) {
      if (local_c + *(int *)(param_1 + 0x2c) != local_1c) {
                    /* WARNING: Subroutine does not return */
        __assert_fail("end == saved_text + lex->saved_text.length","load.c",0x21d,"lex_scan_number")
        ;
      }
      *(undefined4 *)(param_1 + 0x3c) = 0x101;
      *(undefined4 *)(param_1 + 0x40) = (undefined4)local_18;
      *(undefined4 *)(param_1 + 0x44) = local_18._4_4_;
      return 0;
    }
    if (local_18 < 0) {
      FUN_0007b2bc(param_3,param_1,0xf,"too big negative integer");
    }
    else {
      FUN_0007b2bc(param_3,param_1,0xf,"too big integer");
    }
  }
  else {
    if (local_30 == 0x2e) {
      iVar2 = FUN_0007b8dc(param_1,param_3);
      if ((iVar2 < 0x30) || (0x39 < iVar2)) {
        FUN_0007b9a8(param_1,iVar2);
        return 0xffffffff;
      }
      FUN_0007b910(param_1,iVar2);
      do {
        local_30 = FUN_0007b94c(param_1,param_3);
        if (local_30 < 0x30) break;
      } while (local_30 < 0x3a);
    }
    if ((local_30 == 0x45) || (local_30 == 0x65)) {
      local_30 = FUN_0007b94c(param_1,param_3);
      if ((local_30 == 0x2b) || (local_30 == 0x2d)) {
        local_30 = FUN_0007b94c(param_1,param_3);
      }
      if ((local_30 < 0x30) || (0x39 < local_30)) {
        FUN_0007b9d8(param_1,local_30);
        return 0xffffffff;
      }
      do {
        local_30 = FUN_0007b94c(param_1,param_3);
        if (local_30 < 0x30) break;
      } while (local_30 < 0x3a);
    }
    FUN_0007b9d8(param_1,local_30);
    iVar2 = FUN_0007df14(param_1 + 0x28,&local_28);
    if (iVar2 == 0) {
      *(undefined4 *)(param_1 + 0x3c) = 0x102;
      *(undefined4 *)(param_1 + 0x40) = local_28;
      *(undefined4 *)(param_1 + 0x44) = uStack_24;
      return 0;
    }
    FUN_0007b2bc(param_3,param_1,0xf,"real number overflow");
  }
  return 0xffffffff;
}

