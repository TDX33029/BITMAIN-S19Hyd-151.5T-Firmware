// FUN_015ff32c @ 015ff32c size=284 calls_out=7 calls_in=1
// strings: 

void FUN_015ff32c(undefined4 param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  undefined4 local_60;
  uint local_5c;
  uint local_58;
  int local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 uStack_2c;
  int iStack_28;
  char local_24 [8];
  undefined4 *puStack_1c;
  code *pcStack_18;
  undefined1 uStack_11;
  
  uVar2 = FUN_016e010e();
  iVar3 = FUN_016d6968(0x1b2,uVar2,0);
  local_54 = 0;
  local_40 = &local_50;
  local_60 = 0;
  local_4c = 0;
  local_50 = 1;
  local_30 = 0;
  local_34 = 0;
  local_38 = (undefined1 *)0x0;
  local_44 = 0;
  local_48 = 0;
  local_3c = 1;
  bVar1 = -1 < iVar3;
  if (bVar1) {
    local_34 = 0x10;
    local_60 = 0x10;
    local_54 = iVar3;
    local_38 = (undefined1 *)&local_60;
  }
  local_58 = (uint)bVar1;
  local_5c = (uint)bVar1;
  do {
    iStack_28 = FUN_016d9856(param_1,&local_48,0);
    if (iStack_28 != -1) {
      if (iStack_28 == 0) {
        return;
      }
      uStack_2c = 4;
      goto LAB_015ff3fc;
    }
    piVar4 = (int *)FUN_016d2bc8();
    iStack_28 = *piVar4;
  } while (iStack_28 == 4);
  uStack_2c = 0;
LAB_015ff3fc:
  puStack_1c = &uStack_2c;
  pcStack_18 = FUN_0160021c;
  FUN_015bee18(local_24,&uStack_11,&DAT_0058d863,&puStack_1c);
  if (local_24[0] != '\x04') {
    FUN_015bf4a0(local_24);
  }
                    /* WARNING: Subroutine does not return */
  FUN_015bef44();
}

