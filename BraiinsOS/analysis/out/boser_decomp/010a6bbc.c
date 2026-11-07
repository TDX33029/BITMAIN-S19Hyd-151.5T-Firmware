// FUN_010a6bbc @ 010a6bbc size=824 calls_out=10 calls_in=0
// strings: max requests in-flight; poll_ready must be called first

undefined8 FUN_010a6bbc(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  short *psVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  undefined1 auStack_2e8 [136];
  undefined1 auStack_260 [32];
  undefined1 auStack_240 [32];
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined4 local_218;
  undefined4 uStack_214;
  undefined4 local_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 local_178;
  undefined4 local_174;
  undefined4 local_170;
  undefined4 local_16c;
  undefined1 auStack_168 [80];
  int local_118;
  undefined4 local_114;
  undefined1 auStack_110 [88];
  int local_b8;
  int iStack_b4;
  int iStack_b0;
  int iStack_ac;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  sVar1 = *(short *)(param_1 + 0x68);
  if (sVar1 != 2) {
    FUN_01bed4e2(auStack_260,param_1 + 0x6a,0x1e);
  }
  sVar2 = *(short *)(param_1 + 0x88);
  if (sVar2 != 2) {
    FUN_01bed4e2(auStack_240,param_1 + 0x8a,0x1e);
  }
  puVar5 = *(undefined4 **)(param_2 + 0x80);
  if (puVar5 == (undefined4 *)0x0) {
    puVar5 = (undefined4 *)FUN_014333b0();
    *puVar5 = &DAT_0056d238;
    puVar5[1] = 0;
    puVar5[2] = 0;
    puVar5[3] = 0;
    FUN_0178e884(0);
    *(undefined4 **)(param_2 + 0x80) = puVar5;
  }
  psVar3 = (short *)thunk_FUN_01be5118(0x40);
  if (psVar3 == (short *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x40);
  }
  *psVar3 = sVar1;
  FUN_01bed4e2(psVar3 + 1,auStack_260,0x1e);
  psVar3[0x10] = sVar2;
  FUN_01bed4e2(psVar3 + 0x11,auStack_240,0x1e);
  uVar8 = FUN_01415d14(puVar5,&DAT_0056a418,psVar3,&DAT_01c221b8);
  if ((int)uVar8 != 0) {
    uVar8 = (**(code **)((int)((ulonglong)uVar8 >> 0x20) + 0x1c))();
    iVar4 = (int)((ulonglong)uVar8 >> 0x20);
    uVar6 = (undefined4)uVar8;
    (**(code **)(iVar4 + 0xc))(&local_b8,uVar6);
    if ((local_b8 == -0x6de73b78 && iStack_b0 == 0x3bcb57ca) &&
        (iStack_b4 == 0x19454f09 && iStack_ac == -0x5b17388e)) {
      thunk_FUN_01be4678(uVar6);
    }
    else {
      FUN_00f80320(uVar6,iVar4);
    }
  }
  FUN_01bed4e2(auStack_2e8,param_2,0x88);
  iVar4 = *(int *)(param_1 + 0x60);
  uVar6 = *(undefined4 *)(param_2 + 0x88);
  uVar7 = *(undefined4 *)(param_2 + 0x8c);
  if (iVar4 == 0) {
    local_208 = 0;
    local_218 = 2;
  }
  else {
    FUN_01bed4e2(&local_b8,param_2,0x88);
    (**(code **)(*(int *)(param_1 + 100) + 0x14))
              (&local_200,iVar4 + (*(int *)(*(int *)(param_1 + 100) + 8) - 1U & 0xfffffff8) + 8,
               &local_b8);
    FUN_01bed4e2(auStack_2e8,&local_b8,0x88);
    local_220 = local_200;
    uStack_21c = uStack_1fc;
    local_218 = uStack_1f8;
    uStack_214 = uStack_1f4;
    local_210 = local_1f0;
    uStack_20c = uStack_1ec;
    local_208 = uStack_1e8;
    uStack_204 = uStack_1e4;
  }
  FUN_01bed4e2(&local_200,auStack_2e8,0x88);
  local_178 = uVar6;
  local_174 = uVar7;
  if (*(int *)(param_1 + 8) == 0x3b9aca01) {
    FUN_01070dec(auStack_168,param_1 + 0x10,&local_200);
    local_16c = 0;
    local_170 = 3;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x58);
    uVar6 = *(undefined4 *)(param_1 + 0x5c);
    *(undefined4 *)(param_1 + 0x58) = 0;
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("max requests in-flight; poll_ready must be called first",0x37,&DAT_01c20da4);
    }
    FUN_01bed4e2(&local_b8,&local_200,0x90);
    FUN_01070dec(auStack_110,param_1,&local_b8);
    FUN_01bed4e2(&local_170,auStack_110,0x58);
    local_118 = iVar4;
    local_114 = uVar6;
  }
  FUN_01bed4e2(&local_b8,&local_170,0x60);
  local_58 = local_220;
  uStack_54 = uStack_21c;
  uStack_50 = local_218;
  uStack_4c = uStack_214;
  local_48 = local_210;
  uStack_44 = uStack_20c;
  uStack_40 = local_208;
  uStack_3c = uStack_204;
  FUN_01bed4e2(&local_200,&local_b8,0x80);
  iVar4 = thunk_FUN_01be5118(0x80);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  FUN_01bed4e2(iVar4,&local_b8,0x80);
  return CONCAT44(&UNK_01c1e1e8,iVar4);
}

