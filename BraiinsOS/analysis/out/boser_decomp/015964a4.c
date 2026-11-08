// FUN_015964a4 @ 015964a4 size=212 calls_out=4 calls_in=5
// strings: 

int FUN_015964a4(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  uint local_f8;
  undefined1 *local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 local_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 local_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined1 *puStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  uint local_50;
  undefined8 local_38;
  undefined8 local_30;
  
  local_f8 = local_f8 & 0xffffff00;
  puVar2 = (undefined4 *)((uint)&local_e0 | 4);
  uVar3 = param_1[1];
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar6 = param_1[4];
  *puVar2 = *param_1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  puVar2[4] = uVar6;
  local_e0 = &DAT_80000018;
  uVar7 = FUN_015321a0();
  uVar8 = FUN_015321a0();
  local_a4 = FUN_015321a0();
  local_50 = local_f8;
  puStack_88 = local_e0;
  uStack_84 = uStack_dc;
  uStack_80 = uStack_d8;
  uStack_7c = uStack_d4;
  local_78 = local_d0;
  uStack_74 = uStack_cc;
  uStack_70 = uStack_c8;
  uStack_6c = uStack_c4;
  uStack_68 = uStack_c0;
  local_64 = local_bc;
  uStack_60 = uStack_b8;
  uStack_5c = uStack_b4;
  uStack_58 = uStack_b0;
  uStack_54 = uStack_ac;
  local_a8 = 1;
  local_38 = uVar7;
  local_30 = uVar8;
  iVar1 = thunk_FUN_01be5118(0x80);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(iVar1,&local_a8,0x80);
  return iVar1;
}

