// FUN_011e545c @ 011e545c size=260 calls_out=6 calls_in=1
// strings: unevaluatedItemsconversion error

void FUN_011e545c(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  int local_178;
  undefined4 local_174;
  undefined1 auStack_170 [104];
  int local_108;
  undefined4 local_104;
  undefined1 auStack_100 [104];
  undefined1 auStack_98 [112];
  undefined8 local_28;
  
  if ((*param_4 == '\x01') && ((param_4[1] & 1U) != 0)) {
    *param_1 = 0;
    return;
  }
  FUN_011e5598(&local_108,param_2);
  if (local_108 == 2) {
    puVar1 = (undefined *)FUN_011f0ab8(local_104);
    iVar2 = 0;
  }
  else {
    FUN_016dd1aa(auStack_170,auStack_100,0x68);
    local_174 = local_104;
    local_178 = local_108;
    uVar3 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                         "unevaluatedItemsconversion error",0x10);
    FUN_016dd1aa(auStack_98,&local_178,0x70);
    local_28 = uVar3;
    iVar2 = thunk_FUN_016d4a50(0x78);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x78);
    }
    FUN_016dd1aa(iVar2,auStack_98,0x78);
    puVar1 = &DAT_0188a270;
  }
  param_1[1] = iVar2;
  param_1[2] = puVar1;
  *param_1 = 1;
  return;
}

