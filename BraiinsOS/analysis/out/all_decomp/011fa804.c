// FUN_011fa804 @ 011fa804 size=280 calls_out=6 calls_in=1
// strings: unevaluatedProperties

void FUN_011fa804(undefined4 *param_1,int param_2,undefined4 param_3,char *param_4)

{
  undefined *puVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 local_220 [38];
  int local_188;
  undefined4 local_184;
  undefined4 uStack_180;
  undefined4 uStack_17c;
  undefined4 local_178 [38];
  int local_e0;
  undefined4 local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined8 local_d0;
  undefined1 auStack_c8 [168];
  
  if ((*param_4 == '\x01') && ((param_4[1] & 1U) != 0)) {
    *param_1 = 0;
    return;
  }
  FUN_011fa954(local_178,param_2);
  if (local_e0 == -0x80000000) {
    puVar1 = (undefined *)FUN_011f0ab8(local_178[0]);
    iVar2 = 0;
  }
  else {
    FUN_016dd1aa((uint)local_220 | 4,(uint)local_178 | 4,0x94);
    local_188 = local_e0;
    local_220[0] = local_178[0];
    local_184 = local_dc;
    uStack_180 = uStack_d8;
    uStack_17c = uStack_d4;
    uVar3 = FUN_0123ab30(*(undefined4 *)(param_2 + 0x38),*(undefined4 *)(param_2 + 0x3c),
                         "unevaluatedProperties",0x15);
    FUN_016dd1aa(auStack_c8,local_220,0xa8);
    local_d0 = uVar3;
    iVar2 = thunk_FUN_016d4a50(0xb0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0xb0);
    }
    FUN_016dd1aa(iVar2,&local_d0,0xb0);
    puVar1 = &DAT_0188a4e0;
  }
  param_1[1] = iVar2;
  param_1[2] = puVar1;
  *param_1 = 1;
  return;
}

