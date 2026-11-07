// FUN_01b51ed8 @ 01b51ed8 size=1044 calls_out=19 calls_in=2
// strings: rand_state_initialize | /aws-lc/crypto/fipsmodule/rand/rand.c | personalization_string_len == 0 || personalization_string_len == CTR_DRBG_ENTROPY_LEN

undefined8 FUN_01b51ed8(undefined4 param_1,int param_2,uint param_3,int param_4,int param_5)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  uint uVar10;
  code *pcVar11;
  undefined4 uVar12;
  int local_124;
  int local_11c;
  int local_118;
  int local_114;
  byte local_10c [32];
  undefined1 auStack_ec [48];
  undefined1 auStack_bc [48];
  undefined1 auStack_8c [48];
  undefined1 auStack_5c [48];
  int local_2c;
  
  local_2c = DAT_01d53560;
  if (param_3 == 0) goto LAB_01b522a8;
  iVar3 = FUN_01b70844();
  if (iVar3 == 0) {
    iVar3 = FUN_01b6b0a8(0x160);
    if ((iVar3 == 0) || (iVar4 = FUN_01b708d8(param_1,iVar3,FUN_01b2291c), iVar4 != 1))
    goto LAB_01b51f68;
    iVar4 = FUN_01b51e40();
    *(int *)(iVar3 + 0x130) = iVar4;
    if (iVar4 == 0) goto LAB_01b51f68;
    FUN_01b1ff4c(iVar4,auStack_ec,auStack_bc,&local_11c);
    if (local_11c != 0x30 && local_11c != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_01be3310("personalization_string_len == 0 || personalization_string_len == CTR_DRBG_ENTROPY_LEN"
                   ,"/aws-lc/crypto/fipsmodule/rand/rand.c",0x14e,"rand_state_initialize");
    }
    iVar4 = FUN_01b512a0(iVar3,auStack_ec,auStack_bc);
    if (iVar4 == 0) goto LAB_01b51f68;
    *(undefined4 *)(iVar3 + 0x120) = 0;
    *(undefined4 *)(iVar3 + 0x124) = 0;
    *(undefined4 *)(iVar3 + 0x118) = 0;
    *(undefined4 *)(iVar3 + 0x11c) = 0;
    local_118 = 0;
    local_114 = 0;
    iVar5 = FUN_01b70eec(&local_118);
    iVar6 = 0;
    iVar4 = 0;
    if (iVar5 == 1) {
      iVar6 = local_114;
      iVar4 = local_118;
    }
    *(int *)(iVar3 + 300) = iVar6;
    *(int *)(iVar3 + 0x128) = iVar4;
    FUN_01b7067c(iVar3 + 0x13c);
    FUN_01b6b174(auStack_ec,0x30);
    FUN_01b6b174(auStack_bc,0x30);
    *(undefined4 *)(iVar3 + 0x138) = 0;
    FUN_01b7079c(&DAT_01d51c30);
    *(int *)(iVar3 + 0x134) = DAT_01d51c50;
    if (DAT_01d51c50 != 0) {
      *(int *)(DAT_01d51c50 + 0x138) = iVar3;
    }
    DAT_01d51c50 = iVar3;
    FUN_01b707fc(&DAT_01d51c30);
    bVar2 = 1;
  }
  else {
    bVar2 = 0;
  }
  if (param_2 == 0) goto LAB_01b51f68;
  local_118 = 0;
  local_114 = 0;
  iVar4 = FUN_01b70eec(&local_118);
  if (iVar4 == 1) {
    if (*(int *)(iVar3 + 300) != local_114 || *(int *)(iVar3 + 0x128) != local_118) {
      *(int *)(iVar3 + 0x128) = local_118;
      *(int *)(iVar3 + 300) = local_114;
      goto LAB_01b520cc;
    }
    bVar1 = false;
  }
  else {
LAB_01b520cc:
    bVar1 = (bool)(bVar2 ^ 1);
  }
  FUN_01bed93e(local_10c,0,0x20);
  iVar4 = *(int *)(iVar3 + 0x130);
  if (iVar4 != 0) {
    pcVar11 = *(code **)(*(int *)(iVar4 + 4) + 0x14);
    uVar12 = 0;
    if (pcVar11 != (code *)0x0) {
      iVar4 = (*pcVar11)(iVar4,local_10c);
      if (iVar4 != 1) goto LAB_01b51f68;
      uVar12 = 0x20;
    }
    if (param_5 == 1) {
      pbVar8 = (byte *)(param_4 + -1);
      pbVar7 = local_10c;
      do {
        pbVar8 = pbVar8 + 1;
        *pbVar7 = *pbVar7 ^ *pbVar8;
        pbVar7 = pbVar7 + 1;
      } while ((byte *)(param_4 + 0x1f) != pbVar8);
      uVar12 = 0x20;
    }
    iVar4 = iVar3 + 0x13c;
    FUN_01b706b4(iVar4);
    local_124 = param_2;
    if (bVar1) goto LAB_01b52178;
    while( true ) {
      if ((uint)(*(uint *)(iVar3 + 0x118) + 1 < 0x1001) <=
          -(*(int *)(iVar3 + 0x11c) + (uint)(0xfffffffe < *(uint *)(iVar3 + 0x118)))) {
LAB_01b52178:
        FUN_01b70714(iVar4);
        FUN_01b1ff4c(*(undefined4 *)(iVar3 + 0x130),auStack_8c,auStack_5c,&local_118);
        FUN_01b706b4(iVar4);
        iVar6 = FUN_01b51558(iVar3,auStack_8c,auStack_5c,local_118);
        if (iVar6 != 1) goto LAB_01b51f68;
        uVar9 = *(uint *)(iVar3 + 0x120);
        *(uint *)(iVar3 + 0x120) = uVar9 + 1;
        *(uint *)(iVar3 + 0x124) = *(int *)(iVar3 + 0x124) + (uint)(0xfffffffe < uVar9);
        *(undefined4 *)(iVar3 + 0x118) = 0;
        *(undefined4 *)(iVar3 + 0x11c) = 0;
        FUN_01b6b174(auStack_8c,0x30);
        FUN_01b6b174(auStack_5c,0x30);
      }
      uVar9 = param_3;
      if (0xffff < param_3) {
        uVar9 = 0x10000;
      }
      iVar6 = FUN_01b51818(iVar3,local_124,uVar9,local_10c,uVar12);
      if (iVar6 == 0) goto LAB_01b51f68;
      uVar10 = *(uint *)(iVar3 + 0x118);
      *(uint *)(iVar3 + 0x118) = uVar10 + 1;
      param_3 = param_3 - uVar9;
      *(uint *)(iVar3 + 0x11c) = *(int *)(iVar3 + 0x11c) + (uint)(0xfffffffe < uVar10);
      if (param_3 == 0) break;
      uVar12 = 0;
      local_124 = local_124 + uVar9;
    }
    FUN_01b6b174(local_10c,0x20);
    local_118 = 0;
    local_114 = 0;
    iVar6 = FUN_01b70eec(&local_118);
    if ((iVar6 != 1) || (*(int *)(iVar3 + 300) == local_114 && *(int *)(iVar3 + 0x128) == local_118)
       ) {
      FUN_01b70714(iVar4);
LAB_01b522a8:
      if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4();
      }
      return 0;
    }
  }
LAB_01b51f68:
                    /* WARNING: Subroutine does not return */
  FUN_01be32a0();
}

