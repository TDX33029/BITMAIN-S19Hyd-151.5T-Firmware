// FUN_01563e2c @ 01563e2c size=520 calls_out=6 calls_in=2
// strings: 

void FUN_01563e2c(undefined4 *param_1,int param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  int unaff_r4;
  int unaff_r6;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a4;
  undefined *local_a0;
  undefined2 local_2c;
  
  if (param_5 == 0) {
    iVar6 = -0x80000000;
    uVar2 = *(uint *)(param_2 + 0x21c);
  }
  else {
    unaff_r6 = *(int *)(param_5 + 8);
    if (unaff_r6 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,unaff_r6);
    }
    uVar5 = *(undefined4 *)(param_5 + 4);
    if (unaff_r6 == 0) {
      unaff_r4 = 1;
      iVar6 = 0;
    }
    else {
      unaff_r4 = thunk_FUN_016d4a50(unaff_r6);
      if (unaff_r4 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,unaff_r6);
      }
      iVar6 = unaff_r6;
    }
    FUN_016dd1aa(unaff_r4,uVar5,unaff_r6);
    uVar2 = *(uint *)(param_2 + 0x21c);
  }
  if ((uVar2 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_2 + 0x220));
  }
  *(int *)(param_2 + 0x21c) = iVar6;
  *(int *)(param_2 + 0x220) = unaff_r4;
  *(int *)(param_2 + 0x224) = unaff_r6;
  if (iVar6 != -0x80000000) {
    puVar4 = (undefined4 *)(param_3 + 4);
    iVar3 = param_4 * 0xc;
    while( true ) {
      if (iVar3 == 0) {
        local_a0 = (undefined *)0xd0001;
        local_a4 = 0x80000001;
        local_2c = 4;
        FUN_01525ed4(param_2,&local_a4,*(char *)(param_2 + 0x31) == '\x02');
        *(undefined1 *)(param_1 + 1) = 0x32;
        *(undefined1 *)(param_2 + 0x255) = 1;
        *param_1 = &DAT_8000001c;
        return;
      }
      if ((*(int *)(param_3 + 8) == unaff_r6) &&
         (iVar1 = thunk_FUN_016dd50a(*puVar4,unaff_r4,unaff_r6), iVar1 == 0)) break;
      param_3 = param_3 + 0xc;
      iVar3 = iVar3 + -0xc;
      puVar4 = puVar4 + 3;
    }
  }
  bVar7 = *(char *)(param_2 + 0x259) != '\0';
  iVar3 = 0;
  if (bVar7) {
    iVar3 = param_4;
  }
  if ((bVar7 && iVar3 != 0) && (iVar6 == -0x80000000)) {
    local_a0 = &DAT_00210001;
    local_2c = 4;
    local_a4 = 0x80000001;
    FUN_01525ed4(param_2,&local_a4,*(char *)(param_2 + 0x31) == '\x02');
    *(undefined1 *)(param_2 + 0x255) = 1;
    *param_1 = 0x80000025;
    param_1[1] = uStack_c4;
    param_1[2] = uStack_c0;
    param_1[3] = uStack_bc;
    param_1[4] = local_b8;
    param_1[5] = uStack_b4;
    param_1[6] = uStack_b0;
    param_1[7] = uStack_ac;
    return;
  }
  *param_1 = 0x80000029;
  return;
}

