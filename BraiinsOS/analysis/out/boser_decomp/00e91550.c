// FUN_00e91550 @ 00e91550 size=512 calls_out=10 calls_in=2
// strings: BUG: Root hub with HB info should be present

void FUN_00e91550(undefined4 *param_1,int param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *local_8d8;
  undefined *local_8d4;
  undefined4 local_8d0;
  undefined4 local_8cc;
  undefined1 auStack_868 [624];
  undefined1 auStack_5f8 [624];
  undefined1 auStack_388 [104];
  undefined4 *local_320;
  undefined *local_31c;
  undefined1 auStack_318 [104];
  undefined1 auStack_2b0 [624];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x5a4)) {
  case 0:
    *(undefined4 *)(param_2 + 0x598) = *(undefined4 *)(param_2 + 0x5a0);
    *(undefined2 *)(param_2 + 0x59d) = 2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1819c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1819c);
  }
  FUN_00e83984(&local_8d8,param_2);
  local_31c = local_8d4;
  local_320 = local_8d8;
  if (local_8d8 == (undefined4 *)&DAT_00000005 && local_8d4 == (undefined *)0x0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar1 = 3;
    goto LAB_00e91714;
  }
  FUN_01bed4e2(auStack_388,&local_8d0,0x68);
  FUN_01bed4e2(auStack_5f8,auStack_868,0x270);
  FUN_00e7a7b0(param_2);
  if (local_320 == (undefined4 *)&SUB_00000004 && local_31c == (undefined *)0x0) {
    local_8d8 = &local_30;
    local_28 = 0;
    local_30 = 0;
    local_8cc = 0;
    local_2c = 1;
    local_8d0 = 0x60000020;
    local_8d4 = &DAT_01c18084;
    iVar2 = FUN_00aeeb78(auStack_388,&local_8d8);
    if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533383,0x37,&local_40,&DAT_01c180dc,&DAT_01d30334);
    }
    local_40 = local_30;
    uStack_3c = local_2c;
    uStack_38 = local_28;
    FUN_01a70fd4(&local_8d8,0xd);
    FUN_00c42328(auStack_388);
    FUN_01bed4e2(auStack_318,&local_8d8,0x68);
LAB_00e916bc:
    local_31c = (undefined *)0x0;
    local_320 = (undefined4 *)&DAT_00000003;
  }
  else {
    if (local_320 == (undefined4 *)&DAT_00000003 && local_31c == (undefined *)0x0) {
      FUN_01a71aac(auStack_318,0xd,"BUG: Root hub with HB info should be present",0x2c);
      goto LAB_00e916bc;
    }
    FUN_01bed4e2(auStack_318,auStack_388,0x68);
    FUN_01bed4e2(auStack_2b0,auStack_5f8,0x270);
  }
  FUN_01bed4e2(param_1,&local_320,0x2e0);
  uVar1 = 1;
LAB_00e91714:
  *(undefined1 *)(param_2 + 0x5a4) = uVar1;
  return;
}

