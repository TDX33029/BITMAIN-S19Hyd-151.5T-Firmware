// FUN_00e248d0 @ 00e248d0 size=380 calls_out=6 calls_in=0
// strings: 

void FUN_00e248d0(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  undefined4 **ppuVar3;
  char *pcVar4;
  int iVar5;
  undefined4 *in_stack_00000000;
  undefined4 *local_64;
  undefined *local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined1 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined2 local_40;
  int local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  
  pcVar4 = (char *)*in_stack_00000000;
  if (pcVar4 == (char *)0x0) {
LAB_00e24980:
    local_64 = (undefined4 *)&DAT_00000007;
  }
  else {
    if (*pcVar4 == '\x02') {
      local_64 = &local_28;
      local_20 = 0;
      local_28 = 0;
      local_58 = 0;
      local_24 = 1;
      local_5c = 0x60000020;
      local_60 = &DAT_01c17420;
      iVar1 = FUN_0196a8d8(pcVar4 + 8,&local_64);
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013073dc(&DAT_00533383,0x37,&local_38,&DAT_01c17458,&DAT_01d30334);
      }
      ppuVar3 = &local_38;
      local_34 = local_28;
      uStack_30 = local_24;
      uStack_2c = local_20;
      local_38 = (undefined4 *)0x8;
      goto LAB_00e249f4;
    }
    if (*pcVar4 != '\x03') goto LAB_00e24980;
    iVar1 = FUN_014afb6c(*(undefined4 *)(pcVar4 + 8),*(undefined4 *)(pcVar4 + 0xc));
    local_60 = *(undefined **)(pcVar4 + 8);
    local_5c = *(undefined4 *)(pcVar4 + 0xc);
    local_48 = 0;
    local_58 = 0;
    iVar5 = 3;
    if (iVar1 != 0) {
      iVar5 = 6;
    }
    iVar1 = -1;
    local_40 = 1;
    local_4c = 1;
    local_50 = 0x2c;
    local_64 = (undefined4 *)0x2c;
    local_54 = local_5c;
    local_44 = local_5c;
    local_3c = iVar5;
    do {
      iVar2 = FUN_01aa510c(&local_64);
      iVar1 = iVar1 + 1;
    } while (iVar2 != 0);
    if (iVar1 == iVar5) {
      *param_1 = 2;
      return;
    }
    FUN_006666fc(&local_60,*(undefined4 *)(pcVar4 + 8),*(undefined4 *)(pcVar4 + 0xc));
    local_64 = (undefined4 *)&DAT_00000008;
  }
  ppuVar3 = &local_64;
LAB_00e249f4:
  FUN_014a5cd0(param_1,ppuVar3);
  return;
}

