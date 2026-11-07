// FUN_00f3ccec @ 00f3ccec size=316 calls_out=9 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage

uint FUN_00f3ccec(int param_1,undefined4 param_2)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  uint uStack_34;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar5 = FUN_019ec558(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x34)) {
  case 0:
    local_48 = *(undefined4 *)(param_1 + 0x18);
    uStack_44 = *(undefined4 *)(param_1 + 0x1c);
    local_40 = *(undefined4 *)(param_1 + 0x20);
    uStack_3c = *(undefined4 *)(param_1 + 0x24);
    uStack_38 = *(undefined4 *)(param_1 + 0x28);
    uStack_34 = uStack_34 & 0xffffff;
    puVar2 = (undefined4 *)thunk_FUN_01be5118(0x20);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(4,0x20);
    }
    puVar4 = &DAT_01c209dc;
    *puVar2 = local_50;
    puVar2[1] = uStack_4c;
    puVar2[2] = local_48;
    puVar2[3] = uStack_44;
    puVar2[4] = local_40;
    puVar2[5] = uStack_3c;
    puVar2[6] = uStack_38;
    puVar2[7] = uStack_34;
    *(undefined4 **)(param_1 + 0x2c) = puVar2;
    *(undefined **)(param_1 + 0x30) = &DAT_01c209dc;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c19c5c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19c5c);
  case 3:
    puVar2 = *(undefined4 **)(param_1 + 0x2c);
    puVar4 = *(undefined **)(param_1 + 0x30);
  }
  uVar3 = (**(code **)(puVar4 + 0xc))(puVar2,param_2);
  if ((uVar3 & 1) == 0) {
    FUN_01139b38(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_1 + 0x30));
    uVar1 = 1;
  }
  else {
    uVar1 = 3;
    uVar3 = 1;
  }
  *(undefined1 *)(param_1 + 0x34) = uVar1;
  FUN_019ec558((int)uVar5,(int)((ulonglong)uVar5 >> 0x20));
  if (uVar3 == 0) {
    local_50 = 2;
    FUN_00f318b4(param_1,&local_50);
  }
  return uVar3;
}

